#include <X11/IntrinsicP.h>

#include <X11/StringDefs.h>

#include <X11/Shell.h>

#include <X11/CompositeP.h>

#include <stdio.h>

# 1 
static XtGeometryResult QueryGeometry(Widget w, XtWidgetGeometry *request,
                                      XtWidgetGeometry *reply_return)
{
    XtGeometryResult result=XtGeometryNo;

    request->request_mode &= CWWidth | CWHeight;



    if (request->request_mode == 0)
        return XtGeometryYes;




    if (request->request_mode & CWHeight)
    {
        if (request->height < 300)
        {
            result = XtGeometryAlmost;
            reply_return->height = 300;
            reply_return->request_mode &= CWHeight;
        }
        else
            result = XtGeometryYes;
    }

    if (request->request_mode & CWWidth)
    {
        if (request->width < 300)
        {
            result = XtGeometryAlmost;
            reply_return->width = 300;
            reply_return->request_mode &= CWWidth;
        }
        else
            result = XtGeometryYes;
    }

    return result;
}