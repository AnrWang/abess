"""
Regularized Adaptive Best Subset Selection
================================================
"""
#%%
# In some cases, especially under low signal-to-noise ratio (SNR) setting or predictors are highly correlated, the vallina type of :math:`L_0` constrained model may not be satisfying and a more sophisticated trade-off between bias and variance is needed. Under this concern, the `abess` pakcage provides option of best subset selection with :math:`L_2` norm regularization called the regularized bess. The model has this following form:
# 
# .. math::
#     \arg\min_\beta L(\beta) + \alpha \|\beta\|_2^2.
# 
# To implement the regularized bess, user need to specify a value to an additive argument `alpha` in the `LinearRegression()` function (or other methods). This value corresponds to the penalization parameter in the model above. 
# 
# Let’s test the regularized best subset selection against the no-regularized one over 100 replicas in terms of prediction performance. With argument `snr` in `make_glm_data()`, we can add white noise into generated data.
import numpy as np
from abess.datasets import make_glm_data
from abess.linear import LinearRegression

np.random.seed(0)

loss = np.zeros((2, 100))
coef = np.repeat([1, 0], [5, 25])
for i in range(100):
    np.random.seed(i)
    train = make_glm_data(n = 100, p = 30, k = 5, family = 'gaussian', coef_ = coef, snr = 0.05)
    np.random.seed(i + 100)
    test = make_glm_data(n = 100, p = 30, k = 5, family = 'gaussian', coef_ = coef, snr = 0.05)
    
    # normal
    model = LinearRegression()
    model.fit(train.x, train.y)
    loss[0, i] = np.linalg.norm(model.predict(test.x) - test.y)
    # regularized
    model = LinearRegression(alpha = 0.7)
    model.fit(train.x, train.y)
    loss[1, i] = np.linalg.norm(model.predict(test.x) - test.y)

print("normal model's loss:", np.mean(loss[0,:]))
print("regularized model's loss:", np.mean(loss[1,:]))

#%%
# The regularized model has a lower test loss. And we can also make a boxplot:


import matplotlib.pyplot as plt
plt.boxplot([loss[0,:], loss[1,:]], labels = ['ABESS', 'RABESS'])
plt.show()

#%%
# We see that the regularized best subset select ("RABESS" in figure)  indeed reduces the prediction error.
#
# R tutorial
# -----------------------
# For R tutorial, please view [https://abess-team.github.io/abess/articles/v07-advancedFeatures.html](https://abess-team.github.io/abess/articles/v07-advancedFeatures.html).
