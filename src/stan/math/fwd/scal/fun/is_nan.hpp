#ifndef STAN_MATH_FWD_SCAL_FUN_IS_NAN_HPP
#define STAN_MATH_FWD_SCAL_FUN_IS_NAN_HPP

#include <stan/math/fwd/core.hpp>
#include <stan/math/prim/scal/fun/is_nan.hpp>

namespace stan {

  namespace agrad {

    /**
     * Returns 1 if the input's value is NaN and 0 otherwise.
     *
     * Delegates to <code>stan::math::is_nan</code>.
     *
     * @param x Value to test.
     * @return <code>1</code> if the value is NaN and <code>0</code> otherwise.
     */
    template <typename T>
    inline
    int
    is_nan(const fvar<T>& x) {
      using stan::math::is_nan;
      return is_nan(x.val());
    }

  }
}

#endif
