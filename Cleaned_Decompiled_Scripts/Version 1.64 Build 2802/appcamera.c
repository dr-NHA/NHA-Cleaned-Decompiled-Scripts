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
var uLocal_18=0;
var uLocal_19=13;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=13;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
int iLocal_47=0;
var uLocal_48=7;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
BOOL bLocal_62=0;
BOOL bLocal_63=0;
BOOL bLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
float fLocal_73=0f;
float fLocal_74=0f;
float fLocal_75=0f;
float fLocal_76=0f;
float fLocal_77=0f;
float fLocal_78=0f;
var uLocal_79=0;
var uLocal_80=0;
float fLocal_81=0f;
var uLocal_82=0;
var uLocal_83=0;
float fLocal_84=0f;
var uLocal_85=0;
var uLocal_86=0;
float fLocal_87=0f;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
float fLocal_96=0f;
float fLocal_97=0f;
float fLocal_98=0f;
float fLocal_99=0f;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
BOOL bLocal_105=0;
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
BOOL bLocal_118=0;
BOOL bLocal_119=0;
BOOL bLocal_120=0;
BOOL bLocal_121=0;
BOOL bLocal_122=0;
BOOL bLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
BOOL bLocal_126=0;
BOOL bLocal_127=0;
BOOL bLocal_128=0;
BOOL bLocal_129=0;
int iLocal_130=0;
BOOL bLocal_131=0;
BOOL bLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
int iLocal_137=0;
int iLocal_138=0;
int iLocal_139=0;
Player plLocal_140=0;
Player plLocal_141=0;
BOOL bLocal_142=0;
int iLocal_143=0;
int iLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
Vehicle veLocal_149=0;
BOOL bLocal_150=0;
BOOL bLocal_151=0;
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

void main() // Position - 0x0{
int ageGroup;
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
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0) fLocal_77=1f;
else fLocal_77=0.7f;
if(!func_174()){
Global_4541021=99;
Global_4541022=99;
iLocal_57=99;
}else{
Global_4541021=0;
Global_4541022=0;
}
uLocal_19[0]="No_Filter" /*No Filter*/;
uLocal_19[1]="phone_cam1";
uLocal_19[2]="phone_cam2";
uLocal_19[3]="phone_cam3";
uLocal_19[4]="phone_cam4";
uLocal_19[5]="phone_cam5";
uLocal_19[6]="phone_cam6";
uLocal_19[7]="phone_cam7";
uLocal_19[8]="phone_cam8";
uLocal_19[9]="phone_cam9";
uLocal_19[10]="phone_cam10";
uLocal_19[11]="phone_cam11";
uLocal_19[12]="phone_cam12";
uLocal_33[0]="No_Border";
uLocal_33[1]="frame1";
uLocal_33[2]="frame2";
uLocal_33[3]="frame3";
uLocal_33[4]="frame4";
uLocal_33[5]="frame5";
uLocal_33[6]="frame6";
uLocal_33[7]="frame7";
uLocal_33[8]="frame8";
uLocal_33[9]="frame9";
uLocal_33[10]="frame10";
uLocal_33[11]="frame11";
uLocal_33[12]="frame12";
uLocal_48[0]="No_Expression";
uLocal_48[1]="mood_Aiming_1";
uLocal_48[2]="mood_Happy_1";
uLocal_48[3]="mood_smug_1";
uLocal_48[4]="mood_Injured_1";
uLocal_48[5]="mood_sulk_1";
uLocal_48[6]="mood_Angry_1";
func_173();
if(func_172(true, true, !bLocal_64, true)) bLocal_64=true;
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
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) Global_22758=1;
if(GRAPHICS::GET_USINGNIGHTVISION()) Global_22758=1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) Global_22758=1;
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)) Global_22758=1;
if(PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) Global_22758=1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if(bLocal_131==true) Global_22758=1;
veLocal_149=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::GET_ENTITY_MODEL(veLocal_149)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(veLocal_149)==joaat("cutter") || ENTITY::GET_ENTITY_MODEL(veLocal_149)==joaat("submersible") || ENTITY::GET_ENTITY_MODEL(veLocal_149)==joaat("khanjali") || ENTITY::GET_ENTITY_MODEL(veLocal_149)==joaat("barrage") && VEHICLE::IS_TURRET_SEAT(veLocal_149, _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) Global_22758=1;
elseif(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_149, -1, false)==PLAYER::PLAYER_PED_ID())if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_149) > 0f)if(!Global_78558)if(!func_169(false)) TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), veLocal_149, 6, 4000);
}}
if(Global_78558)if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
MISC::CLEAR_BIT(&Global_8253, 21);
func_168(0);
MISC::SET_BIT(&Global_8253, 17);
if(Global_20325==false){
func_167();
}else{
plLocal_140=GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
plLocal_141=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_141)){
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
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
func_165(plLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
func_164(plLocal_140, "CLOSE_SHUTTER");
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
fLocal_78={
Global_20343 
};
fLocal_81={
Global_20336[Global_20328 /*3*/] 
};
Global_22759=1;
bLocal_118=true;
bLocal_119=true;
bLocal_120=true;
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
iLocal_124=0;
iLocal_125=0;
if(Global_20383.f_1 > 3) Global_20383.f_1=8;
if(bLocal_131==false) MISC::CLEAR_BIT(&Global_8255, 3);
func_162();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV();
*Global_4718592.f_160554;
if(*Global_4718592.f_160556==1) iLocal_156=1;
iLocal_156==1;
while (true){
SYSTEM::WAIT(0);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_EXPRESSION);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
if(func_161()){
if(!IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(!Global_113648.f_14053.f_81){
if(!IS_BIT_SET(Global_4542297, 13)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!IS_BIT_SET(Global_8254, 28)){
if(bLocal_128 && bLocal_131==false && !func_161()){
MISC::SET_BIT(&Global_4542297, 13);
Global_113648.f_14053.f_81=1;
_DISPLAY_HELP_TEXT("CELL_FOC_HLP" /*Hold ~INPUT_CELLPHONE_CAMERA_FOCUS_LOCK~ to initiate Focus Lock. This will lock the viewfinder's focus distance and allow you to recompose your shot.*/, -1);
}}}}}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(*Global_4718592.f_160553==0 && *Global_4718592.f_160554==0) HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
func_159();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_COVER, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DETONATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
if(bLocal_150==false) PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20356);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && !func_161()){
iLocal_130=1;
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}
if(IS_BIT_SET(Global_8254, 3)){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())){
if(func_150()){
}else{
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))if(Global_78558==true) Global_20383.f_1=3;
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f) Global_20383.f_1=3;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
func_149();
veLocal_149=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_149) < 0f) func_146(0);
if(iLocal_115==1){
if(iLocal_116==1){
if(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()) func_146(0);
}
elseif(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()){
iLocal_116=1;
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}}}elseif(Global_78558==false){
if(IS_BIT_SET(Global_8253, 18)){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_20383==CHAR_MICHAEL || Global_20383==CHAR_FRANKLIN || Global_20383==CHAR_TREVOR){
if(!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID())){
if(PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
}else{
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}}
}}}}
if(bLocal_142) func_144();
Global_20383.f_1 < 4;
if(iLocal_153==0){
if(iLocal_103==0){
if(iLocal_104==0){
if(iLocal_111==0){
if(Global_20383.f_1 > 3){
if(bLocal_150){
func_142();
if(Global_22763==0 && Global_22760==6){
HUD::CLEAR_FLOATING_HELP(0, true);
HUD::BUSYSPINNER_OFF();
bLocal_150=false;
func_141();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_140();
iLocal_109=iLocal_109 + 1;
if(func_174()) func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
else func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
bLocal_132=false;
iLocal_133=0;
iLocal_134=0;
bLocal_127=0;
func_129();
}
if(Global_22760==0){
bLocal_150=false;
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_128();
bLocal_132=false;
iLocal_133=0;
iLocal_134=0;
bLocal_127=0;
func_129();
if(func_174())if(Global_4541022==0)if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
elseif(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_127();
func_126(true);
}}elseif(Global_20383.f_1 !=9){
if(Global_22759==1){
if(Global_22758==0) func_125();
}
elseif(Global_8861 - Global_8860 > Global_8862){
if(CAM::IS_SCREEN_FADED_OUT() && func_124()){
if(func_123() && bLocal_127){
}elseif(bLocal_127==false){
MISC::SET_GAME_PAUSED(false);
AUDIO::STOP_SOUND(iLocal_112);
iLocal_143=0;
if(Global_22758==0){
func_140();
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, true);
bLocal_128=false;
bLocal_118=true;
bLocal_119=true;
bLocal_120=true;
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(1);
bLocal_142=false;
func_115(false, true);
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
func_113(true);
}}
}
if(func_112(FRONTEND_CONTROL, Global_20351, 0)){
if(func_161()){
if(Global_1935176 || Global_1574964 || Global_22761 || IS_BIT_SET(Global_8253, 21)){
}elseif(func_123() && bLocal_127){
}elseif(!func_124()){
if(bLocal_127==false){
CAM::DO_SCREEN_FADE_OUT(500);
iLocal_143=0;
func_115(true, true);
func_111(true);
}}}elseif(func_123() && bLocal_127){
}elseif(bLocal_127==false){
MISC::SET_GAME_PAUSED(false);
AUDIO::STOP_SOUND(iLocal_112);
iLocal_143=0;
if(Global_22758==0){
func_140();
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, true);
bLocal_128=false;
bLocal_118=true;
bLocal_119=true;
bLocal_120=true;
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
bLocal_142=false;
func_115(false, true);
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
if(IS_BIT_SET(Global_8253, 28)){
func_110();
iLocal_102=1;
}
}
elseif(!IS_BIT_SET(Global_8253, 28)){
func_110();
iLocal_102=0;
}
if(Global_22758==1){
func_99();
}
elseif(Global_20383.f_1 > 4){
if(iLocal_124==1 && iLocal_125==0) func_95();
if(iLocal_124==0 && iLocal_125==1){
func_128();
if(iLocal_136==1 || iLocal_136==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
func_164(plLocal_140, "CLOSE_SHUTTER");
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < iLocal_135 + iLocal_137 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
}}
if(func_174())if(Global_4541022==0)if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
elseif(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_144();
func_159();
bLocal_132=false;
iLocal_133=0;
iLocal_134=0;
bLocal_127=false;
func_129();
iLocal_136=0;
func_164(plLocal_140, "OPEN_SHUTTER");
}
func_127();
func_126(true);
func_93();
}
}
if(iLocal_143==1) func_90();
if(bLocal_129){
if(SYSTEM::TIMERB() > 500){
bLocal_128=true;
bLocal_129=false;
MISC::SET_BIT(&Global_8253, 18);
if(Global_22758==0) func_115(true, true);
}
}
if(bLocal_127==false)if(bLocal_128 && Global_22758==0)if(iLocal_130==0 && iLocal_125==0 && Global_22761==false) func_12();
else func_94();
elseif(iLocal_124==0) func_7();
}}
}}}else{
if(Global_20383.f_1 > 3)if(Global_22759==1)if(Global_22758==0) func_125();
func_6();
}}else{
if(iLocal_155==1) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "CELL_CAM_FW_1" /*Camera storage device full.*/, iLocal_152, "CELL_CAM_FW_2" /*Access the Gallery from the Pause Menu to delete some photos.*/, false, -1, "", "", true, 0);
if(iLocal_155==2) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "ERROR_NO_SC_CAMERAPHONE" /*Unable to save your Snapmatic photo as you are not signed up or in to ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~.*/, iLocal_152, "", false, -1, "", "", true, 0);
if(iLocal_155==6) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "SC_ERROR_BANNED" /*You have been banned from using Social Club services.*/, iLocal_152, "", false, -1, "", "", true, 0);
if(iLocal_155==3) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "ERROR_UPDATE_SC_CAMERAPHONE" /*Accept the latest ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ Online Policies to save your Snapmatic photos to the Gallery. Sign in or visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information.*/, iLocal_152, "", false, -1, "", "", true, 0);
if(iLocal_155==7){
if(MISC::IS_XBOX360_VERSION() || func_5()) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "CELL_CAM_TEMP_3X" /*To save Snapmatic phone app photos to the Gallery you must be signed in to Xbox LIVE*/, iLocal_152, "", false, -1, "", "", true, 0);
if(MISC::IS_PS3_VERSION() || func_4()) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "CELL_CAM_TEMP_3P" /*To save Snapmatic phone app photos to the Gallery you must be signed in to PSN℠*/, iLocal_152, "", false, -1, "", "", true, 0);
if(MISC::IS_PC_VERSION()) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "CELL_CAM_TEMP_30" /*To save Snapmatic phone app photos to the Gallery you must be signed in.*/, iLocal_152, "", false, -1, "", "", true, 0);
}
if(iLocal_155==4) HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "CELL_CAM_CCW_1" /*Unable to save photos as the cloud connection is unavailable.*/, iLocal_152, "CELL_CAM_CCW_2" /*Please try again later.*/, false, -1, "", "", true, 0);
if(iLocal_155==5){
ageGroup=NETWORK::NETWORK_GET_AGE_GROUP();
switch (ageGroup){
case -1:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "HUD_AGE_I" /*Snapmatic features are unavailable. An error occurred whilst validating your account's eligibility.*/, iLocal_152, "", false, -1, "", "", true, 0);
break;
case 0:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "HUD_AGE_P" /*Snapmatic features are temporarily unavailable. Please try again later.*/, iLocal_152, "", false, -1, "", "", true, 0);
break;
case 1:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "HUD_AGE_C" /*Snapmatic features are disabled on this account due to eligibility restrictions.*/, iLocal_152, "", false, -1, "", "", true, 0);
break;
case 2:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "HUD_AGE_T" /*Snapmatic features are currently disabled on this account due to eligibility restrictions.*/, iLocal_152, "", false, -1, "", "", true, 0);
break;
default:
HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /*ALERT*/, "HUD_AGE_P" /*Snapmatic features are temporarily unavailable. Please try again later.*/, iLocal_152, "", false, -1, "", "", true, 0);
break;
}}
iLocal_155==0;
if(iLocal_155==2 || iLocal_155==3){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)) iLocal_154=1;
if(iLocal_154==1){
if(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
iLocal_154=0;
unk_0x48C1B62E5547CD4B("Gallery");
HUD::OPEN_SOCIAL_CLUB_MENU();
}}}elseif(iLocal_155==7){
if(func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
iLocal_111=0;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
iLocal_111=0;
}
if(!func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20355)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
if(IS_BIT_SET(Global_8254, 28)) iLocal_111=0;
else iLocal_111=2;
iLocal_107=MISC::GET_GAME_TIMER();
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
}}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
iLocal_153=0;
iLocal_155=0;
func_115(false, true);
}}}
iLocal_108=MISC::GET_GAME_TIMER();
if(func_161()){
if(!IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(func_3() || iLocal_130){
func_1(0);
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
Global_22758=0;
Global_22759=0;
Global_22761=false;
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_140);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_141);
MISC::SET_GAME_PAUSED(false);
if(Global_20586==1) MISC::SET_BIT(&Global_8253, 17);
else MISC::CLEAR_BIT(&Global_8253, 17);
HUD::CLEAR_FLOATING_HELP(0, true);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
MISC::CLEAR_BIT(&Global_8255, 3);
MISC::CLEAR_BIT(&Global_4542297, 3);
HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
Global_22762=1;
AUDIO::STOP_SOUND(iLocal_112);
AUDIO::RELEASE_SOUND_ID(iLocal_112);
HUD::BUSYSPINNER_OFF();
func_117(true);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
if(Global_4541022 > 0 && Global_4541022 < 13) GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uLocal_33[Global_4541022]);
MISC::CLEAR_BIT(&Global_8253, 18);
if(func_161()) func_115(true, true);
else func_115(false, true);
if(func_172(false, true, bLocal_64, true)) bLocal_64=false;
SCRIPT::TERMINATE_THIS_THREAD();
}}
return;
}


