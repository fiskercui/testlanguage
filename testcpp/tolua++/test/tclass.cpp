extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#include "tclass.h"
#include "autogentestclassbindings.hpp"

//Test::Tst_A* Test::Tst_A::last;
//Test::Tst_B* Test::Tst_B::last;
//Test::Tst_C* Test::Tst_C::last;

//extern "C" {
//	int  tolua_tclass_open (lua_State*);
//}

int testClass()
{
	Test::Tst_B* b = new Test::Tst_B;         // instance used in Lua code

	lua_State* L = lua_open();
	luaL_openlibs(L);
	register_all_autogentestclassbindings(L);

	luaL_dofile(L,"script/tclass.lua");

	lua_close(L);

	delete b;
	return 0;
}

