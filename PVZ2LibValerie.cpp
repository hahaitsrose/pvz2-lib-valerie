#include <substrate.h>
#include "memUtils.h"
#include "PVZ2LibValerie.h"
#include "SexyTypes.h"

#include "PvZ2/Board.h"
#include "SexyAppFramework/WidgetContainer.h"

__attribute__((constructor))
// This is automatically executed when the lib is loaded
// Run your initialization code here
void libValerie_main()
{
	LOGI("Initializing %s", LIB_TAG);

	// call hooklifecycle functions
    Board::HookLifeCycle();
	//WidgetContainer::HookLifeCycle();

    LOGI("Finished initializing");
}