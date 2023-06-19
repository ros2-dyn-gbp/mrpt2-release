#include <deque>
#include <memory>
#include <mrpt/bayes/CProbabilityParticle.h>
#include <mrpt/math/TPose2D.h>
#include <mrpt/math/TPose3D.h>
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <pybind11/stl.h>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

PYBIND11_MAKE_OPAQUE(std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>)
PYBIND11_MAKE_OPAQUE(std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>)

void bind_std_stl_deque(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::deque file:bits/stl_deque.h line:766
		pybind11::class_<std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>, std::shared_ptr<std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>>> cl(M("std"), "deque_mrpt_bayes_CProbabilityParticle_mrpt_math_TPose3D_mrpt_bayes_particle_storage_mode_VALUE_t", "");
		cl.def( pybind11::init( [](){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>(); } ) );
		cl.def( pybind11::init<const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>(a0); } ), "doc" , pybind11::arg("__n"));
		cl.def( pybind11::init<unsigned long, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> & a1){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>(a0, a1); } ), "doc" , pybind11::arg("__n"), pybind11::arg("__value"));
		cl.def( pybind11::init<unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>> const &o){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>(o); } ) );
		cl.def( pybind11::init<const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::operator=, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::operator=(const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &) --> class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::assign, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::assign(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("get_allocator", (class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::get_allocator, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::get_allocator() const --> class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> >");
		cl.def("size", (unsigned long (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::size, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::max_size, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::max_size() const --> unsigned long");
		cl.def("resize", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::resize, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::resize, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::resize(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::shrink_to_fit, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::shrink_to_fit() --> void");
		cl.def("empty", (bool (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::empty, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::empty() const --> bool");
		cl.def("__getitem__", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::operator[], "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::operator[](unsigned long) --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::at, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::at(unsigned long) --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::front() --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic);
		cl.def("back", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::back() --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic);
		cl.def("push_front", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::push_front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::push_front(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__x"));
		cl.def("push_back", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::push_back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::push_back(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__x"));
		cl.def("pop_front", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_front() --> void");
		cl.def("pop_back", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_back() --> void");
		cl.def("swap", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::swap, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::swap(class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::clear, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose3D, mrpt::bayes::particle_storage_mode::VALUE>>::clear() --> void");
	}
	{ // std::deque file:bits/stl_deque.h line:766
		pybind11::class_<std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>, std::shared_ptr<std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>>> cl(M("std"), "deque_mrpt_bayes_CProbabilityParticle_mrpt_math_TPose2D_mrpt_bayes_particle_storage_mode_VALUE_t", "");
		cl.def( pybind11::init( [](){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>(); } ) );
		cl.def( pybind11::init<const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>(a0); } ), "doc" , pybind11::arg("__n"));
		cl.def( pybind11::init<unsigned long, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> & a1){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>(a0, a1); } ), "doc" , pybind11::arg("__n"), pybind11::arg("__value"));
		cl.def( pybind11::init<unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>> const &o){ return new std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>(o); } ) );
		cl.def( pybind11::init<const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &, const class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::operator=, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::operator=(const class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &) --> class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::assign, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::assign(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("get_allocator", (class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::get_allocator, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::get_allocator() const --> class std::allocator<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> >");
		cl.def("size", (unsigned long (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::size, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::max_size, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::max_size() const --> unsigned long");
		cl.def("resize", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::resize, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::resize, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::resize(unsigned long, const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::shrink_to_fit, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::shrink_to_fit() --> void");
		cl.def("empty", (bool (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)() const) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::empty, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::empty() const --> bool");
		cl.def("__getitem__", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::operator[], "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::operator[](unsigned long) --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(unsigned long)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::at, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::at(unsigned long) --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::front() --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic);
		cl.def("back", (struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> & (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::back() --> struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &", pybind11::return_value_policy::automatic);
		cl.def("push_front", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::push_front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::push_front(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__x"));
		cl.def("push_back", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::push_back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::push_back(const struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> &) --> void", pybind11::arg("__x"));
		cl.def("pop_front", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_front, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_front() --> void");
		cl.def("pop_back", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_back, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::pop_back() --> void");
		cl.def("swap", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)(class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &)) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::swap, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::swap(class std::deque<struct mrpt::bayes::CProbabilityParticle<struct mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE> > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::*)()) &std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::clear, "C++: std::deque<mrpt::bayes::CProbabilityParticle<mrpt::math::TPose2D, mrpt::bayes::particle_storage_mode::VALUE>>::clear() --> void");
	}
}
