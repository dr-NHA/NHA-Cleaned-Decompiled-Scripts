//Cleaned With dr NHA's C Script Cleaner V2.72
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
char* sLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
int iLocal_21=0;
BOOL bLocal_22=0;
BOOL bLocal_23=0;
int iLocal_24=0;
BOOL bLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
int iLocal_29=0;
float fLocal_30=0f;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
float fLocal_34=0f;
int iLocal_35=0;
BOOL bLocal_36=0;
Object obLocal_37=0;
Object obLocal_38=0;
Object obLocal_39=0;
Object obLocal_40=0;
Object obLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
Cam caLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
BOOL bLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
Object obScriptParam_0=0;
#endregion

void main() // Position - 0x0{
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
sLocal_18="NULL";
iLocal_21=3;
bLocal_25=true;
iLocal_35=-1;
iLocal_42=-1;
iLocal_43=-1;
iLocal_44=-1;
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "NULL", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "NULL", 64);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2)) func_68();
if(ENTITY::DOES_ENTITY_EXIST(obScriptParam_0)){
obLocal_37=obScriptParam_0;
obLocal_40=obScriptParam_0;
}
while (true){
SYSTEM::WAIT(0);
func_67();
if(ENTITY::DOES_ENTITY_EXIST(obScriptParam_0)){
if(iLocal_43 !=-1 && func_66() && !func_65() && !func_64(iLocal_43)) func_68();
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE()==3) func_68();
if(func_63(13) || func_63(14)) func_68();
if(OBJECT::HAS_OBJECT_BEEN_BROKEN(obScriptParam_0, 0)) func_68();
if(BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
func_62();
if(ENTITY::GET_ENTITY_HEALTH(obScriptParam_0) < 950) func_68();
switch (iLocal_29){
case 0:
func_59();
if(iLocal_43==5){
if(func_58(18)==true && func_58(20)==false){
obLocal_41=OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(obLocal_41)) OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(obLocal_41, 9);
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(iLocal_43==-1){
func_68();
}else{
func_57();
unk_0x32D2010F2D300EB7("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
Global_32224[iLocal_43 /*11*/].f_2=0;
Global_32224[iLocal_43 /*11*/].f_6=1;
Global_32224[iLocal_43 /*11*/]=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
Global_32224[iLocal_43 /*11*/].f_1=0;
Global_32224[iLocal_43 /*11*/].f_4=0;
Global_32224[iLocal_43 /*11*/].f_7=0;
Global_32224[iLocal_43 /*11*/].f_8=0;
Global_32224[iLocal_43 /*11*/].f_10=0;
fLocal_30=-4f;
func_55(&uLocal_26);
func_53();
func_52();
SYSTEM::WAIT(0);
iLocal_29=1;
}
break;
case 1:
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) SYSTEM::WAIT(0);
elseif(ENTITY::IS_ENTITY_STATIC(obLocal_37) && ENTITY::IS_ENTITY_UPRIGHT(obLocal_37, 1119092736))if(func_44() || Global_32224[iLocal_43 /*11*/].f_5) iLocal_29=2;
else _CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
break;
case 2:
func_53();
if(!func_64(iLocal_43)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37))if(!ENTITY::IS_ENTITY_VISIBLE(obLocal_37)) ENTITY::SET_ENTITY_VISIBLE(obLocal_37, true, false);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39))if(!ENTITY::IS_ENTITY_VISIBLE(obLocal_39)) ENTITY::SET_ENTITY_VISIBLE(obLocal_39, true, false);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_38))if(ENTITY::IS_ENTITY_VISIBLE(obLocal_38)) ENTITY::SET_ENTITY_VISIBLE(obLocal_38, false, false);
if(!MISC::ARE_STRINGS_EQUAL(&uLocal_46, "NULL")) AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_46, false);
GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
SYSTEM::WAIT(0);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_40)) GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(obLocal_40);
if(!func_64(iLocal_43)){
if(Global_32224[iLocal_43 /*11*/]==3 || Global_32224[iLocal_43 /*11*/]==2 || Global_32224[iLocal_43 /*11*/]==-1) Global_32224[iLocal_43 /*11*/]=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
GRAPHICS::SET_TV_CHANNEL(Global_32224[iLocal_43 /*11*/]);
GRAPHICS::SET_TV_VOLUME(fLocal_30);
}else{
iLocal_44=Global_32224[iLocal_43 /*11*/];
iLocal_45=Global_32224[iLocal_43 /*11*/].f_1;
GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_44, func_41(iLocal_45), Global_32224[iLocal_43 /*11*/].f_9);
GRAPHICS::SET_TV_CHANNEL(iLocal_44);
if(Global_32224[iLocal_43 /*11*/].f_7){
Global_32224[iLocal_43 /*11*/].f_5=0;
Global_32224[iLocal_43 /*11*/].f_7=0;
}}
Global_32224[iLocal_43 /*11*/].f_2=1;
func_40(133, 1);
func_40(131, 1);
func_40(132, 1);
iLocal_29=3;
break;
case 3:
if(Global_32224[iLocal_43 /*11*/].f_4) iLocal_29=6;
if(Global_32224[iLocal_43 /*11*/].f_7 && func_64(iLocal_43)){
Global_32224[iLocal_43 /*11*/].f_7=0;
iLocal_29=6;
}
if(!func_38(iLocal_43)){
func_37();
iLocal_29=5;
}else{
func_35();
if(GRAPHICS::GET_TV_CHANNEL()==-1) GRAPHICS::SET_TV_CHANNEL(Global_32224[iLocal_43 /*11*/]);
if(func_15()) iLocal_29=6;
}
break;
case 5:
if(func_38(iLocal_43)) iLocal_29=2;
if(Global_32224[iLocal_43 /*11*/].f_4) iLocal_29=6;
break;
case 6:
func_1();
if(iLocal_42 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
Global_32224[iLocal_43 /*11*/].f_5=0;
Global_32224[iLocal_43 /*11*/].f_4=0;
Global_32224[iLocal_43 /*11*/].f_1=0;
Global_32224[iLocal_43 /*11*/].f_2=0;
Global_32224[iLocal_43 /*11*/].f_7=0;
Global_32224[iLocal_43 /*11*/].f_8=0;
Global_32224[iLocal_43 /*11*/].f_10=0;
iLocal_29=1;
break;
}}}}else{
func_68();
SCRIPT::TERMINATE_THIS_THREAD();
}}
func_68();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_1() // Position - 0x4E6{
if(iLocal_43 !=-1) Global_32224[iLocal_43 /*11*/]=GRAPHICS::GET_TV_CHANNEL();
fLocal_30=GRAPHICS::GET_TV_VOLUME();
GRAPHICS::SET_TV_CHANNEL(-1);
func_4();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5"))==0)if(!MISC::ARE_STRINGS_EQUAL(&uLocal_46, "NULL")) AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_46, true);
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_3();
func_52();
if(ENTITY::DOES_ENTITY_EXIST(obLocal_38))if(!ENTITY::IS_ENTITY_VISIBLE(obLocal_38)) ENTITY::SET_ENTITY_VISIBLE(obLocal_38, true, false);
GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
func_2();
return;
}


