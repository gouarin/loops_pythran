#define BOOST_SIMD_NO_STRICT_ALIASING 1
#include <pythonic/core.hpp>
#include <pythonic/python/core.hpp>
#include <pythonic/types/bool.hpp>
#include <pythonic/types/int.hpp>
#ifdef _OPENMP
#include <omp.h>
#endif
#include <pythonic/include/types/numpy_texpr.hpp>
#include <pythonic/include/types/ndarray.hpp>
#include <pythonic/include/types/float64.hpp>
#include <pythonic/types/float64.hpp>
#include <pythonic/types/ndarray.hpp>
#include <pythonic/types/numpy_texpr.hpp>
#include <pythonic/include/__builtin__/None.hpp>
#include <pythonic/include/__builtin__/tuple.hpp>
#include <pythonic/__builtin__/None.hpp>
#include <pythonic/__builtin__/tuple.hpp>
namespace __pythran_gray_pythran
{
  ;
  ;
  ;
  ;
  struct laplacian
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
      typedef pythonic::types::contiguous_slice __type1;
      typedef decltype(std::declval<__type0>()(std::declval<__type1>(), std::declval<__type1>())) __type3;
      typedef decltype((std::declval<__type3>() + std::declval<__type3>())) __type7;
      typedef long __type8;
      typedef decltype((std::declval<__type8>() * std::declval<__type3>())) __type12;
      typedef decltype((std::declval<__type7>() - std::declval<__type12>())) __type13;
      typedef decltype((std::declval<__type13>() + std::declval<__type3>())) __type17;
      typedef decltype((+std::declval<__type3>())) __type21;
      typedef typename pythonic::returnable<decltype((std::declval<__type17>() + std::declval<__type21>()))>::type result_type;
    }
    ;
    template <typename argument_type0 >
    typename type<argument_type0>::result_type operator()(argument_type0 const & u) const
    ;
  }  ;
  struct grayscott_pythran
  {
    typedef void callable;
    typedef void pure;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    struct type
    {
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type1;
      typedef __type0 __ptype0;
      typedef __type1 __ptype1;
      typedef typename pythonic::returnable<pythonic::types::none_type>::type result_type;
    }
    ;
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
    typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type operator()(argument_type0 const & A, argument_type1 const & B, argument_type2 const & Da, argument_type3 const & Db, argument_type4 const & f, argument_type5 const & k) const
    ;
  }  ;
  template <typename argument_type0 >
  typename laplacian::type<argument_type0>::result_type laplacian::operator()(argument_type0 const & u) const
  {
    return ((((u(pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L),pythonic::types::contiguous_slice(1L,-1L)) + u(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L))) - (4L * u(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)))) + u(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None))) + (+u(pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None),pythonic::types::contiguous_slice(1L,-1L))));
  }
  template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 >
  typename grayscott_pythran::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5>::result_type grayscott_pythran::operator()(argument_type0 const & A, argument_type1 const & B, argument_type2 const & Da, argument_type3 const & Db, argument_type4 const & f, argument_type5 const & k) const
  {
    typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
    typedef pythonic::types::contiguous_slice __type1;
    typedef decltype(std::declval<__type0>()(std::declval<__type1>(), std::declval<__type1>())) __type3;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type4;
    typedef decltype(std::declval<__type4>()(std::declval<__type1>(), std::declval<__type1>())) __type7;
    typedef typename pythonic::assignable<decltype(pythonic::types::make_tuple(std::declval<__type3>(), std::declval<__type7>()))>::type __type8;
    typedef typename pythonic::assignable<typename std::tuple_element<0,typename std::remove_reference<__type8>::type>::type>::type __type9;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type10;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type>::type __type11;
    typedef decltype(std::declval<__type11>()(std::declval<__type1>(), std::declval<__type1>())) __type14;
    typedef decltype((std::declval<__type14>() + std::declval<__type14>())) __type18;
    typedef long __type19;
    typedef decltype((std::declval<__type19>() * std::declval<__type14>())) __type23;
    typedef decltype((std::declval<__type18>() - std::declval<__type23>())) __type24;
    typedef decltype((std::declval<__type24>() + std::declval<__type14>())) __type28;
    typedef decltype((+std::declval<__type14>())) __type32;
    typedef decltype((std::declval<__type28>() + std::declval<__type32>())) __type33;
    typedef decltype((std::declval<__type10>() * std::declval<__type33>())) __type34;
    typedef typename pythonic::assignable<typename std::tuple_element<1,typename std::remove_reference<__type8>::type>::type>::type __type35;
    typedef decltype((std::declval<__type9>() * std::declval<__type35>())) __type36;
    typedef typename pythonic::assignable<decltype((std::declval<__type36>() * std::declval<__type35>()))>::type __type37;
    typedef decltype((std::declval<__type34>() - std::declval<__type37>())) __type38;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type39;
    typedef decltype((std::declval<__type19>() - std::declval<__type9>())) __type41;
    typedef decltype((std::declval<__type39>() * std::declval<__type41>())) __type42;
    typedef decltype((std::declval<__type38>() + std::declval<__type42>())) __type43;
    typedef decltype((std::declval<__type9>() + std::declval<__type43>())) __type44;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type45;
    typedef typename pythonic::assignable<typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type>::type __type46;
    typedef decltype(std::declval<__type46>()(std::declval<__type1>(), std::declval<__type1>())) __type49;
    typedef decltype((std::declval<__type49>() + std::declval<__type49>())) __type53;
    typedef decltype((std::declval<__type19>() * std::declval<__type49>())) __type58;
    typedef decltype((std::declval<__type53>() - std::declval<__type58>())) __type59;
    typedef decltype((std::declval<__type59>() + std::declval<__type49>())) __type63;
    typedef decltype((+std::declval<__type49>())) __type67;
    typedef decltype((std::declval<__type63>() + std::declval<__type67>())) __type68;
    typedef decltype((std::declval<__type45>() * std::declval<__type68>())) __type69;
    typedef decltype((std::declval<__type69>() + std::declval<__type37>())) __type70;
    typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type71;
    typedef decltype((std::declval<__type39>() + std::declval<__type71>())) __type72;
    typedef decltype((std::declval<__type72>() * std::declval<__type35>())) __type73;
    typedef decltype((std::declval<__type70>() - std::declval<__type73>())) __type74;
    typedef decltype((std::declval<__type35>() + std::declval<__type74>())) __type75;
    typename pythonic::assignable<decltype(pythonic::types::make_tuple(A(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)), B(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L))))>::type __tuple0 = pythonic::types::make_tuple(A(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)), B(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)));
    typename pythonic::assignable<typename __combined<__type9,__type43,__type44>::type>::type a = std::get<0>(__tuple0);
    typename pythonic::assignable<typename __combined<__type35,__type74,__type75>::type>::type b = std::get<1>(__tuple0);
    typename pythonic::assignable<decltype(A)>::type __pythran_inlinelaplacianu0 = A;
    ;
    typename pythonic::assignable<decltype(B)>::type __pythran_inlinelaplacianu1 = B;
    ;
    typename pythonic::assignable<decltype(((a * b) * b))>::type abb = ((a * b) * b);
    a += (((Da * ((((__pythran_inlinelaplacianu0(pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L),pythonic::types::contiguous_slice(1L,-1L)) + __pythran_inlinelaplacianu0(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L))) - (4L * __pythran_inlinelaplacianu0(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)))) + __pythran_inlinelaplacianu0(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None))) + (+__pythran_inlinelaplacianu0(pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None),pythonic::types::contiguous_slice(1L,-1L))))) - abb) + (f * (1L - a)));
    b += (((Db * ((((__pythran_inlinelaplacianu1(pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L),pythonic::types::contiguous_slice(1L,-1L)) + __pythran_inlinelaplacianu1(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(pythonic::__builtin__::None,-2L))) - (4L * __pythran_inlinelaplacianu1(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(1L,-1L)))) + __pythran_inlinelaplacianu1(pythonic::types::contiguous_slice(1L,-1L),pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None))) + (+__pythran_inlinelaplacianu1(pythonic::types::contiguous_slice(2L,pythonic::__builtin__::None),pythonic::types::contiguous_slice(1L,-1L))))) + abb) - ((f + k) * b));
    return pythonic::__builtin__::None;
  }
}
typename __pythran_gray_pythran::grayscott_pythran::type<pythonic::types::ndarray<double,2>, pythonic::types::ndarray<double,2>, double, double, double, double>::result_type grayscott_pythran0(pythonic::types::ndarray<double,2> a0, pythonic::types::ndarray<double,2> a1, double a2, double a3, double a4, double a5)
{
  return __pythran_gray_pythran::grayscott_pythran()(a0, a1, a2, a3, a4, a5);
}
typename __pythran_gray_pythran::grayscott_pythran::type<pythonic::types::ndarray<double,2>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>, double, double, double, double>::result_type grayscott_pythran1(pythonic::types::ndarray<double,2> a0, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>> a1, double a2, double a3, double a4, double a5)
{
  return __pythran_gray_pythran::grayscott_pythran()(a0, a1, a2, a3, a4, a5);
}
typename __pythran_gray_pythran::grayscott_pythran::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>, pythonic::types::ndarray<double,2>, double, double, double, double>::result_type grayscott_pythran2(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>> a0, pythonic::types::ndarray<double,2> a1, double a2, double a3, double a4, double a5)
{
  return __pythran_gray_pythran::grayscott_pythran()(a0, a1, a2, a3, a4, a5);
}
typename __pythran_gray_pythran::grayscott_pythran::type<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>, double, double, double, double>::result_type grayscott_pythran3(pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>> a0, pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>> a1, double a2, double a3, double a4, double a5)
{
  return __pythran_gray_pythran::grayscott_pythran()(a0, a1, a2, a3, a4, a5);
}

                static PyObject *
                __pythran_wrap_grayscott_pythran0(PyObject *self, PyObject *args)
                {
                    PyObject* args_obj[6+1];
                    if(! PyArg_ParseTuple(args, "OOOOOO", &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5]))
                        return nullptr;
                    if(is_convertible<pythonic::types::ndarray<double,2>>(args_obj[0]) and is_convertible<pythonic::types::ndarray<double,2>>(args_obj[1]) and is_convertible<double>(args_obj[2]) and is_convertible<double>(args_obj[3]) and is_convertible<double>(args_obj[4]) and is_convertible<double>(args_obj[5]))
                        return to_python(grayscott_pythran0(from_python<pythonic::types::ndarray<double,2>>(args_obj[0]), from_python<pythonic::types::ndarray<double,2>>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5])));
                    else {
                        return nullptr;
                    }
                }

                static PyObject *
                __pythran_wrap_grayscott_pythran1(PyObject *self, PyObject *args)
                {
                    PyObject* args_obj[6+1];
                    if(! PyArg_ParseTuple(args, "OOOOOO", &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5]))
                        return nullptr;
                    if(is_convertible<pythonic::types::ndarray<double,2>>(args_obj[0]) and is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[1]) and is_convertible<double>(args_obj[2]) and is_convertible<double>(args_obj[3]) and is_convertible<double>(args_obj[4]) and is_convertible<double>(args_obj[5]))
                        return to_python(grayscott_pythran1(from_python<pythonic::types::ndarray<double,2>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5])));
                    else {
                        return nullptr;
                    }
                }

                static PyObject *
                __pythran_wrap_grayscott_pythran2(PyObject *self, PyObject *args)
                {
                    PyObject* args_obj[6+1];
                    if(! PyArg_ParseTuple(args, "OOOOOO", &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5]))
                        return nullptr;
                    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[0]) and is_convertible<pythonic::types::ndarray<double,2>>(args_obj[1]) and is_convertible<double>(args_obj[2]) and is_convertible<double>(args_obj[3]) and is_convertible<double>(args_obj[4]) and is_convertible<double>(args_obj[5]))
                        return to_python(grayscott_pythran2(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[0]), from_python<pythonic::types::ndarray<double,2>>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5])));
                    else {
                        return nullptr;
                    }
                }

                static PyObject *
                __pythran_wrap_grayscott_pythran3(PyObject *self, PyObject *args)
                {
                    PyObject* args_obj[6+1];
                    if(! PyArg_ParseTuple(args, "OOOOOO", &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5]))
                        return nullptr;
                    if(is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[0]) and is_convertible<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[1]) and is_convertible<double>(args_obj[2]) and is_convertible<double>(args_obj[3]) and is_convertible<double>(args_obj[4]) and is_convertible<double>(args_obj[5]))
                        return to_python(grayscott_pythran3(from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[0]), from_python<pythonic::types::numpy_texpr<pythonic::types::ndarray<double,2>>>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5])));
                    else {
                        return nullptr;
                    }
                }

            static PyObject *
            __pythran_wrapall_grayscott_pythran(PyObject *self, PyObject *args)
            {
                try {
                
                    if(PyObject* obj = __pythran_wrap_grayscott_pythran0(self, args))
                        return obj;
                    

                    if(PyObject* obj = __pythran_wrap_grayscott_pythran1(self, args))
                        return obj;
                    

                    if(PyObject* obj = __pythran_wrap_grayscott_pythran2(self, args))
                        return obj;
                    

                    if(PyObject* obj = __pythran_wrap_grayscott_pythran3(self, args))
                        return obj;
                    
                PyErr_SetString(PyExc_TypeError,
                  "Invalid argument type for pythranized function `grayscott_pythran'.\n"
                  "Candidates are:\n   grayscott_pythran(ndarray<double,2>,ndarray<double,2>,double,double,double,double)\n   grayscott_pythran(ndarray<double,2>,numpy_texpr<ndarray<double,2>>,double,double,double,double)\n   grayscott_pythran(numpy_texpr<ndarray<double,2>>,ndarray<double,2>,double,double,double,double)\n   grayscott_pythran(numpy_texpr<ndarray<double,2>>,numpy_texpr<ndarray<double,2>>,double,double,double,double)\n"
                );
                return nullptr;
                }
                
            #ifdef PYTHONIC_BUILTIN_BASEEXCEPTION_HPP
                catch(pythonic::types::BaseException & e) {
                    PyErr_SetString(PyExc_BaseException,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_KEYBOARDINTERRUPT_HPP
                catch(pythonic::types::KeyboardInterrupt & e) {
                    PyErr_SetString(PyExc_KeyboardInterrupt,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_SYSTEMEXIT_HPP
                catch(pythonic::types::SystemExit & e) {
                    PyErr_SetString(PyExc_SystemExit,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_EXCEPTION_HPP
                catch(pythonic::types::Exception & e) {
                    PyErr_SetString(PyExc_Exception,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_STANDARDERROR_HPP
                catch(pythonic::types::StandardError & e) {
                    PyErr_SetString(PyExc_StandardError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_ATTRIBUTEERROR_HPP
                catch(pythonic::types::AttributeError & e) {
                    PyErr_SetString(PyExc_AttributeError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_IMPORTERROR_HPP
                catch(pythonic::types::ImportError & e) {
                    PyErr_SetString(PyExc_ImportError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_LOOKUPERROR_HPP
                catch(pythonic::types::LookupError & e) {
                    PyErr_SetString(PyExc_LookupError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_INDEXERROR_HPP
                catch(pythonic::types::IndexError & e) {
                    PyErr_SetString(PyExc_IndexError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_KEYERROR_HPP
                catch(pythonic::types::KeyError & e) {
                    PyErr_SetString(PyExc_KeyError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_MEMORYERROR_HPP
                catch(pythonic::types::MemoryError & e) {
                    PyErr_SetString(PyExc_MemoryError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_RUNTIMEERROR_HPP
                catch(pythonic::types::RuntimeError & e) {
                    PyErr_SetString(PyExc_RuntimeError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_BUFFERERROR_HPP
                catch(pythonic::types::BufferError & e) {
                    PyErr_SetString(PyExc_BufferError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_TYPEERROR_HPP
                catch(pythonic::types::TypeError & e) {
                    PyErr_SetString(PyExc_TypeError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_SYNTAXERROR_HPP
                catch(pythonic::types::SyntaxError & e) {
                    PyErr_SetString(PyExc_SyntaxError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_EOFERROR_HPP
                catch(pythonic::types::EOFError & e) {
                    PyErr_SetString(PyExc_EOFError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_REFERENCEERROR_HPP
                catch(pythonic::types::ReferenceError & e) {
                    PyErr_SetString(PyExc_ReferenceError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_ARITHMETICERROR_HPP
                catch(pythonic::types::ArithmeticError & e) {
                    PyErr_SetString(PyExc_ArithmeticError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_FLOATINGPOINTERROR_HPP
                catch(pythonic::types::FloatingPointError & e) {
                    PyErr_SetString(PyExc_FloatingPointError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_OVERFLOWERROR_HPP
                catch(pythonic::types::OverflowError & e) {
                    PyErr_SetString(PyExc_OverflowError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_NAMEERROR_HPP
                catch(pythonic::types::NameError & e) {
                    PyErr_SetString(PyExc_NameError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_UNBOUNDLOCALERROR_HPP
                catch(pythonic::types::UnboundLocalError & e) {
                    PyErr_SetString(PyExc_UnboundLocalError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_GENERATOREXIT_HPP
                catch(pythonic::types::GeneratorExit & e) {
                    PyErr_SetString(PyExc_GeneratorExit,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_SYSTEMERROR_HPP
                catch(pythonic::types::SystemError & e) {
                    PyErr_SetString(PyExc_SystemError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_ASSERTIONERROR_HPP
                catch(pythonic::types::AssertionError & e) {
                    PyErr_SetString(PyExc_AssertionError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_VALUEERROR_HPP
                catch(pythonic::types::ValueError & e) {
                    PyErr_SetString(PyExc_ValueError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_UNICODEERROR_HPP
                catch(pythonic::types::UnicodeError & e) {
                    PyErr_SetString(PyExc_UnicodeError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_INDENTATIONERROR_HPP
                catch(pythonic::types::IndentationError & e) {
                    PyErr_SetString(PyExc_IndentationError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_TABERROR_HPP
                catch(pythonic::types::TabError & e) {
                    PyErr_SetString(PyExc_TabError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_NOTIMPLEMENTEDERROR_HPP
                catch(pythonic::types::NotImplementedError & e) {
                    PyErr_SetString(PyExc_NotImplementedError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_ENVIRONMENTERROR_HPP
                catch(pythonic::types::EnvironmentError & e) {
                    PyErr_SetString(PyExc_EnvironmentError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_IOERROR_HPP
                catch(pythonic::types::IOError & e) {
                    PyErr_SetString(PyExc_IOError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_OSERROR_HPP
                catch(pythonic::types::OSError & e) {
                    PyErr_SetString(PyExc_OSError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_STOPITERATION_HPP
                catch(pythonic::types::StopIteration & e) {
                    PyErr_SetString(PyExc_StopIteration,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_WARNING_HPP
                catch(pythonic::types::Warning & e) {
                    PyErr_SetString(PyExc_Warning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_RUNTIMEWARNING_HPP
                catch(pythonic::types::RuntimeWarning & e) {
                    PyErr_SetString(PyExc_RuntimeWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_SYNTAXWARNING_HPP
                catch(pythonic::types::SyntaxWarning & e) {
                    PyErr_SetString(PyExc_SyntaxWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_BYTESWARNING_HPP
                catch(pythonic::types::BytesWarning & e) {
                    PyErr_SetString(PyExc_BytesWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_PENDINGDEPRECATIONWARNING_HPP
                catch(pythonic::types::PendingDeprecationWarning & e) {
                    PyErr_SetString(PyExc_PendingDeprecationWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_UNICODEWARNING_HPP
                catch(pythonic::types::UnicodeWarning & e) {
                    PyErr_SetString(PyExc_UnicodeWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_DEPRECATIONWARNING_HPP
                catch(pythonic::types::DeprecationWarning & e) {
                    PyErr_SetString(PyExc_DeprecationWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_IMPORTWARNING_HPP
                catch(pythonic::types::ImportWarning & e) {
                    PyErr_SetString(PyExc_ImportWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_USERWARNING_HPP
                catch(pythonic::types::UserWarning & e) {
                    PyErr_SetString(PyExc_UserWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_FUTUREWARNING_HPP
                catch(pythonic::types::FutureWarning & e) {
                    PyErr_SetString(PyExc_FutureWarning,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            #ifdef PYTHONIC_BUILTIN_ZERODIVISIONERROR_HPP
                catch(pythonic::types::ZeroDivisionError & e) {
                    PyErr_SetString(PyExc_ZeroDivisionError,
                        pythonic::__builtin__::functor::str{}(e.args).c_str());
                }
            #endif
                

            catch(...) {
                PyErr_SetString(PyExc_RuntimeError,
                    "Something happened on the way to heaven"
                );
            }
                return nullptr;
            }

            static PyMethodDef Methods[] = {
                {
                "grayscott_pythran",
                __pythran_wrapall_grayscott_pythran,
                METH_VARARGS,
                "Supported prototypes:\n    - grayscott_pythran(float64[][], float64[][], float64, float64, float64, float64)\n    - grayscott_pythran(float64[][], float64[][].T, float64, float64, float64, float64)\n    - grayscott_pythran(float64[][].T, float64[][], float64, float64, float64, float64)\n    - grayscott_pythran(float64[][].T, float64[][].T, float64, float64, float64, float64)\n"},
                {NULL, NULL, 0, NULL}
            };

            #if PY_MAJOR_VERSION >= 3
              static struct PyModuleDef moduledef = {
                PyModuleDef_HEAD_INIT,
                "gray_pythran",            /* m_name */
                "",         /* m_doc */
                -1,                  /* m_size */
                Methods,             /* m_methods */
                NULL,                /* m_reload */
                NULL,                /* m_traverse */
                NULL,                /* m_clear */
                NULL,                /* m_free */
              };
            #define PYTHRAN_RETURN return theModule
            #define PYTHRAN_MODULE_INIT(s) PyInit_##s
            #else
            #define PYTHRAN_RETURN return
            #define PYTHRAN_MODULE_INIT(s) init##s
            #endif
            PyMODINIT_FUNC
            PYTHRAN_MODULE_INIT(gray_pythran)(void)
            __attribute__ ((visibility("default")))
            __attribute__ ((externally_visible));
            PyMODINIT_FUNC
            PYTHRAN_MODULE_INIT(gray_pythran)(void) {
                #ifdef PYTHONIC_TYPES_NDARRAY_HPP
                    import_array()
                #endif
                #if PY_MAJOR_VERSION >= 3
                PyObject* theModule = PyModule_Create(&moduledef);
                #else
                PyObject* theModule = Py_InitModule3("gray_pythran",
                                                     Methods,
                                                     ""
                );
                #endif
                if(not theModule)
                    PYTHRAN_RETURN;
                PyObject * theDoc = Py_BuildValue("(sss)",
                                                  "0.7.6post1",
                                                  "2016-09-04 08:29:15.779956",
                                                  "f99f74db60c7befb7913c431dc75fcb4b7791a8c6529da48c45dd017847fe1ef");
                if(not theDoc)
                    PYTHRAN_RETURN;
                PyModule_AddObject(theModule,
                                   "__pythran__",
                                   theDoc);
                
                PYTHRAN_RETURN;
            }