void func_1(int iParam0) // Position - 0x1223{
if(func_2())if(iParam0==1) MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
elseif(Global_20383.f_1 > 3) MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);
return;
}
BOOL func_2() // Position - 0x124E{
eViewModeContext camActiveViewModeContext;
eViewMode camViewModeForContext;
BOOL flag;
if(Global_78558) return false;
flag=0;
camActiveViewModeContext=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
camViewModeForContext=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
if(camViewModeForContext==FIRST_PERSON) flag=1;
if(Global_4542575 || flag) return true;
return true;
}

int func_3() // Position - 0x1295{
if(Global_20383.f_1==1 || Global_20383.f_1==3 || Global_20383.f_1==0 || Global_20327==1){
Global_20370=1;
return 1;
}
return 0;
}
BOOL func_4() // Position - 0x12D8{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_5() // Position - 0x12EE{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_6() // Position - 0x1304{
iLocal_106=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
switch (iLocal_106){
case 0:
iLocal_103=0;
iLocal_109=GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
iLocal_110=GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
if(iLocal_104==1){
if(bLocal_127==false){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140)){
if(func_174()){
if(Global_4541022==0)if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
else{
if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140)){
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
iLocal_104=0;
}
HUD::BUSYSPINNER_OFF();
break;
case 1:
if(!HUD::BUSYSPINNER_IS_ON()){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2" /*Scanning System Storage*/);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}
break;
case 2:
if(IS_BIT_SET(Global_8254, 28)){
iLocal_103=0;
iLocal_109=0;
iLocal_110=0;
}else{
Global_20383.f_1=3;
Global_22762=1;
}
HUD::BUSYSPINNER_OFF();
break;
}
return;
}


void func_7() // Position - 0x1496{
if(func_112(FRONTEND_CONTROL, Global_20352, 0)){
func_1(0);
if(IS_BIT_SET(Global_8254, 28)){
MISC::SET_GAME_PAUSED(false);
SYSTEM::SETTIMERB(0);
func_141();
bLocal_127=false;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_140();
iLocal_136=1;
}elseif(func_11()){
if(IS_BIT_SET(Global_8254, 14)){
_DISPLAY_HELP_TEXT("CELL_299" /*Cannot save as last picture failed.*/, -1);
}else{
func_140();
func_10();
}}else{
iLocal_153=1;
func_115(true, true);
}}
if(IS_BIT_SET(Global_8253, 22)){
func_1(0);
while (SYSTEM::TIMERA() < 2000){
SYSTEM::WAIT(0);
func_159();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_94();
func_149();
func_144();
}
MISC::SET_GAME_PAUSED(false);
func_141();
SYSTEM::SETTIMERB(0);
bLocal_127=false;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_129();
func_140();
}
if(func_112(FRONTEND_CONTROL, Global_20356, 0)){
func_1(0);
if(func_123() || IS_BIT_SET(Global_8254, 28)){
}else{
MISC::SET_GAME_PAUSED(false);
SYSTEM::SETTIMERB(0);
iLocal_136=1;
func_141();
bLocal_127=false;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_140();
}}
if(IS_BIT_SET(Global_8253, 28)){
if(func_112(FRONTEND_CONTROL, Global_20355, 0)){
func_1(0);
MISC::SET_GAME_PAUSED(false);
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
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
bLocal_126=false;
func_115(false, true);
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, true);
bLocal_128=false;
bLocal_118=true;
bLocal_119=true;
bLocal_120=true;
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
func_8();
bLocal_127=false;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
if(!Global_2793044.f_6749) MISC::SET_BIT(&Global_8253, 9);
bLocal_142=false;
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
return;
}


void func_8() // Position - 0x16C2{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
func_9();
}
return;
}


void func_9() // Position - 0x16E8{
if(func_2()) MOBILE::CELL_SET_INPUT(5);
return;
}


void func_10() // Position - 0x16FC{
bLocal_150=true;
Global_22763=1;
HUD::CLEAR_FLOATING_HELP(0, true);
return;
}
BOOL func_11() // Position - 0x1711{
if(iLocal_107==iLocal_108)if(bLocal_105) bLocal_105=true;
if(Global_20383.f_1 < 4) return false;
if(iLocal_109==iLocal_110 || iLocal_109 > iLocal_110){
iLocal_155=1;
iLocal_152=2;
return false;
}
return true;
}


void func_12() // Position - 0x1759{
int num;
int num2;
int pedPropIndex;
int pedPropIndex2;
int num3;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
num=179;
num2=21;
}else{
num=228;
num2=229;
}
if(bLocal_131){
func_85();
func_81();
func_80();
fLocal_73=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_74=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
if(iLocal_133==0){
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num2)){
iLocal_133=1;
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(IS_BIT_SET(Global_8253, 28)){
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION, true), "CELL_CAM_SELFIE_2" /*Reset Camera*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION, true), "CELL_CAM_SELFIE_2" /*Reset Camera*/);
}
func_66();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num2)){
iLocal_133=0;
func_129();
}
if(iLocal_134==0){
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num2) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num)){
iLocal_134=1;
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(IS_BIT_SET(Global_8253, 28)){
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
}elseif(!func_161()){
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
}
func_65();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num2) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num)){
iLocal_134=0;
func_129();
}}else{
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
}
if(PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL)) func_129();
func_149();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
if(func_161()){
if(!IS_BIT_SET(Global_4542297, 2)){
MISC::SET_BIT(&Global_4542297, 2);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID) && iLocal_156==0 && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(IS_BIT_SET(Global_4542297, 2)){
MISC::CLEAR_BIT(&Global_4542297, 2);
if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}else{
MISC::SET_BIT(&Global_4542297, 2);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}}
if(bLocal_131){
if(bLocal_132==true){
bLocal_132=false;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
func_64("CELL_FOCUS" /*Focus Lock (Hold)*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(!func_63(14)){
if(IS_BIT_SET(Global_4542297, 10)){
if(Global_78558==false && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0 && func_62()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /*Action:
~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&Global_4542297, 10);
}}}elseif(IS_BIT_SET(Global_4542297, 10)){
MISC::CLEAR_BIT(&Global_4542297, 10);
}
iLocal_66=MISC::GET_GAME_TIMER();
if(iLocal_66 - iLocal_65 > 1500){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
uLocal_70={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_70, uLocal_67, true) > 5f){
Global_20383.f_1=3;
MISC::SET_GAME_PAUSED(false);
}
iLocal_65=MISC::GET_GAME_TIMER();
}}}elseif(bLocal_132){
if(!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 182) && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
bLocal_132=false;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
func_64("CELL_FOCUS" /*Focus Lock (Hold)*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}elseif(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 182) && !func_161()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
bLocal_132=true;
if(!func_63(14)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
func_64("CELL_FOCUS" /*Focus Lock (Hold)*/);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(func_174()){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_EXPRESSION) && iLocal_156==0 && !func_161()){
if(bLocal_131){
iLocal_57=iLocal_57 + 1;
if(iLocal_57 > 0 && iLocal_57 < 7){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
if(Global_20383==CHAR_MICHAEL){
num3=0;
pedPropIndex=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
if(pedPropIndex==20 || pedPropIndex==14) num3=1;
pedPropIndex2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_BERD, 1);
if(pedPropIndex2 !=-1) num3=1;
if(num3==1)if(iLocal_57==2 || iLocal_57==3 || iLocal_57==4 || iLocal_57==8 || iLocal_57==9)if(pedPropIndex==-1 && pedPropIndex2 > -1)if(iLocal_57==3) PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), uLocal_48[iLocal_57], 0);
else PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), uLocal_48[iLocal_57], 0);
else PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), uLocal_48[iLocal_57], 0);
}
else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), uLocal_48[iLocal_57], 0);
}}}
if(iLocal_57==7 || iLocal_57 > 7) iLocal_57=0;
if(iLocal_57==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
}}}}
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF) && iLocal_156==0 && !func_161()){
if(bLocal_131){
if(bLocal_62==true){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
if(iLocal_61==0){
iLocal_61=1;
iLocal_60=1;
if(MISC::ARE_STRINGS_EQUAL(uLocal_19[Global_4541021], "phone_cam12DUMMY")){
}
else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
}}else{
iLocal_61=0;
iLocal_60=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
}}}elseif(bLocal_63==true){
if(iLocal_60==0){
iLocal_60=1;
iLocal_61=1;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
}else{
iLocal_60=0;
iLocal_61=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
}}}}
if(iLocal_59==1 && !func_161()){
if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_UP) && iLocal_156==0){
if(func_174()){
Global_4541022=Global_4541022 + 1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
}
if(Global_4541022==13){
func_126(false);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uLocal_33[Global_4541022 - 1]);
Global_4541022=0;
func_61();
if(iLocal_47==1){
MISC::CLEAR_BIT(&Global_4542297, 2);
iLocal_47=0;
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(Global_4541022 > 0 && Global_4541022 < 13){
iLocal_59=0;
iLocal_58=0;
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uLocal_33[Global_4541022], false);
}}}
if(Global_4541022 > 0){
if(iLocal_59==0){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uLocal_33[Global_4541022])){
iLocal_58=1;
iLocal_59=1;
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()) func_126(true);
if(iLocal_47==0)if(!IS_BIT_SET(Global_4542297, 2)) iLocal_47=1;
MISC::SET_BIT(&Global_4542297, 2);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(uLocal_33[Global_4541022], false);
}}
if(iLocal_58==1){
Global_4541022==1 || Global_4541022==3;
Global_4541022==2 || Global_4541022==4;
}}
if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_DOWN) && iLocal_156==0 && !func_161()){
if(func_174()){
func_117(false);
Global_4541021=Global_4541021 + 1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
}
if(Global_4541021==13) Global_4541021=0;
if(Global_4541021==0)if(func_174()) func_117(false);
else func_127();
func_60();
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE) && iLocal_156==0 && !func_161()){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_164(plLocal_140, "CLOSE_SHUTTER");
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < iLocal_135 + iLocal_139 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
if(bLocal_131==false){
AUDIO::STOP_SOUND(iLocal_112);
bLocal_131=true;
func_59(true);
func_58();
MISC::SET_BIT(&Global_8255, 3);
iLocal_65=MISC::GET_GAME_TIMER();
}else{
iLocal_133=0;
iLocal_134=0;
func_59(false);
bLocal_131=false;
MISC::CLEAR_BIT(&Global_8255, 3);
}
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < iLocal_135 + iLocal_137 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
func_164(plLocal_140, "OPEN_SHUTTER");
if(func_174())if(Global_4541022==0)if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
elseif(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_144();
func_159();
if(IS_BIT_SET(Global_8253, 28)){
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_296", 16);
func_56();
}else{
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_295", 16);
func_30();
}}}}
if(bLocal_131==false){
if(iLocal_113==0){
if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_IN_ONLY) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_OUT_ONLY)){
fLocal_114=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_114 > 1f && fLocal_114 < 4.5f)if(AUDIO::HAS_SOUND_FINISHED(iLocal_112)) AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_20372, true);
else AUDIO::STOP_SOUND(iLocal_112);
iLocal_113=1;
}}elseif(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 40) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 41)){
fLocal_114=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_114 > 1f && fLocal_114 < 4.5f)if(AUDIO::HAS_SOUND_FINISHED(iLocal_112)) AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_20372, true);
else AUDIO::STOP_SOUND(iLocal_112);
}else{
AUDIO::STOP_SOUND(iLocal_112);
}}
if(func_112(FRONTEND_CONTROL, Global_20352, 0) && !func_124() && !func_112(FRONTEND_CONTROL, Global_20351, 0)){
fLocal_75=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_76=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
MISC::SET_BIT(&Global_8253, 21);
AUDIO::STOP_SOUND(iLocal_112);
bLocal_127=true;
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20372, true);
func_164(plLocal_140, "CLOSE_SHUTTER");
fLocal_84={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_84, 0);
if(!func_174()) func_117(true);
Global_22761=true;
HUD::CLEAR_FLOATING_HELP(0, true);
while (Global_22760 < 6 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
func_149();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
MOBILE::CELL_CAM_ACTIVATE(false, false);
if(Global_20325) func_1(1);
iLocal_135=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < iLocal_135 + iLocal_138 && Global_20383.f_1 > 3){
func_159();
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
SYSTEM::WAIT(0);
}
SYSTEM::SETTIMERA(0);
func_164(plLocal_140, "OPEN_SHUTTER");
MISC::CLEAR_BIT(&Global_8253, 21);
func_129();
if(Global_20383.f_1 > 3){
if(Global_78558){
_MPCHAR_STAT_INCREMENT_INT(MP_STAT_NO_PHOTOS_TAKEN, 1, -1);
func_22();
func_19(-1492367786, 23, false);
}else{
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
STATS::STAT_INCREMENT(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
break;
case CHAR_FRANKLIN:
STATS::STAT_INCREMENT(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
break;
case CHAR_TREVOR:
STATS::STAT_INCREMENT(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
break;
}
func_22();
}
func_126(false);
}
func_144();
}
if(IS_BIT_SET(Global_8253, 28)){
if(func_112(FRONTEND_CONTROL, Global_20355, 0)){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
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
bLocal_126=true;
Global_22758=1;
HUD::CLEAR_FLOATING_HELP(0, true);
bLocal_128=false;
bLocal_118=true;
bLocal_119=true;
bLocal_120=true;
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
func_8();
bLocal_127=false;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
if(!Global_2793044.f_6749) MISC::SET_BIT(&Global_8253, 9);
MISC::SET_GAME_PAUSED(false);
bLocal_142=false;
func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2662{
func_14();
return Global_113648.f_2365.f_539.f_4321;
}


void func_14() // Position - 0x267B{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_15(character) && !func_63(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_15(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
Global_113648.f_2365.f_539.f_4323=character;
Global_113648.f_2365.f_539.f_4321=character;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=_CHAR_NULL) Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
return;
}
BOOL func_15(eCharacter echParam0) // Position - 0x2778{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2784{
eCharacter i;
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
for (i=CHAR_MICHAEL;
i <=CHAR_TREVOR;
i=i + 1){
if(_GET_CHARACTER_MODEL(i)==entityModel) return i;
}}
return _CHAR_NULL;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x27C1{
if(func_15(character)) return func_18(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_18(eCharacter echParam0) // Position - 0x27E6{
return Global_2028[echParam0 /*29*/];
}


void func_19(int iParam0, int iParam1, BOOL bParam2) // Position - 0x27F5{
int num;
if(func_21(iParam1, bParam2)){
num=func_20();
Global_2694418[num]=iParam1;
Global_2694429[num]=iParam0;
}
return;
}