void func_2() // Position - 0x590{
if(MISC::IS_PC_VERSION()){
if(iLocal_87==1){
PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
iLocal_87=0;
}}
return;
}


void func_3() // Position - 0x5AC{
if(!iLocal_35==-1){
HUD::SET_TEXT_RENDER_ID(iLocal_35);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37)){
if(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_scre_off")){
ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
if(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_scre_off")) GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
}else{
GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
}}}
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)) ENTITY::SET_ENTITY_VISIBLE(obLocal_39, false, false);
return;
}


void func_4() // Position - 0x643{
if(bLocal_85){
CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
if(CAM::IS_CAM_ACTIVE(caLocal_78)) CAM::SET_CAM_ACTIVE(caLocal_78, false);
CAM::DESTROY_CAM(caLocal_78, false);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_31, 1, 0, 2);
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(bLocal_36==true){
bLocal_36=false;
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
}
if(!MISC::ARE_STRINGS_EQUAL(&uLocal_62, "NULL"))if(AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_62)) AUDIO::STOP_AUDIO_SCENE(&uLocal_62);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)) ENTITY::SET_ENTITY_VISIBLE(obLocal_39, true, false);
func_5(false, true, false, false, false, false, false);
GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
bLocal_85=false;
}
return;
}


void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_14(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_13()) Global_20383.f_1=3;
Global_21725=5;
}
func_12(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_14(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_12(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_6() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_6() // Position - 0x85C{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x876{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_8(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_8(int iParam0, BOOL bParam1) // Position - 0x8C1{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_9();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_9() // Position - 0x902{
return Global_1574918;
}
BOOL func_10(Player plParam0) // Position - 0x90E{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_11())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_11() // Position - 0x94D{
return IS_BIT_SET(Global_2621446, 3);
}

int func_12(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x95B{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}
BOOL func_13() // Position - 0x98E{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_14(int iParam0) // Position - 0x9B5{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}
BOOL func_15() // Position - 0x9D8{
if(!func_64(iLocal_43)){
if(func_31(&uLocal_26) >=1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88, 1f, 1f, 1.5f, false, true, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_37)==INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && !func_30(8, -1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_31, 90f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(iLocal_42==-1){
func_29();
_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
}elseif(func_26(iLocal_42, true)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
func_55(&uLocal_26);
Global_32224[iLocal_43 /*11*/].f_7=0;
if(AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1)) AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
return true;
}
func_16();
}else{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_2();
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
}}
return false;
}


