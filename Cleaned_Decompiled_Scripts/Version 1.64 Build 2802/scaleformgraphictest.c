//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
var uLocal_18=0;
#endregion

void __EntryFunction__(){
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_2();
}
uLocal_18=GRAPHICS::REQUEST_SCALEFORM_MOVIE("graphic_design");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_18)){
SYSTEM::WAIT(0);
}
while (true){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
func_1(uLocal_18);
SYSTEM::WAIT(0);
}}


void func_1(var uParam0){
if(Global_20362==0){
if(((((((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 205)) || PAD::IS_CONTROL_PRESSED(2, 206)) || PAD::IS_CONTROL_PRESSED(2, 201)) || PAD::IS_CONTROL_PRESSED(2, 202)){
Global_20362=1;
SYSTEM::SETTIMERA(0);
}}elseif(SYSTEM::TIMERA() > 50){
Global_20362=0;
}
if(Global_20362==0){
if(PAD::IS_CONTROL_PRESSED(2, 189)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 190)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 205)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 206)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 188)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 187)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 201)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_PRESSED(2, 202)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_2(){
func_3(0);
MISC::SET_GAME_PAUSED(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_18);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(bool bParam0){
if(bParam0){
func_10();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_9(0)){
func_4(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_4(int iParam0){
if(func_8()){
return;
}
if(Global_20584){
if(func_7()){
func_6(1, 1);
}else{
func_6(0, 0);
}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21725=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 30);
}else{
MISC::CLEAR_BIT(&Global_8253, 30);
}
if(!func_5()){
Global_20383.f_1=3;
}}

int func_5(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_9(0)){
Global_20584=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
}
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==1){
Global_20584=0;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}}


bool func_7(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_8(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_9(int iParam0){
if(iParam0==1){
if(Global_20383.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8253, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20383.f_1 > 3){
return 1;
}
return 0;
}


void func_10(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}