int func_20() // Position - 0x2822{
int num;
int i;
num=9;
for (i=0;
i <=9;
i=i + 1){
if(Global_2694418[i]==0){
num=i;
i=10;
}}
return num;
}
BOOL func_21(int iParam0, BOOL bParam1) // Position - 0x2857{
if(Global_1575048) return false;
if(iParam0==22) return true;
if(bParam1 || !Global_1575060 || iParam0==3 || iParam0==10 || iParam0==11 || iParam0==27 || iParam0==28 || iParam0==29 || iParam0==30) return true;
else return false;
return true;
}


void func_22() // Position - 0x28DD{
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
iLocal_124=1;
iLocal_125=0;
Global_20320={
Global_20336[Global_20328 /*3*/] 
};
func_115(false, true);
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
if(!IS_BIT_SET(Global_8254, 28))if(NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV()==false)if(MISC::IS_XBOX360_VERSION())if(iLocal_117==0) iLocal_117=1;
return;
}


void _MPCHAR_STAT_INCREMENT_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x293E{
int num;
num=_MPCHAR_STAT_GET_INT(empsParam0, func_28(iParam2), 0);
num=num + iParam1;
if(!func_26(empsParam0)) _MPCHAR_STAT_SET_INT(empsParam0, num, iParam2, true, false);
else func_24(empsParam0, num, iParam2, true);
return;
}