void func_16() // Position - 0xAE4{
if(bLocal_85==false){
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
func_25();
}}else{
PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
if(ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID())) ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
if(bLocal_36)if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
func_23(true, true);
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
func_17(0);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
func_4();
}}
return;
}


void func_17(int iParam0) // Position - 0xB9E{
if(func_22()) return;
if(!Global_20383.f_1==1){
if(func_21(0)) func_18(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_18(int iParam0) // Position - 0xBD1{
if(func_22()) return;
if(Global_20584)if(func_20()) func_19(true, true);
else func_19(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_13()) Global_20383.f_1=3;
return;
}


void func_19(BOOL bParam0, BOOL bParam1) // Position - 0xC5B{
if(bParam0){
if(func_21(0)){
Global_20584=true;
if(bParam1) MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==true){
Global_20584=false;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}
return;
}
BOOL func_20() // Position - 0xCCF{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_21(int iParam0) // Position - 0xCDD{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_22() // Position - 0xD34{
return IS_BIT_SET(Global_1962996, 19);
}


void func_23(BOOL bParam0, BOOL bParam1) // Position - 0xD43{
int num;
int num2;
float tvVolume;
num=64;
if(bParam0){
if(func_24(false)){
if(!bLocal_22){
if(AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1)) AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
if(GRAPHICS::GET_TV_CHANNEL()==0) GRAPHICS::SET_TV_CHANNEL(1);
else GRAPHICS::SET_TV_CHANNEL(0);
bLocal_22=true;
}}elseif(bLocal_22){
bLocal_22=false;
}}
if(bParam1){
num2=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) - 127;
if(!bLocal_23){
if(num2 > 0 + num){
tvVolume=GRAPHICS::GET_TV_VOLUME();
tvVolume=tvVolume - 0.5f;
if(tvVolume < -36f) tvVolume=-36f;
GRAPHICS::SET_TV_VOLUME(tvVolume);
iLocal_24=MISC::GET_GAME_TIMER();
bLocal_23=true;
}
if(num2 < 0 - num){
tvVolume=GRAPHICS::GET_TV_VOLUME();
tvVolume=tvVolume + 0.5f;
if(tvVolume > 0f) tvVolume=0f;
GRAPHICS::SET_TV_VOLUME(tvVolume);
iLocal_24=MISC::GET_GAME_TIMER();
bLocal_23=true;
}
if(num2 < 0 + num && num2 > 0 - num){
bLocal_25=true;
}elseif(bLocal_25){
if(AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1)){
if(tvVolume !=-36f && tvVolume !=0f) AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
bLocal_25=false;
}}}
if(bLocal_23)if(num2==0 || MISC::GET_GAME_TIMER() > iLocal_24 + 24) bLocal_23=false;
}
return;
}
BOOL func_24(BOOL bParam0) // Position - 0xE8A{
int num;
int num2;
num=64;
num2=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) - 127;
if(bParam0 || SYSTEM::TIMERA() > 300){
if(num2 > 0 + num || num2 < 0 - num){
SYSTEM::SETTIMERA(0);
return true;
}}
return false;
}


