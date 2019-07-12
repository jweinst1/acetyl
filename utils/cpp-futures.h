#ifndef UTILS_CPP_FUTURES_H
#define UTILS_CPP_FUTURES_H

/**
 * @brief Allows for move mechanism for optimization. 
 */
#  ifdef WITH_CXX_RVALUE_REFS
#    define MOVE(obj) std::move(obj)
#  else /* !WITH_CXX_RVALUE_REFS */
#    define MOVE(obj) (obj)
#  endif /* WITH_CXX_RVALUE_REFS */

#endif