void func_24(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2980{
Hash statName;
statName=Global_2805027[empsParam0 /*3*/][func_28(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
switch (empsParam0){
case MP_STAT_BRONZE_INTCHAR_0:
Global_1665566[func_28(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_1:
Global_1665572[func_28(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_2:
Global_1665578[func_28(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_3:
Global_1665584[func_28(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_4:
Global_1665590[func_28(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_0:
Global_1665536[func_28(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_1:
Global_1665542[func_28(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_2:
Global_1665548[func_28(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_3:
Global_1665554[func_28(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_4:
Global_1665560[func_28(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_0:
Global_1665506[func_28(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_1:
Global_1665512[func_28(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_2:
Global_1665518[func_28(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_3:
Global_1665524[func_28(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_4:
Global_1665530[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_0:
Global_1665596[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_1:
Global_1665602[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_2:
Global_1665608[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_3:
Global_1665614[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_4:
Global_1665620[func_28(iParam2)]=iParam1;
break;
case MP_STAT_FM_CUT_DONE:
Global_1665626[func_28(iParam2)]=iParam1;
break;
case MP_STAT_FM_CUT_DONE_2:
Global_1665632[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CHAR_XP_FM:
Global_1665638[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROPERTY_HOUSE:
Global_1665644[func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_1:
Global_2851323[0 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_2:
Global_2851323[1 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_3:
Global_2851323[2 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_4:
Global_2851323[3 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_BRUISER2_LAS_HITS:
Global_2851502[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_0:
Global_1665650[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_1:
Global_1665656[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_2:
Global_1665662[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_3:
Global_1665668[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_4:
Global_1665674[func_28(iParam2)]=iParam1;
break;
case MP_STAT_INSURGENT3_TURR_HITS:
Global_1665680[func_28(iParam2)]=iParam1;
break;
case MP_STAT_NO_CLOTHES_UNLOCK:
Global_1665686[func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_0:
Global_2851411[0 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_1:
Global_2851411[1 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_2:
Global_2851411[2 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_3:
Global_2851411[3 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_4:
Global_2851411[4 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT0:
Global_2851505[0 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT1:
Global_2851505[1 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT2:
Global_2851505[2 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT3:
Global_2851505[3 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT4:
Global_2851505[4 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE0:
Global_2851521[0 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE1:
Global_2851521[1 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE2:
Global_2851521[2 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE3:
Global_2851521[3 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE4:
Global_2851521[4 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_VAR:
Global_2851411[5 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE:
Global_2851323[4 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_NUMBUYMISSIONSCOMPLETED:
Global_2851537[func_28(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_BUY_COMPLETE:
Global_2851546[func_28(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_BUY_UNDERTAKEN:
Global_2851540[func_28(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_SELL_COMPLETE:
Global_2851549[func_28(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_SELL_UNDERTAKEN:
Global_2851543[func_28(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_CONTRA_EARNINGS:
Global_2851552[func_28(iParam2)]=iParam1;
break;
case MP_STAT_DELIVERY_VEH_UPGRADES:
Global_2851555[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CLUBHOUSE_VAR:
Global_2851411[6 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CLUBHOUSE:
Global_2851323[5 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_5:
Global_2851411[7 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_5:
Global_2851323[6 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR1_VAR:
Global_2851411[8 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR1:
Global_2851323[7 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR2_VAR:
Global_2851411[9 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR2:
Global_2851323[8 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR3_VAR:
Global_2851411[10 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR3:
Global_2851323[9 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_IE_WAREHOUSE_VAR:
Global_2851411[11 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_IE_WAREHOUSE:
Global_2851323[10 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_HANGAR_VAR:
Global_2851411[12 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_HANGAR:
Global_2851323[11 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_DEFUNCBASE_VAR:
Global_2851411[13 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_DEFUNCBASE:
Global_2851323[12 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_NIGHTCLUB_VAR:
Global_2851411[14 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_NIGHTCLUB:
Global_2851323[13 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR1_VAR:
Global_2851411[15 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR1:
Global_2851323[14 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR2_VAR:
Global_2851411[16 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR2:
Global_2851323[15 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR3_VAR:
Global_2851411[17 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR3:
Global_2851323[16 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR1:
Global_2851323[17 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR2:
Global_2851323[18 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR3:
Global_2851323[19 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CASINO_GAR1:
Global_2851323[20 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_1:
Global_2851558[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_2:
Global_2851561[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_3:
Global_2851564[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_4:
Global_2851567[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_5:
Global_2851570[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_6:
Global_2851573[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_7:
Global_2851576[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_8:
Global_2851579[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_9:
Global_2851582[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_10:
Global_2851585[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_11:
Global_2851588[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_12:
Global_2851591[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_13:
Global_2851594[func_28(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_14:
Global_2851597[func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARCADE_GAR1:
Global_2851323[21 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_6:
Global_2851411[23 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_6:
Global_2851323[22 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_7:
Global_2851411[24 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_7:
Global_2851323[23 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_AUTO_SHOP:
Global_2851323[24 /*3*/][func_28(iParam2)]=iParam1;
break;
case MP_STAT_PROP_SECURITY_OFFICE_GAR:
Global_2851323[25 /*3*/][func_28(iParam2)]=iParam1;
break;
case _0x2065457610:
Global_2851411[27 /*3*/][func_28(iParam2)]=iParam1;
break;
case _0x1055556065:
Global_2851323[26 /*3*/][func_28(iParam2)]=iParam1;
break;
case _0x1335233214:
Global_2851411[28 /*3*/][func_28(iParam2)]=iParam1;
break;
case _0x2129461717:
Global_2851323[27 /*3*/][func_28(iParam2)]=iParam1;
break;
default:
break;
}
return;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x34B2{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_28(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}
BOOL func_26(eMPStat empsParam0) // Position - 0x34E2{
if(Global_1665487){
switch (empsParam0){
case MP_STAT_BRONZE_INTCHAR_0:
case MP_STAT_BRONZE_INTCHAR_1:
case MP_STAT_BRONZE_INTCHAR_2:
case MP_STAT_BRONZE_INTCHAR_3:
case MP_STAT_BRONZE_INTCHAR_4:
case MP_STAT_SILVER_INTCHAR_0:
case MP_STAT_SILVER_INTCHAR_1:
case MP_STAT_SILVER_INTCHAR_2:
case MP_STAT_SILVER_INTCHAR_3:
case MP_STAT_SILVER_INTCHAR_4:
case MP_STAT_GOLD_INTCHAR_0:
case MP_STAT_GOLD_INTCHAR_1:
case MP_STAT_GOLD_INTCHAR_2:
case MP_STAT_GOLD_INTCHAR_3:
case MP_STAT_GOLD_INTCHAR_4:
case MP_STAT_PLATINUM_INTCHAR_0:
case MP_STAT_PLATINUM_INTCHAR_1:
case MP_STAT_PLATINUM_INTCHAR_2:
case MP_STAT_PLATINUM_INTCHAR_3:
case MP_STAT_PLATINUM_INTCHAR_4:
case MP_STAT_FM_CUT_DONE:
case MP_STAT_FM_CUT_DONE_2:
case MP_STAT_CHAR_XP_FM:
case MP_STAT_PROPERTY_HOUSE:
case MP_STAT_PLATINUM_BOOLCHAR_0:
case MP_STAT_PLATINUM_BOOLCHAR_1:
case MP_STAT_PLATINUM_BOOLCHAR_2:
case MP_STAT_PLATINUM_BOOLCHAR_3:
case MP_STAT_PLATINUM_BOOLCHAR_4:
case MP_STAT_INSURGENT3_TURR_HITS:
case MP_STAT_NO_CLOTHES_UNLOCK:
case MP_STAT_MULTI_PROPERTY_1:
case MP_STAT_MULTI_PROPERTY_2:
case MP_STAT_MULTI_PROPERTY_3:
case MP_STAT_MULTI_PROPERTY_4:
case MP_STAT_BRUISER2_LAS_HITS:
case MP_STAT_APPARTMENT_VAR_0:
case MP_STAT_APPARTMENT_VAR_1:
case MP_STAT_APPARTMENT_VAR_2:
case MP_STAT_APPARTMENT_VAR_3:
case MP_STAT_APPARTMENT_VAR_4:
case MP_STAT_MULTI_PROPERTY_5:
case MP_STAT_APPARTMENT_VAR_5:
case MP_STAT_WARHOUSESLOT0:
case MP_STAT_WARHOUSESLOT1:
case MP_STAT_WARHOUSESLOT2:
case MP_STAT_WARHOUSESLOT3:
case MP_STAT_WARHOUSESLOT4:
case MP_STAT_CONTOTALFORWHOUSE0:
case MP_STAT_CONTOTALFORWHOUSE1:
case MP_STAT_CONTOTALFORWHOUSE2:
case MP_STAT_CONTOTALFORWHOUSE3:
case MP_STAT_CONTOTALFORWHOUSE4:
case MP_STAT_PROP_OFFICE:
case MP_STAT_PROP_OFFICE_VAR:
case MP_STAT_NUMBUYMISSIONSCOMPLETED:
case MP_STAT_LIFETIME_BUY_COMPLETE:
case MP_STAT_LIFETIME_BUY_UNDERTAKEN:
case MP_STAT_LIFETIME_SELL_COMPLETE:
case MP_STAT_LIFETIME_SELL_UNDERTAKEN:
case MP_STAT_LIFETIME_CONTRA_EARNINGS:
case MP_STAT_DELIVERY_VEH_UPGRADES:
case MP_STAT_PROP_CLUBHOUSE:
case MP_STAT_PROP_CLUBHOUSE_VAR:
case MP_STAT_PROP_OFFICE_GAR1:
case MP_STAT_PROP_OFFICE_GAR1_VAR:
case MP_STAT_PROP_OFFICE_GAR2:
case MP_STAT_PROP_OFFICE_GAR2_VAR:
case MP_STAT_PROP_OFFICE_GAR3:
case MP_STAT_PROP_OFFICE_GAR3_VAR:
case MP_STAT_PROP_IE_WAREHOUSE:
case MP_STAT_PROP_IE_WAREHOUSE_VAR:
case MP_STAT_PROP_HANGAR:
case MP_STAT_PROP_HANGAR_VAR:
case MP_STAT_PROP_DEFUNCBASE:
case MP_STAT_PROP_DEFUNCBASE_VAR:
case MP_STAT_PROP_BUSINESSHUB:
case MP_STAT_PROP_BUSINESSHUB_VAR:
case MP_STAT_PROP_NIGHTCLUB:
case MP_STAT_PROP_NIGHTCLUB_VAR:
case MP_STAT_PROP_MEGAWARE_GAR1:
case MP_STAT_PROP_MEGAWARE_GAR1_VAR:
case MP_STAT_PROP_MEGAWARE_GAR2:
case MP_STAT_PROP_MEGAWARE_GAR2_VAR:
case MP_STAT_PROP_MEGAWARE_GAR3:
case MP_STAT_PROP_MEGAWARE_GAR3_VAR:
case MP_STAT_PROP_ARENAWARS_GAR1:
case MP_STAT_PROP_ARENAWARS_GAR2:
case MP_STAT_PROP_ARENAWARS_GAR3:
case MP_STAT_CASINO_APT_DECORATION_1:
case MP_STAT_CASINO_APT_DECORATION_2:
case MP_STAT_CASINO_APT_DECORATION_3:
case MP_STAT_CASINO_APT_DECORATION_4:
case MP_STAT_CASINO_APT_DECORATION_5:
case MP_STAT_CASINO_APT_DECORATION_6:
case MP_STAT_CASINO_APT_DECORATION_7:
case MP_STAT_CASINO_APT_DECORATION_8:
case MP_STAT_CASINO_APT_DECORATION_9:
case MP_STAT_CASINO_APT_DECORATION_10:
case MP_STAT_CASINO_APT_DECORATION_11:
case MP_STAT_CASINO_APT_DECORATION_12:
case MP_STAT_CASINO_APT_DECORATION_13:
case MP_STAT_CASINO_APT_DECORATION_14:
case MP_STAT_PROP_CASINO_GAR1:
case MP_STAT_PROP_ARCADE_GAR1:
case MP_STAT_MULTI_PROPERTY_6:
case MP_STAT_APPARTMENT_VAR_6:
case MP_STAT_MULTI_PROPERTY_7:
case MP_STAT_APPARTMENT_VAR_7:
case MP_STAT_PROP_AUTO_SHOP:
case MP_STAT_PROP_SECURITY_OFFICE_GAR:
case _0x1055556065:
case _0x2065457610:
case _0x2129461717:
case _0x1335233214:
return true;
}}
return false;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x37B2{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_28(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_28(int iParam0) // Position - 0x37EF{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_29();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_29() // Position - 0x3823{
return Global_1574918;
}


void func_30() // Position - 0x382F{
if(iLocal_156==1){
func_55();
return;
}
if(iLocal_133==0 && iLocal_134==0){
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_161()){
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
}
if(bLocal_131){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
}elseif(Global_78558==false && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0 && func_62()){
func_53();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
func_52(5f);
func_51(6f);
if(func_32(1)){
func_31(7f);
if(bLocal_62) func_78(plLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}
elseif(bLocal_62){
func_78(plLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161()){
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL)) func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_FRONTEND_RS, true), "CELL_284" /*Zoom*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 29, true), "CELL_284" /*Zoom*/);
}
if(!func_161()){
if(func_174()){
func_52(6f);
func_51(7f);
if(bLocal_63) func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_FOCUS_LOCK, true), "CELL_FOCUS" /*Focus Lock (Hold)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}else{
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
func_52(3f);
func_51(4f);
func_78(plLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}else{
if(!func_161())if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161()){
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL)) func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_FRONTEND_RS, true), "CELL_284" /*Zoom*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 29, true), "CELL_284" /*Zoom*/);
}
if(!func_161()) func_78(plLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
if(!func_161()){
if(func_174()){
func_52(7f);
func_51(8f);
if(bLocal_63) func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_FOCUS_LOCK, true), "CELL_FOCUS" /*Focus Lock (Hold)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}else{
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
func_52(3f);
func_51(4f);
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}
return;
}


void func_31(float fParam0) // Position - 0x3DA1{
func_78(plLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_LEFT, true), "CELL_ACTION" /*Play Action*/);
return;
}
BOOL func_32(int iParam0) // Position - 0x3DC1{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_50(Global_4456522, Global_4456523))if(iParam0==0 || !func_33(Global_4456522, Global_4456523, false, true, false)) return true;
return false;
}
BOOL func_33(int iParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3E01{
return func_34(PLAYER::PLAYER_PED_ID(), iParam0, uParam1, bParam2, bParam3, bParam4);
}
BOOL func_34(Ped pedParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3E1B{
var unk;
var unk8;
var unk15;
int num;
int num2;
int num3;
int num4;
if(func_49()) return 0;
unk=6;
unk8=6;
unk15=7;
if(iParam1==0) num4=3;
elseif(bParam3) num4=1;
elseif(bParam4) num4=2;
else num4=0;
func_42(iParam1, uParam2, &unk, &unk8, &unk15, num4, bParam5);
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)){
if(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_F_Freemode_01")){
num=func_41(pedParam0);
if(!num==-1)if(func_40(&unk, num)) return 1;
}else{
num2=func_39(pedParam0);
if(!num2==-1)if(func_37(&unk8, num2)) return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
num3=func_36(pedParam0);
if(!num3==0)if(func_35(&unk15, num3)) return 1;
}}
return 0;
}
BOOL func_35(var uParam0, int iParam1) // Position - 0x3EF5{
int num;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam1) / 32f);
if(!num < *uParam0) return false;
if(IS_BIT_SET(uParam0->[num], iParam1 - (num * 32))) return true;
return false;
}

int func_36(Ped pedParam0) // Position - 0x3F33{
int pedDrawableVariation;
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_BERD);
return pedDrawableVariation;
}
BOOL func_37(var uParam0, int iParam1) // Position - 0x3F46{
return func_38(uParam0, iParam1);
}
BOOL func_38(var uParam0, int iParam1) // Position - 0x3F56{
int num;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam1) / 32f);
if(!num < *uParam0) return 0;
if(IS_BIT_SET(uParam0->[num], iParam1 - (num * 32))) return 1;
return 0;
}

int func_39(Ped pedParam0) // Position - 0x3F94{
int pedPropIndex;
pedPropIndex=PED::GET_PED_PROP_INDEX(pedParam0, PV_COMP_HEAD, 1);
return pedPropIndex;
}
BOOL func_40(var uParam0, int iParam1) // Position - 0x3FA8{
return func_38(uParam0, iParam1);
}

int func_41(Ped pedParam0) // Position - 0x3FB8{
int pedPropIndex;
pedPropIndex=PED::GET_PED_PROP_INDEX(pedParam0, PV_COMP_HEAD, 1);
return pedPropIndex;
}


void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6) // Position - 0x3FCC{
func_48(uParam4, 91, true);
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
func_46(uParam3, 13, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 2, true);
func_44(uParam2, 20, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 33, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 69, true);
func_44(uParam2, 74, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 1:
func_46(uParam3, 4, true);
func_46(uParam3, 13, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 2, true);
func_44(uParam2, 20, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 28, true);
func_48(uParam4, 33, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 43, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 69, true);
func_44(uParam2, 74, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 2:
func_46(uParam3, 13, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 39, true);
func_44(uParam2, 2, true);
func_44(uParam2, 20, true);
func_44(uParam2, 38, true);
func_48(uParam4, 8, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 28, true);
func_48(uParam4, 33, true);
func_48(uParam4, 31, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 69, true);
func_44(uParam2, 74, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
}
break;
case 5:
case 24:
switch (iParam5){
case 0:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 5, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 28, true);
func_48(uParam4, 33, true);
func_48(uParam4, 43, true);
func_48(uParam4, 29, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_48(uParam4, 136, true);
func_48(uParam4, 138, true);
func_48(uParam4, 139, true);
func_48(uParam4, 143, true);
func_48(uParam4, 144, true);
func_48(uParam4, 145, true);
func_48(uParam4, 147, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 1:
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 28, true);
func_48(uParam4, 33, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 2:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 4, true);
func_48(uParam4, 5, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 28, true);
func_48(uParam4, 33, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_48(uParam4, 136, true);
func_48(uParam4, 138, true);
func_48(uParam4, 139, true);
func_48(uParam4, 143, true);
func_48(uParam4, 144, true);
func_48(uParam4, 145, true);
func_48(uParam4, 147, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
}
break;
case 59:
switch (iParam5){
case 0:
func_46(uParam3, 66, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 77, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 60:
case 63:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 61:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 62:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 64:
case 65:
case 66:
switch (iParam5){
case 0:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 10:
switch (iParam5){
case 0:
func_46(uParam3, 3, true);
func_46(uParam3, 4, true);
func_46(uParam3, 6, true);
func_46(uParam3, 10, true);
func_46(uParam3, 54, true);
func_46(uParam3, 55, true);
func_46(uParam3, 56, true);
func_46(uParam3, 13, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 20, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 37, true);
func_46(uParam3, 39, true);
func_46(uParam3, 55, true);
func_46(uParam3, 106, true);
func_46(uParam3, 114, true);
func_46(uParam3, 116, true);
func_46(uParam3, 117, true);
func_46(uParam3, 118, true);
func_46(uParam3, 119, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 8, true);
func_44(uParam2, 9, true);
func_44(uParam2, 10, true);
func_44(uParam2, 53, true);
func_44(uParam2, 56, true);
func_44(uParam2, 55, true);
func_44(uParam2, 13, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 21, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 32, true);
func_44(uParam2, 36, true);
func_44(uParam2, 38, true);
func_44(uParam2, 55, true);
func_44(uParam2, 14, true);
func_44(uParam2, 105, true);
func_44(uParam2, 113, true);
func_44(uParam2, 114, true);
func_44(uParam2, 115, true);
func_44(uParam2, 116, true);
func_44(uParam2, 117, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 3, true);
func_46(uParam3, 4, true);
func_46(uParam3, 6, true);
func_46(uParam3, 13, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 19, true);
func_46(uParam3, 20, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 37, true);
func_46(uParam3, 39, true);
func_46(uParam3, 55, true);
func_46(uParam3, 106, true);
func_46(uParam3, 114, true);
func_46(uParam3, 116, true);
func_46(uParam3, 117, true);
func_46(uParam3, 118, true);
func_46(uParam3, 119, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 8, true);
func_44(uParam2, 9, true);
func_44(uParam2, 10, true);
func_44(uParam2, 53, true);
func_44(uParam2, 56, true);
func_44(uParam2, 55, true);
func_44(uParam2, 11, true);
func_44(uParam2, 13, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 21, true);
func_44(uParam2, 22, true);
func_44(uParam2, 54, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 30, true);
func_44(uParam2, 31, true);
func_44(uParam2, 32, true);
func_44(uParam2, 36, true);
func_44(uParam2, 38, true);
func_44(uParam2, 55, true);
func_44(uParam2, 14, true);
func_44(uParam2, 105, true);
func_44(uParam2, 113, true);
func_44(uParam2, 114, true);
func_44(uParam2, 115, true);
func_44(uParam2, 116, true);
func_44(uParam2, 117, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 39, true);
func_46(uParam3, 106, true);
func_46(uParam3, 114, true);
func_46(uParam3, 116, true);
func_46(uParam3, 117, true);
func_46(uParam3, 118, true);
func_46(uParam3, 119, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 38, true);
func_44(uParam2, 14, true);
func_44(uParam2, 105, true);
func_44(uParam2, 113, true);
func_44(uParam2, 114, true);
func_44(uParam2, 115, true);
func_44(uParam2, 116, true);
func_44(uParam2, 117, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 13:
switch (iParam5){
case 0:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 2, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_43(uParam2, uParam3, uParam4);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 2:
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 5, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
func_43(uParam2, uParam3, uParam4);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
}
break;
case 16:
switch (iParam5){
case 0:
func_46(uParam3, 4, true);
break;
case 1:
func_48(uParam4, 43, true);
break;
case 2:
break;
}
break;
case 23:
switch (iParam5){
case 0:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_43(uParam2, uParam3, uParam4);
break;
case 1:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_43(uParam2, uParam3, uParam4);
break;
case 2:
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_43(uParam2, uParam3, uParam4);
break;
}
break;
case 17:
switch (iParam5){
case 0:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 111, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 5, true);
func_48(uParam4, 6, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 1:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 5, true);
func_48(uParam4, 6, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 2:
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 5, true);
func_48(uParam4, 6, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
}
break;
case 19:
switch (iParam5){
case 0:
func_46(uParam3, 3, true);
func_46(uParam3, 7, true);
func_46(uParam3, 0, true);
func_46(uParam3, 12, true);
func_46(uParam3, 13, true);
func_46(uParam3, 15, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 17, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 20, true);
func_46(uParam3, 21, true);
func_46(uParam3, 25, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 30, true);
func_46(uParam3, 31, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 39, true);
func_46(uParam3, 37, true);
func_44(uParam2, 0, true);
func_44(uParam2, 2, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 7, true);
func_44(uParam2, 8, true);
func_44(uParam2, 11, true);
func_44(uParam2, 13, true);
func_44(uParam2, 15, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 17, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
func_44(uParam2, 20, true);
func_44(uParam2, 21, true);
func_44(uParam2, 22, true);
func_44(uParam2, 54, true);
func_44(uParam2, 24, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 30, true);
func_44(uParam2, 31, true);
func_44(uParam2, 32, true);
func_44(uParam2, 38, true);
func_44(uParam2, 36, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 77, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 1:
func_46(uParam3, 3, true);
func_46(uParam3, 7, true);
func_46(uParam3, 0, true);
func_46(uParam3, 12, true);
func_46(uParam3, 13, true);
func_46(uParam3, 15, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 17, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 20, true);
func_46(uParam3, 21, true);
func_46(uParam3, 25, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 30, true);
func_46(uParam3, 31, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 39, true);
func_44(uParam2, 0, true);
func_44(uParam2, 2, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 7, true);
func_44(uParam2, 11, true);
func_44(uParam2, 13, true);
func_44(uParam2, 15, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 17, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
func_44(uParam2, 20, true);
func_44(uParam2, 21, true);
func_44(uParam2, 22, true);
func_44(uParam2, 54, true);
func_44(uParam2, 24, true);
func_44(uParam2, 38, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 6, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 43, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 77, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
case 2:
func_46(uParam3, 1, true);
func_46(uParam3, 3, true);
func_46(uParam3, 4, true);
func_46(uParam3, 5, true);
func_46(uParam3, 7, true);
func_46(uParam3, 10, true);
func_46(uParam3, 54, true);
func_46(uParam3, 55, true);
func_46(uParam3, 56, true);
func_46(uParam3, 0, true);
func_46(uParam3, 12, true);
func_46(uParam3, 13, true);
func_46(uParam3, 15, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 17, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 62, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 20, true);
func_46(uParam3, 21, true);
func_46(uParam3, 25, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 30, true);
func_46(uParam3, 31, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 37, true);
func_46(uParam3, 39, true);
func_44(uParam2, 0, true);
func_44(uParam2, 1, true);
func_44(uParam2, 2, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 5, true);
func_44(uParam2, 6, true);
func_44(uParam2, 7, true);
func_44(uParam2, 8, true);
func_44(uParam2, 9, true);
func_44(uParam2, 10, true);
func_44(uParam2, 53, true);
func_44(uParam2, 56, true);
func_44(uParam2, 55, true);
func_44(uParam2, 11, true);
func_44(uParam2, 12, true);
func_44(uParam2, 13, true);
func_44(uParam2, 14, true);
func_44(uParam2, 15, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 17, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
func_44(uParam2, 20, true);
func_44(uParam2, 21, true);
func_44(uParam2, 22, true);
func_44(uParam2, 54, true);
func_44(uParam2, 23, true);
func_44(uParam2, 24, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 29, true);
func_44(uParam2, 30, true);
func_44(uParam2, 31, true);
func_44(uParam2, 32, true);
func_44(uParam2, 33, true);
func_44(uParam2, 36, true);
func_44(uParam2, 38, true);
func_44(uParam2, 55, true);
func_48(uParam4, 1, true);
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 6, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 32, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_46(uParam3, 65, true);
func_46(uParam3, 67, true);
func_46(uParam3, 68, true);
func_46(uParam3, 69, true);
func_46(uParam3, 70, true);
func_46(uParam3, 71, true);
func_46(uParam3, 72, true);
func_46(uParam3, 73, true);
func_46(uParam3, 74, true);
func_46(uParam3, 75, true);
func_46(uParam3, 76, true);
func_46(uParam3, 77, true);
func_46(uParam3, 78, true);
func_46(uParam3, 79, true);
func_46(uParam3, 80, true);
func_46(uParam3, 81, true);
func_46(uParam3, 82, true);
func_46(uParam3, 91, true);
func_46(uParam3, 92, true);
func_44(uParam2, 64, true);
func_44(uParam2, 65, true);
func_44(uParam2, 66, true);
func_44(uParam2, 67, true);
func_44(uParam2, 68, true);
func_44(uParam2, 69, true);
func_44(uParam2, 70, true);
func_44(uParam2, 71, true);
func_44(uParam2, 72, true);
func_44(uParam2, 73, true);
func_44(uParam2, 74, true);
func_44(uParam2, 75, true);
func_44(uParam2, 77, true);
func_44(uParam2, 78, true);
func_44(uParam2, 79, true);
func_44(uParam2, 80, true);
func_44(uParam2, 81, true);
func_44(uParam2, 90, true);
func_44(uParam2, 91, true);
break;
}
break;
case 18:
switch (iParam5){
case 0:
break;
case 1:
func_44(uParam2, 2, true);
func_44(uParam2, 20, true);
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
func_42(2, 59, uParam2, uParam3, uParam4, 0, false);
break;
case 32:
func_42(2, 60, uParam2, uParam3, uParam4, 0, false);
break;
case 17:
case 27:
case 31:
break;
}
break;
}
return;
}


void func_43(var uParam0, var uParam1, var uParam2) // Position - 0xA1EB{
uParam0->[0]==0 || uParam1->[0]==0;
func_48(uParam2, 124, true);
func_48(uParam2, 125, true);
func_48(uParam2, 126, true);
func_48(uParam2, 127, true);
func_48(uParam2, 128, true);
func_48(uParam2, 129, true);
func_48(uParam2, 130, true);
func_48(uParam2, 131, true);
func_48(uParam2, 132, true);
func_48(uParam2, 133, true);
func_48(uParam2, 136, true);
func_48(uParam2, 138, true);
func_48(uParam2, 139, true);
func_48(uParam2, 143, true);
func_48(uParam2, 144, true);
func_48(uParam2, 145, true);
func_48(uParam2, 147, true);
return;
}


void func_44(var uParam0, int iParam1, BOOL bParam2) // Position - 0xA2A3{
func_45(uParam0, iParam1, bParam2);
return;
}


void func_45(var uParam0, int iParam1, BOOL bParam2) // Position - 0xA2B5{
int num;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam1) / 32f);
if(!num < *uParam0) return;
if(bParam2) MISC::SET_BIT(&uParam0->[num], iParam1 - (num * 32));
else MISC::CLEAR_BIT(&uParam0->[num], iParam1 - (num * 32));
return;
}


void func_46(var uParam0, int iParam1, BOOL bParam2) // Position - 0xA306{
func_45(uParam0, iParam1, bParam2);
return;
}


void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6) // Position - 0xA318{
func_48(uParam4, 91, true);
switch (iParam0){
case 1:
switch (iParam1){
case 0:
switch (iParam5){
case 0:
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
break;
case 1:
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
break;
case 2:
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
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
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
}
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 5, true);
func_48(uParam4, 6, true);
func_48(uParam4, 7, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 12, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 28, true);
func_48(uParam4, 10, true);
func_48(uParam4, 33, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
break;
case 1:
if(bParam6){
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
}
func_48(uParam4, 9, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 10, true);
func_48(uParam4, 31, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
break;
case 10:
func_48(uParam4, 28, true);
break;
case 12:
if(bParam6){
func_46(uParam3, 3, true);
func_46(uParam3, 4, true);
func_46(uParam3, 6, true);
func_46(uParam3, 10, true);
func_46(uParam3, 54, true);
func_46(uParam3, 55, true);
func_46(uParam3, 56, true);
func_46(uParam3, 13, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_46(uParam3, 20, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 37, true);
func_46(uParam3, 39, true);
func_46(uParam3, 106, true);
func_46(uParam3, 114, true);
func_46(uParam3, 116, true);
func_46(uParam3, 117, true);
func_46(uParam3, 118, true);
func_46(uParam3, 119, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 8, true);
func_44(uParam2, 9, true);
func_44(uParam2, 10, true);
func_44(uParam2, 53, true);
func_44(uParam2, 56, true);
func_44(uParam2, 55, true);
func_44(uParam2, 13, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 21, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 32, true);
func_44(uParam2, 36, true);
func_44(uParam2, 38, true);
func_44(uParam2, 55, true);
func_44(uParam2, 14, true);
func_44(uParam2, 105, true);
func_44(uParam2, 113, true);
func_44(uParam2, 114, true);
func_44(uParam2, 115, true);
func_44(uParam2, 116, true);
func_44(uParam2, 117, true);
}
func_48(uParam4, 2, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 8, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
break;
case 15:
if(bParam6){
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
}
func_48(uParam4, 3, true);
func_48(uParam4, 6, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 32, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
func_48(uParam4, 110, true);
func_48(uParam4, 112, true);
func_48(uParam4, 115, true);
func_48(uParam4, 116, true);
break;
case 18:
if(bParam6) func_46(uParam3, 4, true);
break;
case 17:
func_48(uParam4, 9, true);
break;
case 19:
if(bParam6){
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
}
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 8, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
break;
case 21:
if(bParam6){
func_46(uParam3, 3, true);
func_46(uParam3, 7, true);
func_46(uParam3, 0, true);
func_46(uParam3, 12, true);
func_46(uParam3, 13, true);
func_46(uParam3, 15, true);
func_46(uParam3, 16, true);
func_46(uParam3, 48, true);
func_46(uParam3, 49, true);
func_46(uParam3, 17, true);
func_46(uParam3, 18, true);
func_46(uParam3, 50, true);
func_46(uParam3, 51, true);
func_46(uParam3, 52, true);
func_46(uParam3, 53, true);
func_46(uParam3, 38, true);
func_46(uParam3, 47, true);
func_46(uParam3, 111, true);
func_46(uParam3, 62, true);
func_46(uParam3, 20, true);
func_46(uParam3, 21, true);
func_46(uParam3, 25, true);
func_46(uParam3, 26, true);
func_46(uParam3, 27, true);
func_46(uParam3, 30, true);
func_46(uParam3, 31, true);
func_46(uParam3, 32, true);
func_46(uParam3, 33, true);
func_46(uParam3, 39, true);
func_46(uParam3, 37, true);
func_46(uParam3, 55, true);
func_44(uParam2, 0, true);
func_44(uParam2, 2, true);
func_44(uParam2, 3, true);
func_44(uParam2, 4, true);
func_44(uParam2, 6, true);
func_44(uParam2, 7, true);
func_44(uParam2, 8, true);
func_44(uParam2, 11, true);
func_44(uParam2, 13, true);
func_44(uParam2, 15, true);
func_44(uParam2, 16, true);
func_44(uParam2, 47, true);
func_44(uParam2, 48, true);
func_44(uParam2, 17, true);
func_44(uParam2, 18, true);
func_44(uParam2, 49, true);
func_44(uParam2, 50, true);
func_44(uParam2, 51, true);
func_44(uParam2, 52, true);
func_44(uParam2, 62, true);
func_44(uParam2, 37, true);
func_44(uParam2, 46, true);
func_44(uParam2, 110, true);
func_44(uParam2, 19, true);
func_44(uParam2, 20, true);
func_44(uParam2, 21, true);
func_44(uParam2, 22, true);
func_44(uParam2, 54, true);
func_44(uParam2, 24, true);
func_44(uParam2, 26, true);
func_44(uParam2, 27, true);
func_44(uParam2, 28, true);
func_44(uParam2, 30, true);
func_44(uParam2, 31, true);
func_44(uParam2, 32, true);
func_44(uParam2, 38, true);
func_44(uParam2, 36, true);
}
func_48(uParam4, 3, true);
func_48(uParam4, 3, true);
func_48(uParam4, 4, true);
func_48(uParam4, 14, true);
func_48(uParam4, 15, true);
func_48(uParam4, 16, true);
func_48(uParam4, 8, true);
func_48(uParam4, 9, true);
func_48(uParam4, 10, true);
func_48(uParam4, 12, true);
func_48(uParam4, 13, true);
func_48(uParam4, 17, true);
func_48(uParam4, 18, true);
func_48(uParam4, 19, true);
func_48(uParam4, 20, true);
func_48(uParam4, 59, true);
func_48(uParam4, 60, true);
func_48(uParam4, 61, true);
func_48(uParam4, 62, true);
func_48(uParam4, 62, true);
func_48(uParam4, 63, true);
func_48(uParam4, 64, true);
func_48(uParam4, 65, true);
func_48(uParam4, 66, true);
func_48(uParam4, 67, true);
func_48(uParam4, 68, true);
func_48(uParam4, 69, true);
func_48(uParam4, 70, true);
func_48(uParam4, 71, true);
func_48(uParam4, 72, true);
func_48(uParam4, 21, true);
func_48(uParam4, 22, true);
func_48(uParam4, 23, true);
func_48(uParam4, 24, true);
func_48(uParam4, 25, true);
func_48(uParam4, 26, true);
func_48(uParam4, 36, true);
func_48(uParam4, 46, true);
func_48(uParam4, 38, true);
func_48(uParam4, 29, true);
func_48(uParam4, 28, true);
func_48(uParam4, 31, true);
func_48(uParam4, 33, true);
func_48(uParam4, 34, true);
func_48(uParam4, 92, true);
func_48(uParam4, 93, true);
func_48(uParam4, 94, true);
func_48(uParam4, 96, true);
func_48(uParam4, 97, true);
func_48(uParam4, 98, true);
func_48(uParam4, 100, true);
func_48(uParam4, 103, true);
func_48(uParam4, 104, true);
func_48(uParam4, 105, true);
func_48(uParam4, 106, true);
func_48(uParam4, 107, true);
func_48(uParam4, 108, true);
break;
}
break;
}
return;
}


void func_48(var uParam0, int iParam1, BOOL bParam2) // Position - 0xB7E2{
int num;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam1) / 32f);
if(!num < *uParam0) return;
if(bParam2) MISC::SET_BIT(&uParam0->[num], iParam1 - (32 * num));
else MISC::CLEAR_BIT(&uParam0->[num], iParam1 - (num * 32));
return;
}
BOOL func_49() // Position - 0xB834{
if(Global_4521801.f_943 > -1) return true;
return false;
}
BOOL func_50(int iParam0, int iParam1) // Position - 0xB84C{
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return true;
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
return true;
}
break;
case 3:
switch (iParam1){
case 0:
return true;
}
break;
}
return false;
}


void func_51(float fParam0) // Position - 0xB98B{
func_78(plLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_UP, true), "CELL_BORDER" /*Border*/);
return;
}


void func_52(float fParam0) // Position - 0xB9AB{
if(Global_1945396) fParam0=-1f;
func_78(plLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_DOWN, true), "CELL_FILTER" /*Filter*/);
return;
}


void func_53() // Position - 0xB9D5{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_52(5f);
func_51(6f);
func_54(7f);
func_31(8f);
if(bLocal_62) func_78(plLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
if(!func_63(14)){
if(Global_78558==false && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0 && func_62()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_140, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /*Action:
~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
return;
}


void func_54(float fParam0) // Position - 0xBAE2{
func_78(plLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_RIGHT, true), "CELL_ACCYC" /*Cycle Action*/);
return;
}


void func_55() // Position - 0xBB02{
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_280" /*Take Photo*/);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
return;
}


void func_56() // Position - 0xBBDB{
if(iLocal_156==1){
func_57();
return;
}
if(iLocal_133==0 && iLocal_134==0){
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
if(bLocal_131){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
if(func_174()){
func_52(3f);
func_51(4f);
}}elseif(Global_78558==false && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0 && func_62()){
func_53();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
func_52(5f);
func_51(6f);
if(func_32(1)){
func_31(7f);
if(bLocal_62) func_78(plLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}
elseif(bLocal_62){
func_78(plLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
if(func_174()){
func_52(6f);
func_51(7f);
func_78(plLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}else{
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
func_52(3f);
func_51(4f);
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}elseif(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_161())if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_GRID, true), "CELL_GRID" /*Grid*/);
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_78(plLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
if(func_174()){
if(!func_161()){
func_52(7f);
func_51(8f);
if(bLocal_63) func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_FOCUS_LOCK, true), "CELL_FOCUS" /*Focus Lock (Hold)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}else{
if(!func_161())if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_1NP_XB" /*Self Portrait (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
if(func_174()){
if(!func_161()){
func_52(4f);
func_51(5f);
func_78(plLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_CAMERA_DOF, true), "CELL_DEPTH" /*Depth Of Field*/);
}}}}}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}
return;
}


void func_57() // Position - 0xC094{
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_284" /*Zoom*/);
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_285" /*Move*/);
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true), "CELL_281" /*Exit*/);
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
return;
}


void func_58() // Position - 0xC16D{
if(bLocal_131){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
}
return;
}


void func_59(BOOL bParam0) // Position - 0xC18B{
if(iLocal_156==1) return;
if(*Global_4718592.f_160553==1){}elseif(*Global_4718592.f_160554==1){}else{
MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(bParam0);
}
return;
}


void func_60() // Position - 0xC1C4{
if(iLocal_61==1){
if(MISC::ARE_STRINGS_EQUAL(uLocal_19[Global_4541021], "phone_cam12DUMMY")){
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
}else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
}}
return;
}


void func_61() // Position - 0xC1FC{
func_165(plLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_174())if(!Global_1945396) GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
return;
}
BOOL func_62() // Position - 0xC23B{
if(func_63(14))if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) return true;
else return false;
else return false;
return true;
}
BOOL func_63(int iParam0) // Position - 0xC2B7{
return Global_43257==iParam0;
}


void func_64(char* sParam0) // Position - 0xC2C5{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_65() // Position - 0xC2D7{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_MOVE_LR, true), "CELL_RT_RSTICK" /*Tilt Head*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 1, true), "CELL_RT_LSTICK" /*Rotate Head*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_LOOK_LR, true), "CELL_RT_RSTICK" /*Tilt Head*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 0, true), "CELL_RT_LSTICK" /*Rotate Head*/);
}
return;
}


void func_66() // Position - 0xC386{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) || func_4()) func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
else func_78(plLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_CAMERA_SELFIE, true), "CELL_SP_2NP_XB" /*Normal Mode (Press)*/);
func_78(plLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true), "CELL_LT_RSTICK" /*Pan Camera*/);
if(func_63(14)){
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_MOVE_LR, true), "CELL_LT_LSTICK" /*Rotate Camera*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true), "CELL_LT_LSTICKZ" /*Zoom Camera*/);
func_78(plLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_MOVE_LR, true), "CELL_LT_LSTICK" /*Rotate Camera*/);
}
return;
}
const 

char* func_67() // Position - 0xC438{
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1969246)) return func_77(&Global_1969246);
if(func_76()) return "FHHUD_SENDLES" /*Send to Lester*/;
if(func_74()) return "CSH_PHONEC" /*Send to Pavel*/;
if(func_73(PLAYER::PLAYER_ID(), 275) && Global_1969239) return "RE_SS_SNDOMG" /*Send to Omega*/;
switch (func_72(PLAYER::PLAYER_ID())){
case 14:
case 3:
case 7:
case 8:
case 12:
case 2:
case 15:
return "TR_SESS_PHTO" /*Send to Sessanta*/;
default:
}
switch (func_68(PLAYER::PLAYER_ID())){
case 3:
return "FXR_FRAN_PHTO" /*Send to Franklin*/;
case 2:
return "FXR_IMAN_PHTO" /*Send to Imani*/;
default:
}
return "CELL_287" /*Send Photo(s)*/;
}

int func_68(Player plParam0) // Position - 0xC4FA{
if(func_71(plParam0)==264) return func_69(plParam0);
return -1;
}

int func_69(Player plParam0) // Position - 0xC518{
if(func_70(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}
BOOL func_70(Player plParam0, BOOL bParam1) // Position - 0xC53B{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}

int func_71(Player plParam0) // Position - 0xC576{
if(func_70(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}

int func_72(Player plParam0) // Position - 0xC599{
if(func_71(plParam0)==271) return func_69(plParam0);
return -1;
}

int func_73(Player plParam0, int iParam1) // Position - 0xC5B7{
Player player;
int i;
player=plParam0;
if(player==-1) return 0;
for (i=0;
i < Global_1890386;
i=i + 1){
if(Global_1890386[i]==iParam1)if(Global_1890444[player /*129*/].f_77.f_1[i /*3*/]==2) return 1;
}
return 0;
}
BOOL func_74() // Position - 0xC608{
switch (func_75(PLAYER::PLAYER_ID())){
case 16:
return true;
case 4:
case 3:
case 2:
case 1:
case 0:
return true;
default:
}
return false;
}

int func_75(Player plParam0) // Position - 0xC64A{
if(func_71(plParam0)==256) return func_69(plParam0);
return -1;
}
BOOL func_76() // Position - 0xC668{
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_33){
case 233:
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182){
case 9:
return true;
default:
break;
}
break;
case 158:
switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182){
case 3:
case 1:
case 41:
return true;
default:
break;
}
break;
}
if(Global_1977436) return true;
return false;
}
const 

char* func_77(const char* sParam0) // Position - 0xC6EA{
return sParam0;
}


void func_78(Player plParam0, char* sParam1, float fParam2, const char* sParam3, const char* sParam4) // Position - 0xC6F4{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)) func_79(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)) func_64(sParam4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_79(const char* sParam0) // Position - 0xC733{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}


void func_80() // Position - 0xC741{
if(Global_78558){
switch (Global_22842){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_0_KM" /*Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode.*/, -1);
else _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_0" /*Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode.*/, -1);
Global_22842=Global_22842 + 1;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_1_KM" /*Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode.*/, -1);
else _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_1" /*Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression.*/, -1);
Global_22842=Global_22842 + 1;
}
break;
case 2:
break;
}}else{
switch (Global_22841){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_0_KM" /*Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode.*/, -1);
else _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_0" /*Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode.*/, -1);
Global_22841=Global_22841 + 1;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_1_KM" /*Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode.*/, -1);
else _DISPLAY_HELP_TEXT("CELL_CAM_SELFIE_1" /*Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression.*/, -1);
Global_22841=Global_22841 + 1;
}
break;
case 2:
break;
}}
return;
}


void func_81() // Position - 0xC83D{
int value;
int value2;
int value3;
int value4;
float num;
float num2;
float num3;
float disabledControlUnboundNormal;
float disabledControlUnboundNormal2;
int num4;
int num5;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
num4=179;
num5=21;
}else{
num4=228;
num5=229;
}
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num5) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num4)){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
value=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_LR)) * 127;
value2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_UD)) * 127;
value3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_LOOK_LR)) * 127;
value4=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_LOOK_UD)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))if(MISC::ABSI(value) > 28 || MISC::ABSI(value2) > 28) num3=((float)value / 128f) * fLocal_164;
elseif(MISC::ABSI(value3) > 28 || MISC::ABSI(value4) > 28) num3=((float)value3 / 128f) * fLocal_164;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
disabledControlUnboundNormal=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR);
disabledControlUnboundNormal2=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD);
if(PAD::IS_MOUSE_LOOK_INVERTED()) disabledControlUnboundNormal2=disabledControlUnboundNormal2 * -1f;
num=num + disabledControlUnboundNormal;
num2=num2 - disabledControlUnboundNormal2;
}elseif(MISC::ABSI(value) > 28 || MISC::ABSI(value2) > 28){
num=((float)value / 128f) * fLocal_164;
num2=((float)-value2 / 128f) * fLocal_164;
}
func_84(num2);
func_83(num3);
func_82(num);
}elseif(!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, num4)){
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
}
return;
}


void func_82(float fParam0) // Position - 0xC9BC{
fLocal_161=fLocal_161 + fParam0;
if(fLocal_161 > 1f) fLocal_161=1f;
elseif(fLocal_161 < -1f) fLocal_161=-1f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_161);
return;
}


void func_83(float fParam0) // Position - 0xC9E8{
fLocal_162=fLocal_162 + fParam0;
if(fLocal_162 > 1f) fLocal_162=1f;
elseif(fLocal_162 < -1f) fLocal_162=-1f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_162);
return;
}


void func_84(float fParam0) // Position - 0xCA14{
fLocal_163=fLocal_163 + fParam0;
if(fLocal_163 > 1f) fLocal_163=1f;
elseif(fLocal_163 < -1f) fLocal_163=-1f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_163);
return;
}


void func_85() // Position - 0xCA40{
int value;
int value2;
int value3;
int value4;
float num;
float num2;
float num3;
float num4;
float disabledControlUnboundNormal;
float disabledControlUnboundNormal2;
eControlAction action;
eControlAction action2;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
action=INPUT_CELLPHONE_EXTRA_OPTION;
action2=INPUT_CELLPHONE_OPTION;
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, action)){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION) && !func_161()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_157=0.5f;
fLocal_158=0.85f;
fLocal_159=0.5f;
fLocal_160=-0.25f;
}}}else{
action=INPUT_SCRIPT_LT;
action2=INPUT_SCRIPT_RT;
}
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, action) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, action2)){
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION) && !func_161()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_157=0.5f;
fLocal_158=0.85f;
fLocal_159=0.5f;
fLocal_160=-0.25f;
}
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
value=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_LR)) * 127;
value2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_UD)) * 127;
value3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_LOOK_LR)) * 127;
value4=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_LOOK_UD)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
value2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SNIPER_ZOOM)) * 127;
disabledControlUnboundNormal=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR);
disabledControlUnboundNormal2=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD);
if(PAD::IS_MOUSE_LOOK_INVERTED()) disabledControlUnboundNormal2=disabledControlUnboundNormal2 * -1f;
num3=num3 + disabledControlUnboundNormal;
num4=num4 - disabledControlUnboundNormal2;
}elseif(MISC::ABSI(value3) > 15 || MISC::ABSI(value4) > 15){
num3=((float)value3 / 128f) * fLocal_164;
num4=((float)-value4 / 128f) * fLocal_164;
}
if(MISC::ABSI(value) > 28 || MISC::ABSI(value2) > 28){
num=((float)value / 128f) * fLocal_164;
num2=((float)value2 / 128f) * fLocal_164;
}
func_89(num3);
func_88(num4);
func_87(num);
if(!func_63(14)) func_86(num2);
}elseif(!PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, action2)){
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
}
if(!PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, action) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, action2)){
value=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_LR)) * 127;
value2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_MOVE_UD)) * 127;
value3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR)) * 127;
value4=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD)) * 127;
value3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY)) * 127;
value3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_RIGHT_ONLY)) * 127;
value4=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_UP_ONLY)) * 127;
value4=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(PLAYER_CONTROL, INPUT_SCALED_LOOK_DOWN_ONLY)) * 127;
if(MISC::ABSI(value3) > 28 || MISC::ABSI(value4) > 28){
num3=((float)value3 / 128f) * fLocal_164;
num4=((float)-value4 / 128f) * fLocal_164;
}
if(MISC::ABSI(value) > 28 || MISC::ABSI(value2) > 28){
num=((float)value / 128f) * fLocal_164;
num2=((float)value2 / 128f) * fLocal_164;
}
if(!func_63(14)) func_86(num2);
}
return;
}


void func_86(float fParam0) // Position - 0xCD7F{
fLocal_159=fLocal_159 + fParam0;
if(fLocal_159 > 1f) fLocal_159=1f;
elseif(fLocal_159 < 0f) fLocal_159=0f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_159);
return;
}


void func_87(float fParam0) // Position - 0xCDAB{
fLocal_160=fLocal_160 + fParam0;
if(fLocal_160 > 1f) fLocal_160=1f;
elseif(fLocal_160 < -1f) fLocal_160=-1f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_160);
return;
}


void func_88(float fParam0) // Position - 0xCDD7{
fLocal_158=fLocal_158 + fParam0;
if(fLocal_158 > 1.5f) fLocal_158=1.5f;
elseif(fLocal_158 < 0.5f) fLocal_158=0.5f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_158);
return;
}


void func_89(float fParam0) // Position - 0xCE13{
fLocal_157=fLocal_157 + fParam0;
if(fLocal_157 > 2f) fLocal_157=2f;
elseif(fLocal_157 < -1.7f) fLocal_157=-1.7f;
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_157);
return;
}


void func_90() // Position - 0xCE47{
if(Global_78819 || Global_78820) return;
if(iLocal_124==0)if(!bLocal_150)if(*Global_4718592.f_160553==0 && *Global_4718592.f_160554==0) GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(plLocal_141, 255, 255, 255, 0, 0);
if(bLocal_127==false){
if(Global_20325){
if(Global_20584)if(bLocal_150==false) Global_20383.f_1 > 3;
}else{
func_92(255, 255, 255, 255);
func_91(0.059f, 0.644f, "CELL_284" /*Zoom*/, 0);
func_92(255, 255, 255, 255);
func_91(0.165f, 0.644f, "CELL_285" /*Move*/, 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, "CELL_280" /*Take Photo*/, 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281" /*Exit*/, 0);
}}elseif(Global_20325){}else{
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, func_67(), 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.79f, "CELL_286" /*Continue*/, 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281" /*Exit*/, 0);
}
return;
}


void func_91(float fParam0, float fParam1, const char* sParam2, int iParam3) // Position - 0xCF96{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
return;
}


