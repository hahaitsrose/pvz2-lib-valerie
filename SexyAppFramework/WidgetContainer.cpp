#include "WidgetContainer.h"
#include "Widget.h"
#include <algorithm>

Rect WidgetContainer::GetRect() {
	return Rect(mX, mY, mWidth, mHeight);
}

Rect WidgetContainer::GetClipRect() const {
	return Rect(0, 0, mWidth, mHeight);
}

void WidgetContainer::RemoveWidget(Widget* widget) {
	WidgetList::iterator itr = std::find(mWidgets.begin(), mWidgets.end(), widget);
	if (itr != mWidgets.end()) 
	{

		widget->mParent = NULL;
	}
}

void WidgetContainer::RemoveAllWidgets(bool doDelete, bool recursive) {
	while (!mWidgets.empty()) 
	{
		Widget* widget = mWidgets.front();
		RemoveWidget(widget);

		if (recursive) {
			widget->RemoveAllWidgets(doDelete, recursive);
		}

		if (!widget || doDelete) {
			delete widget;
		}
	}
}