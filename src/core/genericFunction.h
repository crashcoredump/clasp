/*
    File: genericFunction.h
*/

/*
Copyright (c) 2014, Christian E. Schafmeister
 
CLASP is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.
 
See directory 'clasp/licenses' for full details.
 
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/* -^- */
#ifndef _core_genericFunction_H_
#define _core_genericFunction_H_

#include "core/foundation.h"
#include "core/object.h"

namespace core
{

    T_mv notFuncallableDispatch( Instance_sp gf, int nargs, ArgArray args);
    
    T_mv generic_function_dispatch( Instance_sp gf, int nargs, ArgArray args);

    T_mv slotReaderDispatch( Instance_sp gf, int nargs, ArgArray args);

    T_mv slotWriterDispatch( Instance_sp gf, int nargs, ArgArray args);

    T_mv userFunctionDispatch( Instance_sp gf, int nargs, ArgArray args);


    void initialize_genericFunction();
    
};
#endif /* _core_genericFunction_H_ */