void func_92(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCFAE{
HUD::SET_TEXT_SCALE(0.4f, 0.4f);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
HUD::SET_TEXT_PROPORTIONAL(true);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
return;
}


void func_93() // Position - 0xCFED{
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_75, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_76);
return;
}


void func_94() // Position - 0xD006{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_COVER, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SNIPER_ZOOM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DETONATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DROP_WEAPON, true);
return;
}


void func_95() // Position - 0xD060{
fLocal_87={
Global_20336[Global_20328 /*3*/] 
};
if(Global_20325){
if(func_98()){
MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_93);
fLocal_87={
uLocal_93 
};
bLocal_121=false;
bLocal_122=false;
bLocal_123=false;
}
func_1(1);
if(bLocal_121) fLocal_81=fLocal_81 + 12f;
if(fLocal_81 > fLocal_87 || fLocal_81==fLocal_87){
fLocal_81=fLocal_87;
bLocal_121=false;
}
if(bLocal_122) fLocal_81.f_1=fLocal_81.f_1 - 6f;
if(IS_BIT_SET(Global_8255, 4)){
if(fLocal_81.f_1 < fLocal_87.f_1 + 15f || fLocal_81.f_1==fLocal_87.f_1 + 15f){
fLocal_81.f_1=fLocal_87.f_1 + 15f;
bLocal_122=false;
}}elseif(fLocal_81.f_1 < fLocal_87.f_1 + 10f || fLocal_81.f_1==fLocal_87.f_1 + 10f){
fLocal_81.f_1=fLocal_87.f_1 + 10f;
bLocal_122=false;
}
if(bLocal_123) fLocal_81.f_2=fLocal_81.f_2 - 10f;
if(fLocal_81.f_2 < fLocal_87.f_2 || fLocal_81.f_2==fLocal_87.f_2){
fLocal_81.f_2=fLocal_87.f_2;
bLocal_123=false;
}
if(func_98()==false){
if(IS_BIT_SET(Global_8255, 4)) fLocal_87.f_1=fLocal_87.f_1 + 15f;
else fLocal_87.f_1=fLocal_87.f_1 + 10f;
fLocal_87=fLocal_87 - 14f;
}else{
fLocal_87={
Global_20329[Global_20328 /*3*/] 
};
}
fLocal_81={
fLocal_87 
};
bLocal_123=false;
bLocal_122=false;
bLocal_121=false;
MOBILE::SET_MOBILE_PHONE_POSITION(fLocal_81);
if(bLocal_121==false && bLocal_122==false && bLocal_123==false){
iLocal_124=0;
fLocal_84={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_84, 0);
if(!IS_BIT_SET(Global_8253, 22)){
if(IS_BIT_SET(Global_8253, 28)){
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_294", 16);
func_97();
}else{
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_293", 16);
func_96();
}
iLocal_100=2;
}}}
return;
}


