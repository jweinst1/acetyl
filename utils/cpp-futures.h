#ifndef UTILS_CPP_FUTURES_H
#define UTILS_CPP_FUTURES_H

#ifndef __cplusplus
#  error "Do not include this file in non cpp sources."
#endif

/**
 * @brief Allows for move mechanism for optimization. 
 */
#  if __cplusplus >= 201103L
#    define MOVE(obj) std::move(obj)
#  else /* !__cplusplus >= 201103L */
#    define MOVE(obj) (obj)
#  endif /* __cplusplus >= 201103L */

#endif
