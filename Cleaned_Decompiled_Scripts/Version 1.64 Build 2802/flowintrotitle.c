//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
Player plLocal_0=0;
int iLocal_1=0;
BOOL bLocal_2=0;
#endregion

void main() // Position - 0x0{
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)) func_10();
STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
MISC::CLEAR_BIT(&(Global_113648.f_10018.f_25), 1);
func_7();
SCRIPT::SET_NO_LOADING_SCREEN(true);
if(!CAM::IS_SCREEN_FADED_OUT()) CAM::DO_SCREEN_FADE_OUT(0);
plLocal_0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_0)){
func_7();
SYSTEM::WAIT(0);
}
while (!CAM::IS_SCREEN_FADED_OUT()){
func_7();
SYSTEM::WAIT(0);
}
func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
iLocal_1=MISC::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND(2f * 1000f);
while (!CUTSCENE::IS_CUTSCENE_PLAYING()){
func_7();
if(!IS_BIT_SET(Global_113648.f_10018.f_25, 1)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_0, 255, 255, 255, 255, 0);
if(!bLocal_2){
if(MISC::GET_GAME_TIMER() > iLocal_1){
func_5("TITLE");
bLocal_2=true;
iLocal_1=MISC::GET_GAME_TIMER() + SYSTEM::ROUND(2f * 1000f);
}}elseif(MISC::GET_GAME_TIMER() > iLocal_1){
MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);
if(MISC::HAS_GAME_INSTALLED_THIS_SESSION() || MISC::IS_PC_VERSION()){
func_4(1, 1);
func_2();
}else{
func_1();
}}}
SYSTEM::WAIT(0);
}
func_10();
return;
}


void func_1() // Position - 0x13B{
Global_100720=1;
return;
}

int func_2() // Position - 0x148{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x193{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


void func_4(int iParam0, int iParam1) // Position - 0x1BB{
Global_100720.f_7=iParam0;
Global_100720.f_8=iParam1;
return;
}


void func_5(char* sParam0) // Position - 0x1D3{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_0, "HIDE_LOGO");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x1FA{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_0, "SHOW_LOGO");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_7() // Position - 0x24B{
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
func_8();
return;
}


void func_8() // Position - 0x268{
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_9();
return;
}


void func_9() // Position - 0x278{
Global_23131.f_134=1;
return;
}


void func_10() // Position - 0x286{
MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);
if(plLocal_0 !=0) GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
SCRIPT::SET_NO_LOADING_SCREEN(false);
STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}