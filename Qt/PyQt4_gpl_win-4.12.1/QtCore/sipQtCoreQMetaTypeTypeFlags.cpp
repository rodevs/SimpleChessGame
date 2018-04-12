/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"


extern "C" {static int slot_QMetaType_TypeFlags___bool__(PyObject *);}
static int slot_QMetaType_TypeFlags___bool__(PyObject *sipSelf)
{
     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMetaType::TypeFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMetaType::TypeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMetaType_TypeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMetaType::TypeFlags::Int() != a0->operator QMetaType::TypeFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"
            sipReleaseType(const_cast< ::QMetaType::TypeFlags *>(a0),sipType_QMetaType_TypeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QMetaType_TypeFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMetaType::TypeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMetaType_TypeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMetaType::TypeFlags::Int() == a0->operator QMetaType::TypeFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"
            sipReleaseType(const_cast< ::QMetaType::TypeFlags *>(a0),sipType_QMetaType_TypeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QMetaType_TypeFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMetaType_TypeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QMetaType::TypeFlags(*sipCpp ^ a0);
#line 168 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMetaType::TypeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMetaType_TypeFlags, &a0, &a0State, &a1))
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMetaType_TypeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMetaType_TypeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
        *sipCpp = QMetaType::TypeFlags(*sipCpp | a0);
#line 242 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMetaType::TypeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMetaType_TypeFlags, &a0, &a0State, &a1))
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMetaType_TypeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMetaType_TypeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QMetaType::TypeFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMetaType::TypeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMetaType_TypeFlags, &a0, &a0State, &a1))
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMetaType_TypeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___invert__(PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___invert__(PyObject *sipSelf)
{
     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QMetaType::TypeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMetaType::TypeFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMetaType_TypeFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMetaType_TypeFlags___int__(PyObject *);}
static PyObject *slot_QMetaType_TypeFlags___int__(PyObject *sipSelf)
{
     ::QMetaType::TypeFlags *sipCpp = reinterpret_cast< ::QMetaType::TypeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaType_TypeFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaType_TypeFlags(void *, int);}
static void release_QMetaType_TypeFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QMetaType::TypeFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaType_TypeFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QMetaType_TypeFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMetaType::TypeFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMetaType::TypeFlags *>(sipSrc);
}


extern "C" {static void *array_QMetaType_TypeFlags(SIP_SSIZE_T);}
static void *array_QMetaType_TypeFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QMetaType::TypeFlags[sipNrElem];
}


extern "C" {static void *copy_QMetaType_TypeFlags(const void *, SIP_SSIZE_T);}
static void *copy_QMetaType_TypeFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QMetaType::TypeFlags(reinterpret_cast<const  ::QMetaType::TypeFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaType_TypeFlags(sipSimpleWrapper *);}
static void dealloc_QMetaType_TypeFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMetaType_TypeFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMetaType_TypeFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaType_TypeFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMetaType::TypeFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType::TypeFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType::TypeFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QMetaType::TypeFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMetaType_TypeFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType::TypeFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QMetaType::TypeFlags *>(a0),sipType_QMetaType_TypeFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMetaType_TypeFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMetaType_TypeFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QMetaType::TypeFlags **sipCppPtr = reinterpret_cast< ::QMetaType::TypeFlags **>(sipCppPtrV);

#line 390 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMetaType::TypeFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMetaType_TypeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QMetaType_TypeFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMetaType_TypeFlag)))
{
    *sipCppPtr = new QMetaType::TypeFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMetaType::TypeFlags *>(sipConvertToType(sipPy, sipType_QMetaType_TypeFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtCore/sipQtCoreQMetaTypeTypeFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMetaType_TypeFlags[] = {
    {(void *)slot_QMetaType_TypeFlags___bool__, bool_slot},
    {(void *)slot_QMetaType_TypeFlags___ne__, ne_slot},
    {(void *)slot_QMetaType_TypeFlags___eq__, eq_slot},
    {(void *)slot_QMetaType_TypeFlags___ixor__, ixor_slot},
    {(void *)slot_QMetaType_TypeFlags___xor__, xor_slot},
    {(void *)slot_QMetaType_TypeFlags___ior__, ior_slot},
    {(void *)slot_QMetaType_TypeFlags___or__, or_slot},
    {(void *)slot_QMetaType_TypeFlags___iand__, iand_slot},
    {(void *)slot_QMetaType_TypeFlags___and__, and_slot},
    {(void *)slot_QMetaType_TypeFlags___invert__, invert_slot},
    {(void *)slot_QMetaType_TypeFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMetaType_TypeFlags, "\1QMetaType.TypeFlags()\n"
"QMetaType.TypeFlags(Union[QMetaType.TypeFlags, QMetaType.TypeFlag])\n"
"QMetaType.TypeFlags(QMetaType.TypeFlags)");


static pyqt4ClassPluginDef plugin_QMetaType_TypeFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QMetaType_TypeFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaType__TypeFlags,
        {0},
        &plugin_QMetaType_TypeFlags
    },
    {
        sipNameNr_TypeFlags,
        {129, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaType_TypeFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMetaType_TypeFlags,
    init_type_QMetaType_TypeFlags,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QMetaType_TypeFlags,
    assign_QMetaType_TypeFlags,
    array_QMetaType_TypeFlags,
    copy_QMetaType_TypeFlags,
    release_QMetaType_TypeFlags,
    0,
    convertTo_QMetaType_TypeFlags,
    0,
    0,
    0,
    0,
    0
};