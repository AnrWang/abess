// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// abessCpp2
List abessCpp2(Eigen::MatrixXd x, Eigen::MatrixXd y, int n, int p, int data_type, Eigen::VectorXd weight, Eigen::MatrixXd sigma, bool is_normal, int algorithm_type, int model_type, int max_iter, int exchange_num, int path_type, bool is_warm_start, int ic_type, double ic_coef, bool is_cv, int Kfold, Eigen::VectorXi status, Eigen::VectorXi sequence, Eigen::VectorXd lambda_seq, int s_min, int s_max, int K_max, double epsilon, double lambda_min, double lambda_max, int nlambda, bool is_screening, int screening_size, int powell_path, Eigen::VectorXi g_index, Eigen::VectorXi always_select, double tau, int primary_model_fit_max_iter, double primary_model_fit_epsilon, bool early_stop, bool approximate_Newton, int thread, bool covariance_update, bool sparse_matrix, int splicing_type, int sub_search);
RcppExport SEXP _abess_abessCpp2(SEXP xSEXP, SEXP ySEXP, SEXP nSEXP, SEXP pSEXP, SEXP data_typeSEXP, SEXP weightSEXP, SEXP sigmaSEXP, SEXP is_normalSEXP, SEXP algorithm_typeSEXP, SEXP model_typeSEXP, SEXP max_iterSEXP, SEXP exchange_numSEXP, SEXP path_typeSEXP, SEXP is_warm_startSEXP, SEXP ic_typeSEXP, SEXP ic_coefSEXP, SEXP is_cvSEXP, SEXP KfoldSEXP, SEXP statusSEXP, SEXP sequenceSEXP, SEXP lambda_seqSEXP, SEXP s_minSEXP, SEXP s_maxSEXP, SEXP K_maxSEXP, SEXP epsilonSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP nlambdaSEXP, SEXP is_screeningSEXP, SEXP screening_sizeSEXP, SEXP powell_pathSEXP, SEXP g_indexSEXP, SEXP always_selectSEXP, SEXP tauSEXP, SEXP primary_model_fit_max_iterSEXP, SEXP primary_model_fit_epsilonSEXP, SEXP early_stopSEXP, SEXP approximate_NewtonSEXP, SEXP threadSEXP, SEXP covariance_updateSEXP, SEXP sparse_matrixSEXP, SEXP splicing_typeSEXP, SEXP sub_searchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type data_type(data_typeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type is_normal(is_normalSEXP);
    Rcpp::traits::input_parameter< int >::type algorithm_type(algorithm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type exchange_num(exchange_numSEXP);
    Rcpp::traits::input_parameter< int >::type path_type(path_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type is_warm_start(is_warm_startSEXP);
    Rcpp::traits::input_parameter< int >::type ic_type(ic_typeSEXP);
    Rcpp::traits::input_parameter< double >::type ic_coef(ic_coefSEXP);
    Rcpp::traits::input_parameter< bool >::type is_cv(is_cvSEXP);
    Rcpp::traits::input_parameter< int >::type Kfold(KfoldSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type status(statusSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda_seq(lambda_seqSEXP);
    Rcpp::traits::input_parameter< int >::type s_min(s_minSEXP);
    Rcpp::traits::input_parameter< int >::type s_max(s_maxSEXP);
    Rcpp::traits::input_parameter< int >::type K_max(K_maxSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type is_screening(is_screeningSEXP);
    Rcpp::traits::input_parameter< int >::type screening_size(screening_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type powell_path(powell_pathSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type g_index(g_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type always_select(always_selectSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type primary_model_fit_max_iter(primary_model_fit_max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type primary_model_fit_epsilon(primary_model_fit_epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type early_stop(early_stopSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate_Newton(approximate_NewtonSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< bool >::type covariance_update(covariance_updateSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse_matrix(sparse_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type splicing_type(splicing_typeSEXP);
    Rcpp::traits::input_parameter< int >::type sub_search(sub_searchSEXP);
    rcpp_result_gen = Rcpp::wrap(abessCpp2(x, y, n, p, data_type, weight, sigma, is_normal, algorithm_type, model_type, max_iter, exchange_num, path_type, is_warm_start, ic_type, ic_coef, is_cv, Kfold, status, sequence, lambda_seq, s_min, s_max, K_max, epsilon, lambda_min, lambda_max, nlambda, is_screening, screening_size, powell_path, g_index, always_select, tau, primary_model_fit_max_iter, primary_model_fit_epsilon, early_stop, approximate_Newton, thread, covariance_update, sparse_matrix, splicing_type, sub_search));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_abess_abessCpp2", (DL_FUNC) &_abess_abessCpp2, 43},
    {NULL, NULL, 0}
};

RcppExport void R_init_abess(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