void func_25() // Position - 0xED6{
float fov;
fov=50f;
if(bLocal_85==false){
caLocal_78=CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uLocal_79, uLocal_82, fov, false, 2);
CAM::SET_CAM_FAR_CLIP(caLocal_78, 100f);
CAM::SET_CAM_ACTIVE(caLocal_78, true);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)) ENTITY::SET_ENTITY_VISIBLE(obLocal_39, false, false);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
bLocal_36=true;
}
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_31, -1, 0, 2);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
}
if(!MISC::ARE_STRINGS_EQUAL(&uLocal_62, "NULL"))if(!AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_62)) AUDIO::START_AUDIO_SCENE(&uLocal_62);
func_5(true, true, false, false, false, false, false);
GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
bLocal_85=true;
}
return;
}
BOOL func_26(int iParam0, BOOL bParam1) // Position - 0xFAD{
int num;
num=func_27(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_21(0)) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]==true && Global_44000[num /*32*/].f_4==1){
if(bParam1)if(Global_44000[num /*32*/].f_29) return false;
Global_44000[num /*32*/].f_5=1;
Global_44000[num /*32*/].f_29=1;
return true;
}else{
Global_44000[num /*32*/]==false;
Global_44000[num /*32*/].f_7;
}}
return false;
}

int func_27(int iParam0) // Position - 0x1065{
int i;
if(iParam0 < 0) return -1;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(Global_44000[i /*32*/].f_1==iParam0) return i;
}
return -1;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x10A0{
int i;
SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1) _CONTEXT_REMOVE_HELP_TEXT(uParam0);
return;
}
if(!*uParam0==-1) return;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(!Global_44000[i /*32*/]){
Global_44000[i /*32*/]=true;
Global_44000[i /*32*/].f_1=Global_44201;
Global_44201=Global_44201 + 1;
Global_44000[i /*32*/].f_4=0;
Global_44000[i /*32*/].f_29=0;
Global_44000[i /*32*/].f_5=0;
Global_44000[i /*32*/].f_2=iParam1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
Global_44000[i /*32*/].f_6=iParam3;
Global_44000[i /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[i /*32*/].f_7=0;
Global_44000[i /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[i /*32*/].f_12=1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
Global_44000[i /*32*/].f_30=iParam6;
}else{
Global_44000[i /*32*/].f_12=0;
Global_44000[i /*32*/].f_30=0;
}
*uParam0=Global_44000[i /*32*/].f_1;
return;
}}
return;
}


void func_29() // Position - 0x11CB{
if(MISC::IS_PC_VERSION()){
if(iLocal_87==0){
PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
iLocal_87=1;
}}
return;
}
BOOL func_30(int iParam0, int iParam1) // Position - 0x11EB{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


float func_31(var uParam0) // Position - 0x1223{
if(func_34(uParam0))if(func_33(uParam0)) return uParam0->f_2;
else return func_32(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;
return uParam0->f_1;
}


float func_32(BOOL bParam0) // Position - 0x125F{
float num;
float num2;
int networkTime;
float num3;
float num4;
if(bParam0){
num=SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
num2=num / 1000f;
return num2;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
networkTime=NETWORK::GET_NETWORK_TIME();
num3=SYSTEM::TO_FLOAT(networkTime);
num4=num3 / 1000f;
return num4;
}
return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}
BOOL func_33(var uParam0) // Position - 0x12B7{
return IS_BIT_SET(*uParam0, 2);
}
BOOL func_34(var uParam0) // Position - 0x12C4{
return IS_BIT_SET(*uParam0, 1);
}


void func_35() // Position - 0x12D1{
float xScale;
xScale=1f;
func_36(&xScale);
HUD::SET_TEXT_RENDER_ID(iLocal_35);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, xScale, 1f, 0f, 255, 255, 255, 255);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
return;
}


void func_36(var uParam0) // Position - 0x1312{
float aspectRatio;
float num;
float num2;
aspectRatio=GRAPHICS::GET_ASPECT_RATIO(false);
if(aspectRatio <=16f / 9f){
num=aspectRatio / 16f / 9f;
num2=*uParam0;
*uParam0=num2 * num;
}
return;
}


void func_37() // Position - 0x134F{
Global_32224[iLocal_43 /*11*/].f_7=0;
Global_32224[iLocal_43 /*11*/]=GRAPHICS::GET_TV_CHANNEL();
fLocal_30=GRAPHICS::GET_TV_VOLUME();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_62)) AUDIO::STOP_AUDIO_SCENE(&uLocal_62);
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
GRAPHICS::SET_TV_CHANNEL(-1);
SYSTEM::WAIT(0);
func_3();
func_52();
return;
}
BOOL func_38(int iParam0) // Position - 0x13CF{
var unk;
unk={
_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) 
};
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 6:
return true;
case 4:
if(unk.f_2 < 74f) return true;
break;
case 5:
if(unk.f_2 > 75f) return true;
break;
}
return false;
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x1444{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}


