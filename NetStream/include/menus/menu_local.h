#ifndef _MENU_LOCAL_H_
#define _MENU_LOCAL_H_

#include <kernel.h>
#include <paf.h>

#include "dialog.h"
#include "menu_server.h"
#include "local_server_browser.h"
#include "menus/menu_player_simple.h"

using namespace paf;

namespace menu {
	class Local : public GenericServerMenu
	{
	public:

		Local()
		{
			browser = new LocalServerBrowser();
		}

		MenuType GetMenuType()
		{
			return MenuType_Local;
		}

		const SceUInt32 *GetSupportedSettingsItems(SceInt32 *count)
		{
			*count = sizeof(k_settingsIdList) / sizeof(char*);
			return k_settingsIdList;
		}

	private:

		const SceUInt32 k_settingsIdList[1] = {
			0
		};
	};
}

#endif