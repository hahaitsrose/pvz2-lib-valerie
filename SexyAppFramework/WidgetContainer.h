#pragma once

#include <list>
#include "Rect.h"

class Widget;

using WidgetList = std::list<Widget*>;

class WidgetContainer {
public:
    int mX, mY, mWidth, mHeight;
    WidgetList mWidgets;
    WidgetContainer* mParent;

    // DONE
    virtual ~WidgetContainer();
    // DONE
    virtual Rect GetRect();
    // DONE
    virtual Rect GetClipRect() const;

    virtual void RemoveAllWidgets(bool doDelete, bool recursive);
    virtual void RemoveWidget(Widget* widget);

    //static void HookLifeCycle();
};