void func_40(int iParam0, int iParam1) // Position - 0x1457{
int outValue;
if(iParam1 < 1) return;
if(Global_59104[iParam0 /*7*/].f_2) return;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return;
if(Global_59104[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &outValue, -1);
outValue=outValue + iParam1;
STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, outValue, true);
}
return;
}


char* func_41(int iParam0) // Position - 0x14B4{
char* str;
switch (iParam0){
case 1:
str="PL_STD_CNT";
break;
case 2:
str="PL_STD_WZL";
break;
case 3:
str="PL_LO_CNT";
break;
case 4:
str="PL_LO_WZL";
break;
case 7:
str="PL_SP_WORKOUT";
break;
case 8:
str="PL_SP_INV";
break;
case 9:
str="PL_SP_INV_EXP";
break;
case 5:
str="PL_LO_RS";
break;
case 6:
str="PL_LO_RS_CUTSCENE";
break;
case 10:
str="PL_SP_PLSH1_INTRO";
break;
case 11:
str="PL_LES1_FAME_OR_SHAME";
break;
case 12:
str="PL_STD_WZL_FOS_EP2";
break;
case 13:
str="PL_MP_WEAZEL";
break;
case 14:
str="PL_MP_CCTV";
break;
}
return str;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x1593{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x15A6{
int num;
if(*uParam0==-1) return;
num=func_27(*uParam0);
if(num==-1){
*uParam0=-1;
return;
}
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]){
Global_44000[num /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
return;
}
BOOL func_44() // Position - 0x15FD{
if(func_31(&uLocal_26) < 1f){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_31, 90f) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_37) !=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(func_30(8, -1)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(Global_97609){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(Global_32224[iLocal_43 /*11*/].f_8){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
return false;
}
if(iLocal_42==-1){
_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/, 0, 0, 0, 0);
return false;
}
if(func_26(iLocal_42, true)){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
func_55(&uLocal_26);
Global_32224[iLocal_43 /*11*/].f_7=1;
if(AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1)) AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
func_45(309, 0, 0);
return true;
}
return false;
}


void func_45(int iParam0, int iParam1, int iParam2) // Position - 0x172C{
BOOL flag;
iParam0 < 0;
if(iParam0==321 || iParam0 > 321){}else{
_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
}
flag=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12) flag=false;
}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
if(iParam0==286) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
if(iParam0==299) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
}
if(flag) func_46();
return;
}


void func_46() // Position - 0x1812{
int num;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float value;
int value2;
num=0;
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
num2=0f;
num3=0f;
num4=0f;
num5=0f;
num6=0f;
num7=0f;
num8=0f;
value=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (num < 321){
if(Global_113648.f_10196[num /*12*/].f_5==1){
switch (Global_113648.f_10196[num /*12*/].f_6){
case 1:
Global_113384=Global_113384 + 1;
num2=num2 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 3:
Global_113385=Global_113385 + 1;
num3=num3 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 5:
Global_113386=Global_113386 + 1;
num4=num4 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 7:
Global_113387=Global_113387 + 1;
num5=num5 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 9:
Global_113388=Global_113388 + 1;
num6=num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
break;
case 11:
Global_113389=Global_113389 + 1;
num7=num7 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 13:
Global_113390=Global_113390 + 1;
num8=num8 + Global_113648.f_10196[num /*12*/].f_4;
break;
default:
break;
}}
num=num + 1;
}
if(Global_113367 > 0)if(Global_113384==Global_113367) num2=55f;
if(Global_113368 > 0)if(Global_113385==Global_113368) num3=10f;
if(Global_113369 > 0)if(Global_113386==Global_113369) num4=0f;
if(Global_113370 > 0)if(Global_113387==Global_113370) num5=10f;
if(Global_113371 > 0){
if(Global_113388==Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388==Global_113374){
if(!IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
num6=5f;
}}
if(Global_113372 > 0)if(Global_113389==Global_113372) num7=15f;
if(Global_113373 > 0)if(Global_113390==Global_113373) num8=5f;
Global_113648.f_10196.f_3853=num2 + num3 + num4 + num5 + num6 + num7 + num8;
if(Global_113388 > Global_113374 || Global_113388==Global_113374) value2=Global_113374;
else value2=Global_113388;
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
Global_113391=(Global_113384 * 100) / Global_113367;
Global_113393=((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
Global_113392=((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
Global_113394=((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);
if(value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853)) func_50(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_49()==2==false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()) Global_113382=0;
if(!Global_63362) func_47();
}}}
return;
}

int func_47() // Position - 0x1CD0{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1D1B{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}

int func_49() // Position - 0x1D43{
return Global_32163;
}
BOOL func_50(int iParam0, int iParam1) // Position - 0x1D4E{
int achievementProgress;
if(iParam0 < 0) return false;
if(iParam0 > 78) return false;
if(iParam1 <=0 || iParam1 > 100) return false;
achievementProgress=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > achievementProgress) return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
return false;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0x1D9F{
if(iParam2==-1) iParam2=func_9();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}


