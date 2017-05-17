// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_autothresholdr_RCPPEXPORTS_H_GEN_
#define RCPP_autothresholdr_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace autothresholdr {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("autothresholdr", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("autothresholdr", "autothresholdr_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in autothresholdr");
            }
        }
    }

    inline NumericMatrix mean_pillars(NumericVector arr3d) {
        typedef SEXP(*Ptr_mean_pillars)(SEXP);
        static Ptr_mean_pillars p_mean_pillars = NULL;
        if (p_mean_pillars == NULL) {
            validateSignature("NumericMatrix(*mean_pillars)(NumericVector)");
            p_mean_pillars = (Ptr_mean_pillars)R_GetCCallable("autothresholdr", "autothresholdr_mean_pillars");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_mean_pillars(Rcpp::wrap(arr3d));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

    inline NumericMatrix var_pillars(NumericVector arr3d) {
        typedef SEXP(*Ptr_var_pillars)(SEXP);
        static Ptr_var_pillars p_var_pillars = NULL;
        if (p_var_pillars == NULL) {
            validateSignature("NumericMatrix(*var_pillars)(NumericVector)");
            p_var_pillars = (Ptr_var_pillars)R_GetCCallable("autothresholdr", "autothresholdr_var_pillars");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_var_pillars(Rcpp::wrap(arr3d));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

    inline NumericMatrix median_pillars(NumericVector arr3d) {
        typedef SEXP(*Ptr_median_pillars)(SEXP);
        static Ptr_median_pillars p_median_pillars = NULL;
        if (p_median_pillars == NULL) {
            validateSignature("NumericMatrix(*median_pillars)(NumericVector)");
            p_median_pillars = (Ptr_median_pillars)R_GetCCallable("autothresholdr", "autothresholdr_median_pillars");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_median_pillars(Rcpp::wrap(arr3d));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

}

#endif // RCPP_autothresholdr_RCPPEXPORTS_H_GEN_