void func_96() // Position - 0xD253{
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(IS_BIT_SET(Global_8254, 28)){
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_286" /*Continue*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION, true), "CELL_277" /*Delete*/);
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_GALSAVE" /*Save to Gallery*/);
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
return;
}


void func_97() // Position - 0xD322{
func_165(plLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(IS_BIT_SET(Global_8254, 28)){
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_286" /*Continue*/);
}else{
func_78(plLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true), func_67());
func_78(plLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_CELLPHONE_OPTION, true), "CELL_277" /*Delete*/);
func_78(plLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true), "CELL_GALSAVE" /*Save to Gallery*/);
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_141, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_165(plLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
return;
}
BOOL func_98() // Position - 0xD41F{
eViewModeContext camActiveViewModeContext;
eViewMode camViewModeForContext;
int num;
Vehicle vehiclePedIsIn;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(Global_20383.f_1==10 || Global_20383.f_1==9)if(Global_20326==false)if(Global_7568 !=128)if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) Global_21725 !=2;
if(func_63(14)) return false;
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) return false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())if(ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) return false;
if(unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)) return false;
if(Global_112696) return false;
}
if(Global_78558) return false;
num=0;
camActiveViewModeContext=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
camViewModeForContext=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
if(camViewModeForContext==FIRST_PERSON && camActiveViewModeContext==ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
num=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("seashark") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("seashark2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("submersible") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("submersible2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("toro")) num=0;
}}}
if(Global_4542575 || num==1)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0) return true;
else return false;
else return true;
return false;
}