void func_52() // Position - 0x1DBD{
SYSTEM::WAIT(0);
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen")){
HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
iLocal_35=-1;
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}
return;
}


void func_53() // Position - 0x1DE9{
Hash entityModel;
if(iLocal_43==4) func_54();
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen")) HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
SYSTEM::WAIT(0);
if(!ENTITY::DOES_ENTITY_EXIST(obLocal_37)) func_68();
entityModel=ENTITY::GET_ENTITY_MODEL(obLocal_37);
HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
HUD::LINK_NAMED_RENDERTARGET(entityModel);
SYSTEM::WAIT(0);
if(iLocal_43 !=4){
while (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel)){
if(!ENTITY::DOES_ENTITY_EXIST(obLocal_37)) func_68();
if(!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_37)) func_68();
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen")) HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
if(!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel)) HUD::LINK_NAMED_RENDERTARGET(entityModel);
SYSTEM::WAIT(0);
}}
iLocal_35=HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
func_3();
return;
}


void func_54() // Position - 0x1EA7{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37))if(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_screen2")) return;
obLocal_37=0;
obLocal_37=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), uLocal_31, true, true, false);
ENTITY::SET_ENTITY_HEADING(obLocal_37, fLocal_34);
ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
obLocal_39=0;
obLocal_39=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), uLocal_31, true, true, false);
ENTITY::SET_ENTITY_HEADING(obLocal_39, fLocal_34);
ENTITY::FREEZE_ENTITY_POSITION(obLocal_39, true);
ENTITY::SET_ENTITY_VISIBLE(obLocal_39, false, false);
return;
}


void func_55(int* piParam0) // Position - 0x1F24{
func_56(piParam0, 0f);
return;
}


void func_56(int* piParam0, float fParam1) // Position - 0x1F33{
piParam0->f_1=func_32(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


void func_57() // Position - 0x1F5E{
return;
}
BOOL func_58(int iParam0) // Position - 0x1F66{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_59() // Position - 0x1F92{
uLocal_31={
ENTITY::GET_ENTITY_COORDS(obLocal_37, true) 
};
fLocal_34=ENTITY::GET_ENTITY_HEADING(obLocal_37);
func_61();
if(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("prop_tv_03")){
if(SYSTEM::VDIST(uLocal_31, -9.541955f, -1440.9166f, 31.346916f) < 3f){
iLocal_43=0;
uLocal_79={
-9.8135f, -1440.9128f, 31.3654f 
};
uLocal_82={
0f, 0f, -134.3211f 
};
uLocal_88={
-9.3078f, -1440.931f, 30.1015f 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
}}elseif(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("prop_trev_tv_01")){
if(SYSTEM::VDIST(uLocal_31, 1978.425f, 3819.6572f, 34.26763f) < 3f){
iLocal_43=2;
uLocal_79={
1978.2303f, 3819.6504f, 34.2724f 
};
uLocal_82={
0f, 0f, -105.15f 
};
uLocal_88={
1978.3303f, 3819.717f, 32.4501f 
};
func_60();
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_TREVORS_TRAILER", 64);
}}elseif(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("prop_tv_flat_01")){
if(SYSTEM::VDIST(uLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f){
iLocal_43=1;
uLocal_79={
2.5724f, 527.9989f, 176.1619f 
};
uLocal_82={
0f, 0f, -29.9488f 
};
uLocal_88={
3.6654f, 529.8486f, 173.6281f 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
}}elseif(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("prop_tv_flat_02")){
if(SYSTEM::VDIST(uLocal_31, -1160.6947f, -1520.7448f, 10.49168f) < 3f){
iLocal_43=3;
uLocal_79={
-1160.5024f, -1520.7598f, 10.7393f 
};
uLocal_82={
0f, 0f, 60.061f 
};
uLocal_88={
-1160.143f, -1520.4946f, 9.6555f 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "TREVOR_APARTMENT_RADIO", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FLOYDS_APARTMENT", 64);
}}elseif(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_scre_off")){
if(SYSTEM::VDIST(uLocal_31, -802.25275f, 173.03743f, 74.35708f) < 3f){
iLocal_43=4;
uLocal_79={
-802.8972f, 172.537f, 74.5801f 
};
uLocal_82={
0f, 0f, -69.0273f 
};
uLocal_88={
-800.7292f, 173.2194f, 71.8348f 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
}}elseif(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("des_tvsmash_start")){
if(SYSTEM::VDIST(uLocal_31, -809.962f, 170.919f, 75.7407f) < 3f){
iLocal_43=5;
uLocal_79={
-808.3051f, 171.2623f, 77.2822f 
};
uLocal_82={
1.8886f, 0f, 110.9232f 
};
uLocal_88={
-809.962f, 170.919f, 75.7407f 
};
TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
}}
return;
}


void func_60() // Position - 0x2281{
obLocal_38=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), uLocal_31, true, true, false);
ENTITY::SET_ENTITY_HEADING(obLocal_38, fLocal_34);
ENTITY::SET_ENTITY_VISIBLE(obLocal_38, true, false);
ENTITY::FREEZE_ENTITY_POSITION(obLocal_38, true);
return;
}


void func_61() // Position - 0x22B2{
GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_41(1), false);
if(func_58(22)) GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_41(12), false);
else GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_41(2), false);
return;
}


