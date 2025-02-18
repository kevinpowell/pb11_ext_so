# pb11_ext_so
Example python extension using pybind11 and an 'external' shared lib

note that the python_example/ subdir is copied (largely) from the pybind11 repo and therefore
carries the original source license from pybind11.

the toy library libherpderp.so is a stand-in for some arbitrary pre-compiled .so
to use this example, you must first build libherpderp.so by running 'make' in the herpderp/ directory

this branch is structured differently than the main branch:  here, the pybind11 part of the module is not 
exposed at the top level, but is instead a sub-module.  The linkage is therefore different, as the relative paths
of the pybind11 lib and the 'external' lib are different vs the arrangement on the 'main' branch.
