#ifndef STAN_MATH_PRIM_SCAL_FUN_INC_BETA_HPP
#define STAN_MATH_PRIM_SCAL_FUN_INC_BETA_HPP

#include <boost/math/special_functions/beta.hpp>

namespace stan {

  namespace math {

    inline double inc_beta(const double& a,
                           const double& b,
                           const double& x) {
      using boost::math::ibeta;
      return ibeta(a, b, x);
    }
  }
}
#endif
