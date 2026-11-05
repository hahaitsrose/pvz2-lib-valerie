#pragma once
#include "WidgetContainer.h"

class Widget : public WidgetContainer
{
	bool mVisible;
	bool mMouseVisible;
	bool mDisabled;
	bool mHasFocus;
	bool mIsDown;
	bool mIsOver;
	bool mHasTransparencies;

	void WidgetRemovedHelper();
};