void func_99() // Position - 0xD668{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DETONATE, true);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
fLocal_84={
Global_20343 
};
fLocal_87={
Global_20336[Global_20328 /*3*/] 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&uLocal_90, 0);
fLocal_84={
uLocal_90 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_93);
fLocal_87={
uLocal_93 
};
bLocal_118=false;
bLocal_119=false;
bLocal_120=false;
bLocal_121=false;
bLocal_122=false;
bLocal_123=false;
}
if(Global_20325){
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_59(false);
bLocal_131=false;
if(IS_BIT_SET(Global_8253, 30)){
bLocal_118=false;
bLocal_119=false;
bLocal_120=false;
func_100();
}
if(bLocal_121)if(IS_BIT_SET(Global_8253, 9)) fLocal_81=fLocal_81 + 2f;
else fLocal_81=fLocal_81 + 12f;
if(fLocal_81 > fLocal_87 || fLocal_81==fLocal_87){
fLocal_81=fLocal_87;
bLocal_121=false;
}
if(bLocal_122) fLocal_81.f_1=fLocal_81.f_1 - 6f;
if(fLocal_81.f_1 < fLocal_87.f_1 || fLocal_81.f_1==fLocal_87.f_1){
fLocal_81.f_1=fLocal_87.f_1;
bLocal_122=false;
}
if(bLocal_123) fLocal_81.f_2=fLocal_81.f_2 - 10f;
if(fLocal_81.f_2 < fLocal_87.f_2 || fLocal_81.f_2==fLocal_87.f_2){
fLocal_81.f_2=fLocal_87.f_2;
bLocal_123=false;
}
if(bLocal_123==false){
if(bLocal_118) fLocal_78=fLocal_78 + 1f;
if(fLocal_78 > fLocal_84 || fLocal_78==fLocal_84){
fLocal_78=fLocal_84;
bLocal_118=false;
}
if(bLocal_119) fLocal_78.f_1=fLocal_78.f_1 - 2f;
if(fLocal_78.f_1 < fLocal_84.f_1 || fLocal_78.f_1==fLocal_84.f_1){
fLocal_78.f_1=fLocal_84.f_1;
bLocal_119=false;
}
if(bLocal_120) fLocal_78.f_2=fLocal_78.f_2 - 14f;
if(fLocal_78.f_2 < fLocal_84.f_2 || fLocal_78.f_2==fLocal_84.f_2){
fLocal_78.f_2=fLocal_84.f_2;
bLocal_120=false;
}}
if(bLocal_126){
fLocal_78={
fLocal_84 
};
fLocal_81={
fLocal_87 
};
bLocal_118=false;
bLocal_119=false;
bLocal_120=false;
if(func_98()==false){
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(fLocal_81);
}
func_115(false, true);
}elseif(func_98()==false){
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(fLocal_81);
}
if(bLocal_118==false && bLocal_119==false && bLocal_120==false) func_100();
}else{
if(bLocal_118) fLocal_78=fLocal_78 + 1f;
if(fLocal_78 > fLocal_84 || fLocal_78==fLocal_84) bLocal_118=false;
if(bLocal_119) fLocal_78.f_1=fLocal_78.f_1 - 2f;
if(fLocal_78.f_1 < fLocal_84.f_1 || fLocal_78.f_1==fLocal_84.f_1) bLocal_119=false;
if(bLocal_120) fLocal_78.f_2=fLocal_78.f_2 - 7f;
if(fLocal_78.f_2 < fLocal_84.f_2 || fLocal_78.f_2==fLocal_84.f_2) bLocal_120=false;
if(bLocal_118==false && bLocal_119==false && bLocal_120==false) func_100();
}
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
return;
}


void func_100() // Position - 0xD96C{
func_1(0);
if(func_98()==false){
if(IS_BIT_SET(Global_8253, 30)) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20329[Global_20328 /*3*/]);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20336[Global_20328 /*3*/]);
fLocal_78={
fLocal_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
}
Global_22758=0;
func_122(false, false);
func_126(false);
iLocal_115=0;
func_117(true);
Global_20370=1;
Global_22761=false;
if(Global_20383.f_1 > 4){
Global_20383.f_1=6;
Global_20361=1;
func_101();
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140)) func_164(plLocal_140, "SHUTDOWN_MOVIE");
SYSTEM::WAIT(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_141);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_140);
if(Global_20586==1) MISC::SET_BIT(&Global_8253, 17);
else MISC::CLEAR_BIT(&Global_8253, 17);
MISC::CLEAR_BIT(&Global_8253, 18);
MISC::CLEAR_BIT(&Global_8253, 21);
HUD::CLEAR_FLOATING_HELP(0, true);
MISC::CLEAR_BIT(&Global_8255, 3);
MISC::CLEAR_BIT(&Global_4542297, 3);
MISC::SET_GAME_PAUSED(false);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
Global_22762=1;
AUDIO::STOP_SOUND(iLocal_112);
AUDIO::RELEASE_SOUND_ID(iLocal_112);
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
func_117(true);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(Global_4541022 > 0 && Global_4541022 < 13) GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uLocal_33[Global_4541022]);
func_115(false, true);
if(func_172(false, true, bLocal_64, true)) bLocal_64=false;
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_101() // Position - 0xDAF5{
var unk;
if(Global_20366==1) return;
if(Global_20383.f_1 < 4) return;
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(Global_78558) return;
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
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
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
if(Global_20585==1)if(Global_20371) func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
else func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(Global_20371) func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
else func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
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
if(IS_BIT_SET(Global_8253, 20)){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
if(Global_20326) func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_105();
func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_64("CELL_300" /*CHAR_DEFAULT*/);
func_64("CELL_217" /*INCOMING CALL*/);
func_64("CELL_217" /*INCOMING CALL*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_104(Global_7568, Global_20383)==0){
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
}else{
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_105();
if(Global_21738){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_64("CELL_300" /*CHAR_DEFAULT*/);
func_64("CELL_219" /*CONNECTED*/);
func_64("CELL_219" /*CONNECTED*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983) TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
else TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
if(func_104(Global_7568, Global_20383)==0){
func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
}else{
func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &unk, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_102();
break;
default:
break;
}
return;
}


void func_102() // Position - 0xE0E3{
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_103();
if(Global_20382==1){
if(Global_20371) func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
else func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
if(Global_21772) func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(IS_BIT_SET(Global_8253, 20)) func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(Global_20371) func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
else func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(IS_BIT_SET(Global_8253, 20)){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
if(Global_20326) func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}
return;
}


void func_103() // Position - 0xE271{
if(Global_78558){
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}
return;
}

int func_104(int iParam0, eCharacter echParam1) // Position - 0xE2A2{
if(echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF) return 0;
return Global_2028[iParam0 /*29*/].f_24[echParam1];
}


void func_105() // Position - 0xE2CC{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(Global_20383==CHAR_MICHAEL){
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
if(Global_20383==CHAR_FRANKLIN){
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
if(Global_20383==CHAR_TREVOR){
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
if(Global_20383==CHAR_MULTIPLAYER){
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
}}}
return;
}


void func_106() // Position - 0xE543{
if(Global_78558){
if(func_107()==0) return;
func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}
return;
}

int func_107() // Position - 0xE57F{
return 0;
}


void func_108(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, char* sParam10, const char* sParam11) // Position - 0xE588{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_64(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_64(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_64(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_64(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_64(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_109(int iParam0) // Position - 0xE63B{
int i;
int num;
int value;
int j;
int value2;
int k;
int value3;
int value4;
int value5;
int value6;
Global_22793=0;
Global_8858=iParam0;
for (i=0;
i < 9;
i=i + 1){
Global_8822[i]=0;
}
for (i=0;
i < 9;
i=i + 1){
num=0;
if(func_63(14)){
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value=42;
Global_20588=1;
}else{
value=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519)if(num==14) func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
Global_8822[i]=1;
}}}
num=num + 1;
}}else{
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==1){
for (j=0;
j < 35;
j=j + 1){
if(Global_113648.f_14143[j /*104*/].f_24 !=0)if(Global_113648.f_14143[j /*104*/].f_28==0)if(Global_113648.f_14143[j /*104*/].f_99[Global_20383]==1) Global_22793=Global_22793 + 1;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==7){
if(Global_78558){
value2=0;
value2=Global_4541031;
for (k=0;
k < 12;
k=k + 1){
if(Global_4541032[k /*104*/].f_24 !=0)if(Global_4541032[k /*104*/].f_28==0)if(Global_4541032[k /*104*/].f_99[Global_20383]==1) value2=value2 + 1;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
switch (Global_20383){
case CHAR_MICHAEL:
value3=Global_44457;
break;
case CHAR_FRANKLIN:
value3=Global_44458;
break;
case CHAR_TREVOR:
value3=Global_44459;
break;
default:
break;
}
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}}elseif(num==14){
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==20){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==2){
if(IS_BIT_SET(Global_8254, 6)) value4=42;
else value4=255;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value5=42;
Global_20588=1;
}else{
value5=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==8){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_64(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[num /*15*/].f_10==57 && num==23){
value6=0;
value6=Global_1890001.f_1;
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}
Global_8822[i]=1;
}}}
num=num + 1;
}}}
return;
}


void func_110() // Position - 0xEBD5{
switch (iLocal_100){
case 1:
HUD::CLEAR_FLOATING_HELP(0, true);
if(IS_BIT_SET(Global_8253, 28)){
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_296", 16);
func_56();
}else{
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_295", 16);
func_30();
}
break;
case 2:
if(!IS_BIT_SET(Global_8253, 22)){
HUD::CLEAR_FLOATING_HELP(0, true);
if(IS_BIT_SET(Global_8253, 28)){
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_294", 16);
func_97();
}else{
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_293", 16);
func_96();
}
iLocal_100=2;
}
break;
default:
break;
}
return;
}


