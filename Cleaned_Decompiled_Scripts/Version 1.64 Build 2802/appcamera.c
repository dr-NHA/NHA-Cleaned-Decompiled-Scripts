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
char* sLocal_19[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
char* sLocal_33[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
int iLocal_47=0;
char* sLocal_48[7]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
bool bLocal_62=0;
bool bLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
struct<3> Local_67={
0, 0, 0 
};
struct<3> Local_70={
0, 0, 0 
};
float fLocal_73=0f;
float fLocal_74=0f;
float fLocal_75=0f;
float fLocal_76=0f;
float fLocal_77=0f;
struct<3> Local_78={
0, 0, 0 
};
struct<3> Local_81={
0, 0, 0 
};
struct<3> Local_84={
0, 0, 0 
};
struct<3> Local_87={
0, 0, 0 
};
struct<3> Local_90={
0, 0, 0 
};
struct<3> Local_93={
0, 0, 0 
};
float fLocal_96=0f;
float fLocal_97=0f;
float fLocal_98=0f;
float fLocal_99=0f;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
int iLocal_106=0;
int iLocal_107=0;
int iLocal_108=0;
int iLocal_109=0;
int iLocal_110=0;
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
float fLocal_114=0f;
int iLocal_115=0;
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
int iLocal_120=0;
int iLocal_121=0;
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
int iLocal_126=0;
int iLocal_127=0;
int iLocal_128=0;
int iLocal_129=0;
int iLocal_130=0;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
int iLocal_137=0;
int iLocal_138=0;
int iLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
int iLocal_142=0;
int iLocal_143=0;
int iLocal_144=0;
char cLocal_145[16]="";
var uLocal_147=0;
var uLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
int iLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
int iLocal_156=0;
float fLocal_157=0f;
float fLocal_158=0f;
float fLocal_159=0f;
float fLocal_160=0f;
float fLocal_161=0f;
float fLocal_162=0f;
float fLocal_163=0f;
float fLocal_164=0f;
#endregion

void __EntryFunction__(){
int iVar0;
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
iLocal_59=1;
bLocal_62=true;
bLocal_63=true;
fLocal_73=0f;
fLocal_74=172f;
fLocal_77=0.7f;
iLocal_137=1200;
iLocal_138=1200;
iLocal_139=166;
fLocal_157=0.5f;
fLocal_158=0.85f;
fLocal_159=0.5f;
fLocal_160=-0.25f;
fLocal_161=0.25f;
fLocal_162=0.3f;
fLocal_163=0.3f;
fLocal_164=0.075f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
fLocal_77=1f;
}else{
fLocal_77=0.7f;
}
if(!func_174()){
Global_4541021=99;
Global_4541022=99;
iLocal_57=99;
}else{
Global_4541021=0;
Global_4541022=0;
}
sLocal_19[0]="No_Filter";
sLocal_19[1]="phone_cam1";
sLocal_19[2]="phone_cam2";
sLocal_19[3]="phone_cam3";
sLocal_19[4]="phone_cam4";
sLocal_19[5]="phone_cam5";
sLocal_19[6]="phone_cam6";
sLocal_19[7]="phone_cam7";
sLocal_19[8]="phone_cam8";
sLocal_19[9]="phone_cam9";
sLocal_19[10]="phone_cam10";
sLocal_19[11]="phone_cam11";
sLocal_19[12]="phone_cam12";
sLocal_33[0]="No_Border";
sLocal_33[1]="frame1";
sLocal_33[2]="frame2";
sLocal_33[3]="frame3";
sLocal_33[4]="frame4";
sLocal_33[5]="frame5";
sLocal_33[6]="frame6";
sLocal_33[7]="frame7";
sLocal_33[8]="frame8";
sLocal_33[9]="frame9";
sLocal_33[10]="frame10";
sLocal_33[11]="frame11";
sLocal_33[12]="frame12";
sLocal_48[0]="No_Expression";
sLocal_48[1]="mood_Aiming_1";
sLocal_48[2]="mood_Happy_1";
sLocal_48[3]="mood_smug_1";
sLocal_48[4]="mood_Injured_1";
sLocal_48[5]="mood_sulk_1";
sLocal_48[6]="mood_Angry_1";
func_173();
if(func_172(1, 1, !iLocal_64, 1)){
iLocal_64=1;
}
func_171();
iLocal_112=AUDIO::GET_SOUND_ID();
if(Global_20328==0){
fLocal_96=0.207f;
fLocal_97=0.158f;
fLocal_98=0.207f;
fLocal_99=0.335f;
}else{
fLocal_96=0.24f;
fLocal_97=0.258f;
fLocal_98=0.24f;
fLocal_99=0.435f;
}
Global_22758=0;
Global_22759=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())){
Global_22758=1;
}
if(GRAPHICS::GET_USINGNIGHTVISION()){
Global_22758=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)){
Global_22758=1;
}
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1)){
Global_22758=1;
}
if(PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
Global_22758=1;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_131==1){
Global_22758=1;
}
uLocal_149=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((ENTITY::GET_ENTITY_MODEL(uLocal_149)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_149)==joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_149)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_149)==joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_149)==joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_149, func_170(PLAYER::PLAYER_PED_ID(), 1)))){
Global_22758=1;
}elseif(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_149, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_149) > 0f){
if(!Global_78558){
if(!func_169(0)){
TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_149, 6, 4000);
}}}}}}
if(Global_78558){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
}}
MISC::CLEAR_BIT(&Global_8253, 21);
func_168(0);
MISC::SET_BIT(&Global_8253, 17);
if(Global_20325==0){
func_167();
}else{
uLocal_140=GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
uLocal_141=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_141)){
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
}
if(Global_78558){
iLocal_144=2;
}else{
switch (func_166()){
case 0:
iLocal_144=2;
break;
case 2:
iLocal_144=2;
break;
case 3:
iLocal_144=2;
break;
}}
func_165(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
func_164(uLocal_140, "CLOSE_SHUTTER");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
Local_78={
Global_20343 
};
Local_81={
Global_20336[Global_20328 /*3*/] 
};
Global_22759=1;
iLocal_118=1;
iLocal_119=1;
iLocal_120=1;
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
iLocal_124=0;
iLocal_125=0;
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}
if(iLocal_131==0){
MISC::CLEAR_BIT(&Global_8255, 3);
}
func_162();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
if(NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV()){}
if(Global_4718592.f_160554){}
if(Global_4718592.f_160556==1){
iLocal_156=1;
}
if(iLocal_156==1){}
while (true){
SYSTEM::WAIT(0);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
PAD::SET_INPUT_EXCLUSIVE(0, 186);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
if(func_161()){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(!Global_113648.f_14053.f_81){
if(!MISC::IS_BIT_SET(Global_4542297, 13)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(Global_8254, 28)){
if((iLocal_128 && iLocal_131==0) && !func_161()){
MISC::SET_BIT(&Global_4542297, 13);
Global_113648.f_14053.f_81=1;
func_160("CELL_FOC_HLP", -1);
}}}}}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(Global_4718592.f_160553==0 && Global_4718592.f_160554==0){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
func_159();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
if(iLocal_150==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20356);
}
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
if((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_161()){
iLocal_130=1;
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(MISC::IS_BIT_SET(Global_8254, 3)){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_151()){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())){
if(func_150()){
}else{
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
if(Global_78558==1){
Global_20383.f_1=3;
}}
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f){
Global_20383.f_1=3;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_149();
iLocal_149=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_149) < 0f){
func_146(0);
}
if(iLocal_115==1){
if(iLocal_116==1){
if(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()){
func_146(0);
}
}
elseif(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()){
iLocal_116=1;
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}}}elseif(Global_78558==0){
if(MISC::IS_BIT_SET(Global_8253, 18)){
func_145();
if((Global_20383==0 || Global_20383==1) || Global_20383==2){
if(!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID())){
if(PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
}else{
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
}}}}
if(iLocal_142){
func_144();
}
if(Global_20383.f_1 < 4){
}
if(iLocal_153==0){
if(iLocal_103==0){
if(iLocal_104==0){
if(iLocal_111==0){
if(Global_20383.f_1 > 3){
if(iLocal_150){
func_142();
if(Global_22763==0 && Global_22760==6){
HUD::CLEAR_FLOATING_HELP(0, 1);
HUD::BUSYSPINNER_OFF();
iLocal_150=0;
func_141();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_140();
iLocal_109++;
if(func_174()){
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
else{
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
iLocal_132=0;
iLocal_133=0;
iLocal_134=0;
iLocal_127=0;
func_129();
}
if(Global_22760==0){
iLocal_150=0;
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_128();
iLocal_132=0;
iLocal_133=0;
iLocal_134=0;
iLocal_127=0;
func_129();
if(func_174()){
if(Global_4541022==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
}
elseif(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_127();
func_126(1);
}}elseif(Global_20383.f_1 !=9){
if(Global_22759==1){
if(Global_22758==0){
func_125();
}
}
elseif((Global_8861 - Global_8860) > Global_8862){
if(CAM::IS_SCREEN_FADED_OUT() && func_124()){
if(func_123() && iLocal_127){
}elseif(iLocal_127==0){
MISC::SET_GAME_PAUSED(0);
AUDIO::STOP_SOUND(iLocal_112);
iLocal_143=0;
if(Global_22758==0){
func_140();
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_128=0;
iLocal_118=1;
iLocal_119=1;
iLocal_120=1;
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
iLocal_142=0;
func_115(0, 1);
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
func_113(1);
}}
}
if(func_112(2, Global_20351, 0)){
if(func_161()){
if(((Global_1935176 || Global_1574964) || Global_22761) || MISC::IS_BIT_SET(Global_8253, 21)){
}elseif(func_123() && iLocal_127){
}elseif(!func_124()){
if(iLocal_127==0){
CAM::DO_SCREEN_FADE_OUT(500);
iLocal_143=0;
func_115(1, 1);
func_111(1);
}}}elseif(func_123() && iLocal_127){
}elseif(iLocal_127==0){
MISC::SET_GAME_PAUSED(0);
AUDIO::STOP_SOUND(iLocal_112);
iLocal_143=0;
if(Global_22758==0){
func_140();
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_128=0;
iLocal_118=1;
iLocal_119=1;
iLocal_120=1;
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
iLocal_142=0;
func_115(0, 1);
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
}
}
if(iLocal_101==0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_110();
iLocal_101=1;
}
}
elseif(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_110();
iLocal_101=0;
}
if(iLocal_102==0){
if(MISC::IS_BIT_SET(Global_8253, 28)){
func_110();
iLocal_102=1;
}
}
elseif(!MISC::IS_BIT_SET(Global_8253, 28)){
func_110();
iLocal_102=0;
}
if(Global_22758==1){
func_99();
}
elseif(Global_20383.f_1 > 4){
if(iLocal_124==1 && iLocal_125==0){
func_95();
}
if(iLocal_124==0 && iLocal_125==1){
func_128();
if(iLocal_136==1 || iLocal_136==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_164(uLocal_140, "CLOSE_SHUTTER");
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
}}
if(func_174()){
if(Global_4541022==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
}}elseif(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_144();
func_159();
iLocal_132=0;
iLocal_133=0;
iLocal_134=0;
iLocal_127=0;
func_129();
iLocal_136=0;
func_164(uLocal_140, "OPEN_SHUTTER");
}
func_127();
func_126(1);
func_93();
}
}
if(iLocal_143==1){
func_90();
}
if(iLocal_129){
if(SYSTEM::TIMERB() > 500){
iLocal_128=1;
iLocal_129=0;
MISC::SET_BIT(&Global_8253, 18);
if(Global_22758==0){
func_115(1, 1);
}
}
}
if(iLocal_127==0){
if(iLocal_128 && Global_22758==0){
if((iLocal_130==0 && iLocal_125==0) && Global_22761==0){
func_12();
}
}
else{
func_94();
}
}
elseif(iLocal_124==0){
func_7();
}}}
}}}else{
if(Global_20383.f_1 > 3){
if(Global_22759==1){
if(Global_22758==0){
func_125();
}
}}
func_6();
}}else{
if(iLocal_155==1){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
}
if(iLocal_155==2){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
}
if(iLocal_155==6){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
}
if(iLocal_155==3){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
}
if(iLocal_155==7){
if(MISC::IS_XBOX360_VERSION() || func_5()){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
}
if(MISC::IS_PS3_VERSION() || func_4()){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
}
if(MISC::IS_PC_VERSION()){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
}}
if(iLocal_155==4){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
}
if(iLocal_155==5){
iVar0=NETWORK::NETWORK_GET_AGE_GROUP();
switch (iVar0){
case -1:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
break;
case 0:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
break;
case 1:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
break;
case 2:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
break;
default:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
break;
}}
if(iLocal_155==0){
}
if(iLocal_155==2 || iLocal_155==3){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_154=1;
}
if(iLocal_154==1){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
iLocal_154=0;
HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
HUD::OPEN_SOCIAL_CLUB_MENU();
}}}elseif(iLocal_155==7){
if(func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
iLocal_111=0;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
iLocal_111=0;
}
if(!func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(2, Global_20355)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
if(MISC::IS_BIT_SET(Global_8254, 28)){
iLocal_111=0;
}else{
iLocal_111=2;
}
iLocal_107=MISC::GET_GAME_TIMER();
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
}}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_153=0;
iLocal_155=0;
func_115(0, 1);
}}}
iLocal_108=MISC::GET_GAME_TIMER();
if(func_161()){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(func_3() || iLocal_130){
func_1(0);
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
Global_22758=0;
Global_22759=0;
Global_22761=0;
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_141);
MISC::SET_GAME_PAUSED(0);
if(Global_20586==1){
MISC::SET_BIT(&Global_8253, 17);
}else{
MISC::CLEAR_BIT(&Global_8253, 17);
}
HUD::CLEAR_FLOATING_HELP(0, 1);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
MISC::CLEAR_BIT(&Global_8255, 3);
MISC::CLEAR_BIT(&Global_4542297, 3);
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_22762=1;
AUDIO::STOP_SOUND(iLocal_112);
AUDIO::RELEASE_SOUND_ID(iLocal_112);
HUD::BUSYSPINNER_OFF();
func_117(1);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
if(Global_4541022 > 0 && Global_4541022 < 13){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4541022]);
}
MISC::CLEAR_BIT(&Global_8253, 18);
if(func_161()){
func_115(1, 1);
}else{
func_115(0, 1);
}
if(func_172(0, 1, iLocal_64, 1)){
iLocal_64=0;
}
SCRIPT::TERMINATE_THIS_THREAD();
}}}