void func_62() // Position - 0x22E8{
if(iLocal_43==-1) return;
if(Global_32224[iLocal_43 /*11*/].f_10==0){
if(iLocal_86==1){
if(ENTITY::DOES_ENTITY_EXIST(obLocal_40)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_40, false);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, false);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_39, false);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_38)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, false);
iLocal_86=0;
}}elseif(iLocal_86==0){
if(ENTITY::DOES_ENTITY_EXIST(obLocal_40)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_40, true);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_39, true);
if(ENTITY::DOES_ENTITY_EXIST(obLocal_38)) ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, true);
iLocal_86=1;
}
return;
}
BOOL func_63(int iParam0) // Position - 0x239B{
return Global_43257==iParam0;
}
BOOL func_64(int iParam0) // Position - 0x23A9{
if(iParam0 !=-1)if(Global_32224[iParam0 /*11*/].f_5) return true;
return false;
}
BOOL func_65() // Position - 0x23C8{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_66() // Position - 0x23E5{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
return false;
}


void func_67() // Position - 0x2408{
return;
}


void func_68() // Position - 0x2410{
if(iLocal_43==-1) SCRIPT::TERMINATE_THIS_THREAD();
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
if(iLocal_43 !=-1){
func_1();
Global_32224[iLocal_43 /*11*/].f_6=0;
Global_32224[iLocal_43 /*11*/].f_7=0;
Global_32224[iLocal_43 /*11*/].f_8=0;
Global_32224[iLocal_43 /*11*/].f_4=0;
Global_32224[iLocal_43 /*11*/].f_5=0;
Global_32224[iLocal_43 /*11*/].f_2=0;
Global_32224[iLocal_43 /*11*/]=-1;
Global_32224[iLocal_43 /*11*/].f_1=0;
Global_32224[iLocal_43 /*11*/].f_10=0;
}
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
SYSTEM::WAIT(0);
func_69();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_62)) AUDIO::STOP_AUDIO_SCENE(&uLocal_62);
AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
func_2();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_69() // Position - 0x24D7{
func_52();
if(ENTITY::DOES_ENTITY_EXIST(obLocal_37)){
if(ENTITY::GET_ENTITY_MODEL(obLocal_37)==joaat("v_ilev_mm_screen2")){
OBJECT::DELETE_OBJECT(&obLocal_37);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
}}
if(ENTITY::DOES_ENTITY_EXIST(obLocal_39)){
OBJECT::DELETE_OBJECT(&obLocal_39);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
}
if(ENTITY::DOES_ENTITY_EXIST(obLocal_38)){
OBJECT::DELETE_OBJECT(&obLocal_38);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
}
return;
}