void func_111(BOOL bParam0) // Position - 0xEC5A{
if(bParam0)if(!func_124()) MISC::SET_BIT(&Global_1962996, 17);
elseif(func_124()) MISC::CLEAR_BIT(&Global_1962996, 17);
return;
}
BOOL func_112(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0xEC8D{
if(PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}


void func_113(BOOL bParam0) // Position - 0xECFF{
if(bParam0)if(!func_114()) MISC::SET_BIT(&Global_1962996, 18);
elseif(func_114()) MISC::CLEAR_BIT(&Global_1962996, 18);
return;
}
BOOL func_114() // Position - 0xED32{
return IS_BIT_SET(Global_1962996, 18);
}


void func_115(BOOL bParam0, BOOL bParam1) // Position - 0xED41{
if(bParam0){
if(func_116(0)){
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
BOOL func_116(int iParam0) // Position - 0xEDB5{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}


void func_117(BOOL bParam0) // Position - 0xEE0C{
if(*Global_4718592.f_160553==0 && *Global_4718592.f_160554==0 && !Global_1945396)if(func_118(PLAYER::PLAYER_ID()) && bParam0) Global_1977509=1;
else GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
return;
}
BOOL func_118(Player plParam0) // Position - 0xEE5C{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_119(Global_2657589[plParam0 /*466*/].f_321.f_7)==17;
return false;
}

int func_119(int iParam0) // Position - 0xEEA3{
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
case 81:
return 5;
case 82:
return 6;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
case 88:
return 8;
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
case 101:
return 10;
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
case 117:
return 12;
case 122:
return 13;
case 123:
return 14;
case 124:
return 15;
case 125:
return 16;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
case 145:
return 18;
case 146:
return 19;
case 147:
return 20;
case 148:
return 21;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
case 154:
return 23;
case 155:
case 156:
case 157:
case 158:
return 24;
case 159:
return 25;
case 160:
return 26;
case 161:
return 27;
}
return -1;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xF357{
Player player;
player=player;
if(player !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(bIsPlaying)if(!PLAYER::IS_PLAYER_PLAYING(player)) return false;
if(bUnk)if(player==Global_2672505.f_3) return Global_2672505.f_2;
elseif(Global_2657589[player /*466*/] !=4) return false;
return true;
}}
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0xF3B7{
return -1;
}


void func_122(BOOL bParam0, BOOL bParam1) // Position - 0xF3C0{
if(*Global_4718592.f_160553==1){}elseif(*Global_4718592.f_160554==1){}else{
MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
}
return;
}
BOOL func_123() // Position - 0xF3F2{
if(IS_BIT_SET(Global_8253, 15)) return true;
return false;
}
BOOL func_124() // Position - 0xF40B{
return IS_BIT_SET(Global_1962996, 17);
}


void func_125() // Position - 0xF41A{
if(Global_20325){
fLocal_84={
-90.3f, 0f, 90f 
};
fLocal_87={
1.5f, 0f, -17f 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&uLocal_90, 0);
fLocal_84={
uLocal_90 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_93);
fLocal_87={
uLocal_93 
};
bLocal_118=false;
bLocal_119=false;
bLocal_120=false;
bLocal_121=false;
bLocal_122=false;
bLocal_123=false;
}
if(bLocal_120==false){
if(bLocal_121) fLocal_81=fLocal_81 - 14f;
if(fLocal_81 < fLocal_87 || fLocal_81==fLocal_87) bLocal_121=false;
if(bLocal_122) fLocal_81.f_1=fLocal_81.f_1 + 7f;
if(fLocal_81.f_1 > fLocal_87.f_1 || fLocal_81.f_1==fLocal_87.f_1) bLocal_122=false;
if(bLocal_123) fLocal_81.f_2=fLocal_81.f_2 + 12f;
if(fLocal_81.f_2 > fLocal_87.f_2 || fLocal_81.f_2==fLocal_87.f_2) bLocal_123=false;
}
if(bLocal_118) fLocal_78=fLocal_78 - 1f;
if(fLocal_78 < fLocal_84 || fLocal_78==fLocal_84){
fLocal_78=fLocal_84;
bLocal_118=false;
}
if(bLocal_119) fLocal_78.f_1=fLocal_78.f_1 - 0.5f;
if(fLocal_78.f_1 < fLocal_84.f_1 || fLocal_78.f_1==fLocal_84.f_1){
fLocal_78.f_1=fLocal_84.f_1;
bLocal_119=false;
}
if(bLocal_120) fLocal_78.f_2=fLocal_78.f_2 + 11f;
if(fLocal_78.f_2 > fLocal_84.f_2 || fLocal_78.f_2==fLocal_84.f_2){
fLocal_78.f_2=fLocal_84.f_2;
bLocal_120=false;
}
if(func_98()==false){
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(fLocal_81);
}}else{
fLocal_84={
-93.9f, 4.9f, 90.7f 
};
if(bLocal_118) fLocal_78=fLocal_78 - 1f;
if(fLocal_78 < fLocal_84 || fLocal_78==fLocal_84) bLocal_118=false;
if(bLocal_119) fLocal_78.f_1=fLocal_78.f_1 + 2f;
if(fLocal_78.f_1 > fLocal_84.f_1 || fLocal_78.f_1==fLocal_84.f_1) bLocal_119=false;
if(bLocal_120) fLocal_78.f_2=fLocal_78.f_2 + 7f;
if(fLocal_78.f_2 > fLocal_84.f_2 || fLocal_78.f_2==fLocal_84.f_2) bLocal_120=false;
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
}
if(Global_20325){
if(bLocal_118==false && bLocal_119==false && bLocal_120==false && bLocal_121==false && bLocal_122==false && bLocal_123==false){
if(func_98()){
}else{
fLocal_78={
fLocal_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
fLocal_81={
fLocal_87 
};
MOBILE::SET_MOBILE_PHONE_POSITION(fLocal_81);
}
if(iLocal_103==0){
Global_22759=0;
func_122(true, true);
iLocal_115=1;
func_126(true);
func_61();
func_127();
func_59(false);
SYSTEM::SETTIMERA(0);
bLocal_142=true;
iLocal_143=1;
func_144();
func_165(plLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
func_167();
}}}elseif(bLocal_118==false && bLocal_119==false && bLocal_120==false){
fLocal_78={
fLocal_84 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(fLocal_78, 0);
Global_22759=0;
}
return;
}


void func_126(BOOL bParam0) // Position - 0xF78F{
if(func_174()){
if(bParam0){
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(true);
if(Global_4541022 > 0 && Global_4541022 < 99){
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(uLocal_33[Global_4541022], false);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
}}}elseif(GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(false);
}}
return;
}


void func_127() // Position - 0xF7ED{
if(Global_4541021 > 0 && Global_4541021 < 99)if(!Global_1945396) GRAPHICS::SET_TIMECYCLE_MODIFIER(uLocal_19[Global_4541021]);
return;
}


void func_128() // Position - 0xF81E{
if(Global_20325){
iLocal_125=0;
func_61();
func_115(true, true);
func_122(true, true);
iLocal_115=1;
Global_22762=1;
}
return;
}


void func_129() // Position - 0xF846{
if(*Global_4718592.f_160553==1 && func_130()) return;
if(bLocal_127==0){
if(IS_BIT_SET(Global_8253, 28)){
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_296", 16);
func_56();
}else{
TEXT_LABEL_ASSIGN_STRING(&uLocal_145, "CELL_295", 16);
func_30();
}
if(MISC::ARE_STRINGS_EQUAL(&uLocal_145, "DUMMYCOMPARISON")){
fLocal_98=fLocal_99;
fLocal_96=fLocal_97;
fLocal_99=fLocal_98;
fLocal_97=fLocal_96;
}
iLocal_100=1;
}
return;
}
BOOL func_130() // Position - 0xF8B3{
if(func_139() || func_138() || func_137() || func_136() || func_135() || func_133() || func_131()) return true;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_36, 1)) return true;
return false;
}
BOOL func_131() // Position - 0xF91B{
return func_132(*Global_4718592.f_113724);
}
BOOL func_132(var uParam0) // Position - 0xF931{
int i;
for (i=0;
i < 6;
i=i + 1){
if(Global_262145.f_31715[i]==uParam0) return 1;
}
return 0;
}
BOOL func_133() // Position - 0xF960{
return func_134(*Global_4718592.f_113724);
}
BOOL func_134(int iParam0) // Position - 0xF976{
int i;
if(iParam0==0) return 0;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_31051[i]==iParam0) return 1;
}
return 0;
}
BOOL func_135() // Position - 0xF9B0{
return Global_2683862.f_24;
}
BOOL func_136() // Position - 0xF9BE{
return Global_2683862.f_21;
}
BOOL func_137() // Position - 0xF9CC{
return Global_2683862.f_19;
}


var func__138() // Position - 0xF9DA{
return Global_2683862.f_18;
}


var func__139() // Position - 0xF9E8{
return Global_2683862.f_17;
}


void func_140() // Position - 0xF9F6{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);
return;
}


void func_141() // Position - 0xFA18{
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
bLocal_121=true;
bLocal_122=true;
bLocal_123=true;
iLocal_124=0;
iLocal_125=1;
return;
}


void func_142() // Position - 0xFA35{
func_143();
return;
}


void func_143() // Position - 0xFA41{
if(bLocal_151)if(SYSTEM::TIMERA() > 50) bLocal_151=false;
bLocal_151==false;
return;
}


void func_144() // Position - 0xFA60{
if(Global_20383.f_1 > 3)if(!HUD::IS_PAUSE_MENU_ACTIVE()) GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
return;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xFA92{
if(func_63(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]) Global_20383=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) Global_20383=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) Global_20383=CHAR_TREVOR;
else Global_20383=CHAR_MICHAEL;
}else{
Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383==_CHAR_NULL) Global_20383=CHAR_MULTIPLAYER;
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
}
return;
}


void func_146(int iParam0) // Position - 0xFB34{
if(func_148()) return;
if(Global_20584)if(func_161()) func_115(true, true);
else func_115(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_147()) Global_20383.f_1=3;
return;
}
BOOL func_147() // Position - 0xFBBE{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}
BOOL func_148() // Position - 0xFBE5{
return IS_BIT_SET(Global_1962996, 19);
}


void func_149() // Position - 0xFBF4{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DROP_WEAPON, true);
if(bLocal_150==false){
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20356);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HOTWIRE_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HOTWIRE_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UP_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LEFT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_RIGHT_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UP_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_DOWN_ONLY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_JUMP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_SPRINT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_REAR_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_JUMP, true);
}
return;
}
BOOL func_150() // Position - 0xFDD3{
Vehicle vehiclePedIsIn;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, -1, false)) return true;
elseif(!VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false)==PLAYER::PLAYER_PED_ID()) return true;
}}
return false;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0xFE26{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_158()) return true;
if(Global_2696915) return true;
if(func_157()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_155()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0xFEAA{
switch (func_154()){
case 0:
return func_153();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_153() // Position - 0xFEDD{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_154() // Position - 0xFF01{
return Global_32163;
}
BOOL func_155() // Position - 0xFF0C{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0xFF1B{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_157() // Position - 0xFF32{
return Global_2694524;
}
BOOL func_158() // Position - 0xFF3E{
return Global_2683862.f_693;
}


void func_159() // Position - 0xFF4D{
if(iLocal_156==1){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WANTED_STARS);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_MP_CASH);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
}else{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}
return;
}


void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xFF8C{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}
BOOL func_161() // Position - 0xFFA3{
return IS_BIT_SET(Global_1962996, 5);
}


void func_162() // Position - 0xFFB1{
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
if(bLocal_127==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140)){
if(func_174()){
if(Global_4541022==0)if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}else{
if(!IS_BIT_SET(Global_4542297, 2)) func_165(plLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_140)){
func_165(plLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_165(plLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
}
iLocal_104=0;
}
iLocal_111=0;
HUD::BUSYSPINNER_OFF();
}
return;
}
BOOL func_163() // Position - 0x1010B{
if(*Global_4718592.f_160553==1)if(Global_78558) return false;
if(*Global_4718592.f_160554==1)if(Global_78558) return false;
if(MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())if(IS_BIT_SET(Global_8254, 28)) return false;
return true;
}


void func_164(Player plParam0, char* sParam1) // Position - 0x10164{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_165(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x10179{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_166() // Position - 0x101DC{
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
else Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}


void func_167() // Position - 0x10212{
if(Global_20383.f_1 > 3) Global_20383.f_1=8;
Global_22761=false;
bLocal_127=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) uLocal_67={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
if(Global_20325){
while (SYSTEM::TIMERA() < iLocal_137){
SYSTEM::WAIT(0);
func_144();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}
func_164(plLocal_140, "OPEN_SHUTTER");
func_159();
func_129();
bLocal_129=true;
SYSTEM::SETTIMERB(0);
}else{
func_122(true, true);
func_126(true);
func_61();
func_127();
func_59(false);
iLocal_115=1;
}
return;
}


void func_168(int iParam0) // Position - 0x102A6{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 15);
else MISC::CLEAR_BIT(&Global_8253, 15);
return;
}
BOOL func_169(BOOL bParam0) // Position - 0x102C9{
bParam0;
return Global_1575035;
}
int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x102DA{
Vehicle vehiclePedIsIn;
int vehicleModelNumberOfSeats;
int i;
int seatIndex;
if(!PED::IS_PED_INJURED(ped)){
if(PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn)){
vehicleModelNumberOfSeats=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
if(vehicleModelNumberOfSeats==1){
seatIndex=-1;
return seatIndex;
}
for (i=0;
i < vehicleModelNumberOfSeats;
i=i + 1){
seatIndex=i - 1;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false)==ped) return seatIndex;
}}}}
return seatIndex;
}


void func_171() // Position - 0x1035F{
return;
}
BOOL func_172(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10367{
BOOL num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}


void func_173() // Position - 0x1039A{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
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
return;
}
BOOL func_174() // Position - 0x10407{
if(iLocal_56==0) iLocal_56=1;
return true;
}