void func_1(int iParam0){
if(func_2()){
if(iParam0==1){
MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(1);
}elseif(Global_20383.f_1 > 3){
MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(0);
}}}

int func_2(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78558){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542575 || iVar2){
return 1;
}
return 1;
}

int func_3(){
if(((Global_20383.f_1==1 || Global_20383.f_1==3) || Global_20383.f_1==0) || Global_20327==1){
Global_20370=1;
return 1;
}
return 0;
}


bool func_4(){
return (MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A());
}


var func__5(){
return (MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33());
}


void func_6(){
iLocal_106=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
switch (iLocal_106){
case 0:
iLocal_103=0;
iLocal_109=GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
iLocal_110=GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
if(iLocal_104==1){
if(iLocal_127==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140)){
if(func_174()){
if(Global_4541022==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
else{
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
iLocal_104=0;
}
HUD::BUSYSPINNER_OFF();
break;
case 1:
if(!HUD::BUSYSPINNER_IS_ON()){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}
break;
case 2:
if(MISC::IS_BIT_SET(Global_8254, 28)){
iLocal_103=0;
iLocal_109=0;
iLocal_110=0;
}else{
Global_20383.f_1=3;
Global_22762=1;
}
HUD::BUSYSPINNER_OFF();
break;
}}


void func_7(){
if(func_112(2, Global_20352, 0)){
func_1(0);
if(MISC::IS_BIT_SET(Global_8254, 28)){
MISC::SET_GAME_PAUSED(0);
SYSTEM::SETTIMERB(0);
func_141();
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_140();
iLocal_136=1;
}elseif(func_11()){
if(MISC::IS_BIT_SET(Global_8254, 14)){
func_160("CELL_299", -1);
}else{
func_140();
func_10();
}}else{
iLocal_153=1;
func_115(1, 1);
}}
if(MISC::IS_BIT_SET(Global_8253, 22)){
func_1(0);
while (SYSTEM::TIMERA() < 2000){
SYSTEM::WAIT(0);
func_159();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_94();
func_149();
func_144();
}
MISC::SET_GAME_PAUSED(0);
func_141();
SYSTEM::SETTIMERB(0);
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_129();
func_140();
}
if(func_112(2, Global_20356, 0)){
func_1(0);
if(func_123() || MISC::IS_BIT_SET(Global_8254, 28)){
}else{
MISC::SET_GAME_PAUSED(0);
SYSTEM::SETTIMERB(0);
iLocal_136=1;
func_141();
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_140();
}}
if(MISC::IS_BIT_SET(Global_8253, 28)){
if(func_112(2, Global_20355, 0)){
func_1(0);
MISC::SET_GAME_PAUSED(0);
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_159();
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_159();
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22762=1;
iLocal_143=0;
iLocal_126=0;
func_115(0, 1);
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_128=0;
iLocal_118=1;
iLocal_119=1;
iLocal_120=1;
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
func_8();
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
if(!Global_2793044.f_6749){
MISC::SET_BIT(&Global_8253, 9);
}
iLocal_142=0;
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}


void func_8(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, 1);
func_9();
}}


void func_9(){
if(func_2()){
MOBILE::CELL_SET_INPUT(5);
}}


void func_10(){
iLocal_150=1;
Global_22763=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
}

int func_11(){
if(iLocal_107==iLocal_108){
if(iLocal_105){
iLocal_105=1;
}}
if(Global_20383.f_1 < 4){
return 0;
}
if(iLocal_109==iLocal_110 || iLocal_109 > iLocal_110){
iLocal_155=1;
iLocal_152=2;
return 0;
}
return 1;
}


void func_12(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=179;
iVar1=21;
}else{
iVar0=228;
iVar1=229;
}
if(iLocal_131){
func_85();
func_81();
func_80();
fLocal_73=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_74=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
if(iLocal_133==0){
if(PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1)){
iLocal_133=1;
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8253, 28)){
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_CAM_SELFIE_2");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_CAM_SELFIE_2");
}
func_66();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1)){
iLocal_133=0;
func_129();
}
if(iLocal_134==0){
if(PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0)){
iLocal_134=1;
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8253, 28)){
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
}elseif(!func_161()){
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
}
func_65();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0)){
iLocal_134=0;
func_129();
}}else{
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}
if(PAD::HAVE_CONTROLS_CHANGED(2)){
func_129();
}
func_149();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
}
if(func_161()){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_156==0) && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(MISC::IS_BIT_SET(Global_4542297, 2)){
MISC::CLEAR_BIT(&Global_4542297, 2);
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
MISC::SET_BIT(&Global_4542297, 2);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}}
if(iLocal_131){
if(iLocal_132==1){
iLocal_132=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_64("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(!func_63(14)){
if(MISC::IS_BIT_SET(Global_4542297, 10)){
if((Global_78558==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&Global_4542297, 10);
}}}elseif(MISC::IS_BIT_SET(Global_4542297, 10)){
MISC::CLEAR_BIT(&Global_4542297, 10);
}
iLocal_66=MISC::GET_GAME_TIMER();
if((iLocal_66 - iLocal_65) > 1500){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_70={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_70, Local_67, 1) > 5f){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
iLocal_65=MISC::GET_GAME_TIMER();
}}}elseif(iLocal_132){
if(!PAD::IS_CONTROL_PRESSED(0, 182) && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
iLocal_132=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_64("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}elseif(PAD::IS_CONTROL_PRESSED(0, 182) && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
iLocal_132=1;
if(!func_63(14)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
func_64("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(func_174()){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_156==0) && !func_161()){
if(iLocal_131){
iLocal_57++;
if(iLocal_57 > 0 && iLocal_57 < 7){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
if(Global_20383==0){
iVar4=0;
iVar2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
if(iVar2==20 || iVar2==14){
iVar4=1;
}
iVar3=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 1);
if(iVar3 !=-1){
iVar4=1;
}
if(iVar4==1){
if((((iLocal_57==2 || iLocal_57==3) || iLocal_57==4) || iLocal_57==8) || iLocal_57==9){
if(iVar2==-1 && iVar3 > -1){
if(iLocal_57==3){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
}
}}else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
}}else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
}
}
else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
}}}
if(iLocal_57==7 || iLocal_57 > 7){
iLocal_57=0;
}
if(iLocal_57==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
}}}}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_156==0) && !func_161()){
if(iLocal_131){
if(bLocal_62==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
if(iLocal_61==0){
iLocal_61=1;
iLocal_60=1;
if(MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4541021], "phone_cam12DUMMY")){
}
else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}}else{
iLocal_61=0;
iLocal_60=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}}}elseif(bLocal_63==1){
if(iLocal_60==0){
iLocal_60=1;
iLocal_61=1;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}else{
iLocal_60=0;
iLocal_61=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}}}}
if(iLocal_59==1 && !func_161()){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_156==0){
if(func_174()){
Global_4541022++;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
}
if(Global_4541022==13){
func_126(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[(Global_4541022 - 1)]);
Global_4541022=0;
func_61();
if(iLocal_47==1){
MISC::CLEAR_BIT(&Global_4542297, 2);
iLocal_47=0;
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(Global_4541022 > 0 && Global_4541022 < 13){
iLocal_59=0;
iLocal_58=0;
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_33[Global_4541022], 0);
}}}
if(Global_4541022 > 0){
if(iLocal_59==0){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_33[Global_4541022])){
iLocal_58=1;
iLocal_59=1;
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
func_126(1);
}
if(iLocal_47==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
iLocal_47=1;
}}
MISC::SET_BIT(&Global_4542297, 2);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_33[Global_4541022], 0);
}}
if(iLocal_58==1){
if(Global_4541022==1 || Global_4541022==3){
}
if(Global_4541022==2 || Global_4541022==4){
}}}
if((PAD::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_156==0) && !func_161()){
if(func_174()){
func_117(0);
Global_4541021++;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
}
if(Global_4541021==13){
Global_4541021=0;
}
if(Global_4541021==0){
if(func_174()){
func_117(0);
}}else{
func_127();
}
func_60();
}
if((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_156==0) && !func_161()){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_164(uLocal_140, "CLOSE_SHUTTER");
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_139) && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
if(iLocal_131==0){
AUDIO::STOP_SOUND(iLocal_112);
iLocal_131=1;
func_59(1);
func_58();
MISC::SET_BIT(&Global_8255, 3);
iLocal_65=MISC::GET_GAME_TIMER();
}else{
iLocal_133=0;
iLocal_134=0;
func_59(0);
iLocal_131=0;
MISC::CLEAR_BIT(&Global_8255, 3);
}
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
func_164(uLocal_140, "OPEN_SHUTTER");
if(func_174()){
if(Global_4541022==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}elseif(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_144();
func_159();
if(MISC::IS_BIT_SET(Global_8253, 28)){
StringCopy(&cLocal_145, "CELL_296", 16);
func_56();
}else{
StringCopy(&cLocal_145, "CELL_295", 16);
func_30();
}}}}
if(iLocal_131==0){
if(iLocal_113==0){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41)){
fLocal_114=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_114 > 1f && fLocal_114 < 4.5f){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_112)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_20372, 1);
}}else{
AUDIO::STOP_SOUND(iLocal_112);
}
iLocal_113=1;
}}elseif(PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41)){
fLocal_114=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_114 > 1f && fLocal_114 < 4.5f){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_112)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_20372, 1);
}}else{
AUDIO::STOP_SOUND(iLocal_112);
}}else{
AUDIO::STOP_SOUND(iLocal_112);
}}
if((func_112(2, Global_20352, 0) && !func_124()) && !func_112(2, Global_20351, 0)){
fLocal_75=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_76=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
MISC::SET_BIT(&Global_8253, 21);
AUDIO::STOP_SOUND(iLocal_112);
iLocal_127=1;
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20372, 1);
func_164(uLocal_140, "CLOSE_SHUTTER");
Local_84={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_84, 0);
if(!func_174()){
func_117(1);
}
Global_22761=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
while (Global_22760 < 6 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
func_149();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
MOBILE::CELL_CAM_ACTIVATE(0, 0);
if(Global_20325){
func_1(1);
}
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_138) && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
SYSTEM::SETTIMERA(0);
func_164(uLocal_140, "OPEN_SHUTTER");
MISC::CLEAR_BIT(&Global_8253, 21);
func_129();
if(Global_20383.f_1 > 3){
if(Global_78558){
func_23(1087, 1, -1);
func_22();
func_19(-1492367786, 23, 0);
}else{
switch (func_13()){
case 0:
STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
break;
case 1:
STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
break;
case 2:
STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
break;
}
func_22();
}
func_126(0);
}
func_144();
}
if(MISC::IS_BIT_SET(Global_8253, 28)){
if(func_112(2, Global_20355, 0)){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_159();
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_159();
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22762=1;
iLocal_143=0;
iLocal_126=1;
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_128=0;
iLocal_118=1;
iLocal_119=1;
iLocal_120=1;
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
func_8();
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
if(!Global_2793044.f_6749){
MISC::SET_BIT(&Global_8253, 9);
}
MISC::SET_GAME_PAUSED(0);
iLocal_142=0;
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}

int func_13(){
func_14();
return Global_113648.f_2365.f_539.f_4321;
}


void func_14(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_17(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_16(PLAYER::PLAYER_PED_ID());
if(func_15(iVar0) && (!func_63(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_15(Global_113648.f_2365.f_539.f_4321)){
Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
}
Global_113648.f_2365.f_539.f_4323=iVar0;
Global_113648.f_2365.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=145){
Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
}
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
}


bool func_15(int iParam0){
return iParam0 < 3;
}

int func_16(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_17(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_17(int iParam0){
if(func_15(iParam0)){
return func_18(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__18(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_19(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_21(iParam1, iParam2)){
iVar0=func_20();
Global_2694418[iVar0]=iParam1;
Global_2694429[iVar0]=iParam0;
}}

int func_20(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694418[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_21(int iParam0, var uParam1){
if(Global_1575048){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575060) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_22(){
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
iLocal_124=1;
iLocal_125=0;
Global_20320={
Global_20336[Global_20328 /*3*/] 
};
func_115(0, 1);
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
if(!MISC::IS_BIT_SET(Global_8254, 28)){
if(NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV()==0){
if(MISC::IS_XBOX360_VERSION()){
if(iLocal_117==0){
iLocal_117=1;
}}}}}


void func_23(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_27(iParam0, func_28(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_26(iParam0)){
func_25(iParam0, iVar0, iParam2, 1, 0);
}else{
func_24(iParam0, iVar0, iParam2, 1);
}}


void func_24(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
iVar0=Global_2805027[iParam0 /*3*/][func_28(uParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_28(uParam2)]=iParam1;
break;
case 789:
Global_1665572[func_28(uParam2)]=iParam1;
break;
case 790:
Global_1665578[func_28(uParam2)]=iParam1;
break;
case 791:
Global_1665584[func_28(uParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_28(uParam2)]=iParam1;
break;
case 778:
Global_1665536[func_28(uParam2)]=iParam1;
break;
case 779:
Global_1665542[func_28(uParam2)]=iParam1;
break;
case 780:
Global_1665548[func_28(uParam2)]=iParam1;
break;
case 781:
Global_1665554[func_28(uParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_28(uParam2)]=iParam1;
break;
case 768:
Global_1665506[func_28(uParam2)]=iParam1;
break;
case 769:
Global_1665512[func_28(uParam2)]=iParam1;
break;
case 770:
Global_1665518[func_28(uParam2)]=iParam1;
break;
case 771:
Global_1665524[func_28(uParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_28(uParam2)]=iParam1;
break;
case 758:
Global_1665596[func_28(uParam2)]=iParam1;
break;
case 759:
Global_1665602[func_28(uParam2)]=iParam1;
break;
case 760:
Global_1665608[func_28(uParam2)]=iParam1;
break;
case 761:
Global_1665614[func_28(uParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_28(uParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_28(uParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_28(uParam2)]=iParam1;
break;
case 640:
Global_1665638[func_28(uParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_28(uParam2)]=iParam1;
break;
case 1878:
Global_2851323[0 /*3*/][func_28(uParam2)]=iParam1;
break;
case 2269:
Global_2851323[1 /*3*/][func_28(uParam2)]=iParam1;
break;
case 2932:
Global_2851323[2 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3061:
Global_2851323[3 /*3*/][func_28(uParam2)]=iParam1;
break;
case 12424:
Global_2851502[func_28(uParam2)]=iParam1;
break;
case 765:
Global_1665650[func_28(uParam2)]=iParam1;
break;
case 766:
Global_1665656[func_28(uParam2)]=iParam1;
break;
case 767:
Global_1665662[func_28(uParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_28(uParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_28(uParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_28(uParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_28(uParam2)]=iParam1;
break;
case 3056:
Global_2851411[0 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3057:
Global_2851411[1 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3058:
Global_2851411[2 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3059:
Global_2851411[3 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3060:
Global_2851411[4 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3639:
Global_2851505[0 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3640:
Global_2851505[1 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3641:
Global_2851505[2 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3642:
Global_2851505[3 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3643:
Global_2851505[4 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3644:
Global_2851521[0 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3645:
Global_2851521[1 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3646:
Global_2851521[2 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3647:
Global_2851521[3 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3648:
Global_2851521[4 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3224:
Global_2851411[5 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3230:
Global_2851323[4 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3666:
Global_2851537[func_28(uParam2)]=iParam1;
break;
case 3667:
Global_2851546[func_28(uParam2)]=iParam1;
break;
case 3668:
Global_2851540[func_28(uParam2)]=iParam1;
break;
case 3669:
Global_2851549[func_28(uParam2)]=iParam1;
break;
case 3670:
Global_2851543[func_28(uParam2)]=iParam1;
break;
case 3671:
Global_2851552[func_28(uParam2)]=iParam1;
break;
case 3692:
Global_2851555[func_28(uParam2)]=iParam1;
break;
case 3232:
Global_2851411[6 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3233:
Global_2851323[5 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3237:
Global_2851411[7 /*3*/][func_28(uParam2)]=iParam1;
break;
case 3235:
Global_2851323[6 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4022:
Global_2851411[8 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4023:
Global_2851323[7 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4025:
Global_2851411[9 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4026:
Global_2851323[8 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4028:
Global_2851411[10 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4029:
Global_2851323[9 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4031:
Global_2851411[11 /*3*/][func_28(uParam2)]=iParam1;
break;
case 4032:
Global_2851323[10 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6112:
Global_2851411[12 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6113:
Global_2851323[11 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6170:
Global_2851411[13 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6171:
Global_2851323[12 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6548:
Global_2851411[14 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6549:
Global_2851323[13 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6561:
Global_2851411[15 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6562:
Global_2851323[14 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6564:
Global_2851411[16 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6565:
Global_2851323[15 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6567:
Global_2851411[17 /*3*/][func_28(uParam2)]=iParam1;
break;
case 6568:
Global_2851323[16 /*3*/][func_28(uParam2)]=iParam1;
break;
case 7286:
Global_2851323[17 /*3*/][func_28(uParam2)]=iParam1;
break;
case 7288:
Global_2851323[18 /*3*/][func_28(uParam2)]=iParam1;
break;
case 7290:
Global_2851323[19 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8013:
Global_2851323[20 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8285:
Global_2851558[func_28(uParam2)]=iParam1;
break;
case 8286:
Global_2851561[func_28(uParam2)]=iParam1;
break;
case 8287:
Global_2851564[func_28(uParam2)]=iParam1;
break;
case 8288:
Global_2851567[func_28(uParam2)]=iParam1;
break;
case 8289:
Global_2851570[func_28(uParam2)]=iParam1;
break;
case 8290:
Global_2851573[func_28(uParam2)]=iParam1;
break;
case 8291:
Global_2851576[func_28(uParam2)]=iParam1;
break;
case 8292:
Global_2851579[func_28(uParam2)]=iParam1;
break;
case 8293:
Global_2851582[func_28(uParam2)]=iParam1;
break;
case 8294:
Global_2851585[func_28(uParam2)]=iParam1;
break;
case 8295:
Global_2851588[func_28(uParam2)]=iParam1;
break;
case 8296:
Global_2851591[func_28(uParam2)]=iParam1;
break;
case 8297:
Global_2851594[func_28(uParam2)]=iParam1;
break;
case 8905:
Global_2851597[func_28(uParam2)]=iParam1;
break;
case 8537:
Global_2851323[21 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8982:
Global_2851411[23 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8980:
Global_2851323[22 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8985:
Global_2851411[24 /*3*/][func_28(uParam2)]=iParam1;
break;
case 8983:
Global_2851323[23 /*3*/][func_28(uParam2)]=iParam1;
break;
case 9624:
Global_2851323[24 /*3*/][func_28(uParam2)]=iParam1;
break;
case 9913:
Global_2851323[25 /*3*/][func_28(uParam2)]=iParam1;
break;
case 10443:
Global_2851411[27 /*3*/][func_28(uParam2)]=iParam1;
break;
case 10441:
Global_2851323[26 /*3*/][func_28(uParam2)]=iParam1;
break;
case 10446:
Global_2851411[28 /*3*/][func_28(uParam2)]=iParam1;
break;
case 10444:
Global_2851323[27 /*3*/][func_28(uParam2)]=iParam1;
break;
default:
break;
}}


void func_25(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805027[iParam0 /*3*/][func_28(uParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_26(int iParam0){
if(Global_1665487){
switch (iParam0){
case 788:
case 789:
case 790:
case 791:
case 8729:
case 778:
case 779:
case 780:
case 781:
case 8731:
case 768:
case 769:
case 770:
case 771:
case 8733:
case 758:
case 759:
case 760:
case 761:
case 8735:
case 1304:
case 7236:
case 640:
case 1279:
case 765:
case 766:
case 767:
case 8734:
case 9538:
case 11803:
case 1237:
case 1878:
case 2269:
case 2932:
case 3061:
case 12424:
case 3056:
case 3057:
case 3058:
case 3059:
case 3060:
case 3235:
case 3237:
case 3639:
case 3640:
case 3641:
case 3642:
case 3643:
case 3644:
case 3645:
case 3646:
case 3647:
case 3648:
case 3230:
case 3224:
case 3666:
case 3667:
case 3668:
case 3669:
case 3670:
case 3671:
case 3692:
case 3233:
case 3232:
case 4023:
case 4022:
case 4026:
case 4025:
case 4029:
case 4028:
case 4032:
case 4031:
case 6113:
case 6112:
case 6171:
case 6170:
case 6536:
case 6535:
case 6549:
case 6548:
case 6562:
case 6561:
case 6565:
case 6564:
case 6568:
case 6567:
case 7286:
case 7288:
case 7290:
case 8285:
case 8286:
case 8287:
case 8288:
case 8289:
case 8290:
case 8291:
case 8292:
case 8293:
case 8294:
case 8295:
case 8296:
case 8297:
case 8905:
case 8013:
case 8537:
case 8980:
case 8982:
case 8983:
case 8985:
case 9624:
case 9913:
case 10441:
case 10443:
case 10444:
case 10446:
return 1;
break;
}}
return 0;
}

int func_27(int iParam0, var uParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805027[iParam0 /*3*/][func_28(uParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_28(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_29();
if(iVar1 > -1){
Global_2804739=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804739=1;
}}
return iVar0;
}


var func__29(){
return Global_1574918;
}


void func_30(){
if(iLocal_156==1){
func_55();
return;
}
if(iLocal_133==0 && iLocal_134==0){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_161()){
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
}
if(iLocal_131){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}}elseif((Global_78558==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62()){
func_53();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
func_52(5f);
func_51(6f);
if(func_32(1)){
func_31(7f);
if(bLocal_62){
func_78(uLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
}
elseif(bLocal_62){
func_78(uLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, 1), "CELL_284");
}
else{
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, 1), "CELL_284");
}}
if(!func_161()){
if(func_174()){
func_52(6f);
func_51(7f);
if(bLocal_63){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
func_52(3f);
func_51(4f);
func_78(uLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
if(!func_161()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161()){
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, 1), "CELL_284");
}
else{
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, 1), "CELL_284");
}}
if(!func_161()){
func_78(uLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
}
if(!func_161()){
if(func_174()){
func_52(7f);
func_51(8f);
if(bLocal_63){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
func_52(3f);
func_51(4f);
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_31(float fParam0){
func_78(uLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 174, 1), "CELL_ACTION");
}

int func_32(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_50(Global_4456522, Global_4456523)){
if(iParam0==0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0)){
return 1;
}}}
return 0;
}


bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
return func_34(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
var uVar0;
var uVar7;
var uVar14;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
if(func_49()){
return 0;
}
uVar0=6;
uVar7=6;
uVar14=7;
if(iParam1==0){
iVar25=3;
}elseif(bParam3){
iVar25=1;
}elseif(bParam4){
iVar25=2;
}else{
iVar25=0;
}
func_42(iParam1, iParam2, &uVar0, &uVar7, &uVar14, iVar25, bParam5);
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar22=func_41(iParam0);
if(!iVar22==-1){
if(func_40(&uVar0, iVar22)){
return 1;
}}}else{
iVar23=func_39(iParam0);
if(!iVar23==-1){
if(func_37(&uVar7, iVar23)){
return 1;
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar24=func_36(iParam0);
if(!iVar24==0){
if(func_35(&uVar14, iVar24)){
return 1;
}}}}
return 0;
}

int func_35(var uParam0, int iParam1){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
if(!iVar0 < *uParam0){
return 0;
}
if(MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32))){
return 1;
}
return 0;
}


var func__36(int iParam0){
var uVar0;
uVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
return uVar0;
}


bool func_37(var uParam0, int iParam1){
return func_38(uParam0, iParam1);
}

int func_38(var uParam0, int iParam1){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
if(!iVar0 < *uParam0){
return 0;
}
if(MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32))){
return 1;
}
return 0;
}


var func__39(int iParam0){
var uVar0;
uVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return uVar0;
}


bool func_40(var uParam0, int iParam1){
return func_38(uParam0, iParam1);
}


var func__41(int iParam0){
var uVar0;
uVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return uVar0;
}


void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_48(uParam4, 91, 1);
switch (iParam0){
case 1:
case 0:
func_47(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
break;
case 2:
switch (iParam1){
case 3:
switch (iParam5){
case 0:
func_46(uParam3, 13, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 1:
func_46(uParam3, 4, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 2:
func_46(uParam3, 13, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 39, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 38, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
}
break;
case 5:
case 24:
switch (iParam5){
case 0:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_48(uParam4, 136, 1);
func_48(uParam4, 138, 1);
func_48(uParam4, 139, 1);
func_48(uParam4, 143, 1);
func_48(uParam4, 144, 1);
func_48(uParam4, 145, 1);
func_48(uParam4, 147, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 1:
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 2:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_48(uParam4, 136, 1);
func_48(uParam4, 138, 1);
func_48(uParam4, 139, 1);
func_48(uParam4, 143, 1);
func_48(uParam4, 144, 1);
func_48(uParam4, 145, 1);
func_48(uParam4, 147, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
}
break;
case 59:
switch (iParam5){
case 0:
func_46(uParam3, 66, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 77, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 60:
case 63:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 61:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 62:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 64:
case 65:
case 66:
switch (iParam5){
case 0:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 10:
switch (iParam5){
case 0:
func_46(uParam3, 3, 1);
func_46(uParam3, 4, 1);
func_46(uParam3, 6, 1);
func_46(uParam3, 10, 1);
func_46(uParam3, 54, 1);
func_46(uParam3, 55, 1);
func_46(uParam3, 56, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 37, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 55, 1);
func_46(uParam3, 106, 1);
func_46(uParam3, 114, 1);
func_46(uParam3, 116, 1);
func_46(uParam3, 117, 1);
func_46(uParam3, 118, 1);
func_46(uParam3, 119, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 9, 1);
func_44(uParam2, 10, 1);
func_44(uParam2, 53, 1);
func_44(uParam2, 56, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 36, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 14, 1);
func_44(uParam2, 105, 1);
func_44(uParam2, 113, 1);
func_44(uParam2, 114, 1);
func_44(uParam2, 115, 1);
func_44(uParam2, 116, 1);
func_44(uParam2, 117, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 3, 1);
func_46(uParam3, 4, 1);
func_46(uParam3, 6, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 19, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 37, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 55, 1);
func_46(uParam3, 106, 1);
func_46(uParam3, 114, 1);
func_46(uParam3, 116, 1);
func_46(uParam3, 117, 1);
func_46(uParam3, 118, 1);
func_46(uParam3, 119, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 9, 1);
func_44(uParam2, 10, 1);
func_44(uParam2, 53, 1);
func_44(uParam2, 56, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 11, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 22, 1);
func_44(uParam2, 54, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 30, 1);
func_44(uParam2, 31, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 36, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 14, 1);
func_44(uParam2, 105, 1);
func_44(uParam2, 113, 1);
func_44(uParam2, 114, 1);
func_44(uParam2, 115, 1);
func_44(uParam2, 116, 1);
func_44(uParam2, 117, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 106, 1);
func_46(uParam3, 114, 1);
func_46(uParam3, 116, 1);
func_46(uParam3, 117, 1);
func_46(uParam3, 118, 1);
func_46(uParam3, 119, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 14, 1);
func_44(uParam2, 105, 1);
func_44(uParam2, 113, 1);
func_44(uParam2, 114, 1);
func_44(uParam2, 115, 1);
func_44(uParam2, 116, 1);
func_44(uParam2, 117, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 13:
switch (iParam5){
case 0:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_43(uParam2, uParam3, uParam4);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 2:
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
func_43(uParam2, uParam3, uParam4);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
}
break;
case 16:
switch (iParam5){
case 0:
func_46(uParam3, 4, 1);
break;
case 1:
func_48(uParam4, 43, 1);
break;
case 2:
break;
}
break;
case 23:
switch (iParam5){
case 0:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 17:
switch (iParam5){
case 0:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 1:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 2:
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
}
break;
case 19:
switch (iParam5){
case 0:
func_46(uParam3, 3, 1);
func_46(uParam3, 7, 1);
func_46(uParam3, 0, 1);
func_46(uParam3, 12, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 15, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 17, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 21, 1);
func_46(uParam3, 25, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 30, 1);
func_46(uParam3, 31, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 37, 1);
func_44(uParam2, 0, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 7, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 11, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 15, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 17, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 22, 1);
func_44(uParam2, 54, 1);
func_44(uParam2, 24, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 30, 1);
func_44(uParam2, 31, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 36, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 77, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 1:
func_46(uParam3, 3, 1);
func_46(uParam3, 7, 1);
func_46(uParam3, 0, 1);
func_46(uParam3, 12, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 15, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 17, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 21, 1);
func_46(uParam3, 25, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 30, 1);
func_46(uParam3, 31, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 39, 1);
func_44(uParam2, 0, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 7, 1);
func_44(uParam2, 11, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 15, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 17, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 22, 1);
func_44(uParam2, 54, 1);
func_44(uParam2, 24, 1);
func_44(uParam2, 38, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 43, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 77, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
case 2:
func_46(uParam3, 1, 1);
func_46(uParam3, 3, 1);
func_46(uParam3, 4, 1);
func_46(uParam3, 5, 1);
func_46(uParam3, 7, 1);
func_46(uParam3, 10, 1);
func_46(uParam3, 54, 1);
func_46(uParam3, 55, 1);
func_46(uParam3, 56, 1);
func_46(uParam3, 0, 1);
func_46(uParam3, 12, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 15, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 17, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 21, 1);
func_46(uParam3, 25, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 30, 1);
func_46(uParam3, 31, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 37, 1);
func_46(uParam3, 39, 1);
func_44(uParam2, 0, 1);
func_44(uParam2, 1, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 5, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 7, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 9, 1);
func_44(uParam2, 10, 1);
func_44(uParam2, 53, 1);
func_44(uParam2, 56, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 11, 1);
func_44(uParam2, 12, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 14, 1);
func_44(uParam2, 15, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 17, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 22, 1);
func_44(uParam2, 54, 1);
func_44(uParam2, 23, 1);
func_44(uParam2, 24, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 29, 1);
func_44(uParam2, 30, 1);
func_44(uParam2, 31, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 33, 1);
func_44(uParam2, 36, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 55, 1);
func_48(uParam4, 1, 1);
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_46(uParam3, 65, 1);
func_46(uParam3, 67, 1);
func_46(uParam3, 68, 1);
func_46(uParam3, 69, 1);
func_46(uParam3, 70, 1);
func_46(uParam3, 71, 1);
func_46(uParam3, 72, 1);
func_46(uParam3, 73, 1);
func_46(uParam3, 74, 1);
func_46(uParam3, 75, 1);
func_46(uParam3, 76, 1);
func_46(uParam3, 77, 1);
func_46(uParam3, 78, 1);
func_46(uParam3, 79, 1);
func_46(uParam3, 80, 1);
func_46(uParam3, 81, 1);
func_46(uParam3, 82, 1);
func_46(uParam3, 91, 1);
func_46(uParam3, 92, 1);
func_44(uParam2, 64, 1);
func_44(uParam2, 65, 1);
func_44(uParam2, 66, 1);
func_44(uParam2, 67, 1);
func_44(uParam2, 68, 1);
func_44(uParam2, 69, 1);
func_44(uParam2, 70, 1);
func_44(uParam2, 71, 1);
func_44(uParam2, 72, 1);
func_44(uParam2, 73, 1);
func_44(uParam2, 74, 1);
func_44(uParam2, 75, 1);
func_44(uParam2, 77, 1);
func_44(uParam2, 78, 1);
func_44(uParam2, 79, 1);
func_44(uParam2, 80, 1);
func_44(uParam2, 81, 1);
func_44(uParam2, 90, 1);
func_44(uParam2, 91, 1);
break;
}
break;
case 18:
switch (iParam5){
case 0:
break;
case 1:
func_44(uParam2, 2, 1);
func_44(uParam2, 20, 1);
break;
case 2:
break;
}
break;
case 0:
break;
}
break;
case 3:
switch (iParam1){
case 0:
break;
case 9:
case 11:
case 13:
case 15:
case 19:
case 23:
case 26:
case 30:
case 34:
case 20:
case 22:
func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
break;
case 32:
func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
break;
case 17:
case 27:
case 31:
break;
}
break;
}}


void func_43(var uParam0, var uParam1, var uParam2){
if((*uParam0)[0]==0 || (*uParam1)[0]==0){}
func_48(uParam2, 124, 1);
func_48(uParam2, 125, 1);
func_48(uParam2, 126, 1);
func_48(uParam2, 127, 1);
func_48(uParam2, 128, 1);
func_48(uParam2, 129, 1);
func_48(uParam2, 130, 1);
func_48(uParam2, 131, 1);
func_48(uParam2, 132, 1);
func_48(uParam2, 133, 1);
func_48(uParam2, 136, 1);
func_48(uParam2, 138, 1);
func_48(uParam2, 139, 1);
func_48(uParam2, 143, 1);
func_48(uParam2, 144, 1);
func_48(uParam2, 145, 1);
func_48(uParam2, 147, 1);
}


void func_44(var uParam0, int iParam1, bool bParam2){
func_45(uParam0, iParam1, bParam2);
}


void func_45(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
if(!iVar0 < *uParam0){
return;
}
if(bParam2){
MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}}


void func_46(var uParam0, int iParam1, bool bParam2){
func_45(uParam0, iParam1, bParam2);
}


void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_48(uParam4, 91, 1);
switch (iParam0){
case 1:
switch (iParam1){
case 0:
switch (iParam5){
case 0:
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
break;
case 1:
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
break;
case 2:
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
break;
}
break;
}
break;
case 0:
switch (iParam1){
case 6:
case 26:
if(bParam6){
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
}
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 5, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 7, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
break;
case 1:
if(bParam6){
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
}
func_48(uParam4, 9, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
break;
case 10:
func_48(uParam4, 28, 1);
break;
case 12:
if(bParam6){
func_46(uParam3, 3, 1);
func_46(uParam3, 4, 1);
func_46(uParam3, 6, 1);
func_46(uParam3, 10, 1);
func_46(uParam3, 54, 1);
func_46(uParam3, 55, 1);
func_46(uParam3, 56, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 37, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 106, 1);
func_46(uParam3, 114, 1);
func_46(uParam3, 116, 1);
func_46(uParam3, 117, 1);
func_46(uParam3, 118, 1);
func_46(uParam3, 119, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 9, 1);
func_44(uParam2, 10, 1);
func_44(uParam2, 53, 1);
func_44(uParam2, 56, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 36, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 55, 1);
func_44(uParam2, 14, 1);
func_44(uParam2, 105, 1);
func_44(uParam2, 113, 1);
func_44(uParam2, 114, 1);
func_44(uParam2, 115, 1);
func_44(uParam2, 116, 1);
func_44(uParam2, 117, 1);
}
func_48(uParam4, 2, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
break;
case 15:
if(bParam6){
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
}
func_48(uParam4, 3, 1);
func_48(uParam4, 6, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 32, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
func_48(uParam4, 110, 1);
func_48(uParam4, 112, 1);
func_48(uParam4, 115, 1);
func_48(uParam4, 116, 1);
break;
case 18:
if(bParam6){
func_46(uParam3, 4, 1);
}
break;
case 17:
func_48(uParam4, 9, 1);
break;
case 19:
if(bParam6){
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
}
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
break;
case 21:
if(bParam6){
func_46(uParam3, 3, 1);
func_46(uParam3, 7, 1);
func_46(uParam3, 0, 1);
func_46(uParam3, 12, 1);
func_46(uParam3, 13, 1);
func_46(uParam3, 15, 1);
func_46(uParam3, 16, 1);
func_46(uParam3, 48, 1);
func_46(uParam3, 49, 1);
func_46(uParam3, 17, 1);
func_46(uParam3, 18, 1);
func_46(uParam3, 50, 1);
func_46(uParam3, 51, 1);
func_46(uParam3, 52, 1);
func_46(uParam3, 53, 1);
func_46(uParam3, 38, 1);
func_46(uParam3, 47, 1);
func_46(uParam3, 111, 1);
func_46(uParam3, 62, 1);
func_46(uParam3, 20, 1);
func_46(uParam3, 21, 1);
func_46(uParam3, 25, 1);
func_46(uParam3, 26, 1);
func_46(uParam3, 27, 1);
func_46(uParam3, 30, 1);
func_46(uParam3, 31, 1);
func_46(uParam3, 32, 1);
func_46(uParam3, 33, 1);
func_46(uParam3, 39, 1);
func_46(uParam3, 37, 1);
func_46(uParam3, 55, 1);
func_44(uParam2, 0, 1);
func_44(uParam2, 2, 1);
func_44(uParam2, 3, 1);
func_44(uParam2, 4, 1);
func_44(uParam2, 6, 1);
func_44(uParam2, 7, 1);
func_44(uParam2, 8, 1);
func_44(uParam2, 11, 1);
func_44(uParam2, 13, 1);
func_44(uParam2, 15, 1);
func_44(uParam2, 16, 1);
func_44(uParam2, 47, 1);
func_44(uParam2, 48, 1);
func_44(uParam2, 17, 1);
func_44(uParam2, 18, 1);
func_44(uParam2, 49, 1);
func_44(uParam2, 50, 1);
func_44(uParam2, 51, 1);
func_44(uParam2, 52, 1);
func_44(uParam2, 62, 1);
func_44(uParam2, 37, 1);
func_44(uParam2, 46, 1);
func_44(uParam2, 110, 1);
func_44(uParam2, 19, 1);
func_44(uParam2, 20, 1);
func_44(uParam2, 21, 1);
func_44(uParam2, 22, 1);
func_44(uParam2, 54, 1);
func_44(uParam2, 24, 1);
func_44(uParam2, 26, 1);
func_44(uParam2, 27, 1);
func_44(uParam2, 28, 1);
func_44(uParam2, 30, 1);
func_44(uParam2, 31, 1);
func_44(uParam2, 32, 1);
func_44(uParam2, 38, 1);
func_44(uParam2, 36, 1);
}
func_48(uParam4, 3, 1);
func_48(uParam4, 3, 1);
func_48(uParam4, 4, 1);
func_48(uParam4, 14, 1);
func_48(uParam4, 15, 1);
func_48(uParam4, 16, 1);
func_48(uParam4, 8, 1);
func_48(uParam4, 9, 1);
func_48(uParam4, 10, 1);
func_48(uParam4, 12, 1);
func_48(uParam4, 13, 1);
func_48(uParam4, 17, 1);
func_48(uParam4, 18, 1);
func_48(uParam4, 19, 1);
func_48(uParam4, 20, 1);
func_48(uParam4, 59, 1);
func_48(uParam4, 60, 1);
func_48(uParam4, 61, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 62, 1);
func_48(uParam4, 63, 1);
func_48(uParam4, 64, 1);
func_48(uParam4, 65, 1);
func_48(uParam4, 66, 1);
func_48(uParam4, 67, 1);
func_48(uParam4, 68, 1);
func_48(uParam4, 69, 1);
func_48(uParam4, 70, 1);
func_48(uParam4, 71, 1);
func_48(uParam4, 72, 1);
func_48(uParam4, 21, 1);
func_48(uParam4, 22, 1);
func_48(uParam4, 23, 1);
func_48(uParam4, 24, 1);
func_48(uParam4, 25, 1);
func_48(uParam4, 26, 1);
func_48(uParam4, 36, 1);
func_48(uParam4, 46, 1);
func_48(uParam4, 38, 1);
func_48(uParam4, 29, 1);
func_48(uParam4, 28, 1);
func_48(uParam4, 31, 1);
func_48(uParam4, 33, 1);
func_48(uParam4, 34, 1);
func_48(uParam4, 92, 1);
func_48(uParam4, 93, 1);
func_48(uParam4, 94, 1);
func_48(uParam4, 96, 1);
func_48(uParam4, 97, 1);
func_48(uParam4, 98, 1);
func_48(uParam4, 100, 1);
func_48(uParam4, 103, 1);
func_48(uParam4, 104, 1);
func_48(uParam4, 105, 1);
func_48(uParam4, 106, 1);
func_48(uParam4, 107, 1);
func_48(uParam4, 108, 1);
break;
}
break;
}}


void func_48(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
if(!iVar0 < *uParam0){
return;
}
if(bParam2){
MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
}else{
MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}}

int func_49(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}

int func_50(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return 1;
break;
}
break;
case 2:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
case 7:
case 5:
case 10:
case 11:
case 12:
case 13:
case 15:
case 14:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 26:
case 25:
case 24:
case 30:
case 34:
case 40:
case 41:
case 42:
case 43:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
return 1;
break;
}
break;
case 3:
switch (iParam1){
case 0:
return 1;
break;
}
break;
}
return 0;
}


void func_51(float fParam0){
func_78(uLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 172, 1), "CELL_BORDER");
}


void func_52(float fParam0){
if(Global_1945396){
fParam0=-1f;
}
func_78(uLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 173, 1), "CELL_FILTER");
}


void func_53(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_52(5f);
func_51(6f);
func_54(7f);
func_31(8f);
if(bLocal_62){
func_78(uLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
if(!func_63(14)){
if((Global_78558==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_54(float fParam0){
func_78(uLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 175, 1), "CELL_ACCYC");
}


void func_55(){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_56(){
if(iLocal_156==1){
func_57();
return;
}
if(iLocal_133==0 && iLocal_134==0){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
if(iLocal_131){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
if(func_174()){
func_52(3f);
func_51(4f);
}}elseif((Global_78558==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62()){
func_53();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
func_52(5f);
func_51(6f);
if(func_32(1)){
func_31(7f);
if(bLocal_62){
func_78(uLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
}
elseif(bLocal_62){
func_78(uLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
if(func_174()){
func_52(6f);
func_51(7f);
func_78(uLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
func_52(3f);
func_51(4f);
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}elseif(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
if(func_174()){
if(!func_161()){
func_52(7f);
func_51(8f);
if(bLocal_63){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}else{
if(!func_161()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}
else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_174()){
if(!func_161()){
func_52(4f);
func_51(5f);
func_78(uLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_57(){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_58(){
if(iLocal_131){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
}}


void func_59(int iParam0){
if(iLocal_156==1){
return;
}
if(Global_4718592.f_160553==1){}elseif(Global_4718592.f_160554==1){}else{
MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(iParam0);
}}


void func_60(){
if(iLocal_61==1){
if(MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4541021], "phone_cam12DUMMY")){
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}}}


void func_61(){
func_165(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_174()){
if(!Global_1945396){
GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
}}}

int func_62(){
if(func_63(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
return 1;
}else{
return 0;
}}else{
return 0;
}}
return 1;
}


bool func_63(int iParam0){
return Global_43257==iParam0;
}


void func_64(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_65(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 30, 1), "CELL_RT_RSTICK");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 1, 1), "CELL_RT_LSTICK");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_RT_RSTICK");
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 0, 1), "CELL_RT_LSTICK");
}}


void func_66(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_LT_RSTICK");
if(func_63(14)){
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, 1), "CELL_LT_LSTICK");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_LT_LSTICKZ");
func_78(uLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, 1), "CELL_LT_LSTICK");
}}


char* func_67(){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1969246)){
return func_77(&Global_1969246);
}
if(func_76()){
return "FHHUD_SENDLES";
}
if(func_74()){
return "CSH_PHONEC";
}
if(func_73(PLAYER::PLAYER_ID(), 275) && Global_1969239){
return "RE_SS_SNDOMG";
}
switch (func_72(PLAYER::PLAYER_ID())){
case 14:
case 3:
case 7:
case 8:
case 12:
case 2:
case 15:
return "TR_SESS_PHTO";
default:
}
switch (func_68(PLAYER::PLAYER_ID())){
case 3:
return "FXR_FRAN_PHTO";
case 2:
return "FXR_IMAN_PHTO";
default:
}
return "CELL_287";
}

int func_68(int iParam0){
if(func_71(iParam0)==264){
return func_69(iParam0);
}
return -1;
}

int func_69(int iParam0){
if(func_70(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_70(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_71(int iParam0){
if(func_70(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_72(int iParam0){
if(func_71(iParam0)==271){
return func_69(iParam0);
}
return -1;
}

int func_73(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
return 0;
}
iVar1=0;
while (iVar1 < Global_1890386){
if(Global_1890386[iVar1]==iParam1){
if(Global_1890444[iVar0 /*129*/].f_77.f_1[iVar1 /*3*/]==2){
return 1;
}}
iVar1++;
}
return 0;
}

int func_74(){
switch (func_75(PLAYER::PLAYER_ID())){
case 16:
return 1;
case 4:
case 3:
case 2:
case 1:
case 0:
return 1;
default:
}
return 0;
}

int func_75(int iParam0){
if(func_71(iParam0)==256){
return func_69(iParam0);
}
return -1;
}

int func_76(){
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_33){
case 233:
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182){
case 9:
return 1;
default:
}
break;
case 158:
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182){
case 3:
case 1:
case 41:
return 1;
default:
}
break;
}
if(Global_1977436){
return 1;
}
return 0;
}


var func__77(var uParam0){
return uParam0;
}


void func_78(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam3)){
func_79(uParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_64(sParam4);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_79(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


void func_80(){
if(Global_78558){
switch (Global_22842){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_160("CELL_CAM_SELFIE_0_KM", -1);
}else{
func_160("CELL_CAM_SELFIE_0", -1);
}
Global_22842++;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_160("CELL_CAM_SELFIE_1_KM", -1);
}else{
func_160("CELL_CAM_SELFIE_1", -1);
}
Global_22842++;
}
break;
case 2:
break;
}}else{
switch (Global_22841){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_160("CELL_CAM_SELFIE_0_KM", -1);
}else{
func_160("CELL_CAM_SELFIE_0", -1);
}
Global_22841++;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_160("CELL_CAM_SELFIE_1_KM", -1);
}else{
func_160("CELL_CAM_SELFIE_1", -1);
}
Global_22841++;
}
break;
case 2:
break;
}}}


void func_81(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
int iVar10;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar9=179;
iVar10=21;
}else{
iVar9=228;
iVar10=229;
}
if(PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9)){
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
iVar0=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
iVar3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar6=((IntToFloat(iVar0) / 128f) * fLocal_164);
}}elseif(MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_164);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar7=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
fVar8=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
if(PAD::IS_MOUSE_LOOK_INVERTED()){
fVar8=(fVar8 * -1f);
}
fVar4=(fVar4 + fVar7);
fVar5=(fVar5 - fVar8);
}elseif(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_164);
fVar5=((IntToFloat(-iVar1) / 128f) * fLocal_164);
}
func_84(fVar5);
func_83(fVar6);
func_82(fVar4);
}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar9)){
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}}


void func_82(float fParam0){
fLocal_161=(fLocal_161 + fParam0);
if(fLocal_161 > 1f){
fLocal_161=1f;
}elseif(fLocal_161 < -1f){
fLocal_161=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_161);
}


void func_83(float fParam0){
fLocal_162=(fLocal_162 + fParam0);
if(fLocal_162 > 1f){
fLocal_162=1f;
}elseif(fLocal_162 < -1f){
fLocal_162=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_162);
}


void func_84(float fParam0){
fLocal_163=(fLocal_163 + fParam0);
if(fLocal_163 > 1f){
fLocal_163=1f;
}elseif(fLocal_163 < -1f){
fLocal_163=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_163);
}


void func_85(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar10=179;
iVar11=178;
if(PAD::IS_CONTROL_PRESSED(2, iVar10)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_161()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_157=0.5f;
fLocal_158=0.85f;
fLocal_159=0.5f;
fLocal_160=-0.25f;
}}}else{
iVar10=228;
iVar11=229;
}
if(PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_161()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_157=0.5f;
fLocal_158=0.85f;
fLocal_159=0.5f;
fLocal_160=-0.25f;
}
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
iVar0=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
iVar3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar1=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
fVar8=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
fVar9=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
if(PAD::IS_MOUSE_LOOK_INVERTED()){
fVar9=(fVar9 * -1f);
}
fVar6=(fVar6 + fVar8);
fVar7=(fVar7 - fVar9);
}elseif(MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_164);
fVar7=((IntToFloat(-iVar3) / 128f) * fLocal_164);
}
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_164);
fVar5=((IntToFloat(iVar1) / 128f) * fLocal_164);
}
func_89(fVar6);
func_88(fVar7);
func_87(fVar4);
if(!func_63(14)){
func_86(fVar5);
}}elseif(!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11)){
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}
if(!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11)){
iVar0=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
iVar3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
iVar2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
iVar2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
iVar3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
iVar3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
if(MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_164);
fVar7=((IntToFloat(-iVar3) / 128f) * fLocal_164);
}
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_164);
fVar5=((IntToFloat(iVar1) / 128f) * fLocal_164);
}
if(!func_63(14)){
func_86(fVar5);
}}}


void func_86(float fParam0){
fLocal_159=(fLocal_159 + fParam0);
if(fLocal_159 > 1f){
fLocal_159=1f;
}elseif(fLocal_159 < 0f){
fLocal_159=0f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_159);
}


void func_87(float fParam0){
fLocal_160=(fLocal_160 + fParam0);
if(fLocal_160 > 1f){
fLocal_160=1f;
}elseif(fLocal_160 < -1f){
fLocal_160=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_160);
}


void func_88(float fParam0){
fLocal_158=(fLocal_158 + fParam0);
if(fLocal_158 > 1.5f){
fLocal_158=1.5f;
}elseif(fLocal_158 < 0.5f){
fLocal_158=0.5f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_158);
}


void func_89(float fParam0){
fLocal_157=(fLocal_157 + fParam0);
if(fLocal_157 > 2f){
fLocal_157=2f;
}elseif(fLocal_157 < -1.7f){
fLocal_157=-1.7f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_157);
}


void func_90(){
if(Global_78819 || Global_78820){
return;
}
if(iLocal_124==0){
if(!iLocal_150){
if(Global_4718592.f_160553==0 && Global_4718592.f_160554==0){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_141, 255, 255, 255, 0, 0);
}}}
if(iLocal_127==0){
if(Global_20325){
if(Global_20584){
if(iLocal_150==0){
if(Global_20383.f_1 > 3){
}}}}else{
func_92(255, 255, 255, 255);
func_91(0.059f, 0.644f, "CELL_284", 0);
func_92(255, 255, 255, 255);
func_91(0.165f, 0.644f, "CELL_285", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, "CELL_280", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281", 0);
}}elseif(Global_20325){}else{
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, func_67(), 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.79f, "CELL_286", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281", 0);
}}


void func_91(float fParam0, float fParam1, char* sParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}


void func_92(int iParam0, int iParam1, int iParam2, int iParam3){
HUD::SET_TEXT_SCALE(0.4f, 0.4f);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
HUD::SET_TEXT_PROPORTIONAL(1);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}


void func_93(){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_75, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_76);
}


void func_94(){
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 39, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}


void func_95(){
Local_87={
Global_20336[Global_20328 /*3*/] 
};
if(Global_20325){
if(func_98()){
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_93);
Local_87={
Local_93 
};
iLocal_121=0;
iLocal_122=0;
iLocal_123=0;
}
func_1(1);
if(iLocal_121){
Local_81.f_0=(Local_81.f_0 + 12f);
}
if(Local_81.f_0 > Local_87.f_0 || Local_81.f_0==Local_87.f_0){
Local_81.f_0=Local_87.f_0;
iLocal_121=0;
}
if(iLocal_122){
Local_81.f_1=(Local_81.f_1 - 6f);
}
if(MISC::IS_BIT_SET(Global_8255, 4)){
if(Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1==(Local_87.f_1 + 15f)){
Local_81.f_1=(Local_87.f_1 + 15f);
iLocal_122=0;
}}elseif(Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1==(Local_87.f_1 + 10f)){
Local_81.f_1=(Local_87.f_1 + 10f);
iLocal_122=0;
}
if(iLocal_123){
Local_81.f_2=(Local_81.f_2 - 10f);
}
if(Local_81.f_2 < Local_87.f_2 || Local_81.f_2==Local_87.f_2){
Local_81.f_2=Local_87.f_2;
iLocal_123=0;
}
if(func_98()==0){
if(MISC::IS_BIT_SET(Global_8255, 4)){
Local_87.f_1=(Local_87.f_1 + 15f);
}else{
Local_87.f_1=(Local_87.f_1 + 10f);
}
Local_87.f_0=(Local_87.f_0 - 14f);
}else{
Local_87={
Global_20329[Global_20328 /*3*/] 
};
}
Local_81={
Local_87 
};
iLocal_123=0;
iLocal_122=0;
iLocal_121=0;
MOBILE::SET_MOBILE_PHONE_POSITION(Local_81);
if((iLocal_121==0 && iLocal_122==0) && iLocal_123==0){
iLocal_124=0;
Local_84={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_84, 0);
if(!MISC::IS_BIT_SET(Global_8253, 22)){
if(MISC::IS_BIT_SET(Global_8253, 28)){
StringCopy(&cLocal_145, "CELL_294", 16);
func_97();
}else{
StringCopy(&cLocal_145, "CELL_293", 16);
func_96();
}
iLocal_100=2;
}}}}


void func_96(){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 28)){
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_286");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_277");
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_GALSAVE");
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_97(){
func_165(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 28)){
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_286");
}else{
func_78(uLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_67());
func_78(uLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_277");
func_78(uLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_GALSAVE");
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383.f_1==10 || Global_20383.f_1==9){
if(Global_20326==0){
if(Global_7568 !=128){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_21725 !=2){
}}}}}
if(func_63(14)){
return 0;
}
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
if(ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
return 0;
}}}
if(((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)))){
return 0;
}
if(Global_112696){
return 0;
}}
if(Global_78558){
return 0;
}
iVar2=0;
iVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
if(iVar1==4 && (iVar0==0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())){
iVar2=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("toro")){
iVar2=0;
}}}}
if(Global_4542575 || iVar2==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
return 1;
}else{
return 0;
}}else{
return 1;
}}
return 0;
}


void func_99(){
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
Local_84={
Global_20343 
};
Local_87={
Global_20336[Global_20328 /*3*/] 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_90, 0);
Local_84={
Local_90 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_93);
Local_87={
Local_93 
};
iLocal_118=0;
iLocal_119=0;
iLocal_120=0;
iLocal_121=0;
iLocal_122=0;
iLocal_123=0;
}
if(Global_20325){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_59(0);
iLocal_131=0;
if(MISC::IS_BIT_SET(Global_8253, 30)){
iLocal_118=0;
iLocal_119=0;
iLocal_120=0;
func_100();
}
if(iLocal_121){
if(MISC::IS_BIT_SET(Global_8253, 9)){
Local_81.f_0=(Local_81.f_0 + 2f);
}else{
Local_81.f_0=(Local_81.f_0 + 12f);
}}
if(Local_81.f_0 > Local_87.f_0 || Local_81.f_0==Local_87.f_0){
Local_81.f_0=Local_87.f_0;
iLocal_121=0;
}
if(iLocal_122){
Local_81.f_1=(Local_81.f_1 - 6f);
}
if(Local_81.f_1 < Local_87.f_1 || Local_81.f_1==Local_87.f_1){
Local_81.f_1=Local_87.f_1;
iLocal_122=0;
}
if(iLocal_123){
Local_81.f_2=(Local_81.f_2 - 10f);
}
if(Local_81.f_2 < Local_87.f_2 || Local_81.f_2==Local_87.f_2){
Local_81.f_2=Local_87.f_2;
iLocal_123=0;
}
if(iLocal_123==0){
if(iLocal_118){
Local_78.f_0=(Local_78.f_0 + 1f);
}
if(Local_78.f_0 > Local_84.f_0 || Local_78.f_0==Local_84.f_0){
Local_78.f_0=Local_84.f_0;
iLocal_118=0;
}
if(iLocal_119){
Local_78.f_1=(Local_78.f_1 - 2f);
}
if(Local_78.f_1 < Local_84.f_1 || Local_78.f_1==Local_84.f_1){
Local_78.f_1=Local_84.f_1;
iLocal_119=0;
}
if(iLocal_120){
Local_78.f_2=(Local_78.f_2 - 14f);
}
if(Local_78.f_2 < Local_84.f_2 || Local_78.f_2==Local_84.f_2){
Local_78.f_2=Local_84.f_2;
iLocal_120=0;
}}
if(iLocal_126){
Local_78={
Local_84 
};
Local_81={
Local_87 
};
iLocal_118=0;
iLocal_119=0;
iLocal_120=0;
if(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_81);
}
func_115(0, 1);
}elseif(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_81);
}
if((iLocal_118==0 && iLocal_119==0) && iLocal_120==0){
func_100();
}}else{
if(iLocal_118){
Local_78.f_0=(Local_78.f_0 + 1f);
}
if(Local_78.f_0 > Local_84.f_0 || Local_78.f_0==Local_84.f_0){
iLocal_118=0;
}
if(iLocal_119){
Local_78.f_1=(Local_78.f_1 - 2f);
}
if(Local_78.f_1 < Local_84.f_1 || Local_78.f_1==Local_84.f_1){
iLocal_119=0;
}
if(iLocal_120){
Local_78.f_2=(Local_78.f_2 - 7f);
}
if(Local_78.f_2 < Local_84.f_2 || Local_78.f_2==Local_84.f_2){
iLocal_120=0;
}
if((iLocal_118==0 && iLocal_119==0) && iLocal_120==0){
func_100();
}}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
}


void func_100(){
func_1(0);
if(func_98()==0){
if(MISC::IS_BIT_SET(Global_8253, 30)){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20329[Global_20328 /*3*/]);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20336[Global_20328 /*3*/]);
}
Local_78={
Local_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
}
Global_22758=0;
func_122(0, 0);
func_126(0);
iLocal_115=0;
func_117(1);
Global_20370=1;
Global_22761=0;
if(Global_20383.f_1 > 4){
Global_20383.f_1=6;
Global_20361=1;
func_101();
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140)){
func_164(uLocal_140, "SHUTDOWN_MOVIE");
}
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_141);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
if(Global_20586==1){
MISC::SET_BIT(&Global_8253, 17);
}else{
MISC::CLEAR_BIT(&Global_8253, 17);
}
MISC::CLEAR_BIT(&Global_8253, 18);
MISC::CLEAR_BIT(&Global_8253, 21);
HUD::CLEAR_FLOATING_HELP(0, 1);
MISC::CLEAR_BIT(&Global_8255, 3);
MISC::CLEAR_BIT(&Global_4542297, 3);
MISC::SET_GAME_PAUSED(0);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_22762=1;
AUDIO::STOP_SOUND(iLocal_112);
AUDIO::RELEASE_SOUND_ID(iLocal_112);
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
func_117(1);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(Global_4541022 > 0 && Global_4541022 < 13){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4541022]);
}
func_115(0, 1);
if(func_172(0, 1, iLocal_64, 1)){
iLocal_64=0;
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_101(){
struct<3> Var0;
if(Global_20366==1){
return;
}
if(Global_20383.f_1 < 4){
return;
}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(Global_78558){
return;
}
SYSTEM::WAIT(0);
}
switch (Global_20383.f_1){
case 6:
func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_109(Global_8858);
if(Global_8858==1){
func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}else{
func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}
if(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}
if(Global_78558){
func_106();
MISC::CLEAR_BIT(&Global_8255, 9);
func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_105();
func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_64("CELL_300");
func_64("CELL_217");
func_64("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_104(Global_7568, Global_20383)==0){
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_105();
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_64("CELL_300");
func_64("CELL_219");
func_64("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983){
StringCopy(&Var0, "CELL_219", 24);
}else{
StringCopy(&Var0, "CELL_211", 24);
}
if(func_104(Global_7568, Global_20383)==0){
func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
}else{
func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_102();
break;
default:
break;
}}


void func_102(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_103();
if(Global_20382==1){
if(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21772){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8253, 20)){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_103(){
if(Global_78558){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}}

int func_104(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_105(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383==0){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}
if(Global_20383==1){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
default:
break;
}}
if(Global_20383==2){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
default:
break;
}}
if(Global_20383==3){
switch (Global_4542573){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}}}


void func_106(){
if(Global_78558){
if(func_107()==0){
return;
}
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}}

int func_107(){
return 0;
}


void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_64(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_64(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_64(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_64(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_64(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_109(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
Global_22793=0;
Global_8858=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8822[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_63(14)){
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar2=42;
Global_20588=1;
}else{
iVar2=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519){
if(iVar1==14){
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113648.f_14143[iVar3 /*104*/].f_24 !=0){
if(Global_113648.f_14143[iVar3 /*104*/].f_28==0){
if(Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383]==1){
Global_22793++;
}
}
}
iVar3++;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78558){
iVar4=0;
iVar4=Global_4541031;
iVar5=0;
while (iVar5 < 12){
if(Global_4541032[iVar5 /*104*/].f_24 !=0){
if(Global_4541032[iVar5 /*104*/].f_28==0){
if(Global_4541032[iVar5 /*104*/].f_99[Global_20383]==1){
iVar4++;
}}
}
iVar5++;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
iVar6=Global_44457;
break;
case 1:
iVar6=Global_44458;
break;
case 2:
iVar6=Global_44459;
break;
default:
break;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar8=42;
Global_20588=1;
}else{
iVar8=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_110(){
switch (iLocal_100){
case 1:
HUD::CLEAR_FLOATING_HELP(0, 1);
if(MISC::IS_BIT_SET(Global_8253, 28)){
StringCopy(&cLocal_145, "CELL_296", 16);
func_56();
}else{
StringCopy(&cLocal_145, "CELL_295", 16);
func_30();
}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_8253, 22)){
HUD::CLEAR_FLOATING_HELP(0, 1);
if(MISC::IS_BIT_SET(Global_8253, 28)){
StringCopy(&cLocal_145, "CELL_294", 16);
func_97();
}else{
StringCopy(&cLocal_145, "CELL_293", 16);
func_96();
}
iLocal_100=2;
}
break;
default:
break;
}}


void func_111(bool bParam0){
if(bParam0){
if(!func_124()){
MISC::SET_BIT(&Global_1962996, 17);
}}elseif(func_124()){
MISC::CLEAR_BIT(&Global_1962996, 17);
}}

int func_112(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}


void func_113(bool bParam0){
if(bParam0){
if(!func_114()){
MISC::SET_BIT(&Global_1962996, 18);
}}elseif(func_114()){
MISC::CLEAR_BIT(&Global_1962996, 18);
}}


bool func_114(){
return MISC::IS_BIT_SET(Global_1962996, 18);
}


void func_115(bool bParam0, bool bParam1){
if(bParam0){
if(func_116(0)){
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

int func_116(int iParam0){
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


void func_117(int iParam0){
if((Global_4718592.f_160553==0 && Global_4718592.f_160554==0) && !Global_1945396){
if(func_118(PLAYER::PLAYER_ID()) && iParam0){
Global_1977509=1;
}else{
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}}}

int func_118(int iParam0){
if(iParam0 !=func_121()){
if(func_120(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_119(Global_2657589[iParam0 /*466*/].f_321.f_7)==17;
}}}
return 0;
}

int func_119(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
break;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
break;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
break;
case 101:
return 10;
break;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}

int func_120(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_121(){
return -1;
}


void func_122(int iParam0, int iParam1){
if(Global_4718592.f_160553==1){}elseif(Global_4718592.f_160554==1){}else{
MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
}}

int func_123(){
if(MISC::IS_BIT_SET(Global_8253, 15)){
return 1;
}
return 0;
}


bool func_124(){
return MISC::IS_BIT_SET(Global_1962996, 17);
}


void func_125(){
if(Global_20325){
Local_84={
-90.3f, 0f, 90f 
};
Local_87={
1.5f, 0f, -17f 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_90, 0);
Local_84={
Local_90 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_93);
Local_87={
Local_93 
};
iLocal_118=0;
iLocal_119=0;
iLocal_120=0;
iLocal_121=0;
iLocal_122=0;
iLocal_123=0;
}
if(iLocal_120==0){
if(iLocal_121){
Local_81.f_0=(Local_81.f_0 - 14f);
}
if(Local_81.f_0 < Local_87.f_0 || Local_81.f_0==Local_87.f_0){
iLocal_121=0;
}
if(iLocal_122){
Local_81.f_1=(Local_81.f_1 + 7f);
}
if(Local_81.f_1 > Local_87.f_1 || Local_81.f_1==Local_87.f_1){
iLocal_122=0;
}
if(iLocal_123){
Local_81.f_2=(Local_81.f_2 + 12f);
}
if(Local_81.f_2 > Local_87.f_2 || Local_81.f_2==Local_87.f_2){
iLocal_123=0;
}}
if(iLocal_118){
Local_78.f_0=(Local_78.f_0 - 1f);
}
if(Local_78.f_0 < Local_84.f_0 || Local_78.f_0==Local_84.f_0){
Local_78.f_0=Local_84.f_0;
iLocal_118=0;
}
if(iLocal_119){
Local_78.f_1=(Local_78.f_1 - 0.5f);
}
if(Local_78.f_1 < Local_84.f_1 || Local_78.f_1==Local_84.f_1){
Local_78.f_1=Local_84.f_1;
iLocal_119=0;
}
if(iLocal_120){
Local_78.f_2=(Local_78.f_2 + 11f);
}
if(Local_78.f_2 > Local_84.f_2 || Local_78.f_2==Local_84.f_2){
Local_78.f_2=Local_84.f_2;
iLocal_120=0;
}
if(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_81);
}}else{
Local_84={
-93.9f, 4.9f, 90.7f 
};
if(iLocal_118){
Local_78.f_0=(Local_78.f_0 - 1f);
}
if(Local_78.f_0 < Local_84.f_0 || Local_78.f_0==Local_84.f_0){
iLocal_118=0;
}
if(iLocal_119){
Local_78.f_1=(Local_78.f_1 + 2f);
}
if(Local_78.f_1 > Local_84.f_1 || Local_78.f_1==Local_84.f_1){
iLocal_119=0;
}
if(iLocal_120){
Local_78.f_2=(Local_78.f_2 + 7f);
}
if(Local_78.f_2 > Local_84.f_2 || Local_78.f_2==Local_84.f_2){
iLocal_120=0;
}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
}
if(Global_20325){
if(((((iLocal_118==0 && iLocal_119==0) && iLocal_120==0) && iLocal_121==0) && iLocal_122==0) && iLocal_123==0){
if(func_98()){
}else{
Local_78={
Local_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
Local_81={
Local_87 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Local_81);
}
if(iLocal_103==0){
Global_22759=0;
func_122(1, 1);
iLocal_115=1;
func_126(1);
func_61();
func_127();
func_59(0);
SYSTEM::SETTIMERA(0);
iLocal_142=1;
iLocal_143=1;
func_144();
func_165(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
func_167();
}}}elseif((iLocal_118==0 && iLocal_119==0) && iLocal_120==0){
Local_78={
Local_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_78, 0);
Global_22759=0;
}}


void func_126(bool bParam0){
if(func_174()){
if(bParam0){
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(1);
if(Global_4541022 > 0 && Global_4541022 < 99){
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_33[Global_4541022], 0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
}}}elseif(GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(0);
}}}


void func_127(){
if(Global_4541021 > 0 && Global_4541021 < 99){
if(!Global_1945396){
GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4541021]);
}}}


void func_128(){
if(Global_20325){
iLocal_125=0;
func_61();
func_115(1, 1);
func_122(1, 1);
iLocal_115=1;
Global_22762=1;
}}


void func_129(){
if(Global_4718592.f_160553==1 && func_130()){
return;
}
if(iLocal_127==0){
if(MISC::IS_BIT_SET(Global_8253, 28)){
StringCopy(&cLocal_145, "CELL_296", 16);
func_56();
}else{
StringCopy(&cLocal_145, "CELL_295", 16);
func_30();
}
if(MISC::ARE_STRINGS_EQUAL(&cLocal_145, "DUMMYCOMPARISON")){
fLocal_98=fLocal_99;
fLocal_96=fLocal_97;
fLocal_99=fLocal_98;
fLocal_97=fLocal_96;
}
iLocal_100=1;
}}

int func_130(){
if((((((func_139() || func_138()) || func_137()) || func_136()) || func_135()) || func_133()) || func_131()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_131(){
return func_132(Global_4718592.f_113724);
}

int func_132(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31715[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_133(){
return func_134(Global_4718592.f_113724);
}

int func_134(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__135(){
return Global_2683862.f_24;
}


var func__136(){
return Global_2683862.f_21;
}


var func__137(){
return Global_2683862.f_19;
}


var func__138(){
return Global_2683862.f_18;
}


var func__139(){
return Global_2683862.f_17;
}


void func_140(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, 1);
}}


void func_141(){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
iLocal_121=1;
iLocal_122=1;
iLocal_123=1;
iLocal_124=0;
iLocal_125=1;
}


void func_142(){
func_143();
}


void func_143(){
if(iLocal_151){
if(SYSTEM::TIMERA() > 50){
iLocal_151=0;
}}
if(iLocal_151==0){}}


void func_144(){
if(Global_20383.f_1 > 3){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
}}}


void func_145(){
if(func_63(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]){
Global_20383=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]){
Global_20383=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
Global_20383=2;
}else{
Global_20383=0;
}}}else{
Global_20383=func_13();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_146(int iParam0){
if(func_148()){
return;
}
if(Global_20584){
if(func_161()){
func_115(1, 1);
}else{
func_115(0, 0);
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
if(!func_147()){
Global_20383.f_1=3;
}}

int func_147(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


bool func_148(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_149(){
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
if(iLocal_150==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20356);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
PAD::DISABLE_CONTROL_ACTION(0, 280, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 77, 1);
PAD::DISABLE_CONTROL_ACTION(0, 78, 1);
PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 108, 1);
PAD::DISABLE_CONTROL_ACTION(0, 109, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 111, 1);
PAD::DISABLE_CONTROL_ACTION(0, 112, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 139, 1);
PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
}}

int func_150(){
var uVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -1, 0)){
return 1;
}elseif(!VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}
return 0;
}

int func_151(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_158()){
return 1;
}
if(Global_2696915){
return 1;
}
if(func_157()){
return 1;
}
if(func_156(159)){
if(!func_155()){
return 1;
}}
if(func_156(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_152() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_152())==0){
return 1;
}}
return 0;
}

int func_152(){
switch (func_154()){
case 0:
return func_153();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_153(){
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_154(){
return Global_32163;
}


bool func_155(){
return Global_2683862.f_698;
}

int func_156(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_157(){
return Global_2694524;
}


bool func_158(){
return Global_2683862.f_693;
}


void func_159(){
if(iLocal_156==1){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
}else{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}}


void func_160(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_161(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


void func_162(){
if(func_163()){
GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
if(GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0)){
iLocal_103=1;
iLocal_111=0;
}else{
Global_22762=1;
Global_20383.f_1=3;
HUD::BUSYSPINNER_OFF();
}}else{
iLocal_109=0;
iLocal_110=0;
if(iLocal_104==1){
if(iLocal_127==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140)){
if(func_174()){
if(Global_4541022==0){
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
}
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}else{
if(!MISC::IS_BIT_SET(Global_4542297, 2)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140)){
func_165(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
iLocal_104=0;
}
iLocal_111=0;
HUD::BUSYSPINNER_OFF();
}}

int func_163(){
if(Global_4718592.f_160553==1){
if(Global_78558){
return 0;
}}
if(Global_4718592.f_160554==1){
if(Global_78558){
return 0;
}}
if(MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()){
if(MISC::IS_BIT_SET(Global_8254, 28)){
return 0;
}}
return 1;
}


void func_164(var uParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_165(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_166(){
if(Global_78558){
Global_20383=3;
}else{
Global_20383=func_13();
}
if(Global_20383 > 3){
Global_20383=3;
}
return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}


void func_167(){
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}
Global_22761=0;
iLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(Global_20325){
while (SYSTEM::TIMERA() < iLocal_137){
SYSTEM::WAIT(0);
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}
func_164(uLocal_140, "OPEN_SHUTTER");
func_159();
func_129();
iLocal_129=1;
SYSTEM::SETTIMERB(0);
}else{
func_122(1, 1);
func_126(1);
func_61();
func_127();
func_59(0);
iLocal_115=1;
}}


void func_168(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 15);
}else{
MISC::CLEAR_BIT(&Global_8253, 15);
}}


bool func_169(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_170(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}


void func_171(){
}

int func_172(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_173(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_157);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_158);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_159);
}else{
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_157);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_158);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_159);
}}
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_160);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_161);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_162);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_163);
func_58();
}

int func_174(){
if(iLocal_56==0){
iLocal_56=1;
}
return 1;
}