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

#include "sipAPIQtGui.h"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQInputEvent.cpp"

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQInputEvent.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQInputEvent.cpp"


PyDoc_STRVAR(doc_QInputEvent_modifiers, "modifiers(self) -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QInputEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputEvent, &sipCpp))
        {
             ::Qt::KeyboardModifiers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_modifiers, doc_QInputEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QInputEvent_timestamp, "timestamp(self) -> int");

extern "C" {static PyObject *meth_QInputEvent_timestamp(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_timestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputEvent, &sipCpp))
        {
             ::ulong sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timestamp();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_timestamp, doc_QInputEvent_timestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QInputEvent_setTimestamp, "setTimestamp(self, int)");

extern "C" {static PyObject *meth_QInputEvent_setTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_setTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::ulong a0;
         ::QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_QInputEvent, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTimestamp(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_setTimestamp, doc_QInputEvent_setTimestamp);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QInputEvent(void *, const sipTypeDef *);}
static void *cast_QInputEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QInputEvent *sipCpp = reinterpret_cast< ::QInputEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputEvent(void *, int);}
static void release_QInputEvent(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QInputEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QInputEvent(sipSimpleWrapper *);}
static void dealloc_QInputEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QInputEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QInputEvent[] = {{13, 0, 1}};


static PyMethodDef methods_QInputEvent[] = {
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QInputEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_setTimestamp), meth_QInputEvent_setTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_setTimestamp)},
    {SIP_MLNAME_CAST(sipName_timestamp), meth_QInputEvent_timestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_timestamp)}
};


static pyqt4ClassPluginDef plugin_QInputEvent = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QInputEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QInputEvent,
        {0},
        &plugin_QInputEvent
    },
    {
        sipNameNr_QInputEvent,
        {0, 0, 1},
        3, methods_QInputEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QInputEvent,
    0,
    0,
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
    dealloc_QInputEvent,
    0,
    0,
    0,
    release_QInputEvent,
    cast_QInputEvent,
    0,
    0,
    0,
    0,
    0,
    0
};