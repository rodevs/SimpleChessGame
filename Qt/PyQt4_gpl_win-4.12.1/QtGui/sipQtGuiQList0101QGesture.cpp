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

#line 115 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQList0101QGesture.cpp"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQList0101QGesture.cpp"


extern "C" {static void assign_QList_0101QGesture(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0101QGesture(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QGesture*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QGesture*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGesture(SIP_SSIZE_T);}
static void *array_QList_0101QGesture(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QGesture*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGesture(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGesture(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QGesture*>(reinterpret_cast<const QList< ::QGesture*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGesture(void *, int);}
static void release_QList_0101QGesture(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QGesture*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QGesture(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGesture(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QGesture*> **sipCppPtr = reinterpret_cast<QList< ::QGesture*> **>(sipCppPtrV);

#line 145 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QGesture, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QGesture *> *ql = new QList<QGesture *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QGesture *t = reinterpret_cast<QGesture *>(sipConvertToType(itm, sipType_QGesture, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 118 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQList0101QGesture.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGesture(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGesture(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QGesture*> *sipCpp = reinterpret_cast<QList< ::QGesture*> *>(sipCppV);

#line 119 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGesture *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QGesture to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QGesture, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 151 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQList0101QGesture.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QGesture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_43577,     /* QList<QGesture*> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QGesture,
    array_QList_0101QGesture,
    copy_QList_0101QGesture,
    release_QList_0101QGesture,
    convertTo_QList_0101QGesture,
    convertFrom_QList_0101QGesture
};