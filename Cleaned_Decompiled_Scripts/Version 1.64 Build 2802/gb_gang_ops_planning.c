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
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
int iLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
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
float fLocal_62=0f;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=-1;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
float fLocal_76=0f;
float fLocal_77=0f;
float fLocal_78=0f;
float fLocal_79=0f;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
int iLocal_108=0;
var uLocal_109=0;
float fLocal_110=0f;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=17;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=17;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
int iLocal_178=0;
BOOL bLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
BOOL bLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
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
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
iLocal_28=3;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=(0.05f + 0.275f) - 0.01f;
fLocal_76=3f;
fLocal_77=0f;
fLocal_78=2f;
fLocal_79=100f;
iLocal_108=-1;
fLocal_110=0.5f;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_842();
else func_823();
while (true){
SYSTEM::WAIT(0);
IS_BIT_SET(Global_1836154, 1);
func_815();
func_807();
switch (iLocal_178){
case 0:
func_773();
break;
case 1:
func_716();
func_709();
break;
case 5:
func_716();
func_708();
break;
case 2:
func_703(false);
func_424();
func_418();
break;
case 4:
func_424();
func_386();
break;
case 3:
func_703(true);
func_192();
func_144();
func_2();
break;
case 6:
func_823();
break;
}
func_1();
}
return;
}


void func_1() // Position - 0x155{
Global_1963031=0;
return;
}


void func_2() // Position - 0x162{
int num;
if(IS_BIT_SET(Global_1966831.f_1247, 1) && !IS_BIT_SET(Global_1966831.f_1247, 2)){
if(Global_1966831.f_812.f_41==PLAYER::PLAYER_ID()){
if(func_143() || func_142()){
func_141();
}elseif(!IS_BIT_SET(Global_1966831.f_1247, 2)){
num=func_139(func_140(PLAYER::PLAYER_ID(), false), 0);
func_11(&uLocal_182, func_138(num), 2);
Global_1950108.f_507=1;
MISC::SET_BIT(&(Global_1966831.f_1247), 2);
MISC::SET_BIT(&(Global_1966831.f_1247), 6);
}}}elseif(IS_BIT_SET(Global_1966831.f_1247, 6)){
if(!IS_BIT_SET(Global_1966831.f_1247, 7)){
MISC::SET_BIT(&(Global_1966831.f_1247), 7);
func_3(false, 0);
func_3(false, 0);
}
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 6);
}
return;
}


void func_3(BOOL bParam0, int iParam1) // Position - 0x238{
if(bParam0) func_8(true, false, true);
else func_4(iParam1);
return;
}


void func_4(int iParam0) // Position - 0x255{
func_7();
if(iParam0==0)if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()) return;
if(func_6()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_5(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
}
return;
}


void func_5(int iParam0) // Position - 0x296{
if(Global_1574632.f_20 !=iParam0) Global_1574632.f_20=iParam0;
return;
}

int func_6() // Position - 0x2B1{
return Global_1574632.f_20;
}


void func_7() // Position - 0x2BF{
Global_2696215=1;
return;
}


void func_8(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2CC{
if(func_9()) return;
if(func_6()==1 || HUD::IS_PAUSE_MENU_ACTIVE() || bParam0){
func_5(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
if(!bParam1) GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
if(bParam2) GRAPHICS::RESET_PAUSED_RENDERPHASES();
}
return;
}
BOOL func_9() // Position - 0x317{
if(func_10()) return Global_2694451;
return false;
}
BOOL func_10() // Position - 0x32E{
if(Global_2694444) return Global_2694443;
return false;
}

int func_11(var uParam0, int iParam1, int iParam2) // Position - 0x345{
int num;
int num2;
var unk;
int num3;
int address;
num=func_135(iParam2);
if(iParam1 !=-1) num=iParam1;
if(num < func_134(iParam2)){
num2=func_132(num, iParam2);
if(num2 !=-1){
func_130(&Global_794709.f_4[num2 /*88*/]);
func_129();
switch (iParam2){
case 0:
func_128(222);
break;
case 1:
func_128(228);
break;
case 2:
func_127(PLAYER::PLAYER_ID(), 0);
if(func_125(Global_794709.f_159989[num2 /*13*/].f_1)) func_128(235);
else func_128(233);
func_122(GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()));
break;
}
func_121(Global_794709.f_4[num2 /*88*/].f_71);
func_119();
func_118();
func_117();
func_116();
func_115();
if(func_111() <=3) func_110();
func_109();
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_PLYLOAD" /*Initializing*/);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
func_107(func_108(), false, 0, false);
if(iParam2==0) MISC::SET_BIT(&address, 0);
elseif(iParam2==2) MISC::SET_BIT(&address, 1);
func_13(uParam0, 0, 0, 0f, 0f, 0f, &unk, 0f, 0f, 0f, true, false, &unk, &num3, num3, false, address);
HUD::DISPLAY_RADAR(false);
func_12();
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95=8;
return 1;
}}
return 0;
}


void func_12() // Position - 0x493{
MISC::CLEAR_BIT(&Global_2683862, 15);
return;
}


void func_13(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, BOOL bParam11, var uParam12, var uParam13, int iParam14, BOOL bParam15, int iParam16) // Position - 0x4A5{
float entityCoords;
Vector3 finalRenderedCamRot;
float finalRenderedCamFov;
BOOL flag;
float amplitude;
BOOL flag2;
int num;
var unk5;
func_103(uParam0, iParam1, 1, iParam14, true);
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)){
if(bParam11){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())if(!func_99() || bParam15) func_88(false);
return;
}}
if(!CAM::DOES_CAM_EXIST(*uParam0)) *uParam0=unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
finalRenderedCamRot={
fParam7 
};
finalRenderedCamFov=-1f;
flag=false;
amplitude=0.2f;
flag2=true;
if(func_87(iParam1)){
*uParam6={
func_86(iParam1, iParam2) 
};
finalRenderedCamRot={
func_85(iParam1, iParam2) 
};
finalRenderedCamFov=func_84(iParam1, iParam2);
}
if(!_IS_NULL_VECTOR(*uParam6)) entityCoords={
*uParam6 
};
if(_IS_NULL_VECTOR(entityCoords)){
if(!bParam10){
entityCoords={
fParam3 
};
if(INTERIOR::IS_COLLISION_MARKED_OUTSIDE(entityCoords, entityCoords.f_1, entityCoords.f_2 + 1f)){
}else{
entityCoords.f_2=entityCoords.f_2 + 4f;
}}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(_IS_NULL_VECTOR(entityCoords)){
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)){
if(ENTITY::DOES_ENTITY_EXIST(func_80()) && !ENTITY::IS_ENTITY_DEAD(func_80(), false)){
entityCoords={
ENTITY::GET_ENTITY_COORDS(func_80(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(func_80()) 
};
if(func_79(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, true, false)){
entityCoords={
CAM::GET_FINAL_RENDERED_CAM_COORD() 
};
finalRenderedCamRot={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
}}else{
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}}else{
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
}
if(func_78(PLAYER::PLAYER_ID()) || func_77(PLAYER::PLAYER_ID()) && func_76()) entityCoords.f_2=entityCoords.f_2 + 1.5f;
elseif(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))if(func_78(PLAYER::PLAYER_ID())) entityCoords.f_2=entityCoords.f_2 + 0.4f;
else entityCoords.f_2=entityCoords.f_2 + 1.5f;
else entityCoords.f_2=entityCoords.f_2 + 4f;
}}
if(IS_BIT_SET(iParam16, 3)){
entityCoords={
1124.7449f, 263.6554f, -48.8552f 
};
finalRenderedCamRot={
-22.4617f, 0f, -75.8431f 
};
finalRenderedCamFov=50f;
}elseif(func_74(PLAYER::PLAYER_ID())){
entityCoords={
488.6712f, -2623.0745f, -48.1159f 
};
finalRenderedCamRot={
-9.1167f, 0f, 130.9763f 
};
finalRenderedCamFov=50f;
}elseif(func_73(*Global_4718592.f_113724) || IS_BIT_SET(iParam16, 2)){
if(func_72(PLAYER::PLAYER_ID())){
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
finalRenderedCamRot={
0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) 
};
entityCoords.f_2=entityCoords.f_2 + 0.4f;
finalRenderedCamFov=CAM::GET_FINAL_RENDERED_CAM_FOV();
}else{
entityCoords={
-194.2056f, -1853.7499f, 70.3345f 
};
finalRenderedCamRot={
-10.0011f, 0f, 131.0271f 
};
finalRenderedCamFov=42.6052f;
}}elseif(func_71(*Global_4718592.f_113724) || IS_BIT_SET(iParam16, 1)){
entityCoords={
347.2638f, 4867.324f, -59.2679f 
};
finalRenderedCamRot={
1.2933f, 0.0747f, -34.6934f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 4) || func_70(*Global_4718592.f_113724)){
entityCoords={
2709.3323f, -366.5988f, -52.2786f 
};
finalRenderedCamRot={
-19.962f, 0f, -121.3927f 
};
finalRenderedCamFov=56.6574f;
}elseif(IS_BIT_SET(iParam16, 5)){
num=func_69(PLAYER::PLAYER_ID());
entityCoords={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_68(num), func_67(num), 3.5688f, 7.9792f, 4.1641f) 
};
finalRenderedCamRot={
-21.6791f, 0f, func_67(num) + 40.237f 
};
finalRenderedCamFov=70f;
}elseif(IS_BIT_SET(iParam16, 6) || func_66()){
if(IS_BIT_SET(iParam16, 6)){
entityCoords={
Global_1977693.f_1073 
};
finalRenderedCamRot={
Global_1977693.f_1073.f_3 
};
finalRenderedCamFov=Global_1977693.f_1073.f_6;
}else{
func_63(&entityCoords, &finalRenderedCamRot, &finalRenderedCamFov);
}}elseif(IS_BIT_SET(iParam16, 7)){
entityCoords={
-1381.7837f, 38.8164f, 63.1614f 
};
finalRenderedCamRot={
-19.0288f, 0f, -35.2577f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 8) || func_62(*Global_4718592.f_113724)){}elseif(IS_BIT_SET(iParam16, 9) || func_60() && func_59(249)){
entityCoords={
-822.1176f, -198.5518f, 40.085f 
};
finalRenderedCamRot={
13.7424f, 0f, 145.7582f 
};
finalRenderedCamFov=65.2994f;
flag=true;
if(!func_58()) flag2=false;
}elseif(IS_BIT_SET(iParam16, 10)){}elseif(func_57(*Global_4718592.f_113724)){
entityCoords={
800.2757f, -3051.393f, 10.5728f 
};
finalRenderedCamRot={
3.1956f, 0f, -8.4268f 
};
finalRenderedCamFov=50f;
}elseif(IS_BIT_SET(iParam16, 11)){
entityCoords={
1403.9072f, 3586.4277f, 41.1676f 
};
finalRenderedCamRot={
-8.8877f, 0f, 39.6448f 
};
finalRenderedCamFov=62f;
}elseif(IS_BIT_SET(iParam16, 12)){
entityCoords={
622.9118f, -396.3098f, 31.0305f 
};
finalRenderedCamRot={
-10.3971f, 0f, 133.29f 
};
finalRenderedCamFov=60f;
}
if(func_99() && !bParam15){
entityCoords={
-213.5595f, 316.9778f, 96.9244f 
};
finalRenderedCamRot={
-1.0483f, 0f, -127.3989f 
};
finalRenderedCamFov=25.5102f;
}
if(iParam1==0 && bParam11){
func_51();
func_50(&unk5, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
if(!_IS_NULL_VECTOR(unk5)) entityCoords={
unk5 
};
func_44(&unk5, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
finalRenderedCamRot={
unk5 
};
}
CAM::SET_CAM_ACTIVE(*uParam0, true);
CAM::SET_CAM_COORD(*uParam0, entityCoords);
CAM::SET_CAM_ROT(*uParam0, finalRenderedCamRot, 2);
if(finalRenderedCamFov > 0f) CAM::SET_CAM_FOV(*uParam0, finalRenderedCamFov);
else CAM::SET_CAM_FOV(*uParam0, 40f);
if(flag) CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", amplitude);
if(func_99() && !bParam15){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_43(PLAYER::PLAYER_ID())){
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS, false);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}}
MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, false, false, false, false, false, false, 0);
func_30(true);
}
if(flag2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())if(!func_99() || bParam15) func_88(false);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
if(!func_29() && !func_28() && !func_27() && !func_26() && !func_25()) func_24(0);
if(func_21()) STREAMING::CLEAR_FOCUS();
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
*uParam12={
entityCoords 
};
*uParam13=1;
}else{
func_20(entityCoords);
}
PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_14(func_99(), IS_BIT_SET(iParam16, 0) || IS_BIT_SET(iParam16, 1) || IS_BIT_SET(iParam16, 2));
return;
}


void func_14(BOOL bParam0, BOOL bParam1) // Position - 0xCA8{
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
if(!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())) ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
if(!bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_17()) TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
if(func_16(PLAYER::PLAYER_ID())) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 32768, false);
elseif(func_15()) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 32768, false);
elseif(!bParam1) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 319488, false);
}else{
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_CLEAR_TASKS | 57344, false);
}}
return;
}
BOOL func_15() // Position - 0xD6A{
return Global_2684799.f_6341;
}
BOOL func_16(Player plParam0) // Position - 0xD79{
if(plParam0 !=-1) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_29, 31);
return false;
}
BOOL func_17() // Position - 0xD98{
Vehicle vehiclePedIsIn;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(func_19(vehiclePedIsIn, true) && !func_18(vehiclePedIsIn, true)) return true;
}
return false;
}
BOOL func_18(Vehicle veParam0, BOOL bParam1) // Position - 0xDD3{
if(Global_78558)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))if(DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())) return true;
return false;
}
BOOL func_19(Vehicle veParam0, BOOL bParam1) // Position - 0xE25{
if(Global_78558)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle")) return true;
return false;
}


void func_20(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xE63{
if(!func_21()) return;
STREAMING::SET_FOCUS_POS_AND_VEL(vParam0, 0f, 0f, 0f);
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
return;
}
BOOL func_21() // Position - 0xE86{
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0))if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, false, true))if(func_79(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, true, false)) return false;
return true;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xEE2{
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
Player _INVALID_PLAYER_INDEX() // Position - 0xF42{
return -1;
}


void func_24(int iParam0) // Position - 0xF4B{
if(func_9()) return;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return;
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) CAM::DO_SCREEN_FADE_IN(iParam0);
return;
}
BOOL func_25() // Position - 0xF9B{
return IS_BIT_SET(Global_2683862.f_3, 17);
}
BOOL func_26() // Position - 0xFAC{
return IS_BIT_SET(Global_2683862.f_3, 14);
}
BOOL func_27() // Position - 0xFBD{
return IS_BIT_SET(Global_2683862.f_3, 12);
}
BOOL func_28() // Position - 0xFCE{
return IS_BIT_SET(Global_2683862.f_3, 9);
}
BOOL func_29() // Position - 0xFDF{
return IS_BIT_SET(Global_2683862.f_3, 6);
}


void func_30(BOOL bParam0) // Position - 0xFEF{
if(bParam0) MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
else MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
return;
}


void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x1025{
eSetPlayerControlFlags flags;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
BOOL flag8;
BOOL flag9;
BOOL flag10;
BOOL flag11;
BOOL flag12;
BOOL flag13;
BOOL flag14;
BOOL flag15;
BOOL toggle;
BOOL toggle2;
BOOL flag16;
BOOL flag17;
BOOL flag18;
BOOL flag19;
BOOL flag20;
BOOL flag21;
BOOL flag22;
BOOL flag23;
BOOL flag24;
Ped playerPed;
eSetPlayerControlFlags flags2;
if(bParam1)if(SCRIPT::GET_NO_LOADING_SCREEN()) SCRIPT::SET_NO_LOADING_SCREEN(false);
if(func_42())if(bParam1) return;
else bParam3=true;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
flags=espcfParam2;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
}else{
flag=true;
flag2=espcfParam2 & SPC_AMBIENT_SCRIPT !=0;
flag3=espcfParam2 & SPC_CLEAR_TASKS !=0;
flag4=espcfParam2 & SPC_REMOVE_FIRES !=0;
flag5=espcfParam2 & SPC_REMOVE_EXPLOSIONS !=0;
flag6=espcfParam2 & SPC_REMOVE_PROJECTILES !=0;
flag7=espcfParam2 & SPC_DEACTIVATE_GADGETS !=0;
flag8=espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH !=0;
flag9=espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON !=0;
flag10=espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE !=0;
flag11=espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER !=0;
flag12=espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF !=0;
flag13=espcfParam2 & SPC_ALLOW_PAD_SHAKE !=0;
flag14=espcfParam2 & 8192 !=0;
flag15=espcfParam2 & 16384 !=0;
toggle=espcfParam2 & 32768 !=0;
toggle2=espcfParam2 & 65536 !=0;
flag16=espcfParam2 & 131072 !=0;
flag17=espcfParam2 & 262144 !=0;
flag18=espcfParam2 & 524288 !=0;
flag19=espcfParam2 & 1048576 !=0;
flag20=espcfParam2 & 2097152 !=0;
flag21=espcfParam2 & 4194304 !=0;
flag22=espcfParam2 & 8388608 !=0;
flag23=espcfParam2 & 16777216 !=0;
if(espcfParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) flag=false;
if(!func_40()){
flag24=false;
if(bParam1==true) flag24=true;
if(toggle==false && !flag19) flag24=true;
if(flag10==true) flag24=true;
if(flag24) return;
}
flag16;
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3==true){
if(bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false)) return;
playerPed=PLAYER::GET_PLAYER_PED(plParam0);
if(!flag18){
if(flag17 && bParam1==false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) NETWORK::FADE_OUT_LOCAL_PLAYER(true);
elseif(flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_39()) ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
if(!flag14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17) NETWORK::FADE_OUT_LOCAL_PLAYER(false);
Global_2657589[plParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(flag){
func_36(false, 0, 0);
if(flag23) STREAMING::CLEAR_FOCUS();
}
if(!func_35(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}elseif(!flag19){
ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
}
PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed)) PED::FINALIZE_HEAD_BLEND(playerPed);
PED::SET_PED_DIES_WHEN_INJURED(playerPed, true);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==false){
func_34();
func_33();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) !flag21;
STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
Global_2657589[plParam0 /*466*/].f_255=0;
if(!flag22) flag3=true;
if(Global_2635559.f_2681) Global_2635559.f_2681=0;
}else{
if(!func_35(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed)){
if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
if(!toggle) ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}
if(func_32(*Global_4718592.f_166301)) ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
}
if(Global_1575035) flag10=false;
if(flag10) PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
else PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
if(flag3)if(!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false)) TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
}
flags2=0;
if(flag2) flags2=flags2 | SPC_AMBIENT_SCRIPT;
if(flag3) flags2=flags2 | SPC_CLEAR_TASKS;
if(flag4) flags2=flags2 | SPC_REMOVE_FIRES;
if(flag5) flags2=flags2 | SPC_REMOVE_EXPLOSIONS;
if(flag6) flags2=flags2 | SPC_REMOVE_PROJECTILES;
if(flag7) flags2=flags2 | SPC_DEACTIVATE_GADGETS;
if(flag8) flags2=flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
if(flag9) flags2=flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
if(flag10) flags2=flags2 | SPC_ALLOW_PLAYER_DAMAGE;
if(flag11) flags2=flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
if(flag12) flags2=flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
if(flag13) flags2=flags2 | SPC_ALLOW_PAD_SHAKE;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
}}
return;
}
BOOL func_32(int iParam0) // Position - 0x14B3{
return iParam0==17;
}


void func_33() // Position - 0x14C0{
var unk;
Global_2672505.f_1023=0;
Global_2672505.f_1024=0;
Global_2672505.f_1025={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1030=-1;
Global_2672505.f_1031=0;
Global_2635559.f_2692={
unk 
};
return;
}


void func_34() // Position - 0x150D{
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
return;
}
BOOL func_35(Ped pedParam0) // Position - 0x154B{
int scriptTaskStatus;
if(PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true)){
return true;
}else{
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
if(scriptTaskStatus==0) return true;
}
return false;
}


void func_36(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x157C{
int num;
eViewModeContext i;
ENTITY::IS_ENTITY_DEAD(pedParam1, false);
if(bParam0==true)if(ENTITY::DOES_ENTITY_EXIST(pedParam1))if(PED::IS_PED_A_PLAYER(pedParam1))if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1))) num=1;
if(num==0){
if(iParam2==1){
if(bParam0==true){
func_38();
}elseif(!IS_BIT_SET(Global_2621446.f_67, 1)){
if(IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
else NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
}
return;
}


void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x164C{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, true);
return;
}


void func_38() // Position - 0x1668{
eViewModeContext i;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
Global_2621446.f_58[i]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}
return;
}
BOOL func_39() // Position - 0x16C0{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL func_40() // Position - 0x16CE{
if(func_41()==0) return true;
return false;
}

int func_41() // Position - 0x16E3{
return Global_1574632.f_18;
}
BOOL func_42() // Position - 0x16F1{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return true;
return false;
}
BOOL func_43(Player plParam0) // Position - 0x1722{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_143, 27);
}

int func_44(var uParam0, int iParam1, int iParam2) // Position - 0x1738{
switch (iParam2){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 61:
case 62:
case 63:
case 64:
case 65:
case 83:
case 84:
case 85:
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
case 73:
case 74:
case 75:
case 76:
case 87:
case 88:
case 89:
case 90:
default:
}
return 0;
}


void func_45(int iParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x18D7{
var unk;
Vector3 vector;
unk=2;
unk[0 /*6*/]={
func_49(uParam3, bParam4) 
};
unk[1 /*6*/]={
func_49(iParam0, bParam4) 
};
*uParam2={
func_47(iParam1, uParam3) 
};
vector={
*uParam2 - unk[0 /*6*/] 
};
vector={
func_46(vector, -unk[0 /*6*/].f_3.f_2) 
};
vector={
func_46(vector, unk[1 /*6*/].f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(unk[1 /*6*/], 0f, vector) 
};
switch (iParam1){
case 6:
case 2:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 34:
case 35:
case 36:
case 38:
case 39:
case 120:
case 121:
case 125:
case 40:
case 41:
case 43:
case 44:
case 45:
case 42:
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
case 64:
case 65:
case 57:
case 58:
case 59:
case 60:
case 61:
case 62:
case 63:
case 66:
case 67:
case 68:
case 109:
case 69:
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
case 81:
case 82:
case 83:
case 85:
case 84:
case 89:
case 90:
case 91:
case 92:
case 94:
case 95:
case 96:
case 97:
case 98:
case 93:
case 99:
case 100:
case 106:
case 107:
case 108:
case 119:
case 122:
case 123:
case 124:
case 138:
case 139:
case 140:
case 130:
case 128:
case 141:
case 142:
case 143:
case 144:
case 145:
case 146:
case 147:
case 148:
case 153:
case 154:
case 155:
case 157:
case 234:
case 174:
case 175:
case 176:
case 177:
case 178:
case 179:
case 180:
case 235:
case 149:
case 150:
case 151:
case 152:
case 172:
case 187:
case 173:
case 201:
case 188:
case 189:
case 190:
case 191:
case 192:
case 193:
case 194:
case 195:
case 196:
case 197:
case 198:
case 199:
case 200:
case 284:
case 285:
case 286:
case 287:
case 202:
case 203:
case 204:
case 205:
case 206:
case 207:
case 208:
case 209:
case 210:
case 211:
case 212:
case 213:
case 214:
case 216:
case 217:
case 182:
case 183:
case 181:
case 156:
case 236:
case 237:
case 238:
case 239:
case 240:
case 241:
case 242:
case 243:
case 244:
case 245:
case 246:
case 247:
case 248:
case 249:
case 250:
case 251:
case 252:
case 253:
case 254:
case 255:
case 256:
case 257:
case 258:
case 259:
case 260:
case 261:
case 262:
case 263:
case 264:
case 265:
case 266:
case 267:
case 268:
case 269:
case 270:
case 271:
case 272:
case 273:
case 274:
case 275:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 278:
case 279:
case 280:
case 281:
case 282:
case 283:
case 300:
case 301:
case 302:
case 303:
case 304:
case 306:
case 305:
case 308:
case 309:
case 312:
case 313:
case 314:
case 315:
case 316:
case 317:
case 318:
case 319:
case 320:
case 321:
case 322:
case 323:
case 324:
case 325:
case 326:
case 327:
case 328:
case 329:
case 307:
case 331:
case 332:
case 333:
case 334:
case 310:
case 335:
case 336:
case 337:
case 338:
case 339:
case 311:
case 340:
case 435:
case 436:
case 437:
case 470:
case 477:
case 504:
case 507:
case 510:
case 513:
case 528:
case 531:
case 534:
case 537:
case 540:
case 547:
case 445:
case 446:
case 447:
case 448:
case 449:
case 450:
case 471:
case 472:
case 478:
case 479:
case 505:
case 506:
case 508:
case 509:
case 511:
case 512:
case 514:
case 515:
case 529:
case 530:
case 532:
case 533:
case 535:
case 536:
case 538:
case 539:
case 541:
case 542:
case 548:
case 549:
case 432:
case 433:
case 434:
case 451:
case 452:
case 453:
case 454:
case 455:
case 456:
case 459:
case 460:
case 461:
case 462:
case 463:
case 464:
case 560:
case 546:
case 587:
case 588:
case 589:
case 590:
case 591:
case 592:
case 501:
case 502:
case 500:
case 616:
case 615:
case 612:
case 629:
case 630:
case 631:
case 714:
case 633:
case 634:
case 635:
case 636:
case 637:
case 638:
case 639:
case 640:
case 643:
case 644:
case 641:
case 642:
case 646:
case 645:
case 647:
case 648:
case 649:
case 650:
case 666:
case 667:
case 668:
case 669:
case 670:
case 671:
case 673:
case 674:
case 675:
case 676:
case 677:
case 689:
case 690:
case 691:
case 692:
case 693:
case 694:
case 695:
case 696:
case 697:
case 698:
case 699:
case 700:
case 701:
case 702:
case 703:
case 704:
case 705:
case 706:
case 707:
case 708:
case 709:
case 710:
case 711:
case 712:
case 713:
case 632:
case 738:
case 739:
case 740:
case 741:
case 742:
case 743:
case 744:
case 745:
case 746:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 715:
case 716:
case 717:
case 718:
case 719:
case 720:
case 721:
case 722:
case 723:
case 724:
case 725:
case 726:
case 727:
case 728:
case 729:
case 730:
case 731:
case 732:
case 733:
case 734:
case 735:
case 736:
case 737:
case 747:
case 748:
case 749:
case 750:
case 751:
case 752:
case 753:
case 754:
case 755:
case 756:
case 757:
case 758:
case 759:
case 760:
case 761:
case 762:
case 763:
case 764:
case 765:
case 766:
case 767:
case 768:
case 769:
case 770:
case 771:
case 772:
case 773:
case 774:
case 775:
case 776:
case 777:
case 778:
case 779:
case 780:
case 781:
case 782:
case 783:
case 784:
case 785:
case 786:
case 787:
case 788:
case 789:
case 790:
case 791:
case 792:
case 793:
case 794:
case 795:
case 796:
case 797:
case 798:
case 799:
case 800:
case 802:
case 801:
case 803:
case 804:
case 805:
case 806:
case 807:
case 808:
case 809:
case 678:
case 679:
case 680:
case 681:
case 682:
case 683:
case 684:
case 685:
case 810:
case 811:
case 812:
case 813:
case 814:
case 815:
case 817:
case 816:
case 819:
case 818:
case 820:
case 821:
case 822:
case 823:
case 824:
case 825:
case 826:
case 827:
case 828:
case 829:
case 830:
case 831:
case 832:
case 833:
case 834:
case 835:
case 836:
case 837:
case 838:
case 839:
case 840:
case 841:
case 842:
case 843:
case 844:
case 845:
case 846:
case 847:
case 848:
case 849:
case 850:
case 851:
case 852:
case 853:
case 854:
case 855:
case 856:
case 686:
case 687:
case 688:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
switch (iParam1){
case 857:
case 858:
case 859:
case 860:
case 861:
case 862:
case 863:
case 864:
case 865:
case 866:
case 867:
case 868:
case 869:
case 870:
case 871:
case 872:
case 873:
case 874:
case 875:
case 876:
case 877:
case 878:
case 879:
case 880:
case 881:
case 882:
case 883:
case 884:
case 888:
case 889:
case 890:
case 891:
case 651:
case 652:
case 653:
case 654:
case 655:
case 656:
case 657:
case 658:
case 659:
case 660:
case 661:
case 662:
case 663:
case 664:
case 665:
case 887:
case 894:
case 895:
case 896:
case 897:
case 898:
case 899:
case 900:
case 901:
case 902:
case 903:
case 904:
case 905:
case 906:
case 907:
case 908:
case 911:
case 913:
case 914:
case 915:
case 916:
case 917:
case 918:
case 919:
case 920:
case 921:
case 922:
case 923:
case 924:
case 925:
case 926:
case 927:
case 928:
case 929:
case 930:
case 931:
case 932:
case 954:
case 955:
case 956:
case 957:
case 958:
case 959:
case 968:
case 969:
case 970:
case 973:
case 974:
case 975:
case 976:
case 977:
case 978:
case 979:
case 980:
case 981:
case 982:
case 983:
case 984:
case 985:
case 986:
case 987:
case 988:
case 989:
case 990:
case 1008:
case 1009:
case 1010:
case 991:
case 992:
case 993:
case 994:
case 995:
case 996:
case 997:
case 998:
case 999:
case 960:
case 961:
case 962:
case 963:
case 964:
case 965:
case 966:
case 967:
case 1000:
case 1001:
case 1002:
case 1003:
case 1004:
case 1005:
case 1006:
case 1007:
case 1011:
case 1012:
case 1013:
while (unk[0 /*6*/].f_3.f_2 > 180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 - 360f;
}
while (unk[0 /*6*/].f_3.f_2 < -180f){
unk[0 /*6*/].f_3.f_2=unk[0 /*6*/].f_3.f_2 + 360f;
}
while (unk[1 /*6*/].f_3.f_2 > 180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 - 360f;
}
while (unk[1 /*6*/].f_3.f_2 < -180f){
unk[1 /*6*/].f_3.f_2=unk[1 /*6*/].f_3.f_2 + 360f;
}
uParam2->f_3.f_2=uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
while (uParam2->f_3.f_2 > 180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 - 360f;
}
while (uParam2->f_3.f_2 < -180f){
uParam2->f_3.f_2=uParam2->f_3.f_2 + 360f;
}
break;
}
return;
}


Vector3 func__46(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2D91{
float num;
float num2;
float num3;
num2=SYSTEM::SIN(fParam3);
num3=SYSTEM::COS(fParam3);
num=(fParam0 * num3) - (fParam0.f_1 * num2);
num.f_1=(fParam0 * num2) + (fParam0.f_1 * num3);
num.f_2=fParam0.f_2;
return num;
}


struct<6> func_47(Any anParam0, var uParam1) // Position - 0x2DD5{
var unk;
BOOL flag;
BOOL flag2;
flag2=false;
if(func_48(uParam1, &flag)) flag2=true;
if(flag2 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&unk, &(unk.f_3), anParam0, flag)) return unk;
return unk;
}
BOOL func_48(int iParam0, var uParam1) // Position - 0x2E17{
switch (iParam0){
case -1:
case 1:
*uParam1=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap", 64);
return true;
case 61:
*uParam1=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
return true;
case 73:
*uParam1=2;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
return true;
case 77:
*uParam1=3;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
return true;
case 83:
*uParam1=4;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
return true;
case 86:
*uParam1=5;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
return true;
case 88:
*uParam1=6;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
return true;
case 91:
*uParam1=7;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
return true;
case 97:
*uParam1=8;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
return true;
case 109:
*uParam1=9;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
return true;
}
return false;
}


struct<6> func_49(int iParam0, BOOL bParam1) // Position - 0x2F35{
var unk;
switch (iParam0){
case -1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 2:
unk={
-761.0982f, 317.6259f, 169.59628f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 3:
unk={
-761.1888f, 317.6295f, 216.0503f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 4:
unk={
-795.3856f, 340.0188f, 152.7941f 
};
unk.f_3={
0f, 0f, 179.99997f 
};
break;
case 61:
unk={
-778.5056f, 332.3779f, 212.1968f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 5:
unk={
-258.1807f, -950.6853f, 70.0239f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 6:
unk={
-285.0051f, -957.6552f, 85.3035f 
};
unk.f_3={
0f, 0f, -109.99999f 
};
break;
case 7:
unk={
-1471.8821f, -530.7484f, 62.34918f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 34:
unk={
-1471.8821f, -530.7484f, 49.72156f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 62:
unk={
-1463.15f, -540.2369f, 74.2439f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 35:
unk={
-885.3702f, -451.4775f, 119.327f 
};
unk.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
unk={
-913.0385f, -438.4284f, 114.39966f 
};
unk.f_3={
0f, 0f, -153.30931f 
};
break;
case 37:
unk={
-892.5499f, -430.4789f, 88.25368f 
};
unk.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
unk={
-35.0462f, -576.317f, 82.90739f 
};
unk.f_3={
0f, 0f, 160f 
};
break;
case 39:
unk={
-10.3788f, -590.7431f, 93.02542f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 65:
unk={
-22.2487f, -589.1461f, 80.2305f 
};
unk.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
unk={
-900.6311f, -376.7462f, 78.27306f 
};
unk.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
unk={
-929.483f, -374.5104f, 102.23286f 
};
unk.f_3={
0f, 0f, -152.55307f 
};
break;
case 63:
unk={
-914.4202f, -375.8189f, 114.4743f 
};
unk.f_3={
0f, 0f, -63f 
};
break;
case 42:
unk={
-617.1647f, 64.6042f, 100.8196f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 43:
unk={
-584.2015f, 42.7133f, 86.4187f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 64:
unk={
-609.5665f, 50.2203f, 98.3998f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 73:
unk={
-171.3969f, 494.2671f, 134.4935f 
};
unk.f_3={
0f, 0f, 11f 
};
break;
case 74:
unk={
339.4982f, 434.0887f, 146.2206f 
};
unk.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
unk={
-761.3884f, 615.7333f, 140.9805f 
};
unk.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
unk={
-678.1752f, 591.0076f, 142.2196f 
};
unk.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
unk={
120.0541f, 553.793f, 181.0943f 
};
unk.f_3={
0f, 0f, 6f 
};
break;
case 78:
unk={
-571.4039f, 655.2008f, 142.6293f 
};
unk.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
unk={
-742.2565f, 587.6547f, 143.0577f 
};
unk.f_3={
0f, 0f, -29f 
};
break;
case 80:
unk={
-857.2222f, 685.051f, 149.6502f 
};
unk.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
unk={
-1287.6498f, 443.2707f, 94.6919f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 82:
unk={
374.2012f, 416.9688f, 142.6977f 
};
unk.f_3={
0f, 0f, -14f 
};
break;
case 83:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 84:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 85:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 86:
unk={
-1573.0981f, -4085.806f, 9.7851f 
};
unk.f_3={
0f, 0f, 162f 
};
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
unk={
342.8157f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
unk={
260.3297f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 87:
unk={
-1572.1869f, -570.8315f, 109.9879f 
};
unk.f_3={
0f, 0f, -54f 
};
break;
case 88:
unk={
-1383.9543f, -476.7112f, 73.507f 
};
unk.f_3={
0f, 0f, 8f 
};
break;
case 89:
unk={
-138.0029f, -629.739f, 170.2854f 
};
unk.f_3={
0f, 0f, -84f 
};
break;
case 90:
unk={
-74.8895f, -817.6883f, 244.8508f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
unk={
1100.7644f, -3159.384f, -34.9342f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
unk={
1005.806f, -3157.6702f, -36.0897f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
unk={
-1576.5712f, -569.7595f, 85.5f 
};
unk.f_3={
0f, 0f, 36.1f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
unk={
-1571.2538f, -566.5865f, 85.5f 
};
unk.f_3={
0f, 0f, -53.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
unk={
-1568.0984f, -571.9171f, 85.5f 
};
unk.f_3={
0f, 0f, -143.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
unk={
-1384.5178f, -475.8657f, 56.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
unk={
-1384.5383f, -475.8829f, 48.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
unk={
-1378.9939f, -477.2481f, 56.1f 
};
unk.f_3={
0f, 0f, -81.1f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
unk={
-186.5683f, -576.4624f, 135f 
};
unk.f_3={
0f, 0f, 96.16f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
unk={
-113.886f, -564.3862f, 135f 
};
unk.f_3={
0f, 0f, 110.96f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
unk={
-134.6568f, -635.1774f, 135f 
};
unk.f_3={
0f, 0f, -9.04f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
unk={
-79.0479f, -822.6393f, 221f 
};
unk.f_3={
0f, 0f, 70f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
unk={
-70.3086f, -819.5784f, 221f 
};
unk.f_3={
0f, 0f, 160f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
unk={
-79.9861f, -818.425f, 221f 
};
unk.f_3={
0f, 0f, -20f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
}
return unk;
}

int func_50(var uParam0, int iParam1, int iParam2) // Position - 0x3AEB{
switch (iParam2){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 61:
case 62:
case 63:
case 64:
case 65:
case 83:
case 84:
case 85:
case 77:
case 78:
case 79:
case 80:
case 81:
case 82:
case 73:
case 74:
case 75:
case 76:
case 87:
case 88:
case 89:
case 90:
default:
}
return 0;
}


void func_51() // Position - 0x3C7E{
int i;
if(func_54()) return;
func_53(4, -1);
if(func_52()) return;
for (i=0;
i < 32;
i=i + 1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)))if(PLAYER::INT_TO_PLAYERINDEX(i)==PLAYER::PLAYER_ID())if(!func_59(48)) NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(i), false);
else NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(i), false);
}
return;
}
BOOL func_52() // Position - 0x3CF0{
return IS_BIT_SET(Global_2683862.f_43.f_4, 0);
}


void func_53(int iParam0, int iParam1) // Position - 0x3D02{
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1) Global_1653913.f_170[iParam1]=1;
break;
}
return;
}
BOOL func_54() // Position - 0x3D38{
if(func_56() !=2) return false;
if(!func_52() && !(Global_1943594 || Global_1574964 && func_55())) return false;
return true;
}
BOOL func_55() // Position - 0x3D76{
return Global_2683862.f_43.f_57;
}

int func_56() // Position - 0x3D86{
return Global_2683862.f_43.f_40;
}
BOOL func_57(int iParam0) // Position - 0x3D96{
int i;
if(iParam0 !=0){
for (i=0;
i < Global_262145.f_6211[18];
i=i + 1){
if(iParam0==Global_262145.f_5066[18 /*51*/][i]) return true;
}}
return false;
}
BOOL func_58() // Position - 0x3DD9{
return Global_2683862.f_692;
}
BOOL func_59(int iParam0) // Position - 0x3DE8{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
if(num >=8) return false;
return IS_BIT_SET(Global_2684799.f_1.f_2813[num], num2);
}
BOOL func_60() // Position - 0x3E19{
return func_61(*Global_4718592.f_113724);
}
BOOL func_61(var uParam0) // Position - 0x3E2F{
int i;
for (i=0;
i < 3;
i=i + 1){
if(Global_262145.f_31722[i]==uParam0) return 1;
}
return 0;
}
BOOL func_62(var uParam0) // Position - 0x3E5E{
int i;
for (i=0;
i < 6;
i=i + 1){
if(Global_262145.f_31715[i]==uParam0) return true;
}
return false;
}


void func_63(var uParam0, var uParam1, var uParam2) // Position - 0x3E8D{
if(func_65(*Global_4718592.f_113724)){
if(MISC::ABSF(GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f) < 0.1f){
*uParam0={
1561.1614f, 384.824f, -48.6215f 
};
*uParam1={
-89.3034f, -0.1435f, 180f 
};
*uParam2=69f;
}else{
*uParam0={
1561.1604f, 384.8204f, -48.9135f 
};
*uParam1={
-89.5003f, -0.204f, 180f 
};
*uParam2=69f;
}}elseif(func_64(*Global_4718592.f_113724)){
*uParam0={
-1348.9563f, 138.2791f, -94.7272f 
};
*uParam1={
-2.4593f, 0f, -164.9275f 
};
*uParam2=70f;
}
return;
}
BOOL func_64(int iParam0) // Position - 0x3F5B{
int i;
if(iParam0==0) return false;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_31051[i]==iParam0) return true;
}
return false;
}
BOOL func_65(int iParam0) // Position - 0x3F95{
int i;
for (i=0;
i < 11;
i=i + 1){
if(Global_262145.f_29933[i]==iParam0) return true;
}
return false;
}
BOOL func_66() // Position - 0x3FC5{
if(func_65(*Global_4718592.f_113724)) return true;
return false;
}


float func_67(int iParam0) // Position - 0x3FE3{
return Global_4280768[iParam0 /*45*/].f_7;
}


Vector3 func__68(int iParam0) // Position - 0x3FF5{
return Global_4280768[iParam0 /*45*/].f_4;
}

int func_69(Player plParam0) // Position - 0x400C{
return Global_2652258[plParam0 /*3*/];
}
BOOL func_70(var uParam0) // Position - 0x401C{
int i;
for (i=0;
i < 21;
i=i + 1){
if(Global_262145.f_6087[i]==uParam0) return true;
}
return false;
}
BOOL func_71(int iParam0) // Position - 0x404C{
int i;
if(iParam0==0) return false;
for (i=0;
i < 16;
i=i + 1){
if(Global_262145.f_5042[i]==iParam0) return true;
}
return false;
}
BOOL func_72(Player plParam0) // Position - 0x4086{
return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_200, 24);
}
BOOL func_73(int iParam0) // Position - 0x409C{
int i;
int j;
if(iParam0 !=0){
for (j=0;
j < 19;
j=j + 1){
if(Global_262145.f_6891[j]==251){
for (i=0;
i < Global_262145.f_6211[j];
i=i + 1){
if(iParam0==Global_262145.f_5066[j /*51*/][i]) return true;
}}}}
return false;
}
BOOL func_74(Player plParam0) // Position - 0x4102{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_75(Global_2657589[plParam0 /*466*/].f_321.f_7)==25;
return false;
}

int func_75(int iParam0) // Position - 0x4162{
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
BOOL func_76() // Position - 0x4616{
return IS_BIT_SET(Global_2683862.f_3, 4);
}
BOOL func_77(Player plParam0) // Position - 0x4626{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_75(Global_2657589[plParam0 /*466*/].f_321.f_7)==6;
return false;
}
BOOL func_78(Player plParam0) // Position - 0x466C{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_75(Global_2657589[plParam0 /*466*/].f_321.f_7)==5;
return false;
}
BOOL func_79(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x46CB{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0)) return true;
if(bParam1)if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1)) return true;
if(bParam2)if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return true;
return false;
}
Entity func_80() // Position - 0x472F{
if(ENTITY::DOES_ENTITY_EXIST(func_82())) return func_82();
return func_81();
}
Entity func_81() // Position - 0x474D{
return Global_2621446.f_2;
}
Entity func_82() // Position - 0x475B{
return Global_2621446.f_3;
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4769{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}


float func_84(int iParam0, int iParam1) // Position - 0x4793{
switch (iParam0){
case 11:
return 40.5914f;
case 122:
return 50f;
case 13:
switch (iParam1){
case 0:
return 50f;
case 1:
return 50f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return 50f;
case 1:
return 40.4324f;
case 2:
return 42.2709f;
case 3:
return 43.6444f;
case 4:
return 37.3862f;
case 5:
return 38.6952f;
case 6:
return 40.9091f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 40.5238f;
case 1:
return 47.4321f;
case 2:
return 38.6571f;
case 3:
return 44.0641f;
case 4:
return 39.2991f;
case 5:
return 31.7484f;
case 6:
return 35.6342f;
case 7:
return 36.0072f;
case 8:
return 42.5782f;
case 9:
return 37.4336f;
default:
break;
}
break;
case 14:
return 50f;
}
return 50f;
}


Vector3 func__85(int iParam0, int iParam1) // Position - 0x490B{
switch (iParam0){
case 11:
return 1.3773f, 0f, -88.827f;
case 122:
return -18.1605f, 2.6167f, 113.0513f;
case 13:
switch (iParam1){
case 0:
return 2.3039f, 0f, -19.6903f;
case 1:
return -5.9341f, 0f, -151.6385f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return -3.627f, 0f, 34.6935f;
case 1:
return -57.9221f, 0f, 58.3042f;
case 2:
return -15.4498f, 0f, 161.1361f;
case 3:
return -1.8386f, 0f, -135.0223f;
case 4:
return 0.5233f, 0f, -85.7377f;
case 5:
return -4.2364f, 0f, 173.6634f;
case 6:
return -3.74f, 0f, -30.7752f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 4.1441f, 0f, 15.6909f;
case 1:
return 5.4815f, 0f, -127.6695f;
case 2:
return -4.1889f, 0f, -15.0654f;
case 3:
return 16.4433f, 0f, -60.3988f;
case 4:
return 7.8225f, 0f, 39.2409f;
case 5:
return 2.0405f, 0f, -122.3459f;
case 6:
return 7.3382f, 0f, 157.6388f;
case 7:
return 6.481f, 0f, 172.9874f;
case 8:
return 14.0573f, 0f, 5.0622f;
case 9:
return -10.1444f, 0f, -131.4038f;
default:
break;
}
break;
case 14:
switch (iParam1){
case 0:
return 8.8196f, 0f, 57.5677f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}


Vector3 func__86(int iParam0, int iParam1) // Position - 0x4B19{
switch (iParam0){
case 11:
return -1297.8552f, 84.6478f, 54.6519f;
case 122:
return -855.7661f, -2645.376f, 100.8438f;
case 13:
switch (iParam1){
case 0:
return 13.4678f, -1097.7811f, 30.192f;
case 1:
return 816.6221f, -2160.6592f, 30.3139f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return -1172.111f, -1641.5487f, 5.7494f;
case 1:
return 498.4758f, -226.4275f, 71.0569f;
case 2:
return -1217.632f, 364.4556f, 86.527f;
case 3:
return -2884.7537f, 32.9823f, 15.1123f;
case 4:
return -948.1036f, -1260.2487f, 8.228f;
case 5:
return -1614.2163f, 302.0945f, 66.0158f;
case 6:
return -1380.7211f, -107.9713f, 50.6998f;
default:
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 903.8763f, -192.214f, 74.6401f;
case 1:
return 1419.5167f, -2216.0344f, 61.8467f;
case 2:
return -83.9713f, -1331.6351f, 29.8383f;
case 3:
return 364.6455f, -2441.8967f, 6.2607f;
case 4:
return 1237.2067f, 2715.9993f, 37.6424f;
case 5:
return 1019.1531f, 2680.4268f, 41.2254f;
case 6:
return 269.5203f, 2617.4104f, 44.7054f;
case 7:
return -194.2518f, 6295.6875f, 31.0991f;
case 8:
return 1682.7593f, 4954.088f, 42.6891f;
case 9:
return 2325.4468f, 3145.91f, 58.4284f;
default:
break;
}
break;
case 14:
switch (iParam1){
case 0:
return 1993.6974f, 3049.6675f, 47.7241f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}
BOOL func_87(int iParam0) // Position - 0x4D7B{
switch (iParam0){
case 15:
case 14:
case 11:
case 13:
case 12:
case 122:
return true;
default:
}
return false;
}


void func_88(BOOL bParam0) // Position - 0x4DB3{
if(!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_89(false))) GRAPHICS::ANIMPOSTFX_PLAY(func_89(bParam0), 0, true);
return;
}


char* func_89(BOOL bParam0) // Position - 0x4DD4{
if(func_98(*Global_4718592.f_113724)) return "MenuMGIslandHeistIn";
if(bParam0 || func_59(134)) return "MenuMGHeistIn";
if(func_97()) return "MenuMGTournamentIn";
if(func_91(*Global_4718592.f_166301)) return "MenuMGRemixIn";
if(func_90(*Global_4718592.f_166301) && IS_BIT_SET(Global_4718592.f_167679.f_2808, 2)) return "MenuSurvivalAlienIn";
return "MenuMGSelectionIn";
}
BOOL func_90(int iParam0) // Position - 0x4E61{
return iParam0==998;
}
BOOL func_91(int iParam0) // Position - 0x4E6F{
if(func_96(iParam0) || func_95(iParam0) || func_94(iParam0) || func_93(iParam0) || func_92(iParam0)) return true;
return false;
}
BOOL func_92(int iParam0) // Position - 0x4EB5{
return iParam0==64;
}
BOOL func_93(int iParam0) // Position - 0x4EC2{
return iParam0==65;
}
BOOL func_94(int iParam0) // Position - 0x4ECF{
return iParam0==69;
}
BOOL func_95(int iParam0) // Position - 0x4EDC{
return iParam0==67;
}
BOOL func_96(int iParam0) // Position - 0x4EE9{
return iParam0==68;
}
BOOL func_97() // Position - 0x4EF6{
return IS_BIT_SET(Global_2684799.f_1.f_2809, 12);
}
BOOL func_98(int iParam0) // Position - 0x4F0A{
int i;
if(iParam0==0) return false;
for (i=0;
i < 11;
i=i + 1){
if(Global_262145.f_29933[i]==iParam0) return true;
}
return false;
}
BOOL func_99() // Position - 0x4F44{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x4F5B{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_101(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x4FA6{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_102();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_102() // Position - 0x4FE7{
return Global_1574918;
}


void func_103(var uParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x4FF3{
if(iParam1 !=0 && iParam1 !=3 || iParam2==1){
if(CAM::DOES_CAM_EXIST(*uParam0)){
CAM::SET_CAM_ACTIVE(*uParam0, false);
if(bParam4) CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
CAM::DESTROY_CAM(*uParam0, false);
*uParam0=0;
func_12();
if(func_21()) STREAMING::CLEAR_FOCUS();
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
if(Global_1574534==0 && iParam3==1){
func_3(true, 0);
func_3(true, 0);
}
if(!func_106())if(func_105() || func_104())if(!Global_2692733.f_7) HUD::BUSYSPINNER_OFF();
else HUD::BUSYSPINNER_OFF();
}}
return;
}
BOOL func_104() // Position - 0x50A7{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_105() // Position - 0x50BD{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_106() // Position - 0x50D3{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 0);
}


void func_107(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x50EA{
if(iParam0==0) return;
if(bParam1 && bParam2) return;
if(bParam3)if(!bParam1) return;
Global_2635145=iParam0;
if(bParam1) Global_2635145=Global_2635145 + 10000;
if(bParam2){
Global_2635145=Global_2635145 + 10000;
Global_2635145=Global_2635145 + 20000;
}
if(bParam3) Global_2635145=Global_2635145 + 40000;
return;
}

int func_108() // Position - 0x515B{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
}


void func_109() // Position - 0x5173{
MISC::SET_BIT(&(Global_2683862.f_3), 4);
return;
}


void func_110() // Position - 0x5186{
MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 12);
return;
}

int func_111() // Position - 0x51A0{
if(_GET_BOSS_OF_LOCAL_PLAYER()==_INVALID_PLAYER_INDEX()) return 0;
return func_112(_GET_BOSS_OF_LOCAL_PLAYER());
}

int func_112(Player plParam0) // Position - 0x51BF{
if(func_113(plParam0)==_INVALID_PLAYER_INDEX()) return 0;
return Global_1894573[plParam0 /*608*/].f_10.f_19;
}
Player func_113(Player plParam0) // Position - 0x51E5{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10;
return _INVALID_PLAYER_INDEX();
}
Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x5208{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_115() // Position - 0x521D{
Global_2683862.f_717=1;
return;
}


void func_116() // Position - 0x522D{
Global_2683862.f_718=0;
return;
}


void func_117() // Position - 0x523D{
MISC::CLEAR_BIT(&Global_2683862, 7);
return;
}


void func_118() // Position - 0x524E{
MISC::CLEAR_BIT(&(Global_2683862.f_2), 14);
return;
}


void func_119() // Position - 0x5262{
MISC::SET_BIT(&Global_2683862, 5);
func_120();
return;
}


void func_120() // Position - 0x5277{
MISC::SET_BIT(&Global_2683862, 8);
return;
}


void func_121(var uParam0) // Position - 0x5289{
Global_2683862.f_42=uParam0;
return;
}


void func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x5299{
if(IS_GAMER_HANDLE_VALID(uParam0)) Global_2684799.f_6591={
uParam0 
};
return;
}
BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x52BF{
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x52CF{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_125(int iParam0) // Position - 0x52E6{
int i;
if(iParam0==0) return false;
for (i=0;
i < 16;
i=i + 1){
if(func_126(i) && Global_262145.f_5042[i]==iParam0) return true;
}
return false;
}
BOOL func_126(int iParam0) // Position - 0x532C{
switch (iParam0){
case 3:
case 8:
case 14:
case 15:
return true;
default:
}
return false;
}


void func_127(Player plParam0, int iParam1) // Position - 0x5358{
int int;
int=0;
if(DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset")) int=DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset");
MISC::SET_BIT(&int, iParam1);
DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(plParam0), "MPBitset", int);
return;
}


void func_128(int iParam0) // Position - 0x539D{
Global_2683862.f_9=iParam0;
return;
}


void func_129() // Position - 0x53AD{
MISC::SET_BIT(&(Global_2683862.f_2), 29);
return;
}


void func_130(char* sParam0) // Position - 0x53C1{
TEXT_LABEL_ASSIGN_STRING(&(Global_2683862.f_860), sParam0, 24);
if(func_131()) TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);
return;
}
BOOL func_131() // Position - 0x53E5{
return IS_BIT_SET(Global_2684799.f_1.f_2809, 5);
}

int func_132(int iParam0, int iParam1) // Position - 0x53F8{
switch (iParam1){
case 0:
return func_133(Global_262145.f_5024[iParam0], false);
case 1:
return func_133(Global_262145.f_5033[iParam0], false);
case 2:
return func_133(Global_262145.f_5042[iParam0], false);
}
return -1;
}

int func_133(int iParam0, BOOL bParam1) // Position - 0x545C{
int num;
if(bParam1){
num=unk_0x0546ACFECA98380F(iParam0) - 1818;
if(num < -1) num=-1;
return num;
}
return unk_0x0546ACFECA98380F(iParam0);
}

int func_134(int iParam0) // Position - 0x5489{
switch (iParam0){
case 0:
return 8;
case 1:
return 8;
case 2:
return 16;
}
return -1;
}

int func_135(int iParam0) // Position - 0x54C3{
int i;
int num;
switch (iParam0){
case 0:
return _MPCHAR_STAT_GET_INT(MP_STAT_AT_FLOW_MISSION_PROGRESS, -1, 0);
case 1:
return _MPCHAR_STAT_GET_INT(MP_STAT_WVM_FLOW_MISSION_PROGRESS, -1, 0);
case 2:
num=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FLOW_MISSION_PROG, -1, 0);
for (i=0;
i < 16;
i=i + 1){
if(!IS_BIT_SET(num, i)) return i;
}
return 16;
default:
}
return -1;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x552E{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_137(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_137(int iParam0) // Position - 0x556B{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_102();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_138(int iParam0) // Position - 0x559F{
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 14;
case 15:
return 15;
default:
}
return -1;
}

int func_139(int iParam0, int iParam1) // Position - 0x5657{
switch (iParam0){
case 0:
return 3;
case 1:
return 8;
case 2:
switch (iParam1){
case 0:
return 14;
case 1:
return 15;
default:
break;
}
break;
}
return -1;
}

int func_140(Player plParam0, BOOL bParam1) // Position - 0x56A2{
if(plParam0 !=_INVALID_PLAYER_INDEX()){
if(plParam0==PLAYER::PLAYER_ID() && bParam1){
if(IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0), 0)) return 0;
if(IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0), 1)) return 1;
if(IS_BIT_SET(_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0), 2)) return 2;
}else{
if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 0)) return 0;
if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 1)) return 1;
if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 2)) return 2;
}}
return -1;
}


void func_141() // Position - 0x573D{
Global_2683862.f_756=1;
return;
}
BOOL func_142() // Position - 0x574D{
return Global_2683862.f_735;
}
BOOL func_143() // Position - 0x575C{
return IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_144() // Position - 0x576D{
var unk;
if(func_177(2)){
if(func_176() || IS_BIT_SET(Global_1836154, 1)){
if(func_174()){
func_173();
unk={
func_172() 
};
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk)){
if(IS_BIT_SET(Global_1966831.f_1247, 15)){
func_170(&unk);
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 15);
}else{
func_169(&unk);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT) && !func_164()){
func_160();
MISC::SET_BIT(&(Global_1966831.f_1247), 1);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Use", func_159(), func_158(), false, 0, false);
func_157();
}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !IS_BIT_SET(Global_1836154, 1)){
if(func_146()) func_157();
}}else{
func_157();
func_145();
}}else{
func_173();
func_157();
}}else{
func_173();
func_157();
}
return;
}


void func_145() // Position - 0x585B{
if(bLocal_179==false){
if(IS_BIT_SET(Global_1836154, 1)) func_169("HFBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Finale Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/);
else func_169("HFBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Finale Screen.*/);
bLocal_179=true;
}
return;
}
BOOL func_146() // Position - 0x5888{
if(!func_143() && !func_29()){
func_156();
func_155();
func_153(1);
func_152(0);
func_147(func_148(true));
return true;
}
return false;
}


void func_147(int iParam0) // Position - 0x58C2{
Global_2684799.f_6355=iParam0;
return;
}

int func_148(BOOL bParam0) // Position - 0x58D3{
if(_GET_RANDOM_BOOL() && func_149(bParam0)){
if(bParam0) return 13;
return 11;
}
if(bParam0) return 12;
return 10;
}

int func_149(BOOL bParam0) // Position - 0x590B{
eMPStat stat;
int num;
if(bParam0) stat=MP_STAT_GANGOPS_LAUNCH_TIME;
else stat=MP_STAT_CHERNOBOG_MISS_ENEMY_KILLS;
num=_MPCHAR_STAT_GET_INT(stat, -1, 0);
if(num==0) return 1;
if(NETWORK::GET_CLOUD_TIME_AS_INT() >=num){
_MPCHAR_STAT_SET_INT(stat, 0, -1, true, false);
return 1;
}
return 0;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5951{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_137(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}
int _GET_RANDOM_BOOL() // Position - 0x5981{
if(IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)) return 1;
return 0;
}


void func_152(int iParam0) // Position - 0x599F{
if(iParam0==-1) Global_2683862.f_890=Global_2683862.f_890 + 1;
else Global_2683862.f_890=iParam0;
return;
}


void func_153(int iParam0) // Position - 0x59C9{
func_154();
MISC::SET_BIT(&(Global_2683862.f_2), 11);
if(iParam0 && Global_262145.f_29738)if(IS_BIT_SET(Global_2684799.f_1.f_2809, 0)) MISC::CLEAR_BIT(&(Global_2684799.f_1.f_2809), 0);
return;
}


void func_154() // Position - 0x5A0E{
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18), 5);
return;
}


void func_155() // Position - 0x5A2A{
MISC::SET_BIT(&(Global_2683862.f_2), 26);
return;
}


void func_156() // Position - 0x5A3E{
MISC::SET_BIT(&(Global_2683862.f_3), 6);
return;
}


void func_157() // Position - 0x5A51{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_FIN" /*Press ~INPUT_CONTEXT~ to access the Finale Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_FINb" /*Press ~INPUT_CONTEXT~ to access the Finale Screen.~n~Press ~INPUT_CONTEXT_SECONDARY~ to quickly join as a Crew Member.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_FINc" /*Press ~INPUT_CONTEXT~ to access the Finale Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}


char* func_158() // Position - 0x5A85{
return "DLC_XM17_Planning_Board_Soundset";
}


Vector3 func__159() // Position - 0x5A91{
return 353.79303f, 4877.0044f, -58.4718f;
}


void func_160() // Position - 0x5AA8{
if(func_143() || func_142()){
func_141();
func_161();
}
return;
}


void func_161() // Position - 0x5AC9{
if(!_IS_FMMC_ACTIVE() && !func_162() && Global_2684798) Global_4718592.f_113724=0;
return;
}
BOOL func_162() // Position - 0x5AF7{
return Global_2683862.f_691;
}
BOOL _IS_FMMC_ACTIVE() // Position - 0x5B06{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}
BOOL func_164() // Position - 0x5B1D{
if(func_168() || func_167() || func_166() || func_165()) return true;
return false;
}
BOOL func_165() // Position - 0x5B4F{
return IS_BIT_SET(Global_2683862, 1);
}
BOOL func_166() // Position - 0x5B5D{
return IS_BIT_SET(Global_2683862, 2);
}
BOOL func_167() // Position - 0x5B6B{
return IS_BIT_SET(Global_2683862, 20);
}
BOOL func_168() // Position - 0x5B7A{
return Global_2683862.f_698;
}


void func_169(const char* sParam0) // Position - 0x5B89{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}


void func_170(const char* sParam0) // Position - 0x5B9F{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x5BB5{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
struct<16> func_172() // Position - 0x5BC8{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPCONTEXT_FIN" /*Press ~INPUT_CONTEXT~ to access the Finale Screen.*/, 64);
if(IS_BIT_SET(Global_1836154, 1)) TEXT_LABEL_APPEND_STRING(&unk, "c", 64);
elseif(!func_29()) TEXT_LABEL_APPEND_STRING(&unk, "b", 64);
return unk;
}


void func_173() // Position - 0x5C01{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HFBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Finale Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HFBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Finale Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(bLocal_179) bLocal_179=false;
return;
}
BOOL func_174() // Position - 0x5C2F{
return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x5C3F{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
BOOL func_176() // Position - 0x5C74{
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 353.70377f, 4877.579f, -61.60188f, false) <=6f) return true;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 350.80637f, 4872.391f, -61.794243f, 348.48444f, 4866.69f, -58.35142f, 1.75f, false, true, 0)) return true;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 350.80637f, 4872.391f, -61.794243f, 346.1474f, 4868.041f, -58.35142f, 1.75f, false, true, 0)) return true;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 350.80637f, 4872.391f, -61.794243f, 346.9441f, 4866.924f, -58.35142f, 1.75f, false, true, 0)) return true;
return false;
}
BOOL func_177(int iParam0) // Position - 0x5D42{
float entityHeading;
if(func_191() || func_190()) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
if(!func_189()) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(!func_188(PLAYER::PLAYER_ID(), 2)) return false;
if(func_184()) return false;
if(func_183()==2 || func_183()==16) return false;
if(func_182(0)) return false;
switch (iParam0){
case 0:
if(func_181()) return false;
if(func_180(PLAYER::PLAYER_ID(), false) && func_179(PLAYER::PLAYER_ID())) return false;
if(Global_1963033.f_812.f_146 !=PLAYER::PLAYER_ID()) return false;
if(func_140(PLAYER::PLAYER_ID(), false) !=-1) return false;
if(Global_1963033.f_718 < 3 || Global_1963033.f_718 >=4) return false;
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 2)) return false;
if(!IS_BIT_SET(Global_1836154, 1)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
entityHeading=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
if(entityHeading > 27f && entityHeading < 252f) return false;
}}
break;
case 1:
if(func_181()) return false;
if(func_180(PLAYER::PLAYER_ID(), false) && func_179(PLAYER::PLAYER_ID())) return false;
if(Global_1964005.f_812 !=PLAYER::PLAYER_ID()) return false;
if(Global_1964005.f_718 < 3 || Global_1964005.f_718 >=4) return false;
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 2)) return false;
if(IS_BIT_SET(Global_1964005.f_2825, 1) || IS_BIT_SET(Global_1964005.f_2825, 2)) return false;
if(!IS_BIT_SET(Global_1836154, 1)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
entityHeading=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
if(entityHeading > 27f && entityHeading < 252f) return false;
}}
break;
case 2:
if(func_181()) return false;
if(_IS_FMMC_ACTIVE() || func_162() || func_58()) return false;
if(func_180(PLAYER::PLAYER_ID(), false) && func_179(PLAYER::PLAYER_ID())) return false;
if(Global_1966831.f_812.f_41 !=PLAYER::PLAYER_ID()) return false;
if(Global_1966831.f_718 < 3 || Global_1966831.f_718 >=4) return false;
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 2)) return false;
if(IS_BIT_SET(Global_1966831.f_1247, 1)) return false;
if(!IS_BIT_SET(Global_1836154, 1)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
entityHeading=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
if(entityHeading > 27f && entityHeading < 252f) return false;
}}
break;
}
return true;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x604D{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}
BOOL func_179(Player plParam0) // Position - 0x606E{
return func_188(plParam0, 20);
}
BOOL func_180(Player plParam0, BOOL bParam1) // Position - 0x607E{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}
BOOL func_181() // Position - 0x60B9{
return Global_75693;
}
BOOL func_182(int iParam0) // Position - 0x60C5{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}

int func_183() // Position - 0x611C{
return Global_1057409;
}
BOOL func_184() // Position - 0x6128{
BOOL flag;
flag=GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 199) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE) || PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE);
if(flag){
bLocal_183=true;
return true;
}elseif(bLocal_183){
if(_STOPWATCH_HAS_TIME_PASSED(&uLocal_184, 1000, false)){
_STOPWATCH_DESTROY(&uLocal_184);
bLocal_183=false;
return false;
}
return true;
}
return false;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6189{
uParam0->f_1=0;
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x6196{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x61F4{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL func_188(Player plParam0, int iParam1) // Position - 0x6239{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
BOOL func_189() // Position - 0x6251{
return true;
}

int func_190() // Position - 0x625A{
return Global_1963030;
}

int func_191() // Position - 0x6266{
return Global_1963031;
}


void func_192() // Position - 0x6272{
func_193(&Global_1966831);
return;
}


void func_193(var uParam0) // Position - 0x6282{
func_194(uParam0);
return;
}


void func_194(var uParam0) // Position - 0x6290{
switch (uParam0->f_718){
case 0:
func_385(uParam0);
break;
case 1:
if(!func_384(&(uParam0->f_718))){
func_383(uParam0);
func_382(&(uParam0->f_718));
}
func_385(uParam0);
if(!func_381(&(uParam0->f_718))){
func_380(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 2:
if(!func_384(&(uParam0->f_718))){
func_376(uParam0);
func_382(&(uParam0->f_718));
}
func_369(uParam0);
if(!func_381(&(uParam0->f_718))){
func_358(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 3:
if(!func_384(&(uParam0->f_718))){
func_357(uParam0);
func_382(&(uParam0->f_718));
}
func_356(uParam0);
if(!func_381(&(uParam0->f_718))){
func_355(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 4:
if(!func_384(&(uParam0->f_718))){
func_349(uParam0);
func_382(&(uParam0->f_718));
}
func_204(uParam0);
if(!func_381(&(uParam0->f_718))){
func_203(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 5:
if(!func_384(&(uParam0->f_718))){
func_202(uParam0);
func_382(&(uParam0->f_718));
}
func_196(uParam0);
break;
case 6:
func_195(uParam0);
break;
}
return;
}


void func_195(var uParam0) // Position - 0x6407{
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_PLANNING_BOARD");
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_714));
return;
}


void func_196(var uParam0) // Position - 0x6420{
func_201(uParam0);
func_200();
func_198(uParam0);
func_197(&(uParam0->f_718));
return;
}


void func_197(int iParam0) // Position - 0x6441{
int num;
iParam0->f_1=*iParam0;
MISC::SET_BIT(&(iParam0->f_4), iParam0->f_1);
MISC::CLEAR_BIT(&(iParam0->f_3), iParam0->f_1);
num=*iParam0;
num=num + 1;
*iParam0=num;
if(*iParam0==7) *iParam0=5;
return;
}


void func_198(var uParam0) // Position - 0x6483{
func_199(&(uParam0->f_725.f_1), false, true);
CAM::SET_WIDESCREEN_BORDERS(false, 0);
return;
}


void func_199(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x649E{
if(CAM::DOES_CAM_EXIST(*uParam0)){
if(bParam2) CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
if(CAM::IS_CAM_ACTIVE(*uParam0)) CAM::SET_CAM_ACTIVE(*uParam0, false);
CAM::DESTROY_CAM(*uParam0, bParam1);
}
if(uParam0->f_23){
HUD::UNLOCK_MINIMAP_ANGLE();
uParam0->f_23=0;
}
uParam0->f_1={
0f, 0f, 0f 
};
uParam0->f_4={
0f, 0f, 0f 
};
uParam0->f_7=0f;
uParam0->f_20=0;
uParam0->f_21=0;
uParam0->f_22=0;
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_11={
0f, 0f, 0f 
};
uParam0->f_14={
0f, 0f, 0f 
};
uParam0->f_17=0f;
uParam0->f_18=0f;
return;
}


void func_200() // Position - 0x6538{
var unk;
unk=4;
unk.f_63.f_2=5;
unk.f_77=2;
unk.f_82=4;
unk.f_82.f_5=4;
unk.f_82.f_10=5;
unk.f_82.f_16=4;
unk.f_82.f_21=-1;
unk.f_82.f_22=-1;
unk.f_109=4;
Global_1937658.f_3033={
unk 
};
return;
}


void func_201(var uParam0) // Position - 0x6594{
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
HUD::SET_TEXT_RENDER_ID(uParam0->f_717);
GRAPHICS::DRAW_RECT(0.501f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
return;
}


void func_202(var uParam0) // Position - 0x65CD{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
func_201(uParam0);
return;
}


void func_203(var uParam0) // Position - 0x6601{
uParam0->f_703=0;
return;
}


void func_204(var uParam0) // Position - 0x660F{
func_348();
func_345(uParam0);
func_338(uParam0);
func_337(uParam0);
func_336(uParam0);
func_320(uParam0);
func_318(uParam0);
func_302(uParam0);
func_284(uParam0);
func_233(uParam0);
func_223(&(uParam0->f_725));
func_216();
uParam0->f_812.f_424=-1;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()) func_208(uParam0);
else func_207(uParam0);
if(!uParam0->f_718.f_5){
if(func_40() && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !_IS_FMMC_ACTIVE() && func_206(PLAYER::PLAYER_ID())) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
MISC::SET_BIT(&(uParam0->f_1247), 15);
func_198(uParam0);
func_205(&(uParam0->f_718));
}
return;
}


void func_205(var uParam0) // Position - 0x66DC{
int num;
uParam0->f_1=*uParam0;
MISC::SET_BIT(&(uParam0->f_4), uParam0->f_1);
MISC::CLEAR_BIT(&(uParam0->f_3), uParam0->f_1);
num=*uParam0;
num=num - 1;
*uParam0=num;
if(*uParam0==0) *uParam0=1;
return;
}
BOOL func_206(Player plParam0) // Position - 0x671E{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_75(Global_2657589[plParam0 /*466*/].f_321.f_7)==9;
return false;
}


void func_207(var uParam0) // Position - 0x6765{
int i;
BOOL flag;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()) return;
flag=false;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}elseif(uParam0->f_812.f_418[i]==1){
flag=true;
break;
}}
if(!uParam0->f_1239.f_1)if(flag)if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/)) func_169("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/);
elseif(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}


void func_208(var uParam0) // Position - 0x67F2{
BOOL flag;
BOOL flag2;
BOOL flag3;
int i;
var unk;
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
flag=true;
flag2=1;
flag3=false;
if(uParam0->f_812.f_61[0]==1) return;
if(uParam0->f_718.f_2==1) flag=false;
if(flag){
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}elseif(uParam0->f_812.f_418[i]==1){
flag=false;
flag3=true;
break;
}}}
if(!uParam0->f_1239.f_1)if(flag3)if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/)) func_169("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/);
elseif(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_WAIT" /*Please wait for all players to complete the Finale Screen Tutorial.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(flag){
if(uParam0->f_812.f_50[4] > 0){
if(!IS_BIT_SET(uParam0->f_1247, 10)){
_DISPLAY_HELP_TEXT("HP_FIN_EXPLCUT" /*You must assign 100% of the Heist reward before you can launch the Finale.*/, -1);
MISC::SET_BIT(&(uParam0->f_1247), 10);
}
flag=false;
}}
if(flag){
for (i=1;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}elseif(!func_214(uParam0, PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]))){
flag=false;
flag2=0;
break;
}}}
if(flag){
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}elseif(uParam0->f_812.f_56[i]==-1){
flag=false;
break;
}}}
if(flag && flag2){
unk=4;
func_213(uParam0, &unk);
for (i=0;
i <=3;
i=i + 1){
if(i >=Global_4718592.f_1199){
}elseif(unk[i] < Global_4718592.f_1202[i] || unk[i] > Global_4718592.f_1207[i]){
flag=false;
}}}
if(flag)if(!flag2) flag=false;
if(flag){
if(!uParam0->f_812.f_416){
func_212(uParam0);
func_211(uParam0->f_714, true, false);
uParam0->f_812.f_416=1;
_DISPLAY_HELP_TEXT("HPFIN_RTL" /*All players are ready. Navigate to the launch mission button to start the Finale.*/, -1);
func_210(uParam0, 1);
}}elseif(uParam0->f_812.f_416){
func_209(uParam0);
func_211(uParam0->f_714, false, false);
uParam0->f_812.f_416=0;
func_210(uParam0, 1);
}
return;
}


void func_209(var uParam0) // Position - 0x6A4D{
if(uParam0->f_1243.f_2){
if(uParam0->f_1243.f_3 !=-1){
if(!AUDIO::HAS_SOUND_FINISHED(uParam0->f_1243.f_3)) AUDIO::STOP_SOUND(uParam0->f_1243.f_3);
AUDIO::RELEASE_SOUND_ID(uParam0->f_1243.f_3);
uParam0->f_1243.f_3=-1;
uParam0->f_1243.f_2=0;
}}
return;
}


void func_210(var uParam0, int iParam1) // Position - 0x6A9F{
uParam0->f_705=iParam1;
return;
}


void func_211(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AAE{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_LAUNCH_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_212(var uParam0) // Position - 0x6AD1{
if(!uParam0->f_1243.f_2){
if(uParam0->f_1243.f_3==-1){
uParam0->f_1243.f_3=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1243.f_3, "Finale_Available", func_159(), func_158(), false, 0, false);
uParam0->f_1243.f_2=1;
}}
return;
}


void func_213(var uParam0, var uParam1) // Position - 0x6B1C{
int i;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i] !=-1){
switch (uParam0->f_812.f_56[i]){
case 0:
uParam1->[0]=uParam1->[0] + 1;
break;
case 1:
uParam1->[1]=uParam1->[1] + 1;
break;
case 2:
uParam1->[2]=uParam1->[2] + 1;
break;
case 3:
uParam1->[3]=uParam1->[3] + 1;
break;
}}}
return;
}
BOOL func_214(var uParam0, Player plParam1) // Position - 0x6BA9{
int i;
for (i=0;
i <=3;
i=i + 1){
if(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]) !=plParam1){
}else{
return uParam0->f_812.f_61[i]==1;
}}
return false;
}


void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x6BEB{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
return;
}


void func_216() // Position - 0x6C02{
HUD::THEFEED_HIDE_THIS_FRAME();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_GAME_STREAM);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_217(0);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE, true);
CAM::INVALIDATE_IDLE_CAM();
NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
func_53(11, -1);
return;
}


void func_217(int iParam0) // Position - 0x6C3F{
if(func_222()) return;
if(!Global_20383.f_1==1){
if(func_182(0)) func_218(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_218(int iParam0) // Position - 0x6C72{
if(func_222()) return;
if(Global_20584)if(func_221()) func_220(true, true);
else func_220(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_219()) Global_20383.f_1=3;
return;
}
BOOL func_219() // Position - 0x6CFC{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_220(BOOL bParam0, BOOL bParam1) // Position - 0x6D23{
if(bParam0){
if(func_182(0)){
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
BOOL func_221() // Position - 0x6D97{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_222() // Position - 0x6DA5{
return IS_BIT_SET(Global_1962996, 19);
}


void func_223(var uParam0) // Position - 0x6DB4{
int num;
var unk;
var unk4;
if(uParam0->f_36 !=uParam0->f_34){
uParam0->f_36=uParam0->f_34;
uParam0->f_64=1;
num=func_232(uParam0->f_34);
unk={
0f, 0f, 0f 
};
unk4={
0f, 0f, 0f 
};
uParam0->f_46={
func_231(uParam0) 
};
uParam0->f_49={
func_230(uParam0) 
};
uParam0->f_40={
CAM::GET_CAM_COORD(uParam0->f_1) 
};
uParam0->f_43={
CAM::GET_CAM_ROT(uParam0->f_1, 2) 
};
uParam0->f_1.f_18=CAM::GET_CAM_FOV(uParam0->f_1);
uParam0->f_1.f_17=uParam0->f_1.f_7;
uParam0->f_1.f_14={
0f, 0f, 0f 
};
uParam0->f_65=func_229(uParam0);
CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0f);
CAM::SET_CAM_PARAMS(uParam0->f_1, uParam0->f_40, uParam0->f_43, uParam0->f_1.f_18, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(uParam0->f_1, uParam0->f_46, uParam0->f_49, uParam0->f_1.f_17, uParam0->f_65, 1, 1, 2);
}
if(uParam0->f_64){
uParam0->f_1.f_18=CAM::GET_CAM_FOV(uParam0->f_1);
if(!CAM::IS_CAM_INTERPOLATING(uParam0->f_1)){
uParam0->f_40={
uParam0->f_46 
};
uParam0->f_43={
uParam0->f_49 
};
uParam0->f_1.f_1={
uParam0->f_46 
};
uParam0->f_1.f_4={
uParam0->f_49 
};
CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.19f);
uParam0->f_64=0;
func_225(&(uParam0->f_1), false, false, true, false, 1045220557, false, 1065353216, false);
}}else{
func_225(&(uParam0->f_1), true, true, func_224(uParam0), false, 1045220557, false, 1065353216, true);
}
return;
}
BOOL func_224(var uParam0) // Position - 0x6F3D{
if(uParam0->f_34==8) return true;
return false;
}


void func_225(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x6F53{
var unk;
float controlUnboundNormal;
float controlUnboundNormal2;
float num;
float num2;
float num3;
float num4;
eControlAction action;
eControlAction action2;
unk=4;
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
func_228(&unk[0], &unk[1], &unk[2], &unk[3], false, false);
if(PAD::IS_LOOK_INVERTED()) unk[3]=unk[3] * -1;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
controlUnboundNormal=PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
controlUnboundNormal2=PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
num=controlUnboundNormal - uParam0->f_29;
num2=controlUnboundNormal2 - uParam0->f_30;
uParam0->f_29=controlUnboundNormal;
uParam0->f_30=controlUnboundNormal2;
if(bParam4){
unk[2]=-SYSTEM::ROUND(num * iParam5 * 127f);
unk[3]=-SYSTEM::ROUND(num2 * iParam5 * 127f);
}else{
unk[2]=SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_LR) * iParam5 * 127f);
unk[3]=SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_UD) * iParam5 * 127f);
}
unk[2]=func_227(unk[2] + uParam0->f_24, -127, 127);
unk[3]=func_227(unk[3] + uParam0->f_25, -127, 127);
}
if(uParam0->f_24==unk[2] && uParam0->f_25==unk[3]){
if(uParam0->f_27 < MISC::GET_GAME_TIMER()){
uParam0->f_24=0;
uParam0->f_25=0;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
unk[2]=0;
unk[3]=0;
uParam0->f_28=1;
}}}else{
uParam0->f_24=unk[2];
uParam0->f_25=unk[3];
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}
if(bParam2){
uParam0->f_8.f_2=-(SYSTEM::TO_FLOAT(unk[2]) / 127f) * (float)uParam0->f_20;
uParam0->f_8.f_1=(-uParam0->f_8.f_2 * (float)uParam0->f_22) / (float)uParam0->f_20;
uParam0->f_8=-(SYSTEM::TO_FLOAT(unk[3]) / 127f) * (float)uParam0->f_21;
}else{
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_24=0;
uParam0->f_25=0;
}
num3=30f * SYSTEM::TIMESTEP();
num4={
uParam0->f_8 + uParam0->f_11 
};
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && bParam2 && !uParam0->f_28){
uParam0->f_14=num4;
uParam0->f_14.f_1=num4.f_1;
uParam0->f_14.f_2=num4.f_2;
}else{
uParam0->f_14=uParam0->f_14 + func_226((num4 - uParam0->f_14) * 0.05f * num3 * iParam7, -3f, 3f);
uParam0->f_14.f_1=uParam0->f_14.f_1 + func_226((num4.f_1 - uParam0->f_14.f_1) * 0.05f * num3 * iParam7, -3f, 3f);
uParam0->f_14.f_2=uParam0->f_14.f_2 + func_226((num4.f_2 - uParam0->f_14.f_2) * 0.05f * num3 * iParam7, -3f, 3f);
}
if(uParam0->f_26){
uParam0->f_14=func_226(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
uParam0->f_14.f_1=func_226(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
uParam0->f_14.f_2=func_226(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL) && bParam1)if(uParam0->f_28) uParam0->f_17=uParam0->f_7;
else uParam0->f_17=uParam0->f_7;
if(bParam1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL)){
action=INPUT_SNIPER_ZOOM_IN_ONLY;
action2=INPUT_SNIPER_ZOOM_OUT_ONLY;
if(bParam6){
action=INPUT_CURSOR_SCROLL_UP;
action2=INPUT_CURSOR_SCROLL_DOWN;
}
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action)){
uParam0->f_17=uParam0->f_17 - 5f;
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action2)){
uParam0->f_17=uParam0->f_17 + 5f;
uParam0->f_27=MISC::GET_GAME_TIMER() + 4000;
uParam0->f_28=0;
}
if(bParam3) uParam0->f_17=func_226(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7);
else uParam0->f_17=func_226(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7 + uParam0->f_19);
}elseif(bParam8){
unk[1]=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
unk[3]=PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RT);
if(bParam3){
if(SYSTEM::TO_FLOAT(unk[3]) > 127f) uParam0->f_17=uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * (uParam0->f_19 / 2f));
}else{
uParam0->f_17=uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
uParam0->f_17=uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * uParam0->f_19);
}}elseif(bParam3){
if(SYSTEM::TO_FLOAT(unk[1]) < 0f) uParam0->f_17=uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
}else{
uParam0->f_17=uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
}}
uParam0->f_18=uParam0->f_18 + ((uParam0->f_17 - uParam0->f_18) * 0.06f * num3);
CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
if(CAM::DOES_CAM_EXIST(*uParam0))if(CAM::IS_CAM_ACTIVE(*uParam0))if(CAM::IS_CAM_RENDERING(*uParam0)) RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
return;
}


float func_226(float fParam0, float fParam1, float fParam2) // Position - 0x74A7{
if(fParam0 > fParam2) return fParam2;
elseif(fParam0 < fParam1) return fParam1;
return fParam0;
}

int func_227(int iParam0, int iParam1, int iParam2) // Position - 0x74CE{
if(iParam0 > iParam2) return iParam2;
elseif(iParam0 < iParam1) return iParam1;
return iParam0;
}


void func_228(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x74F3{
*uParam0=SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
*uParam1=SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
*uParam2=SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
*uParam3=SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
if(bParam4){
if(!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X)) *uParam0=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
if(!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y)) *uParam1=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
if(!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X)) *uParam2=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
if(!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y)) *uParam3=SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
if(bParam5){
if(PAD::IS_LOOK_INVERTED()) *uParam3=*uParam3 * -1;
if(PAD::IS_MOUSE_LOOK_INVERTED()) *uParam3=*uParam3 * -1;
}}
return;
}

int func_229(var uParam0) // Position - 0x75F7{
switch (uParam0->f_34){
case 0:
return 800;
case 1:
return 750;
case 2:
return 750;
case 8:
return 1000;
default:
}
return 500;
}


Vector3 func__230(var uParam0) // Position - 0x763B{
switch (uParam0->f_34){
case 0:
return 6.6407f, 0.0116f, -35.027f;
case 1:
return 6.6407f, 0.0116f, 0.2936f;
case 2:
return 6.6407f, 0.0116f, -71.3175f;
case 8:
return 1.2933f, 0.0747f, -34.6934f;
case 4:
return -3.3062f, -0.059f, -41.8137f;
case 5:
return -3.8138f, -0.0354f, -41.9072f;
case 6:
return -0.709f, 0.0166f, -7.2528f;
case 7:
return -0.1637f, 0.0001f, 16.4119f;
default:
}
return -0.8655f, 0f, -34.8697f;
}


Vector3 func__231(var uParam0) // Position - 0x7717{
switch (uParam0->f_34){
case 0:
return 350.4201f, 4871.844f, -59.2717f;
case 1:
return 350.4201f, 4871.844f, -59.2717f;
case 2:
return 350.4201f, 4871.844f, -59.2717f;
case 8:
return 347.2638f, 4867.324f, -59.2679f;
case 4:
return 351.3163f, 4872.8228f, -56.7411f;
case 5:
return 351.291f, 4872.7783f, -58.2965f;
case 6:
return 350.5261f, 4873.061f, -58.4288f;
case 7:
return 349.9676f, 4873.1333f, -58.4461f;
default:
}
return 349.1823f, 4870.072f, -58.731f;
}

int func_232(int iParam0) // Position - 0x77F7{
switch (iParam0){
case 0:
case 1:
default:
}
return 0;
}


void func_233(var uParam0) // Position - 0x781B{
if(uParam0->f_812.f_417) func_263(uParam0);
else func_234(uParam0);
return;
}


void func_234(var uParam0) // Position - 0x783D{
Player player;
var unk;
var unk7;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
flag3=func_262(uParam0);
flag4=func_261(uParam0);
flag5=func_260(uParam0);
flag6=func_259(uParam0);
flag7=flag3 || flag4 || flag5 || flag6;
player=uParam0->f_812.f_41;
unk={
func_248(uParam0, player) 
};
TEXT_LABEL_ASSIGN_STRING(&unk7, "HEIST_RL_NONE" /*UNASSIGNED*/, 16);
flag2=false;
flag=player==PLAYER::PLAYER_ID();
if(!flag7) return;
if(flag6){
func_246(uParam0->f_714, 0, PLAYER::GET_PLAYER_NAME(player), &unk, flag);
func_245(uParam0->f_714, 1);
func_245(uParam0->f_714, 2);
func_245(uParam0->f_714, 3);
func_242(uParam0->f_714, func_244(uParam0->f_812.f_77), func_243(0, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(1, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(2, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(3, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(4, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(5, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(6, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(7, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(8, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(9, uParam0->f_794, uParam0->f_812.f_77, 2));
}
if(flag3 || flag6) func_240(uParam0->f_714, 0, &unk7);
if(flag5 || flag6) func_239(uParam0->f_714, 0, flag2);
func_238(uParam0, 0);
func_237(uParam0, 0);
func_236(uParam0, 0);
func_235(uParam0, 0);
return;
}


void func_235(var uParam0, int iParam1) // Position - 0x7A02{
if(uParam0->f_706 !=iParam1) uParam0->f_706=iParam1;
return;
}


void func_236(var uParam0, int iParam1) // Position - 0x7A1B{
if(uParam0->f_709 !=iParam1) uParam0->f_709=iParam1;
return;
}


void func_237(var uParam0, int iParam1) // Position - 0x7A34{
if(uParam0->f_708 !=iParam1) uParam0->f_708=iParam1;
return;
}


void func_238(var uParam0, int iParam1) // Position - 0x7A4D{
if(uParam0->f_707 !=iParam1) uParam0->f_707=iParam1;
return;
}


void func_239(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x7A66{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "UPDATE_FINALE_PLAYER_STATUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_240(Player plParam0, int iParam1, const char* sParam2) // Position - 0x7A89{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "UPDATE_FINALE_PLAYER_ROLE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
func_241(sParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_241(const char* sParam0) // Position - 0x7AAC{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_242(Player plParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x7ABE{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_SPY_CAM_TEXTURES");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
// Unhandled jump detected. Output should be considered invalid// Unhandled jump detected. Output should be considered invalid// Unhandled jump detected. Output should be considered invalid// Unhandled jump detected. Output should be considered invalid// Unhandled jump detected. Output should be considered invalid// Unhandled jump detected. Output should be considered invalid

char* func_243(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7B17{
switch (iParam2){
case 0:
if(iParam3==2 || iParam3==0){
switch (iParam0){
case 0:
return "1_FINALE_spy_top";
case 1:
return "1_FINALE_spy_mid1";
case 2:
return "1_FINALE_spy_mid1";
case 3:
return "1_FINALE_spy_mid1";
case 4:
return "1_FINALE_spy_mid1";
case 5:
return "1_FINALE_spy_mid1";
case 6:
return "1_FINALE_spy_mid2";
case 7:
return "1_FINALE_spy_mid2";
case 8:
return "1_FINALE_spy_mid2";
case 9:
return "1_FINALE_spy_bott";
default:
goto 0x4C0;
}}elseif(iParam3==1){
switch (iParam0){
case 0:
return "1_2_Prep_spy_top";
case 1:
return "1_1_prep_spy_mid1";
case 2:
return "1_1_prep_spy_mid1";
case 3:
return "1_1_prep_spy_mid1";
case 4:
return "1_1_prep_spy_mid1";
case 5:
return "1_1_prep_spy_mid1";
case 6:
return "1_3_Prep_spy_mid2";
case 7:
return "1_3_Prep_spy_mid2";
case 8:
return "1_3_Prep_spy_mid2";
case 9:
return "1_3_Setup_spy_bott";
default:
goto 0x4C0;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case 0:
return "1_1_prep_spy_top";
case 1:
return "1_1_prep_spy_mid1";
case 2:
return "1_1_prep_spy_mid1";
case 3:
return "1_1_prep_spy_mid1";
case 4:
return "1_1_prep_spy_mid1";
case 5:
return "1_1_prep_spy_mid1";
case 6:
return "1_1_prep_spy_mid2";
case 7:
return "1_1_prep_spy_mid2";
case 8:
return "1_1_prep_spy_mid2";
case 9:
return "1_1_prep_spy_bott";
default:
break;
}
break;
case 3:
switch (iParam0){
case 0:
return "1_1_setup_spy_top";
case 1:
return "1_1_setup_spy_mid1";
case 2:
return "1_1_setup_spy_mid1";
case 3:
return "1_1_setup_spy_mid1";
case 4:
return "1_1_setup_spy_mid1";
case 5:
return "1_1_setup_spy_mid1";
case 6:
return "1_1_setup_spy_mid2";
case 7:
return "1_1_setup_spy_mid2";
case 8:
return "1_1_setup_spy_mid2";
case 9:
return "1_1_setup_spy_bott";
default:
break;
}
break;
case 4:
switch (iParam0){
case 0:
return "1_2_Prep_spy_top";
case 1:
return "1_2_Prep_spy_mid1";
case 2:
return "1_2_Prep_spy_mid1";
case 3:
return "1_2_Prep_spy_mid1";
case 4:
return "1_2_Prep_spy_mid1";
case 5:
return "1_2_Prep_spy_mid1";
case 6:
return "1_2_Prep_spy_mid2";
case 7:
return "1_2_Prep_spy_mid2";
case 8:
return "1_2_Prep_spy_mid2";
case 9:
return "1_2_prep_spy_bott";
default:
break;
}
break;
case 6:
switch (iParam0){
case 0:
return "1_2_Setup_spy_top";
case 1:
return "1_2_Setup_spy_mid1";
case 2:
return "1_2_Setup_spy_mid1";
case 3:
return "1_2_Setup_spy_mid1";
case 4:
return "1_2_Setup_spy_mid1";
case 5:
return "1_2_Setup_spy_mid1";
case 6:
return "1_2_Setup_spy_mid2";
case 7:
return "1_2_Setup_spy_mid2";
case 8:
return "1_2_Setup_spy_mid2";
case 9:
return "1_2_Setup_spy_bott";
default:
break;
}
break;
case 7:
switch (iParam0){
case 0:
return "1_3_Prep_spy_top";
case 1:
return "1_3_Prep_spy_mid1";
case 2:
return "1_3_Prep_spy_mid1";
case 3:
return "1_3_Prep_spy_mid1";
case 4:
return "1_3_Prep_spy_mid1";
case 5:
return "1_3_Prep_spy_mid1";
case 6:
return "1_3_Prep_spy_mid2";
case 7:
return "1_3_Prep_spy_mid2";
case 8:
return "1_3_Prep_spy_mid2";
case 9:
return "1_3_prep_spy_bott";
default:
break;
}
break;
case 9:
switch (iParam0){
case 0:
return "1_3_Setup_spy_top";
case 1:
return "1_3_Setup_spy_mid1";
case 2:
return "1_3_Setup_spy_mid1";
case 3:
return "1_3_Setup_spy_mid1";
case 4:
return "1_3_Setup_spy_mid1";
case 5:
return "1_3_Setup_spy_mid1";
case 6:
return "1_3_Setup_spy_mid2";
case 7:
return "1_3_Setup_spy_mid2";
case 8:
return "1_3_Setup_spy_mid2";
case 9:
return "1_3_Setup_spy_bott";
default:
break;
}
break;
}}
break;
case 1:
if(iParam3==2 || iParam3==0){
switch (iParam0){
case 0:
return "2_FINALE_spy_top";
case 1:
return "2_FINALE_spy_mid1";
case 2:
return "2_FINALE_spy_mid1";
case 3:
return "2_FINALE_spy_mid1";
case 4:
return "2_FINALE_spy_mid1";
case 5:
return "2_FINALE_spy_mid1";
case 6:
return "2_FINALE_spy_mid2";
case 7:
return "2_FINALE_spy_mid2";
case 8:
return "2_FINALE_spy_mid2";
case 9:
return "2_FINALE_spy_bott";
default:
goto 0xB2E;
}}elseif(iParam3==1){
switch (iParam0){
case 0:
return "2_4_A_Prep_spy_top";
case 1:
return "2_1_setup_spy_mid1";
case 2:
return "2_1_setup_spy_mid1";
case 3:
return "2_1_setup_spy_mid1";
case 4:
return "2_1_setup_spy_mid1";
case 5:
return "2_1_setup_spy_mid1";
case 6:
return "2_4_setup_spy_mid2";
case 7:
return "2_4_setup_spy_mid2";
case 8:
return "2_4_setup_spy_mid2";
case 9:
return "2_4_B_Prep_spy_bott";
default:
goto 0xB2E;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case 0:
return "2_1_Prep_spy_top";
case 1:
return "2_1_Prep_spy_mid1";
case 2:
return "2_1_Prep_spy_mid1";
case 3:
return "2_1_Prep_spy_mid1";
case 4:
return "2_1_Prep_spy_mid1";
case 5:
return "2_1_Prep_spy_mid1";
case 6:
return "2_1_Prep_spy_mid2";
case 7:
return "2_1_Prep_spy_mid2";
case 8:
return "2_1_Prep_spy_mid2";
case 9:
return "2_1_prep_spy_bott";
default:
break;
}
break;
case 3:
switch (iParam0){
case 0:
return "2_1_setup_spy_top";
case 1:
return "2_1_setup_spy_mid1";
case 2:
return "2_1_setup_spy_mid1";
case 3:
return "2_1_setup_spy_mid1";
case 4:
return "2_1_setup_spy_mid1";
case 5:
return "2_1_setup_spy_mid1";
case 6:
return "2_1_setup_spy_mid2";
case 7:
return "2_1_setup_spy_mid2";
case 8:
return "2_1_setup_spy_mid2";
case 9:
return "2_1_setup_spy_bott";
default:
break;
}
break;
case 4:
switch (iParam0){
case 0:
return "2_2_Prep_spy_top";
case 1:
return "2_2_Prep_spy_mid1";
case 2:
return "2_2_Prep_spy_mid1";
case 3:
return "2_2_Prep_spy_mid1";
case 4:
return "2_2_Prep_spy_mid1";
case 5:
return "2_2_Prep_spy_mid1";
case 6:
return "2_2_Prep_spy_mid2";
case 7:
return "2_2_Prep_spy_mid2";
case 8:
return "2_2_Prep_spy_mid2";
case 9:
return "2_2_prep_spy_bott";
default:
break;
}
break;
case 6:
switch (iParam0){
case 0:
return "2_2_setup_spy_top";
case 1:
return "2_2_setup_spy_mid1";
case 2:
return "2_2_setup_spy_mid1";
case 3:
return "2_2_setup_spy_mid1";
case 4:
return "2_2_setup_spy_mid1";
case 5:
return "2_2_setup_spy_mid1";
case 6:
return "2_2_setup_spy_mid2";
case 7:
return "2_2_setup_spy_mid2";
case 8:
return "2_2_setup_spy_mid2";
case 9:
return "2_2_setup_spy_bott";
default:
break;
}
break;
case 7:
switch (iParam0){
case 0:
return "2_3_Prep_spy_top";
case 1:
return "2_3_Prep_spy_mid1";
case 2:
return "2_3_Prep_spy_mid1";
case 3:
return "2_3_Prep_spy_mid1";
case 4:
return "2_3_Prep_spy_mid1";
case 5:
return "2_3_Prep_spy_mid1";
case 6:
return "2_3_Prep_spy_mid2";
case 7:
return "2_3_Prep_spy_mid2";
case 8:
return "2_3_Prep_spy_mid2";
case 9:
return "2_3_prep_spy_bott";
default:
break;
}
break;
case 9:
switch (iParam0){
case 0:
return "2_3_setup_spy_top";
case 1:
return "2_3_setup_spy_mid1";
case 2:
return "2_3_setup_spy_mid1";
case 3:
return "2_3_setup_spy_mid1";
case 4:
return "2_3_setup_spy_mid1";
case 5:
return "2_3_setup_spy_mid1";
case 6:
return "2_3_setup_spy_mid2";
case 7:
return "2_3_setup_spy_mid2";
case 8:
return "2_3_setup_spy_mid2";
case 9:
return "2_3_setup_spy_bott";
default:
break;
}
break;
case 10:
switch (iParam0){
case 0:
return "2_4_A_Prep_spy_top";
case 1:
return "2_4_A_Prep_spy_mid1";
case 2:
return "2_4_A_Prep_spy_mid1";
case 3:
return "2_4_A_Prep_spy_mid1";
case 4:
return "2_4_A_Prep_spy_mid1";
case 5:
return "2_4_A_Prep_spy_mid1";
case 6:
return "2_4_A_Prep_spy_mid2";
case 7:
return "2_4_A_Prep_spy_mid2";
case 8:
return "2_4_A_Prep_spy_mid2";
case 9:
return "2_4_A_Prep_spy_bott";
default:
break;
}
break;
case 11:
switch (iParam0){
case 0:
return "2_4_B_Prep_spy_top";
case 1:
return "2_4_B_Prep_spy_mid1";
case 2:
return "2_4_B_Prep_spy_mid1";
case 3:
return "2_4_B_Prep_spy_mid1";
case 4:
return "2_4_B_Prep_spy_mid1";
case 5:
return "2_4_B_Prep_spy_mid1";
case 6:
return "2_4_B_Prep_spy_mid2";
case 7:
return "2_4_B_Prep_spy_mid2";
case 8:
return "2_4_B_Prep_spy_mid2";
case 9:
return "2_4_B_Prep_spy_bott";
default:
break;
}
break;
case 12:
switch (iParam0){
case 0:
return "2_4_setup_spy_top";
case 1:
return "2_4_setup_spy_mid1";
case 2:
return "2_4_setup_spy_mid1";
case 3:
return "2_4_setup_spy_mid1";
case 4:
return "2_4_setup_spy_mid1";
case 5:
return "2_4_setup_spy_mid1";
case 6:
return "2_4_setup_spy_mid2";
case 7:
return "2_4_setup_spy_mid2";
case 8:
return "2_4_setup_spy_mid2";
case 9:
return "2_4_setup_spy_bott";
default:
break;
}
break;
}}
break;
case 2:
if(iParam3==2 || iParam3==0){
switch (iParam0){
case 0:
return "3_finale_spy_top";
case 1:
return "3_finale_spy_mid1";
case 2:
return "3_finale_spy_mid1";
case 3:
return "3_finale_spy_mid1";
case 4:
return "3_finale_spy_mid1";
case 5:
return "3_finale_spy_mid1";
case 6:
return "3_finale_spy_mid2";
case 7:
return "3_finale_spy_mid2";
case 8:
return "3_finale_spy_mid2";
case 9:
return "3_finale_spy_bott";
default:
goto 0x12AD;
}}elseif(iParam3==1){
switch (iParam0){
case 0:
return "3_2_prep_spy_top";
case 1:
return "3_1_B_prep_spy_mid1";
case 2:
return "3_1_B_prep_spy_mid1";
case 3:
return "3_1_B_prep_spy_mid1";
case 4:
return "3_1_B_prep_spy_mid1";
case 5:
return "3_1_B_prep_spy_mid1";
case 6:
return "3_3_prep_spy_mid2";
case 7:
return "3_3_prep_spy_mid2";
case 8:
return "3_3_prep_spy_mid2";
case 9:
return "3_1_A_prep_spy_bott";
default:
goto 0x12AD;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case 0:
return "3_1_A_prep_spy_top";
case 1:
return "3_1_A_prep_spy_mid1";
case 2:
return "3_1_A_prep_spy_mid1";
case 3:
return "3_1_A_prep_spy_mid1";
case 4:
return "3_1_A_prep_spy_mid1";
case 5:
return "3_1_A_prep_spy_mid1";
case 6:
return "3_1_A_prep_spy_mid2";
case 7:
return "3_1_A_prep_spy_mid2";
case 8:
return "3_1_A_prep_spy_mid2";
case 9:
return "3_1_A_prep_spy_bott";
default:
break;
}
break;
case 2:
switch (iParam0){
case 0:
return "3_1_B_prep_spy_top";
case 1:
return "3_1_B_prep_spy_mid1";
case 2:
return "3_1_B_prep_spy_mid1";
case 3:
return "3_1_B_prep_spy_mid1";
case 4:
return "3_1_B_prep_spy_mid1";
case 5:
return "3_1_B_prep_spy_mid1";
case 6:
return "3_1_B_prep_spy_mid2";
case 7:
return "3_1_B_prep_spy_mid2";
case 8:
return "3_1_B_prep_spy_mid2";
case 9:
return "3_1_B_prep_spy_bott";
default:
break;
}
break;
case 3:
switch (iParam0){
case 0:
return "3_1_setup_spy_top";
case 1:
return "3_1_setup_spy_mid1";
case 2:
return "3_1_setup_spy_mid1";
case 3:
return "3_1_setup_spy_mid1";
case 4:
return "3_1_setup_spy_mid1";
case 5:
return "3_1_setup_spy_mid1";
case 6:
return "3_1_setup_spy_mid2";
case 7:
return "3_1_setup_spy_mid2";
case 8:
return "3_1_setup_spy_mid2";
case 9:
return "3_1_setup_spy_bott";
default:
break;
}
break;
case 4:
switch (iParam0){
case 0:
return "3_2_prep_spy_top";
case 1:
return "3_2_prep_spy_mid1";
case 2:
return "3_2_prep_spy_mid1";
case 3:
return "3_2_prep_spy_mid1";
case 4:
return "3_2_prep_spy_mid1";
case 5:
return "3_2_prep_spy_mid1";
case 6:
return "3_2_prep_spy_mid2";
case 7:
return "3_2_prep_spy_mid2";
case 8:
return "3_2_prep_spy_mid2";
case 9:
return "3_2_prep_spy_bott";
default:
break;
}
break;
case 6:
switch (iParam0){
case 0:
return "3_2_setup_spy_top";
case 1:
return "3_2_setup_spy_mid1";
case 2:
return "3_2_setup_spy_mid1";
case 3:
return "3_2_setup_spy_mid1";
case 4:
return "3_2_setup_spy_mid1";
case 5:
return "3_2_setup_spy_mid1";
case 6:
return "3_2_setup_spy_mid2";
case 7:
return "3_2_setup_spy_mid2";
case 8:
return "3_2_setup_spy_mid2";
case 9:
return "3_2_setup_spy_bott";
default:
break;
}
break;
case 7:
switch (iParam0){
case 0:
return "3_3_prep_spy_top";
case 1:
return "3_3_prep_spy_mid1";
case 2:
return "3_3_prep_spy_mid1";
case 3:
return "3_3_prep_spy_mid1";
case 4:
return "3_3_prep_spy_mid1";
case 5:
return "3_3_prep_spy_mid1";
case 6:
return "3_3_prep_spy_mid2";
case 7:
return "3_3_prep_spy_mid2";
case 8:
return "3_3_prep_spy_mid2";
case 9:
return "3_3_prep_spy_bott";
default:
break;
}
break;
case 9:
switch (iParam0){
case 0:
return "3_3_setup_spy_top";
case 1:
return "3_3_setup_spy_mid1";
case 2:
return "3_3_setup_spy_mid1";
case 3:
return "3_3_setup_spy_mid1";
case 4:
return "3_3_setup_spy_mid1";
case 5:
return "3_3_setup_spy_mid1";
case 6:
return "3_3_setup_spy_mid2";
case 7:
return "3_3_setup_spy_mid2";
case 8:
return "3_3_setup_spy_mid2";
case 9:
return "3_3_setup_spy_bott";
default:
break;
}
break;
case 10:
switch (iParam0){
case 0:
return "3_4_A_prep_spy_top";
case 1:
return "3_4_A_prep_spy_mid1";
case 2:
return "3_4_A_prep_spy_mid1";
case 3:
return "3_4_A_prep_spy_mid1";
case 4:
return "3_4_A_prep_spy_mid1";
case 5:
return "3_4_A_prep_spy_mid1";
case 6:
return "3_4_A_prep_spy_mid2";
case 7:
return "3_4_A_prep_spy_mid2";
case 8:
return "3_4_A_prep_spy_mid2";
case 9:
return "3_4_A_prep_spy_bott";
default:
break;
}
break;
case 12:
switch (iParam0){
case 0:
return "3_4_A_setup_spy_top";
case 1:
return "3_4_A_setup_mid1";
case 2:
return "3_4_A_setup_mid1";
case 3:
return "3_4_A_setup_mid1";
case 4:
return "3_4_A_setup_mid1";
case 5:
return "3_4_A_setup_mid1";
case 6:
return "3_4_A_setup_mid2";
case 7:
return "3_4_A_setup_mid2";
case 8:
return "3_4_A_setup_mid2";
case 9:
return "3_4_A_setup_spy_bott";
default:
break;
}
break;
case 13:
switch (iParam0){
case 0:
return "3_4_B_prep_spy_top";
case 1:
return "3_4_B_prep_spy_mid1";
case 2:
return "3_4_B_prep_spy_mid1";
case 3:
return "3_4_B_prep_spy_mid1";
case 4:
return "3_4_B_prep_spy_mid1";
case 5:
return "3_4_B_prep_spy_mid1";
case 6:
return "3_4_B_prep_spy_mid2";
case 7:
return "3_4_B_prep_spy_mid2";
case 8:
return "3_4_B_prep_spy_mid2";
case 9:
return "3_4_B_prep_spy_bott";
default:
break;
}
break;
case 15:
switch (iParam0){
case 0:
return "3_4_B_setup_spy_top";
case 1:
return "3_4_B_setup_spy_mid1";
case 2:
return "3_4_B_setup_spy_mid1";
case 3:
return "3_4_B_setup_spy_mid1";
case 4:
return "3_4_B_setup_spy_mid1";
case 5:
return "3_4_B_setup_spy_mid1";
case 6:
return "3_4_B_setup_spy_mid2";
case 7:
return "3_4_B_setup_spy_mid2";
case 8:
return "3_4_B_setup_spy_mid2";
case 9:
return "3_4_B_setup_spy_bott";
default:
break;
}
break;
}}
break;
}
return "";
}


char* func_244(int iParam0) // Position - 0x8DCE{
switch (iParam0){
case 0:
return "HEIST_CAM_IAA";
case 1:
return "HEIST_CAM_SUB";
case 2:
return "HEIST_CAM_MISSILE";
default:
}
return "";
}


void func_245(Player plParam0, int iParam1) // Position - 0x8E08{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "REMOVE_FINALE_PLAYER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_246(Player plParam0, int iParam1, const char* sParam2, const char* sParam3, BOOL bParam4) // Position - 0x8E25{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_FINALE_PLAYER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
func_247(sParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_247(const char* sParam0) // Position - 0x8E54{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}


struct<6> func_248(var uParam0, Player plParam1) // Position - 0x8E62{
var unk;
int num;
num=func_258(uParam0, plParam1);
if(num==-1) return unk;
if(uParam0->f_812[num /*10*/].f_9) return uParam0->f_812[num /*10*/].f_3;
if(func_250(uParam0, &uParam0->f_812[num /*10*/])){
if(uParam0->f_812.f_417){
if(func_249(uParam0)){
unk={
uParam0->f_812[num /*10*/].f_3 
};
if(!uParam0->f_812[num /*10*/].f_9){
uParam0->f_812[num /*10*/].f_9=1;
func_235(uParam0, 1);
}}}else{
unk={
uParam0->f_812[num /*10*/].f_3 
};
}}
return unk;
}
BOOL func_249(var uParam0) // Position - 0x8F10{
int i;
BOOL num;
num=1;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}elseif(!_NETWORK_IS_PLAYER_VALID(uParam0->f_812[i /*10*/], true, true)){
}elseif(uParam0->f_812[i /*10*/].f_2 !=2){
num=0;
break;
}}
return num;
}
BOOL func_250(var uParam0, var uParam1) // Position - 0x8F6C{
const char* pedheadshotTxdString;
int i;
BOOL flag;
flag=false;
switch (uParam1->f_2){
case 0:
if(!func_257(uParam0)) uParam1->f_2=1;
break;
case 1:
if(PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(*uParam1))) return false;
if(uParam1->f_1==0){
uParam1->f_1=func_251(*uParam1);
}else{
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_3), PED::GET_PEDHEADSHOT_TXD_STRING(uParam1->f_1), 24);
for (i=0;
i < Global_1666829;
i=i + 1){
if(Global_1666668[i /*5*/].f_1==*uParam1){
flag=uParam1->f_1==Global_1666668[i /*5*/].f_2;
break;
}}
if(!flag){
uParam1->f_1=0;
return false;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_3)) || MISC::ARE_STRINGS_EQUAL(" ", &(uParam1->f_3))){
uParam1->f_1=0;
return false;
}
uParam1->f_2=2;
func_235(uParam0, 1);
return true;
}
break;
case 2:
pedheadshotTxdString=PED::GET_PEDHEADSHOT_TXD_STRING(uParam1->f_1);
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_3), pedheadshotTxdString, 24);
return true;
}
return false;
}

int func_251(Player plParam0) // Position - 0x9072{
int num;
num=func_254(plParam0);
if(num==-1){
func_252(plParam0, true);
return 0;
}
Global_1666668[num /*5*/].f_4=1;
return Global_1666668[num /*5*/].f_2;
}


void func_252(Player plParam0, BOOL bParam1) // Position - 0x90A8{
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return;
if(func_254(plParam0) !=-1) return;
if(Global_1666831)if(plParam0==Global_1666831.f_1) return;
if(func_253(plParam0)) return;
if(Global_1666869 >=32) return;
Global_1666836[Global_1666869]=plParam0;
Global_1666869=Global_1666869 + 1;
bParam1;
return;
}
BOOL func_253(Player plParam0) // Position - 0x9114{
int i;
i=0;
for (i=0;
i < Global_1666869;
i=i + 1){
if(Global_1666836[i]==plParam0) return true;
}
return false;
}

int func_254(Player plParam0) // Position - 0x9146{
int i;
if(!_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return -1;
if(Global_1666829==0) return -1;
i=0;
for (i=0;
i < Global_1666829;
i=i + 1){
if(Global_1666668[i /*5*/].f_1==plParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[i /*5*/].f_2)) return i;
func_255(i);
return -1;
}}
return -1;
}


void func_255(int iParam0) // Position - 0x91C5{
var unk;
var unk17;
int num;
int i;
if(iParam0 >=Global_1666829) return;
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2)){
TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
if(Global_1666668[iParam0 /*5*/].f_2 !=0){
TEXT_LABEL_ASSIGN_STRING(&unk17, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
unk_0x3D0CB5A9795BD2A8(&unk17, &unk17, &unk, &unk);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
}
num=iParam0;
for (i=num + 1;
i < Global_1666829;
i=i + 1){
Global_1666668[num /*5*/]={
Global_1666668[i /*5*/] 
};
num=num + 1;
}
func_256(&Global_1666668[num /*5*/]);
Global_1666829=Global_1666829 - 1;
return;
}


void func_256(var uParam0) // Position - 0x927B{
*uParam0=0;
uParam0->f_1=_INVALID_PLAYER_INDEX();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) uParam0->f_3=NETWORK::GET_NETWORK_TIME();
return;
}
BOOL func_257(var uParam0) // Position - 0x92A8{
int i;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812[i /*10*/].f_2==1) return true;
}
return false;
}

int func_258(var uParam0, Player plParam1) // Position - 0x92D6{
int i;
if(plParam1==_INVALID_PLAYER_INDEX()) return -1;
for (i=0;
i < 4;
i=i + 1){
if(uParam0->f_812[i /*10*/]==plParam1) return i;
}
for (i=0;
i < 4;
i=i + 1){
if(uParam0->f_812[i /*10*/]==_INVALID_PLAYER_INDEX()){
uParam0->f_812[i /*10*/]=plParam1;
uParam0->f_812[i /*10*/].f_2=0;
return i;
}}
return -1;
}
BOOL func_259(var uParam0) // Position - 0x934F{
return uParam0->f_706;
}
BOOL func_260(var uParam0) // Position - 0x935C{
return uParam0->f_709;
}


var func__261(var uParam0) // Position - 0x9369{
return uParam0->f_708;
}
BOOL func_262(var uParam0) // Position - 0x9376{
return uParam0->f_707;
}
// Unhandled jump detected. Output should be considered invalid

void func_263(var uParam0) // Position - 0x9383{
Player player;
var unk;
var unk7;
int i;
int j;
float num;
var unk11;
float value;
BOOL flag;
BOOL flag2;
int num2;
BOOL flag3;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
BOOL flag8;
flag8=false;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==-1){
}else{
player=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]);
unk={
func_248(uParam0, player) 
};
unk7={
func_282(uParam0, i) 
};
flag2=func_281(uParam0, player);
flag=player==PLAYER::PLAYER_ID();
flag3=func_262(uParam0);
flag4=func_261(uParam0);
flag5=func_260(uParam0);
flag6=func_259(uParam0);
flag7=flag3 || flag4 || flag5 || flag6;
if(!flag7) goto 0x1C2;
flag8=true;
if(flag6){
func_246(uParam0->f_714, i, PLAYER::GET_PLAYER_NAME(player), &unk, flag);
func_242(uParam0->f_714, func_244(uParam0->f_812.f_77), func_243(0, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(1, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(2, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(3, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(4, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(5, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(6, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(7, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(8, uParam0->f_794, uParam0->f_812.f_77, 2), func_243(9, uParam0->f_794, uParam0->f_812.f_77, 2));
}
if(flag3 || flag6) func_240(uParam0->f_714, i, &unk7);
if(flag5 || flag6) func_239(uParam0->f_714, i, flag2);
}}
if(flag8) func_278(uParam0->f_714, func_279(&(uParam0->f_812), 0), func_279(&(uParam0->f_812), 1), func_279(&(uParam0->f_812), 2), func_279(&(uParam0->f_812), 3), func_279(&(uParam0->f_812), 4));
if(func_277(uParam0)){
num2=func_139(func_276(uParam0->f_812.f_77), 0);
value={
func_275(num2) 
};
num=func_274(num2);
func_273(uParam0->f_714, SYSTEM::CEIL(value), SYSTEM::CEIL(value.f_1), num, false);
if(!func_272(value, uParam0->f_725.f_66, false)){
if(uParam0->f_1243){
if(uParam0->f_1243.f_1 !=-1){
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_1243.f_1, "x", value);
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_1243.f_1, "y", value.f_1);
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_1243.f_1, "scale", num);
}}
uParam0->f_725.f_66={
value 
};
}
func_270(uParam0->f_714);
for (j=0;
j <=9;
j=j + 1){
unk11={
func_269(num2, j) 
};
if(!_IS_NULL_VECTOR(unk11)) func_268(uParam0->f_714, j, unk11, j);
}
func_267(uParam0, 0);
}
if(func_266(uParam0)){
func_265(uParam0->f_714, &(uParam0->f_812.f_110));
func_264(uParam0, 0);
}
func_238(uParam0, 0);
func_237(uParam0, 0);
func_236(uParam0, 0);
func_235(uParam0, 0);
return;
}


void func_264(var uParam0, int iParam1) // Position - 0x96CB{
if(uParam0->f_713 !=iParam1) uParam0->f_713=iParam1;
return;
}


void func_265(Player plParam0, var uParam1) // Position - 0x96E4{
int i;
const char* filenameForAudioConversation;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "UPDATE_FINALE_PLAN");
for (i=0;
i <=18;
i=i + 1){
if(HUD::DOES_TEXT_LABEL_EXIST(&uParam1->[i /*16*/])){
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&uParam1->[i /*16*/]);
if(!MISC::IS_STRING_NULL_OR_EMPTY(filenameForAudioConversation)) func_247(filenameForAudioConversation);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL func_266(var uParam0) // Position - 0x9737{
return uParam0->f_713;
}


void func_267(var uParam0, int iParam1) // Position - 0x9744{
if(uParam0->f_712 !=iParam1) uParam0->f_712=iParam1;
return;
}


void func_268(Player plParam0, int iParam1, float fParam2, var uParam3, var uParam4, int iParam5) // Position - 0x975D{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "ADD_MAP_MARKER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2.f_1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5 + 1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


Vector3 func__269(int iParam0, int iParam1) // Position - 0x9790{
switch (iParam0){
case 16:
switch (iParam1){
case 0:
return 401.764f, -1441.091f, 28.377f;
case 1:
return 362.532f, -589.867f, 27.674f;
case 2:
return 1156.0763f, -1515.1456f, 33.6926f;
case 3:
return -493.0043f, -335.9916f, 33.372f;
case 4:
return -239.6075f, 6334.271f, 31.4025f;
case 5:
return -1495.184f, -764.583f, 10.211f;
case 6:
return 1924.403f, 6291.715f, 41.471f;
case 7:
return -762.995f, 1703.955f, 199.954f;
case 8:
return -899.4231f, 4430.8774f, 19.8059f;
case 9:
return -2421.2227f, 1027.9628f, 194.2694f;
default:
break;
}
break;
case 17:
switch (iParam1){
case 0:
return -1045.1653f, 225.1183f, 62.7644f;
case 1:
return -1553.9995f, 16.8678f, 57.8382f;
case 2:
return -1555.9188f, 426.7133f, 108.6184f;
case 3:
return -1745.5889f, 368.3177f, 88.7252f;
case 4:
return -1868.4032f, 192.0209f, 83.2945f;
case 5:
return -1935.6902f, 366.0435f, 92.8313f;
case 6:
return -889.4168f, 360.5008f, 84.041f;
case 7:
return -2000.606f, 296.504f, 90.774f;
case 8:
return -872.3777f, 51.5699f, 47.8013f;
case 9:
return -714.303f, 648.501f, 154.185f;
default:
break;
}
break;
case 18:
switch (iParam1){
case 0:
return -2342.4475f, 3265.0486f, 31.8277f;
default:
break;
}
break;
case 19:
switch (iParam1){
case 0:
return -318.6971f, -1485.7524f, 29.5487f;
case 1:
return -1440.781f, -262.0631f, 45.2077f;
case 2:
return -514.7826f, -1217.729f, 17.4336f;
case 3:
return 1210.8304f, -1391.0676f, 34.2269f;
case 4:
return -59.9472f, -1754.7018f, 28.2206f;
case 5:
return 1996.4983f, 3773.8975f, 31.1808f;
case 6:
return 177.1732f, 6616.2417f, 30.8169f;
case 7:
return 281.9708f, -1269.2504f, 28.2315f;
case 8:
return 633.4514f, 256.5882f, 102.0777f;
case 9:
return 817.146f, -1038.505f, 25.575f;
default:
break;
}
break;
case 20:
switch (iParam1){
case 0:
return 1327.3469f, -1553.0698f, 53.0516f;
case 1:
return -1142.275f, -1461.3003f, 6.6957f;
case 2:
return -161.7495f, -1638.4126f, 36.2509f;
case 3:
return 454.9174f, -1580.1151f, 31.7921f;
case 4:
return -362.1769f, 57.7284f, 53.4394f;
case 5:
return -1271.6345f, -1297.565f, 7.3005f;
case 6:
return 203.799f, -98.626f, 72.295f;
case 7:
return -147.9569f, -1687.5626f, 35.1758f;
case 8:
return -358.3646f, 91.2701f, 69.5348f;
case 9:
return -26.5053f, -1544.2211f, 32.836f;
default:
break;
}
break;
case 21:
switch (iParam1){
case 0:
return -1375.2898f, -171.246f, 46.4759f;
case 1:
return 1793.6873f, 4588.593f, 36.5327f;
case 2:
return 400.8028f, -352.291f, 45.8152f;
case 3:
return 260.7947f, -1156.7053f, 28.265f;
case 4:
return 2322.5952f, 2515.8728f, 45.6677f;
case 5:
return -1218.5833f, -1453.451f, 3.36f;
case 6:
return 1343.1101f, -705.4467f, 65.8082f;
case 7:
return 58.7763f, -1571.5621f, 28.4602f;
case 8:
return 1223.253f, -428.197f, 66.549f;
case 9:
return -1612.2913f, 184.5625f, 58.7635f;
default:
break;
}
break;
case 22:
switch (iParam1){
case 0:
return 827.5247f, -1916.7343f, 28.3326f;
case 1:
return 279.1962f, -43.3867f, 70.1406f;
case 2:
return -1181.0353f, -367.9657f, 35.6024f;
case 3:
return 1953.5273f, 4651.233f, 39.6999f;
case 4:
return 2463.5393f, 1589.4882f, 31.7203f;
case 5:
return -512.6986f, -2199.4287f, 5.394f;
default:
break;
}
break;
case 23:
switch (iParam1){
case 0:
return -512.6076f, -3240.437f, -0.1497f;
case 1:
return 719.3928f, 6989.2305f, -0.4997f;
case 2:
return 777.817f, -3590.58f, 0.6f;
case 3:
return 3054.392f, -1109.6013f, 0f;
case 4:
return -3738.329f, 1313.735f, -0.2f;
case 5:
return 3987.479f, 5100.9f, -0.5f;
case 6:
return -1519.6511f, 5775.92f, -0.5297f;
case 7:
return -2956.164f, 4414.565f, -0.51f;
case 8:
return -2233.304f, -929.529f, -0.5f;
case 9:
return -1781.538f, -1754.969f, -0.43f;
default:
break;
}
break;
case 24:
switch (iParam1){
case 0:
return -1028.3914f, -2729.5454f, 12.7632f;
case 1:
return -545.0081f, -1291.193f, 25.9132f;
case 2:
return 277.6671f, -1204.722f, 37.9009f;
case 3:
return -216.5044f, -1042.9503f, 29.1474f;
default:
break;
}
break;
case 25:
switch (iParam1){
case 0:
return 26.2862f, -2755.8767f, 4.9999f;
default:
break;
}
break;
case 26:
switch (iParam1){
case 0:
return -140.2833f, -2565.4924f, 5.0115f;
case 1:
return 1437.5228f, 1522.2816f, 110.8769f;
case 2:
return 2188.9905f, 5016.0317f, 41.6069f;
case 3:
return 1118.004f, -2454.899f, 29.947f;
case 4:
return 1009.9137f, -3195.9414f, 4.9013f;
case 5:
return -1208.4019f, -2063.1572f, 12.9248f;
case 6:
return 1278.0662f, -1946.2949f, 42.2405f;
case 7:
return -421.0339f, -2727.4124f, 5.0002f;
case 8:
return -430.797f, 6420.8555f, 2.2329f;
case 9:
return -2760.1826f, 3464.937f, 10.6327f;
default:
break;
}
break;
case 27:
switch (iParam1){
case 0:
return 1191.0541f, -410.9726f, 66.6431f;
case 1:
return -1258.4479f, -890.9087f, 10.635f;
case 2:
return -1207.6191f, -1112.8379f, 6.1259f;
case 3:
return 251.2038f, -992.9363f, 28.1959f;
case 4:
return -847.077f, -1149.2388f, 5.5118f;
case 5:
return -816.6147f, -341.7916f, 36.0249f;
case 6:
return -618.3738f, 254.1537f, 80.6555f;
case 7:
return -513.2997f, -8.7039f, 43.5584f;
case 8:
return -1526.3176f, -447.4877f, 34.4469f;
case 9:
return 53.7992f, -786.9109f, 30.7194f;
default:
break;
}
break;
case 28:
switch (iParam1){
case 0:
return -407.3666f, 6314.2705f, 27.957f;
case 1:
return -1090.2343f, 548.5458f, 102.6333f;
case 2:
return 1201.0187f, -575.6332f, 68.1392f;
case 3:
return -1122.6763f, -1089.4696f, 1.5503f;
case 4:
return -371.7752f, 343.4836f, 108.9476f;
case 5:
return -293.5494f, 600.8064f, 180.5807f;
case 6:
return 1046.2379f, -497.8863f, 63.0844f;
case 7:
return 919.7858f, -569.6275f, 57.3714f;
case 8:
return -972.3597f, 752.3042f, 175.3857f;
case 9:
return -3093.6477f, 349.2276f, 6.5469f;
default:
break;
}
break;
case 29:
switch (iParam1){
case 0:
return 870.5683f, -530.9145f, 490.6413f;
case 1:
return 759.0447f, -1203.4915f, 326.5067f;
case 2:
return 36.7369f, -1597.6149f, 187.0704f;
case 3:
return -696.3125f, -609.0925f, 235.9581f;
case 4:
return 1536.2373f, 6624.1475f, 192.1024f;
case 5:
return 1235.5138f, 3707.3193f, 256.6749f;
case 6:
return 2049.2805f, 4582.7554f, 405.715f;
case 7:
return 865.5893f, 1721.0413f, 351.894f;
case 8:
return 60.079f, 7227.872f, 123.6636f;
case 9:
return -2041.8317f, 5267.3296f, 600.9536f;
default:
break;
}
break;
}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 245.7666f, -1373.5952f, 48.1986f;
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 820.6853f, -822.576f, 25.1811f;
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 2516.6697f, -383.9083f, 92.1404f;
default:
break;
}
break;
case 3:
switch (iParam1){
case 0:
return 2045.6251f, 2949.3281f, 50.0222f;
default:
break;
}
break;
case 4:
switch (iParam1){
case 0:
return -288.2928f, 6127.79f, 30.4128f;
default:
break;
}
break;
case 5:
switch (iParam1){
case 0:
return 1100.7981f, -1983.3372f, 30.0147f;
default:
break;
}
break;
case 6:
switch (iParam1){
case 0:
return 1228.0615f, 1875.402f, 77.8802f;
default:
break;
}
break;
case 7:
switch (iParam1){
case 0:
return -2474.387f, 3630.0312f, 12.9909f;
default:
break;
}
break;
case 8:
switch (iParam1){
case 0:
return -288.2928f, 6127.79f, 30.4128f;
default:
break;
}
break;
case 9:
switch (iParam1){
case 0:
return 26.2862f, -2755.8767f, 4.9999f;
default:
break;
}
break;
case 10:
switch (iParam1){
case 0:
return 75.6565f, 6539.4585f, 30.6815f;
default:
break;
}
break;
case 11:
switch (iParam1){
case 0:
return -454.2658f, 1144.9369f, 324.9044f;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return 2381.1965f, 3067.612f, 47.1529f;
default:
break;
}
break;
case 13:
switch (iParam1){
case 0:
return 1671.6829f, 3241.8843f, 39.6894f;
default:
break;
}
break;
case 14:
switch (iParam1){
case 0:
return -134.0906f, 4614.23f, 124.1666f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}


void func_270(Player plParam0) // Position - 0xA55D{
int i;
for (i=0;
i <=9;
i=i + 1){
func_271(plParam0, i);
}
return;
}


void func_271(Player plParam0, int iParam1) // Position - 0xA580{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "REMOVE_MAP_MARKER");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL func_272(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0xA59D{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_273(Player plParam0, int iParam1, int iParam2, float fParam3, BOOL bParam4) // Position - 0xA5E4{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_MAP_DISPLAY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


float func_274(int iParam0) // Position - 0xA613{
switch (iParam0){
case 17:
return 0.2f;
case 18:
return 0.5f;
case 24:
return 0.3f;
case 25:
return 0.5f;
case 27:
return 0.2f;
case 0:
return 0.5f;
case 1:
return 0.5f;
case 2:
return 0.5f;
case 3:
return 0.5f;
case 4:
return 0.5f;
case 5:
return 0.5f;
case 6:
return 0.5f;
case 7:
return 0.5f;
case 8:
return 0.5f;
case 9:
return 0.5f;
case 10:
return 0.5f;
case 11:
return 0.5f;
case 12:
return 0.5f;
case 13:
return 0.5f;
case 14:
return 0.5f;
default:
}
return 0f;
}


Vector3 func__275(int iParam0) // Position - 0xA73B{
switch (iParam0){
case 17:
return -1400.5581f, 218.6596f, 57.8532f;
case 18:
return -2342.4475f, 3265.0486f, 31.8277f;
case 24:
return -333.5182f, -1962.8071f, 65.5592f;
case 25:
return 26.2862f, -2755.8767f, 4.9999f;
case 27:
return -148.4588f, -262.9391f, 80.6359f;
case 0:
return 245.7666f, -1373.5952f, 48.1986f;
case 1:
return 820.6853f, -822.576f, 25.1811f;
case 2:
return 2516.6697f, -383.9083f, 92.1404f;
case 3:
return 2045.6251f, 2949.3281f, 50.0222f;
case 4:
return -288.2928f, 6127.79f, 30.4128f;
case 5:
return 1100.7981f, -1983.3372f, 30.0147f;
case 6:
return 1228.0615f, 1875.402f, 77.8802f;
case 7:
return -2474.387f, 3630.0312f, 12.9909f;
case 8:
return -288.2928f, 6127.79f, 30.4128f;
case 9:
return 26.2862f, -2755.8767f, 4.9999f;
case 10:
return 75.6565f, 6539.4585f, 30.6815f;
case 11:
return -454.2658f, 1144.9369f, 324.9044f;
case 12:
return 2381.1965f, 3067.612f, 47.1529f;
case 13:
return 1671.6829f, 3241.8843f, 39.6894f;
case 14:
return -134.0906f, 4614.23f, 124.1666f;
default:
}
return 350f, 2000f, 0f;
}

int func_276(int iParam0) // Position - 0xA935{
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
return -1;
}
BOOL func_277(var uParam0) // Position - 0xA963{
return uParam0->f_712;
}


void func_278(Player plParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xA970{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "UPDATE_CASH_DISTRIBUTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}

int func_279(var uParam0, int iParam1) // Position - 0xA9A5{
int num;
num=(uParam0->f_43 / 100) * func_280(uParam0, iParam1);
return num;
}


var func__280(var uParam0, int iParam1) // Position - 0xA9C1{
return uParam0->f_50[iParam1];
}
BOOL func_281(var uParam0, Player plParam1) // Position - 0xA9D1{
int i;
if(uParam0->f_812.f_41==plParam1) return 1;
for (i=0;
i <=3;
i=i + 1){
if(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]) !=plParam1){
}elseif(uParam0->f_812.f_61[i]==1){
return 1;
}}
return 0;
}


struct<4> func_282(var uParam0, int iParam1) // Position - 0xAA26{
int num;
var unk;
BOOL flag;
var unk6;
unk=4;
flag=true;
num=uParam0->f_812.f_56[iParam1];
if(num !=-1 && num < 4)if(unk[num] > 1) flag=false;
unk6={
func_283(num, flag) 
};
return unk6;
}


struct<4> func_283(int iParam0, BOOL bParam1) // Position - 0xAA70{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HEIST_RL_NONE" /*UNASSIGNED*/, 16);
if(iParam0 < 0) return unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "COR_TEAM_", 16);
if(bParam1) TEXT_LABEL_APPEND_STRING(&unk, "S_", 16);
TEXT_LABEL_APPEND_INT(&unk, Global_4718592.f_95186[iParam0], 16);
if(Global_4718592.f_95186[iParam0]==38) unk={
Global_4718592.f_95191[iParam0 /*4*/] 
};
return unk;
}


void func_284(var uParam0) // Position - 0xAADC{
int num;
Player player;
var gamerHandle;
num=func_300(&(uParam0->f_804));
if(uParam0->f_812.f_423 !=-1 || uParam0->f_812.f_424 !=-1) return;
if(func_299()==26) return;
if(uParam0->f_1239.f_1) return;
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
if(uParam0->f_725.f_64) return;
switch (num){
case 0:
case 1:
case 2:
case 3:
func_293(uParam0, num);
func_292(uParam0, 1);
break;
case 9:
case 10:
case 5:
func_291(uParam0, num);
break;
case 8:
switch (uParam0->f_718.f_2){
case 0:
uParam0->f_812.f_423=4;
break;
case 1:
func_290(uParam0, true);
break;
}
func_293(uParam0, num);
break;
case 7:
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
if(uParam0->f_812.f_416==1 && uParam0->f_794==28){
func_289(uParam0);
}else{
if(uParam0->f_725.f_34 !=0 && uParam0->f_725.f_34 !=8) return;
if(uParam0->f_794 >=100) return;
switch (uParam0->f_718.f_2){
case 0:
func_287(uParam0);
break;
case 1:
func_286(uParam0);
break;
}}}else{
func_285(uParam0);
}
break;
case 11:
if(uParam0->f_718.f_2 !=1){
player=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[uParam0->f_794.f_3]);
gamerHandle={
GET_GAMER_HANDLE_PLAYER(player) 
};
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
NETWORK::NETWORK_SHOW_PROFILE_UI(&gamerHandle);
}
break;
}
return;
}


void func_285(var uParam0) // Position - 0xACB8{
int i;
for (i=0;
i <=3;
i=i + 1){
if(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]) !=PLAYER::PLAYER_ID()){
}elseif(uParam0->f_812.f_61[i]==1){
uParam0->f_812.f_61[i]=0;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Back", func_159(), func_158(), false, 0, false);
}else{
uParam0->f_812.f_61[i]=1;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
}}
func_210(uParam0, 1);
return;
}


void func_286(var uParam0) // Position - 0xAD44{
func_290(uParam0, false);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38=Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38 + 1;
return;
}


void func_287(var uParam0) // Position - 0xAD6D{
int i;
if(uParam0->f_718.f_2==1) return;
uParam0->f_718.f_2=1;
uParam0->f_705=1;
for (i=0;
i <=4;
i=i + 1){
if(i >=4){
uParam0->f_812.f_66[4]=uParam0->f_812.f_50[4];
}else{
uParam0->f_812.f_66[i]=uParam0->f_812.f_50[i];
uParam0->f_812.f_72[i]=uParam0->f_812.f_56[i];
}}
func_288(uParam0->f_714, true);
func_210(uParam0, 1);
return;
}


void func_288(Player plParam0, BOOL bParam1) // Position - 0xADFD{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_ACTIVE_ITEM_SELECTED");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_289(var uParam0) // Position - 0xAE1A{
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
uParam0->f_812.f_61[0]=1;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_11[0]=1;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Launch_Mission", func_159(), func_158(), false, 0, false);
func_209(uParam0);
return;
}


void func_290(var uParam0, BOOL bParam1) // Position - 0xAE6A{
int i;
if(uParam0->f_718.f_2==0) return;
if(bParam1){
for (i=0;
i <=4;
i=i + 1){
if(i >=4){
uParam0->f_812.f_50[4]=uParam0->f_812.f_66[4];
}else{
uParam0->f_812.f_50[i]=uParam0->f_812.f_66[i];
uParam0->f_812.f_56[i]=uParam0->f_812.f_72[i];
}}}
uParam0->f_718.f_2=0;
uParam0->f_705=1;
func_288(uParam0->f_714, false);
func_210(uParam0, 1);
return;
}


void func_291(var uParam0, int iParam1) // Position - 0xAEFF{
if(uParam0->f_725.f_64) return;
if(uParam0->f_718.f_2==1) return;
switch (iParam1){
case 9:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}
break;
case 10:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}
break;
case 5:
if(uParam0->f_725.f_34 !=8){
uParam0->f_725.f_32=uParam0->f_725.f_34;
uParam0->f_725.f_33=uParam0->f_725.f_35;
uParam0->f_725.f_34=8;
uParam0->f_725.f_35=8;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==8){
uParam0->f_725.f_34=uParam0->f_725.f_32;
uParam0->f_725.f_35=uParam0->f_725.f_33;
func_210(uParam0, 1);
}
break;
}
return;
}


void func_292(var uParam0, int iParam1) // Position - 0xB08F{
uParam0->f_794.f_4=iParam1;
return;
}


void func_293(var uParam0, int iParam1) // Position - 0xB0A0{
switch (iParam1){
case 1:
switch (uParam0->f_718.f_2){
case 0:
func_298(uParam0->f_714, 187);
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID())if(uParam0->f_812.f_416)if(uParam0->f_794==28) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down", func_159(), func_158(), false, 0, false);
elseif(uParam0->f_794==17 || uParam0->f_794==20 || uParam0->f_794==23 || uParam0->f_794==26) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down", func_159(), func_158(), false, 0, false);
elseif(uParam0->f_794==18 || uParam0->f_794==21 || uParam0->f_794==24 || uParam0->f_794==27) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down", func_159(), func_158(), false, 0, false);
break;
case 1:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
break;
}
break;
case 0:
switch (uParam0->f_718.f_2){
case 0:
func_298(uParam0->f_714, 188);
if(uParam0->f_794==100 || uParam0->f_794==16 || uParam0->f_794==19 || uParam0->f_794==22 || uParam0->f_794==25) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down", func_159(), func_158(), false, 0, false);
break;
case 1:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
break;
}
break;
case 2:
switch (uParam0->f_718.f_2){
case 0:
func_298(uParam0->f_714, 189);
if(uParam0->f_794 >=100) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
break;
case 1:
func_294(uParam0, iParam1);
break;
}
break;
case 3:
switch (uParam0->f_718.f_2){
case 0:
func_298(uParam0->f_714, 190);
switch (uParam0->f_812.f_44){
case 1:
if(uParam0->f_794==17 || uParam0->f_794==16 || uParam0->f_794==18 || uParam0->f_794==28) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
break;
case 2:
if(uParam0->f_794==20 || uParam0->f_794==19 || uParam0->f_794==21 || uParam0->f_794==28) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
break;
case 3:
if(uParam0->f_794==23 || uParam0->f_794==22 || uParam0->f_794==24 || uParam0->f_794==28) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
break;
case 4:
if(uParam0->f_794==26 || uParam0->f_794==25 || uParam0->f_794==27 || uParam0->f_794==28) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
break;
}
break;
case 1:
func_294(uParam0, iParam1);
break;
}
break;
}
return;
}


void func_294(var uParam0, int iParam1) // Position - 0xB516{
int num;
int num2;
int num3;
int i;
switch (uParam0->f_794){
case 16:
case 19:
case 22:
case 25:
if(uParam0->f_794.f_3 < 0 || uParam0->f_794.f_3 > 3) return;
num=-1;
num=uParam0->f_812.f_56[uParam0->f_794.f_3];
num2=num;
switch (iParam1){
case 2:
if(num <=0) num=Global_4718592.f_1199 - 1;
else num=num - 1;
break;
case 3:
if(num < -1) num=num;
if(num >=Global_4718592.f_1199 - 1) num=0;
else num=num + 1;
break;
}
if(num2 !=num2){
num2=num2;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right", func_159(), func_158(), false, 0, false);
}else{
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
}
uParam0->f_812.f_56[uParam0->f_794.f_3]=num;
if(uParam0->f_812.f_77==1){
if(uParam0->f_812.f_56[uParam0->f_794.f_3] !=uParam0->f_812.f_415){
func_297(uParam0);
func_264(uParam0, 1);
}}
func_238(uParam0, 1);
break;
case 17:
case 20:
case 23:
case 26:
if(func_296(1)){
_DISPLAY_HELP_TEXT("CUTS_LOCKED", -1);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
return;
}
switch (iParam1){
case 2:
num3=-5;
break;
case 3:
if(uParam0->f_812.f_50[4] >=5) num3=5;
break;
}
func_295(&(uParam0->f_812), uParam0->f_794.f_3, num3);
for (i=0;
i <=4;
i=i + 1){
}
func_237(uParam0, 1);
break;
}
return;
}


void func_295(var uParam0, int iParam1, int iParam2) // Position - 0xB6F0{
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
num=Global_262145.f_23290;
unk=Global_262145.f_23291;
if(iParam2 < 0){
num2=uParam0->f_50[iParam1];
if(num2 < MISC::ABSI(iParam2)) iParam2=num2;
if(uParam0->f_50[iParam1] < num){
num3=num - uParam0->f_50[iParam1];
uParam0->f_50[iParam1]=uParam0->f_50[iParam1] + num3;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
}elseif(uParam0->f_50[iParam1]==num){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
}else{
if(uParam0->f_50[4] <=100 - MISC::ABSI(iParam2)){
uParam0->f_50[4]=uParam0->f_50[4] + MISC::ABSI(iParam2);
uParam0->f_50[iParam1]=uParam0->f_50[iParam1] - MISC::ABSI(iParam2);
}
if(iParam2==0) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Decrease_Loot_Share", func_159(), func_158(), false, 0, false);
}
if(uParam0->f_50[iParam1] <=num){
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HEIST_NOTE_6" /*The selected Heist member is at minimum cut.*/)){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
_DISPLAY_HELP_TEXT("HEIST_NOTE_6" /*The selected Heist member is at minimum cut.*/, 5000);
}}}else{
num4=uParam0->f_50[4];
if(num4 < MISC::ABSI(iParam2)) iParam2=num4;
if(uParam0->f_50[iParam1] > unk){
num5=uParam0->f_50[iParam1] - unk;
uParam0->f_50[4]=uParam0->f_50[4] + num5;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
}elseif(uParam0->f_50[iParam1]==unk){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
}else{
if(uParam0->f_50[4] >=MISC::ABSI(iParam2)){
uParam0->f_50[4]=uParam0->f_50[4] - MISC::ABSI(iParam2);
uParam0->f_50[iParam1]=uParam0->f_50[iParam1] + MISC::ABSI(iParam2);
}
if(iParam2==0) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Increase_Loot_Share", func_159(), func_158(), false, 0, false);
}
if(uParam0->f_50[iParam1] >=unk){
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HEIST_NOTE_5" /*The selected Heist member is at maximum cut.*/)){
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
_DISPLAY_HELP_TEXT("HEIST_NOTE_5" /*The selected Heist member is at maximum cut.*/, 5000);
}}}
return;
}
BOOL func_296(int iParam0) // Position - 0xB941{
if(*Global_262145.f_33902==-1) return false;
if(IS_BIT_SET(Global_1983551, 4)) return true;
switch (iParam0){
case 0:
return IS_BIT_SET(Global_1983551, 0);
case 1:
return IS_BIT_SET(Global_1983551, 1);
case 2:
return IS_BIT_SET(Global_1983551, 2);
case 3:
return IS_BIT_SET(Global_1983551, 3);
default:
}
return false;
}


void func_297(var uParam0) // Position - 0xB9AC{
var gxt;
var unk16;
int i;
Global_1966831.f_812.f_415=uParam0->f_812.f_56[uParam0->f_794.f_3];
for (i=0;
i <=18;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&gxt, "HP_SUB_STEP_", 64);
if(Global_1966831.f_812.f_415==0) TEXT_LABEL_APPEND_STRING(&gxt, "A", 64);
else TEXT_LABEL_APPEND_STRING(&gxt, "B", 64);
TEXT_LABEL_APPEND_INT(&gxt, i, 64);
if(HUD::DOES_TEXT_LABEL_EXIST(&gxt)) Global_1966831.f_812.f_110[i /*16*/]={
gxt 
};
else Global_1966831.f_812.f_110[i /*16*/]={
unk16 
};
}
return;
}


void func_298(int iParam0, int iParam1) // Position - 0xBA46{
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iParam0, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
return;
}

int func_299() // Position - 0xBA72{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192;
}

int func_300(int* piParam0) // Position - 0xBA87{
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return -1;
if(HUD::IS_PAUSE_MENU_ACTIVE()) return -1;
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || func_301(piParam0, 0, 0)) return 0;
elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || func_301(piParam0, 0, 1)) return 1;
elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || func_301(piParam0, 0, 2)) return 2;
elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || func_301(piParam0, 0, 3)) return 3;
elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LB)) return 9;
elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RB)) return 10;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_X)) return 4;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_Y)) return 5;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_Y)) return 6;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL)) return 8;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)) return 7;
elseif(PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT)) return 11;
return -1;
}
BOOL func_301(int* piParam0, int iParam1, int iParam2) // Position - 0xBBAB{
BOOL num;
int num2;
int num3;
num=0;
switch (iParam1){
case 0:
num2=SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
num3=SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
switch (iParam2){
case 0:
if(num3 <=-110){
if(!IS_BIT_SET(*piParam0, iParam2)){
num=1;
MISC::SET_BIT(piParam0, iParam2);
}}else{
MISC::CLEAR_BIT(piParam0, iParam2);
}
break;
case 1:
if(num3 >=110){
if(!IS_BIT_SET(*piParam0, iParam2)){
num=1;
MISC::SET_BIT(piParam0, iParam2);
}}else{
MISC::CLEAR_BIT(piParam0, iParam2);
}
break;
case 2:
if(num2 <=-110){
if(!IS_BIT_SET(*piParam0, iParam2)){
num=1;
MISC::SET_BIT(piParam0, iParam2);
}}else{
MISC::CLEAR_BIT(piParam0, iParam2);
}
break;
case 3:
if(num2 >=110){
if(!IS_BIT_SET(*piParam0, iParam2)){
num=1;
MISC::SET_BIT(piParam0, iParam2);
}}else{
MISC::CLEAR_BIT(piParam0, iParam2);
}
break;
}
break;
case 1:
num2=SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
num3=SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
switch (iParam2){
case 0:
if(num3 <=-110){
if(!IS_BIT_SET(piParam0->f_1, iParam2)){
num=1;
MISC::SET_BIT(&(piParam0->f_1), iParam2);
}}else{
MISC::CLEAR_BIT(&(piParam0->f_1), iParam2);
}
break;
case 1:
if(num3 >=110){
if(!IS_BIT_SET(piParam0->f_1, iParam2)){
num=1;
MISC::SET_BIT(&(piParam0->f_1), iParam2);
}}else{
MISC::CLEAR_BIT(&(piParam0->f_1), iParam2);
}
break;
case 2:
if(num2 <=-110){
if(!IS_BIT_SET(piParam0->f_1, iParam2)){
num=1;
MISC::SET_BIT(&(piParam0->f_1), iParam2);
}}else{
MISC::CLEAR_BIT(&(piParam0->f_1), iParam2);
}
break;
case 3:
if(num2 >=110){
if(!IS_BIT_SET(piParam0->f_1, iParam2)){
num=1;
MISC::SET_BIT(&(piParam0->f_1), iParam2);
}}else{
MISC::CLEAR_BIT(&(piParam0->f_1), iParam2);
}
break;
}
break;
}
return num;
}


void func_302(var uParam0) // Position - 0xBDC3{
BOOL flag;
if(uParam0->f_812.f_423==-1) return;
if(func_303(uParam0->f_812.f_423, &flag, -1, -1, -1)){
if(flag){
Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38.f_29=1;
func_209(uParam0);
}
uParam0->f_812.f_423=-1;
uParam0->f_812.f_424=0;
}
return;
}
BOOL func_303(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0xBE1D{
var entryHeader;
var entryLine1;
var showBackground;
var unk46;
var entryLine2;
BOOL flag;
int num;
int instructionalKey;
flag=false;
instructionalKey=36;
TEXT_LABEL_ASSIGN_STRING(&entryHeader, "HPWARN_CONF" /*Confirm*/, 64);
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_SKIP" /*Are you sure you want to pay $~1~ for this Heist Prep Equipment? Purchasing equipment will prevent you from progressing The Doomsday Heist challenges.*/, 64);
flag=true;
num=func_317();
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_START_P" /*Are you sure you want to start the ~a~ prep mission?*/, 64);
showBackground={
func_316(iParam2) 
};
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_START_I" /*Are you sure you want to start this mission?*/, 64);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_LAUNCH_F" /*Are you sure you want to launch the finale?*/, 64);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&entryHeader, "FM_CSC_QUIT" /*Confirm*/, 64);
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "FM_CSC_QUIT1" /*Are you sure you want to quit this Job?*/, 64);
break;
case 5:
func_315(&entryLine1, &showBackground, &unk46, false, IS_BIT_SET(iParam4, 0), IS_BIT_SET(iParam4, 1), IS_BIT_SET(iParam4, 2));
TEXT_LABEL_ASSIGN_STRING(&entryLine2, "FMMC_HCBCP_WY" /*Are you sure you wish to continue?*/, 64);
break;
case 6:
func_315(&entryLine1, &showBackground, &unk46, true, func_311(3), func_310(), func_309());
TEXT_LABEL_ASSIGN_STRING(&entryLine2, "FMMC_HCBCP_WY" /*Are you sure you wish to continue?*/, 64);
break;
case 10:
func_305(&entryLine1, &showBackground, &unk46);
TEXT_LABEL_ASSIGN_STRING(&entryLine2, "FMMC_HCBCP_WY" /*Are you sure you wish to continue?*/, 64);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HCOST_BODY" /*The setup cost for ~a~ is $~1~.*/, 64);
TEXT_LABEL_ASSIGN_STRING(&entryLine2, "HEIST_WARN_2" /*Do you wish to proceed?*/, 64);
flag=true;
num=iParam4;
showBackground={
func_304(iParam3, false) 
};
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&entryHeader, "HPWARN_ALRT" /*Alert*/, 64);
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_CASH_E" /*You don't have enough cash. This Heist Prep Equipment costs $~1~.*/, 64);
flag=true;
num=func_317();
instructionalKey=10;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&entryHeader, "HPWARN_ALRT" /*Alert*/, 64);
TEXT_LABEL_ASSIGN_STRING(&entryLine1, "HPWARN_CASH_S" /*You don't have enough cash. This Heist costs $~1~.*/, 64);
flag=true;
num=iParam4;
instructionalKey=10;
break;
}
HUD::SET_WARNING_MESSAGE_WITH_HEADER(&entryHeader, &entryLine1, instructionalKey, &entryLine2, flag, num, &showBackground, &unk46, true, 0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) HUD::SET_MOUSE_CURSOR_STYLE(1);
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) || PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Back", func_159(), func_158(), false, 0, false);
*uParam1=0;
return true;
}
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
if(iParam0 !=0) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
*uParam1=1;
return true;
}
return false;
}
struct<16> func_304(int iParam0, BOOL bParam1) // Position - 0xC01F{
var unk;
switch (iParam0){
case 0:
if(bParam1) TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_IAA" /*THE DATA BREACHES*/, 64);
else TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_IAAb" /*The Data Breaches*/, 64);
break;
case 1:
if(bParam1) TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_SUB" /*THE BOGDAN PROBLEM*/, 64);
else TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_SUBb" /*The Bogdan Problem*/, 64);
break;
case 2:
if(bParam1) TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_MSIL" /*THE DOOMSDAY SCENARIO*/, 64);
else TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTRAND_MSILb" /*The Doomsday Scenario*/, 64);
break;
}
return unk;
}


void func_305(char* sParam0, char* sParam1, char* sParam2) // Position - 0xC096{
BOOL flag;
flag=func_310();
if(flag){
TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHT_1" /*Playing this mission with this team will reset your ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_308()), 64);
}
if(func_309()){
if(!flag){
TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHT_1" /*Playing this mission with this team will reset your ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_306()), 64);
}else{
TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHT_2" /*Playing this mission with this team will reset your ~a~ and ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_306()), 64);
}}
return;
}

int func_306() // Position - 0xC0F5{
if(func_311(5)) return 5;
elseif(func_311(10)) return 10;
elseif(func_311(9)) return 9;
return 5;
}
char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xC12C{
switch (iParam0){
case 1:
return "AWD_GANGOPF0" /*Act I*/;
case 2:
return "AWD_GANGOPF1" /*Act II*/;
case 6:
return "AWD_GANGOPF2" /*Act III*/;
case 3:
return "AWD_GANGOPA" /*All In Order II*/;
case 4:
return "AWD_GANGOPL4" /*Loyalty IV*/;
case 7:
return "AWD_GANGOPL2" /*Loyalty II*/;
case 8:
return "AWD_GANGOPL3" /*Loyalty III*/;
case 5:
return "AWD_GANGOPM4" /*Criminal Mastermind IV*/;
case 9:
return "AWD_GANGOPM2" /*Criminal Mastermind II*/;
case 10:
return "AWD_GANGOPM3" /*Criminal Mastermind III*/;
case 11:
return "AWD_GANGOPSR" /*Supporting Role II*/;
default:
}
return "";
}

int func_308() // Position - 0xC1CE{
if(func_311(4)) return 4;
elseif(func_311(8)) return 8;
elseif(func_311(7)) return 7;
return 4;
}
BOOL func_309() // Position - 0xC203{
return func_311(5) || func_311(9) || func_311(10);
}
BOOL func_310() // Position - 0xC228{
return func_311(4) || func_311(7) || func_311(8);
}
BOOL func_311(int iParam0) // Position - 0xC24C{
return !func_314(iParam0) && _MPPLY_STAT_GET_INT(func_313(iParam0)) > 0;
}
int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0xC26C{
Hash statHash;
int outValue;
statHash=hParam0;
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}
Hash func_313(int iParam0) // Position - 0xC28A{
switch (iParam0){
case 3:
return joaat("MPPLY_GANGOPS_ALLINORDER");
case 4:
return joaat("MPPLY_GANGOPS_LOYALTY");
case 7:
return joaat("MPPLY_GANGOPS_LOYALTY2");
case 8:
return joaat("MPPLY_GANGOPS_LOYALTY3");
case 5:
return joaat("MPPLY_GANGOPS_CRIMMASMD");
case 9:
return joaat("MPPLY_GANGOPS_CRIMMASMD2");
case 10:
return joaat("MPPLY_GANGOPS_CRIMMASMD3");
case 11:
return joaat("MPPLY_GANGOPS_SUPPORT");
default:
}
return joaat("MPPLY_GANGOPS_ALLINORDER");
}
BOOL func_314(int iParam0) // Position - 0xC30E{
Hash hash;
Hash statHash;
BOOL outValue;
hash=Global_1665462[iParam0];
statHash=hash;
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return false;
}


void func_315(char* sParam0, char* sParam1, char* sParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC336{
if(bParam4){
if(bParam3) TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_1" /*Skipping this Freemode Prep will reset your ~a~ challenge progress.*/, 64);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_1" /*Playing this mission will reset your ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3), 64);
}
if(bParam5){
if(!bParam4){
if(bParam3) TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_1" /*Skipping this Freemode Prep will reset your ~a~ challenge progress.*/, 64);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_1" /*Playing this mission will reset your ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_308()), 64);
}else{
if(bParam3) TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_2" /*Skipping this Freemode Prep will reset your ~a~ and ~a~ challenge progress.*/, 64);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_2" /*Playing this mission will reset your ~a~ and ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_308()), 64);
}}
if(bParam6){
if(!bParam4 && !bParam5){
if(bParam3) TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_1" /*Skipping this Freemode Prep will reset your ~a~ challenge progress.*/, 64);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_1" /*Playing this mission will reset your ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_306()), 64);
}elseif(bParam4 && !bParam5 || bParam5 && !bParam4){
if(bParam3) TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_2" /*Skipping this Freemode Prep will reset your ~a~ and ~a~ challenge progress.*/, 64);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_2" /*Playing this mission will reset your ~a~ and ~a~ challenge progress.*/, 64);
TEXT_LABEL_ASSIGN_STRING(sParam2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_306()), 64);
}elseif(bParam3){
TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CHS_3" /*Skipping this Freemode Prep will reset your All In Order, Loyalty and Criminal Mastermind challenge progress.*/, 64);
}else{
TEXT_LABEL_ASSIGN_STRING(sParam0, "HPWARN_CH_3" /*Playing this mission will reset your All In Order, Loyalty and Criminal Mastermind challenge progress.*/, 64);
}}
return;
}
struct<16> func_316(int iParam0) // Position - 0xC450{
var unk;
switch (iParam0){
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_0b" /*Prep:
Paramedic Equipment*/, 64);
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_1b" /*Prep:
Deluxos*/, 64);
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_2b" /*Prep:
Akula*/, 64);
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_3b" /*Prep:
Keycards*/, 64);
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_4b" /*Prep:
ULP Intel*/, 64);
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_5b" /*Prep:
Riot Control Van*/, 64);
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_6b" /*Prep:
Strombergs*/, 64);
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_7b" /*Prep:
Torpedo ECU*/, 64);
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_8b" /*Prep:
Marked Cash*/, 64);
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_9b" /*Prep:
Recon*/, 64);
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_10b" /*Prep:
Chernobog*/, 64);
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_11b" /*Prep:
Flight Path*/, 64);
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_12b" /*Prep:
Test Site Intel*/, 64);
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_13b" /*Prep:
Onboard Computer*/, 64);
break;
}
return unk;
}

int func_317() // Position - 0xC552{
int num;
num=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_PREP_SKIP, -1, 0);
switch (func_140(PLAYER::PLAYER_ID(), false)){
case 0:
switch (num){
case 0:
return Global_262145.f_23349;
case 1:
return Global_262145.f_23350;
case 2:
return Global_262145.f_23351;
default:
}
return Global_262145.f_23351;
case 1:
switch (num){
case 0:
return Global_262145.f_23352;
case 1:
return Global_262145.f_23353;
case 2:
return Global_262145.f_23354;
case 3:
return Global_262145.f_23355;
case 4:
return Global_262145.f_23356;
default:
}
return Global_262145.f_23356;
case 2:
switch (num){
case 0:
return Global_262145.f_23357;
case 1:
return Global_262145.f_23358;
case 2:
return Global_262145.f_23359;
case 3:
return Global_262145.f_23360;
case 4:
return Global_262145.f_23361;
case 5:
return Global_262145.f_23362;
default:
}
return Global_262145.f_23362;
}
return -1;
}


void func_318(var uParam0) // Position - 0xC6A2{
int scaleformMovieMethodReturnValueInt;
if(uParam0->f_794.f_4 && uParam0->f_794.f_5) uParam0->f_794.f_5=0;
if(!uParam0->f_794.f_5){
if(uParam0->f_794.f_4){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_714, "GET_CURRENT_SELECTION");
uParam0->f_794.f_9=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
uParam0->f_794.f_4=0;
uParam0->f_794.f_5=1;
}}elseif(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_794.f_9)){
scaleformMovieMethodReturnValueInt=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_794.f_9);
if(uParam0->f_794 !=scaleformMovieMethodReturnValueInt){
uParam0->f_794=scaleformMovieMethodReturnValueInt;
uParam0->f_794.f_3=func_319(uParam0->f_794);
if(uParam0->f_812.f_77==1){
if(uParam0->f_812.f_56[uParam0->f_794.f_3] !=uParam0->f_812.f_415){
func_297(uParam0);
func_264(uParam0, 1);
}}
func_210(uParam0, 1);
}
uParam0->f_794.f_5=0;
}
return;
}

int func_319(int iParam0) // Position - 0xC78D{
switch (iParam0){
case 16:
case 17:
case 18:
return 0;
case 19:
case 20:
case 21:
return 1;
case 22:
case 23:
case 24:
return 2;
case 25:
case 26:
case 27:
return 3;
default:
}
return 0;
}


void func_320(var uParam0) // Position - 0xC7F5{
if(uParam0->f_702 && Global_1968304==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_714)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
HUD::SET_TEXT_RENDER_ID(uParam0->f_717);
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_714, true);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_714, 0.501f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
if(!uParam0->f_1243){
uParam0->f_1243.f_1=AUDIO::GET_SOUND_ID();
if(uParam0->f_1243.f_1 !=-1){
AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1243.f_1, "Background", func_159(), func_158(), false, 0, false);
uParam0->f_1243=1;
}}
uParam0->f_704;
}}
if(uParam0->f_703) func_321(uParam0);
return;
}


void func_321(var uParam0) // Position - 0xC8B2{
var unk;
int num;
unk={
func_335() 
};
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return;
if(uParam0->f_1239.f_1) return;
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) return;
if(!uParam0->f_705){
func_329(&(uParam0->f_715), &unk, uParam0, 0);
return;
}
num=uParam0->f_794;
if(!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) func_328(uParam0, 0.5f);
else func_328(uParam0, 0.7f);
func_326(uParam0);
func_325("", "HEIST_IB_CONT" /*Continue (~a~)*/, uParam0->f_812.f_425, uParam0, 0);
switch (uParam0->f_725.f_34){
case 0:
switch (uParam0->f_718.f_2){
case 0:
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID())if(uParam0->f_794 < 100)if(uParam0->f_812.f_416==1 && uParam0->f_794==28) func_324(2, 201, "HEIST_IB_ACCPT" /*Accept*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_CONFPL" /*Modify*/, uParam0, true, 363);
elseif(func_214(uParam0, PLAYER::PLAYER_ID())) func_324(2, 201, "HEIST_IB_UNRDY" /*Unready*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_RDY" /*Ready*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(num !=8 && uParam0->f_794 < 100)if(MISC::IS_PS3_VERSION() || func_104() || MISC::IS_PC_VERSION()) func_324(2, 217, "HEIST_IB_PSN" /*View Profile*/, uParam0, true, 363);
elseif(MISC::IS_XBOX360_VERSION() || func_105()) func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_XBL" /*View gamer card*/, uParam0, 0);
else func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_PSNXBL", uParam0, 0);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
func_324(2, 205, "HP_MAP" /*Map*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
func_324(2, 201, "HEIST_IB_SAVE" /*Confirm*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_UNSAVE" /*Cancel*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
break;
case 8:
switch (uParam0->f_718.f_2){
case 0:
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID())if(uParam0->f_794 < 100)if(uParam0->f_812.f_416==1 && uParam0->f_794==28) func_324(2, 201, "HEIST_IB_ACCPT" /*Accept*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_CONFPL" /*Modify*/, uParam0, true, 363);
elseif(func_214(uParam0, PLAYER::PLAYER_ID())) func_324(2, 201, "HEIST_IB_UNRDY" /*Unready*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_RDY" /*Ready*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(num !=8 && uParam0->f_794 < 100)if(MISC::IS_PS3_VERSION() || func_104() || MISC::IS_PC_VERSION()) func_324(2, 217, "HEIST_IB_PSN" /*View Profile*/, uParam0, true, 363);
elseif(MISC::IS_XBOX360_VERSION() || func_105()) func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_XBL" /*View gamer card*/, uParam0, 0);
else func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_PSNXBL", uParam0, 0);
switch (uParam0->f_725.f_32){
case 0:
func_324(2, 204, "HP_MEMBERS" /*Members*/, uParam0, true, 363);
break;
case 1:
func_324(2, 204, "HP_MAP" /*Map*/, uParam0, true, 363);
break;
case 2:
func_324(2, 204, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
break;
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_324(2, 208, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
func_324(2, 201, "HEIST_IB_SAVE" /*Confirm*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_UNSAVE" /*Cancel*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
break;
case 1:
switch (uParam0->f_718.f_2){
case 0:
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID())if(uParam0->f_794 < 100)if(uParam0->f_812.f_416==1 && uParam0->f_794==28) func_324(2, 201, "HEIST_IB_ACCPT" /*Accept*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_CONFPL" /*Modify*/, uParam0, true, 363);
elseif(func_214(uParam0, PLAYER::PLAYER_ID())) func_324(2, 201, "HEIST_IB_UNRDY" /*Unready*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_RDY" /*Ready*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(num !=8 && uParam0->f_794 < 100)if(MISC::IS_PS3_VERSION() || func_104() || MISC::IS_PC_VERSION()) func_324(2, 217, "HEIST_IB_PSN" /*View Profile*/, uParam0, true, 363);
elseif(MISC::IS_XBOX360_VERSION() || func_105()) func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_XBL" /*View gamer card*/, uParam0, 0);
else func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_PSNXBL", uParam0, 0);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_MEMBERS" /*Members*/, uParam0, true, 363);
func_324(2, 205, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
func_324(2, 201, "HEIST_IB_SAVE" /*Confirm*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_UNSAVE" /*Cancel*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
break;
case 2:
switch (uParam0->f_718.f_2){
case 0:
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID())if(uParam0->f_794 < 100)if(uParam0->f_812.f_416==1 && uParam0->f_794==28) func_324(2, 201, "HEIST_IB_ACCPT" /*Accept*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_CONFPL" /*Modify*/, uParam0, true, 363);
elseif(func_214(uParam0, PLAYER::PLAYER_ID())) func_324(2, 201, "HEIST_IB_UNRDY" /*Unready*/, uParam0, true, 363);
else func_324(2, 201, "HEIST_IB_RDY" /*Ready*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(num !=8 && uParam0->f_794 < 100)if(MISC::IS_PS3_VERSION() || func_104() || MISC::IS_PC_VERSION()) func_324(2, 217, "HEIST_IB_PSN" /*View Profile*/, uParam0, true, 363);
elseif(MISC::IS_XBOX360_VERSION() || func_105()) func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_XBL" /*View gamer card*/, uParam0, 0);
else func_323(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, true), "HEIST_IB_PSNXBL", uParam0, 0);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_MAP" /*Map*/, uParam0, true, 363);
func_324(2, 205, "HP_MEMBERS" /*Members*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return;
func_324(2, 201, "HEIST_IB_SAVE" /*Confirm*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_UNSAVE" /*Cancel*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
break;
}
func_329(&(uParam0->f_715), &unk, uParam0, uParam0->f_705);
func_210(uParam0, 0);
return;
}


void func_322(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xD24D{
int offset;
if(uParam3->f_693 >=12) return;
offset=uParam3->f_693;
TEXT_LABEL_ASSIGN_STRING(&(uParam3->f_1[offset /*57*/].f_32), sParam2, 16);
MISC::SET_BIT(&(uParam3->f_689), offset);
uParam3->f_1[offset /*57*/].f_54=iParam0;
uParam3->f_1[offset /*57*/].f_55=iParam1;
MISC::SET_BIT(&(uParam3->f_690), offset);
uParam3->f_693=uParam3->f_693 + 1;
return;
}


void func_323(const char* sParam0, char* sParam1, var uParam2, char* sParam3) // Position - 0xD2B1{
int num;
if(uParam2->f_693 >=12) return;
num=uParam2->f_693;
TEXT_LABEL_ASSIGN_STRING(&uParam2->f_1[num /*57*/], sParam0, 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1[num /*57*/].f_16), sParam3, 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1[num /*57*/].f_32), sParam1, 16);
uParam2->f_693=uParam2->f_693 + 1;
return;
}


void func_324(int iParam0, int iParam1, char* sParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0xD301{
int offset;
if(uParam3->f_693 >=12) return;
offset=uParam3->f_693;
TEXT_LABEL_ASSIGN_STRING(&(uParam3->f_1[offset /*57*/].f_32), sParam2, 16);
MISC::SET_BIT(&(uParam3->f_689), offset);
uParam3->f_1[offset /*57*/].f_54=iParam0;
uParam3->f_1[offset /*57*/].f_55=iParam1;
uParam3->f_1[offset /*57*/].f_56=iParam5;
if(bParam4){
MISC::SET_BIT(&(uParam3->f_691), offset);
iParam5 < 363;
}
uParam3->f_693=uParam3->f_693 + 1;
return;
}


void func_325(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4) // Position - 0xD37E{
int offset;
if(uParam3->f_693 >=12) return;
offset=uParam3->f_693;
TEXT_LABEL_ASSIGN_STRING(&uParam3->f_1[offset /*57*/], sParam0, 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam3->f_1[offset /*57*/].f_16), sParam4, 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam3->f_1[offset /*57*/].f_32), sParam1, 16);
uParam3->f_1[offset /*57*/].f_36=uParam2;
MISC::SET_BIT(&(uParam3->f_686), offset);
uParam3->f_694=offset;
uParam3->f_693=uParam3->f_693 + 1;
return;
}


void func_326(var uParam0) // Position - 0xD3EC{
func_327(uParam0);
uParam0->f_692=1;
return;
}


void func_327(var uParam0) // Position - 0xD400{
int i;
*uParam0=0;
i=0;
for (i=0;
i < 12;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1[i /*57*/], "", 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_16), "", 64);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_32), "", 16);
uParam0->f_1[i /*57*/].f_36=0;
uParam0->f_1[i /*57*/].f_37=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_38), "", 64);
uParam0->f_1[i /*57*/].f_54=2;
uParam0->f_1[i /*57*/].f_55=363;
uParam0->f_1[i /*57*/].f_56=363;
}
uParam0->f_686=0;
uParam0->f_687=0;
uParam0->f_688=0;
uParam0->f_689=0;
uParam0->f_691=0;
uParam0->f_690=0;
uParam0->f_692=0;
uParam0->f_693=0;
uParam0->f_695=0f;
uParam0->f_696=0f;
uParam0->f_697=0f;
uParam0->f_698=0f;
uParam0->f_699=1f;
return;
}


void func_328(var uParam0, float fParam1) // Position - 0xD4E9{
uParam0->f_699=fParam1;
return;
}


void func_329(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xD4F8{
int i;
eControlType control;
eControlAction action;
eControlAction action2;
eControlType control2;
int controlGroup;
if(iParam3==1 || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL)){
*uParam2=0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
func_334(uParam2);
}
if(Global_1577898 < 2) func_333(1);
if(*uParam2==0){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) *uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
unk_0x78C12A99C170F456(*uParam0, "CLEAR_ALL");
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
i=0;
for (i=0;
i < uParam2->f_693;
i=i + 1){
if(IS_BIT_SET(uParam2->f_689, i)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
if(!IS_BIT_SET(uParam2->f_690, i)){
control=uParam2->f_1[i /*57*/].f_54;
action=uParam2->f_1[i /*57*/].f_55;
action2=uParam2->f_1[i /*57*/].f_56;
func_332(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action, true));
if(action2 < 363) func_332(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action2, true));
}else{
control2=uParam2->f_1[i /*57*/].f_54;
controlGroup=uParam2->f_1[i /*57*/].f_55;
func_332(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control2, controlGroup, true));
}
if(IS_BIT_SET(uParam2->f_686, i)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
if(uParam2->f_694==i){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[i /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_36);
if(IS_BIT_SET(uParam2->f_687, i)) HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_37);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(IS_BIT_SET(uParam2->f_688, i)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[i /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_241(&(uParam2->f_1[i /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
if(IS_BIT_SET(uParam2->f_691, i)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[i /*57*/].f_55);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
func_332(&uParam2->f_1[i /*57*/]);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[i /*57*/].f_16))) func_332(&(uParam2->f_1[i /*57*/].f_16));
if(IS_BIT_SET(uParam2->f_686, i)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
if(uParam2->f_694==i){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[i /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_36);
if(IS_BIT_SET(uParam2->f_687, i)) HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_37);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(IS_BIT_SET(uParam2->f_688, i)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[i /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_241(&(uParam2->f_1[i /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=1;
}}
uParam2->f_695=0.05f;
uParam2->f_696=0.045f;
uParam2->f_697=0f;
uParam2->f_698=0f;
if(*uParam2==1) func_331(*uParam0, uParam1);
func_330();
return;
}


void func_330() // Position - 0xD893{
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
return;
}


void func_331(int iParam0, var uParam1) // Position - 0xD8B1{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
return;
}


void func_332(const char* sParam0) // Position - 0xD8D0{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
return;
}


void func_333(int iParam0) // Position - 0xD8DE{
Global_1577898=iParam0;
return;
}


void func_334(var uParam0) // Position - 0xD8EC{
uParam0->f_692=0;
return;
}


struct<9> func_335() // Position - 0xD8FA{
float num;
num=0.5f;
num.f_1=0.5f;
num.f_2=1f;
num.f_3=1f;
num.f_4=255;
num.f_5=255;
num.f_6=255;
num.f_7=200;
num.f_8=0f;
return num;
}


void func_336(var uParam0) // Position - 0xD93E{
int num;
int i;
int num2;
int j;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
int num3;
if(!_IS_FMMC_ACTIVE()) return;
if(func_299()==32)if(Global_1966831.f_812.f_41==_INVALID_PLAYER_INDEX() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1966831.f_812.f_41)) return;
num=PLAYER::NETWORK_PLAYER_ID_TO_INT();
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
flag=false;
flag2=false;
flag3=false;
flag4=false;
for (i=0;
i <=4;
i=i + 1){
if(i >=4){
if(Global_1890444[num /*129*/].f_38.f_16[4] !=uParam0->f_812.f_50[4]){
Global_1890444[num /*129*/].f_38.f_16[4]=uParam0->f_812.f_50[4];
flag4=true;
}}else{
if(Global_1890444[num /*129*/].f_38.f_16[i] !=uParam0->f_812.f_50[i]){
Global_1890444[num /*129*/].f_38.f_16[i]=uParam0->f_812.f_50[i];
if(uParam0->f_812.f_45[i]==PLAYER::NETWORK_PLAYER_ID_TO_INT()){
Global_2684799.f_6589=Global_1890444[num /*129*/].f_38.f_16[i];
Global_786481.f_21=Global_2684799.f_6589;
Global_786481.f_2=Global_2684799.f_6589;
}
flag4=true;
}
if(Global_1890444[num /*129*/].f_38.f_1[i] !=uParam0->f_812.f_45[i]){
Global_1890444[num /*129*/].f_38.f_1[i]=uParam0->f_812.f_45[i];
flag=true;
}
if(Global_1890444[num /*129*/].f_38.f_6[i] !=uParam0->f_812.f_56[i]){
Global_1890444[num /*129*/].f_38.f_6[i]=uParam0->f_812.f_56[i];
if(num==i)if(uParam0->f_812.f_56[i] !=-1 && !func_59(93)) Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28=uParam0->f_812.f_56[i];
flag2=true;
}
for (j=0;
j <=31;
j=j + 1){
if(uParam0->f_812.f_45[i] !=j || uParam0->f_812.f_45[i]==uParam0->f_812.f_41){
}else{
if(uParam0->f_812.f_61[i] !=Global_1890444[j /*129*/].f_38.f_11[i]){
uParam0->f_812.f_61[i]=Global_1890444[j /*129*/].f_38.f_11[i];
Global_1890444[num /*129*/].f_38.f_11[i]=uParam0->f_812.f_61[i];
flag3=true;
}
if(uParam0->f_812.f_418[i] !=Global_1890444[j /*129*/].f_38.f_30){
uParam0->f_812.f_418[i]=Global_1890444[j /*129*/].f_38.f_30;
Global_1890444[num /*129*/].f_38.f_31[i]=uParam0->f_812.f_418[i];
Global_1890444[num /*129*/].f_38=Global_1890444[num /*129*/].f_38 + 1;
}}}}}
if(flag){
Global_1890444[num /*129*/].f_38=Global_1890444[num /*129*/].f_38 + 1;
func_235(uParam0, 1);
}
if(flag2){
Global_1890444[num /*129*/].f_38=Global_1890444[num /*129*/].f_38 + 1;
func_238(uParam0, 1);
}
if(flag4){
Global_1890444[num /*129*/].f_38=Global_1890444[num /*129*/].f_38 + 1;
func_237(uParam0, 1);
}
if(flag3){
Global_1890444[num /*129*/].f_38=Global_1890444[num /*129*/].f_38 + 1;
func_236(uParam0, 1);
}}else{
num2=uParam0->f_812.f_41;
if(num2 <=-1) return;
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i] !=PLAYER::NETWORK_PLAYER_ID_TO_INT()){
}else{
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_11[i]=uParam0->f_812.f_61[i];
num3=i;
}}
if(Global_1890444[num2 /*129*/].f_38 > uParam0->f_812.f_42){
for (i=0;
i <=4;
i=i + 1){
if(i >=4){
if(uParam0->f_812.f_50[4] !=Global_1890444[num2 /*129*/].f_38.f_16[4]) uParam0->f_812.f_50[4]=Global_1890444[num2 /*129*/].f_38.f_16[4];
}else{
if(uParam0->f_812.f_50[i] !=Global_1890444[num2 /*129*/].f_38.f_16[i]){
uParam0->f_812.f_50[i]=Global_1890444[num2 /*129*/].f_38.f_16[i];
if(uParam0->f_812.f_45[i]==num2) Global_786481.f_21=uParam0->f_812.f_50[i];
if(num3==i){
Global_2684799.f_6589=Global_1890444[num2 /*129*/].f_38.f_16[i];
Global_786481.f_2=Global_2684799.f_6589;
}}
if(uParam0->f_812.f_45[i] !=Global_1890444[num2 /*129*/].f_38.f_1[i]) uParam0->f_812.f_45[i]=Global_1890444[num2 /*129*/].f_38.f_1[i];
if(uParam0->f_812.f_61[i] !=Global_1890444[num2 /*129*/].f_38.f_11[i])if(num3 !=i) uParam0->f_812.f_61[i]=Global_1890444[num2 /*129*/].f_38.f_11[i];
if(uParam0->f_812.f_418[i] !=Global_1890444[num2 /*129*/].f_38.f_31[i])if(num3 !=i) uParam0->f_812.f_418[i]=Global_1890444[num2 /*129*/].f_38.f_31[i];
if(uParam0->f_812.f_56[i] !=Global_1890444[num2 /*129*/].f_38.f_6[i]){
uParam0->f_812.f_56[i]=Global_1890444[num2 /*129*/].f_38.f_6[i];
if(num3==i)if(uParam0->f_812.f_56[i] !=-1 && !func_59(93)) Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28=uParam0->f_812.f_56[i];
}}}
uParam0->f_812.f_42=Global_1890444[num2 /*129*/].f_38;
func_235(uParam0, 1);
}}
return;
}


void func_337(var uParam0) // Position - 0xDF3C{
int i;
if(uParam0->f_812.f_417 && Global_1966831.f_812.f_41==PLAYER::PLAYER_ID()){
for (i=0;
i <=uParam0->f_812.f_44 - 1;
i=i + 1){
if(uParam0->f_812.f_45[i] !=-1)if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_812.f_45[i]))) Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_11[0]=2;
}}
return;
}


void func_338(var uParam0) // Position - 0xDFB4{
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
if(!func_344(PLAYER::PLAYER_ID())){
switch (uParam0->f_1239){
case 0:
_DISPLAY_HELP_TEXT("HP_FIN_LTUT1" /*This is the Heist Finale screen. Here you can set what percentage take each member gets, what role they will perform and the overall plan for the job.*/, 10000);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=1;
uParam0->f_1239.f_1=1;
func_343(uParam0, false);
uParam0->f_1239=uParam0->f_1239 + 1;
break;
case 1:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_LTUT1" /*This is the Heist Finale screen. Here you can set what percentage take each member gets, what role they will perform and the overall plan for the job.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 4);
_DISPLAY_HELP_TEXT("HP_FIN_TUT2" /*This bar shows the total reward for the Heist and how much each member receives. The leader has a larger cut by default as they covered the initial setup cost.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 2:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_TUT2" /*This bar shows the total reward for the Heist and how much each member receives. The leader has a larger cut by default as they covered the initial setup cost.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 5);
_DISPLAY_HELP_TEXT("HP_FIN_LTUT3" /*Here you can assign the role that each Heist member will perform and their percentage cut of the total take.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 3:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_LTUT3" /*Here you can assign the role that each Heist member will perform and their percentage cut of the total take.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 6);
_DISPLAY_HELP_TEXT("HP_FIN_TUT4" /*You can view the plan for the selected Heist member's tasks here. These will be shown when a player has been assigned a role.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 4:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_TUT4" /*You can view the plan for the selected Heist member's tasks here. These will be shown when a player has been assigned a role.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 0);
func_341();
func_343(uParam0, true);
uParam0->f_1239.f_1=0;
uParam0->f_1239=uParam0->f_1239 + 1;
uParam0->f_703=1;
func_210(uParam0, 1);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}
break;
}}elseif(uParam0->f_1239.f_1){
uParam0->f_1239.f_1=0;
func_343(uParam0, true);
uParam0->f_703=1;
func_210(uParam0, 1);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}}elseif(!func_340(PLAYER::PLAYER_ID())){
switch (uParam0->f_1239){
case 0:
_DISPLAY_HELP_TEXT("HP_FIN_MTUT1" /*This is the Heist Finale screen. Here you can view the set-up of the Heist, and how each member will be involved.*/, 10000);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=1;
uParam0->f_1239.f_1=1;
func_343(uParam0, false);
uParam0->f_1239=uParam0->f_1239 + 1;
break;
case 1:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_MTUT1" /*This is the Heist Finale screen. Here you can view the set-up of the Heist, and how each member will be involved.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 4);
_DISPLAY_HELP_TEXT("HP_FIN_TUT2" /*This bar shows the total reward for the Heist and how much each member receives. The leader has a larger cut by default as they covered the initial setup cost.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 2:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_TUT2" /*This bar shows the total reward for the Heist and how much each member receives. The leader has a larger cut by default as they covered the initial setup cost.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 5);
_DISPLAY_HELP_TEXT("HP_FIN_MTUT3" /*This section shows your Heist role configuration and your percentage cut of the total reward. This is set by the Heist leader.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 3:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_MTUT3" /*This section shows your Heist role configuration and your percentage cut of the total reward. This is set by the Heist leader.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 6);
_DISPLAY_HELP_TEXT("HP_FIN_TUT4" /*You can view the plan for the selected Heist member's tasks here. These will be shown when a player has been assigned a role.*/, 10000);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
uParam0->f_1239=uParam0->f_1239 + 1;
}
break;
case 4:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_FIN_TUT4" /*You can view the plan for the selected Heist member's tasks here. These will be shown when a player has been assigned a role.*/) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_1239.f_2), 10000, false)){
func_342(uParam0, 0);
func_339();
func_343(uParam0, true);
uParam0->f_1239.f_1=0;
uParam0->f_1239=uParam0->f_1239 + 1;
uParam0->f_703=1;
func_210(uParam0, 1);
_STOPWATCH_DESTROY(&(uParam0->f_1239.f_2));
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}
break;
}}elseif(uParam0->f_1239.f_1){
uParam0->f_1239.f_1=0;
func_343(uParam0, true);
uParam0->f_703=1;
func_210(uParam0, 1);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}
if(uParam0->f_1239 < 0 || uParam0->f_1239 > 4){
if(uParam0->f_1239.f_1){
uParam0->f_1239.f_1=0;
func_343(uParam0, true);
uParam0->f_703=1;
func_210(uParam0, 1);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}}
return;
}


void func_339() // Position - 0xE411{
int address;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 9)){
MISC::SET_BIT(&address, 9);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
return;
}
BOOL func_340(Player plParam0) // Position - 0xE441{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 9);
return false;
}


void func_341() // Position - 0xE465{
int address;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 8)){
MISC::SET_BIT(&address, 8);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
return;
}


void func_342(var uParam0, int iParam1) // Position - 0xE495{
uParam0->f_725.f_34=iParam1;
uParam0->f_725.f_35=iParam1;
uParam0->f_794.f_2=uParam0->f_794;
func_210(uParam0, 1);
return;
}


void func_343(var uParam0, BOOL bParam1) // Position - 0xE4C2{
if(bParam1) unk_0x78C12A99C170F456(uParam0->f_714, "ENABLE_NAVIGATION");
else unk_0x78C12A99C170F456(uParam0->f_714, "DISABLE_NAVIGATION");
return;
}
BOOL func_344(Player plParam0) // Position - 0xE4EC{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 8);
return false;
}


void func_345(var uParam0) // Position - 0xE510{
int num;
if(uParam0->f_812.f_417){
num=uParam0->f_812.f_41;
if(num !=-1){
uParam0->f_812.f_425=Global_262145.f_23298 - _STOPWATCH_GET_TIME_PASSED(&(Global_1890444[num /*129*/].f_38.f_36), false, false);
if(uParam0->f_812.f_425 > 0){
if(uParam0->f_812.f_425 < uParam0->f_812.f_426 - 1000){
func_210(uParam0, 1);
uParam0->f_812.f_426=uParam0->f_812.f_425;
}}else{
uParam0->f_812.f_425=0;
func_346(uParam0);
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
uParam0->f_812.f_61[0]=1;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_11[0]=1;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_38=1;
}}}}
return;
}


void func_346(var uParam0) // Position - 0xE5DA{
int i;
int num;
if(!IS_BIT_SET(uParam0->f_1247, 18)){
num=-1;
switch (uParam0->f_812.f_77){
case 0:
case 2:
for (i=0;
i <=3;
i=i + 1){
uParam0->f_812.f_56[i]=0;
}
break;
case 1:
switch (uParam0->f_812.f_44){
case 2:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=1;
uParam0->f_812.f_56[2]=-1;
uParam0->f_812.f_56[3]=-1;
break;
case 3:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=0;
uParam0->f_812.f_56[2]=1;
uParam0->f_812.f_56[3]=-1;
break;
case 4:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=0;
uParam0->f_812.f_56[2]=1;
uParam0->f_812.f_56[3]=1;
break;
}
break;
}
switch (uParam0->f_812.f_44){
case 2:
uParam0->f_812.f_50[0]=Global_262145.f_23292;
uParam0->f_812.f_50[1]=Global_262145.f_23293;
uParam0->f_812.f_50[2]=0;
uParam0->f_812.f_50[3]=0;
uParam0->f_812.f_50[4]=0;
Global_786481.f_21=Global_262145.f_23292;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
Global_2684799.f_6589=Global_262145.f_23292;
Global_786481.f_2=Global_262145.f_23292;
}else{
Global_2684799.f_6589=Global_262145.f_23293;
Global_786481.f_2=Global_262145.f_23293;
}
break;
case 3:
uParam0->f_812.f_50[0]=Global_262145.f_23294;
uParam0->f_812.f_50[1]=Global_262145.f_23295;
uParam0->f_812.f_50[2]=Global_262145.f_23295;
uParam0->f_812.f_50[3]=0;
uParam0->f_812.f_50[4]=0;
Global_786481.f_21=Global_262145.f_23294;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
Global_2684799.f_6589=Global_262145.f_23294;
Global_786481.f_2=Global_262145.f_23294;
}else{
Global_2684799.f_6589=Global_262145.f_23295;
Global_786481.f_2=Global_262145.f_23295;
}
break;
case 4:
uParam0->f_812.f_50[0]=Global_262145.f_23296;
uParam0->f_812.f_50[1]=Global_262145.f_23297;
uParam0->f_812.f_50[2]=Global_262145.f_23297;
uParam0->f_812.f_50[3]=Global_262145.f_23297;
uParam0->f_812.f_50[4]=0;
Global_786481.f_21=Global_262145.f_23296;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
Global_2684799.f_6589=Global_262145.f_23296;
Global_786481.f_2=Global_262145.f_23296;
}else{
Global_2684799.f_6589=Global_262145.f_23297;
Global_786481.f_2=Global_262145.f_23297;
}
break;
}
for (i=0;
i <=3;
i=i + 1){
if(uParam0->f_812.f_45[i]==PLAYER::NETWORK_PLAYER_ID_TO_INT()) num=i;
}
if(num !=-1)if(uParam0->f_812.f_56[num] !=-1 && !func_59(93)) Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28=uParam0->f_812.f_56[num];
MISC::SET_BIT(&(uParam0->f_1247), 18);
}
return;
}
int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xE94B{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
else return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}


void func_348() // Position - 0xE992{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
return;
}


void func_349(var uParam0) // Position - 0xE9A9{
func_350(uParam0);
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
if(uParam0->f_812.f_41==PLAYER::PLAYER_ID()){
if(!func_344(PLAYER::PLAYER_ID())){
uParam0->f_1239.f_1=1;
uParam0->f_1239=0;
}}elseif(!func_340(PLAYER::PLAYER_ID())){
uParam0->f_1239.f_1=1;
uParam0->f_1239=0;
}
func_267(uParam0, 1);
uParam0->f_703=1;
return;
}


void func_350(var uParam0) // Position - 0xEA19{
var unk;
var unk4;
var unk7;
var unk10;
int num;
uParam0->f_725.f_37=0f;
uParam0->f_725.f_37.f_1=0f;
uParam0->f_725.f_37.f_2=-180f;
unk={
func_354(&(uParam0->f_725), 0) 
};
unk4={
func_231(&(uParam0->f_725)) 
};
unk7={
func_353(&(uParam0->f_725), 0) 
};
unk10={
func_230(&(uParam0->f_725)) 
};
func_352(&(uParam0->f_725.f_1), unk4, unk10, 60f, 20, 10, 3, 1101004800, 1, 0, -1f, false);
func_351(&(uParam0->f_725));
CAM::SET_WIDESCREEN_BORDERS(true, 0);
num=func_232(uParam0->f_725.f_34);
unk={
func_354(&(uParam0->f_725), num) 
};
unk7={
func_353(&(uParam0->f_725), num) 
};
uParam0->f_725.f_34=0;
uParam0->f_725.f_40={
func_231(&(uParam0->f_725)) 
};
uParam0->f_725.f_43={
func_230(&(uParam0->f_725)) 
};
return;
}


void func_351(var uParam0) // Position - 0xEB02{
uParam0->f_1.f_7=50f;
uParam0->f_1.f_20=15;
uParam0->f_1.f_21=10;
uParam0->f_1.f_22=1;
uParam0->f_1.f_19=20f;
return;
}


void func_352(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, BOOL bParam15) // Position - 0xEB37{
uParam0->f_1={
uParam1 
};
uParam0->f_4={
uParam4 
};
uParam0->f_7=fParam7;
uParam0->f_20=iParam8;
uParam0->f_21=iParam9;
uParam0->f_22=iParam10;
uParam0->f_8={
0f, 0f, 0f 
};
uParam0->f_11={
0f, 0f, 0f 
};
uParam0->f_14={
0f, 0f, 0f 
};
uParam0->f_17=fParam7;
uParam0->f_18=fParam7;
uParam0->f_23=iParam12;
uParam0->f_19=iParam11;
*uParam0=unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_ACTIVE(*uParam0, true);
CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
if(!bParam15) CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
if(fParam14 > 0f) CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
if(uParam0->f_23) HUD::LOCK_MINIMAP_ANGLE(iParam13);
uParam0->f_24=0;
uParam0->f_25=0;
uParam0->f_29=0f;
uParam0->f_30=0f;
uParam0->f_26=0;
uParam0->f_28=0;
uParam0->f_27=0;
return;
}


Vector3 func__353(var uParam0, int iParam1) // Position - 0xEC2D{
switch (iParam1){
case 0:
return uParam0->f_58;
case 1:
return uParam0->f_61;
case 2:
return 0f, 0f, 0f;
case 3:
return 0f, 0f, 0f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__354(var uParam0, int iParam1) // Position - 0xEC75{
switch (iParam1){
case 0:
return uParam0->f_52;
case 1:
return uParam0->f_55;
case 2:
return -1.7f, 0f, 0f;
case 3:
return 0f, 0f, 0f;
default:
}
return 0f, 0f, 0f;
}


void func_355(var uParam0) // Position - 0xECC1{
return;
}


void func_356(var uParam0) // Position - 0xECC9{
func_336(uParam0);
func_320(uParam0);
func_233(uParam0);
if(uParam0->f_718.f_5){
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 0, false);
func_197(&(uParam0->f_718));
}
return;
}


void func_357(var uParam0) // Position - 0xED01{
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_358(var uParam0) // Position - 0xED30{
func_267(uParam0, 1);
func_336(uParam0);
func_233(uParam0);
func_359(uParam0->f_714, uParam0->f_700, &(uParam0->f_812.f_78), func_360(uParam0->f_812.f_41), uParam0->f_812.f_41==PLAYER::PLAYER_ID(), &(uParam0->f_812.f_110));
if(uParam0->f_700) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Draw_Board", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Bootup", func_159(), func_158(), false, 0, false);
return;
}


void func_359(Player plParam0, BOOL bParam1, const char* sParam2, const char* sParam3, BOOL bParam4, var uParam5) // Position - 0xEDB1{
int i;
const char* filenameForAudioConversation;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SHOW_FINALE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
func_247(sParam2);
func_247(sParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
for (i=0;
i <=18;
i=i + 1){
if(HUD::DOES_TEXT_LABEL_EXIST(&uParam5->[i /*16*/])){
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&uParam5->[i /*16*/]);
if(!MISC::IS_STRING_NULL_OR_EMPTY(filenameForAudioConversation)) func_247(filenameForAudioConversation);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
const 

char* func_360(Player plParam0) // Position - 0xEE1C{
const char* str;
Player player;
if(plParam0==PLAYER::PLAYER_ID()){
str=func_368(&(Global_1894573[plParam0 /*608*/].f_10.f_105));
return str;
}
if(Global_1894573[plParam0 /*608*/].f_10.f_121 !=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121){
str=func_363(plParam0, false);
return str;
}
if(func_188(plParam0, 28) || func_188(PLAYER::PLAYER_ID(), 28) || func_362(plParam0) && !func_361(plParam0)) return func_363(plParam0, false);
player=func_113(plParam0);
if(player !=_INVALID_PLAYER_INDEX())if(player !=PLAYER::PLAYER_ID())if(!func_105() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) return func_363(player, false);
if(player !=_INVALID_PLAYER_INDEX()){
str=func_368(&(Global_1894573[player /*608*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(str)) return func_363(player, false);
else return str;
}
return "";
}
BOOL func_361(Player plParam0) // Position - 0xEF23{
var gamerHandle;
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(func_105())if(plParam0==PLAYER::PLAYER_ID()) return true;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle)) return true;
return false;
}
BOOL func_362(Player plParam0) // Position - 0xEF63{
var gamerHandle;
if(plParam0 !=_INVALID_PLAYER_INDEX()){
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(MISC::IS_ORBIS_VERSION() && !unk_0xEE17703CF2C2875A() || MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) return false;
elseif(func_105() || unk_0xEE17703CF2C2875A())if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle)) return false;
}
return true;
}
const 

char* func_363(Player plParam0, BOOL bParam1) // Position - 0xEFD0{
if(!bParam1)if(func_365(plParam0, true)) return func_364();
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}
const 

char* func_364() // Position - 0xEFF7{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}
BOOL func_365(Player plParam0, BOOL bParam1) // Position - 0xF007{
return func_366(plParam0, bParam1, 1);
}
BOOL func_366(Player plParam0, BOOL bParam1, int iParam2) // Position - 0xF018{
Player player;
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!bParam1)if(func_367(plParam0, iParam2)) return 0;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==iParam2) return 1;
return 0;
}
BOOL func_367(Player plParam0, int iParam1) // Position - 0xF074{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1) return true;
return false;
}
const 

char* func_368(var uParam0) // Position - 0xF0C3{
return uParam0;
}


void func_369(var uParam0) // Position - 0xF0CD{
BOOL flag;
flag=true;
if(!func_375(uParam0)) flag=false;
if(!func_374()) flag=false;
if(!func_370(uParam0)) flag=false;
if(flag) func_197(&(uParam0->f_718));
return;
}
BOOL func_370(var uParam0) // Position - 0xF10B{
int i;
uParam0->f_812.f_44=func_371(uParam0, &(uParam0->f_812.f_45));
if(uParam0->f_812.f_41 !=PLAYER::PLAYER_ID()) return true;
switch (uParam0->f_812.f_77){
case 0:
for (i=0;
i <=3;
i=i + 1){
uParam0->f_812.f_56[i]=0;
}
break;
case 1:
switch (uParam0->f_812.f_44){
case 1:
for (i=0;
i <=3;
i=i + 1){
uParam0->f_812.f_56[i]=-1;
}
break;
case 2:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=1;
uParam0->f_812.f_56[2]=-1;
uParam0->f_812.f_56[3]=-1;
break;
case 3:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=0;
uParam0->f_812.f_56[2]=1;
uParam0->f_812.f_56[3]=-1;
break;
case 4:
uParam0->f_812.f_56[0]=0;
uParam0->f_812.f_56[1]=0;
uParam0->f_812.f_56[2]=1;
uParam0->f_812.f_56[3]=1;
break;
}
break;
case 2:
for (i=0;
i <=3;
i=i + 1){
uParam0->f_812.f_56[i]=0;
}
break;
}
switch (uParam0->f_812.f_44){
case 1:
uParam0->f_812.f_50[0]=100;
uParam0->f_812.f_50[1]=0;
uParam0->f_812.f_50[2]=0;
uParam0->f_812.f_50[3]=0;
uParam0->f_812.f_50[4]=0;
break;
case 2:
uParam0->f_812.f_50[0]=Global_262145.f_23292;
uParam0->f_812.f_50[1]=Global_262145.f_23293;
uParam0->f_812.f_50[2]=0;
uParam0->f_812.f_50[3]=0;
uParam0->f_812.f_50[4]=0;
break;
case 3:
uParam0->f_812.f_50[0]=Global_262145.f_23294;
uParam0->f_812.f_50[1]=Global_262145.f_23295;
uParam0->f_812.f_50[2]=Global_262145.f_23295;
uParam0->f_812.f_50[3]=0;
uParam0->f_812.f_50[4]=0;
break;
case 4:
uParam0->f_812.f_50[0]=Global_262145.f_23296;
uParam0->f_812.f_50[1]=Global_262145.f_23297;
uParam0->f_812.f_50[2]=Global_262145.f_23297;
uParam0->f_812.f_50[3]=Global_262145.f_23297;
uParam0->f_812.f_50[4]=0;
break;
}
return true;
}

int func_371(var uParam0, var uParam1) // Position - 0xF3B2{
Player player;
int i;
int num;
player=_INVALID_PLAYER_INDEX();
for (i=0;
i <=3;
i=i + 1){
uParam1->[i]=-1;
}
num=0;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
for (i=0;
i <=31;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, true, true)){
if(player !=_INVALID_PLAYER_INDEX()){
if(!func_372(player)){
if(num > 3){
}
else{
uParam1->[num]=player;
num=num + 1;
}}}}}}else{
uParam1->[num]=uParam0->f_812.f_41;
num=num + 1;
}
return num;
}
BOOL func_372(Player plParam0) // Position - 0xF44B{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0) || func_373(plParam0)) return true;
return false;
}
BOOL func_373(Player plParam0) // Position - 0xF46E{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_96.f_32, 5);
}
BOOL func_374() // Position - 0xF485{
return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_PLANNING_BOARD", false, -1);
}
BOOL func_375(var uParam0) // Position - 0xF497{
var unk;
int i;
unk=2;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_714)) unk[0]=1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_715)) unk[1]=1;
for (i=0;
i < 2;
i=i + 1){
if(!unk[i]) return false;
}
return true;
}


void func_376(var uParam0) // Position - 0xF4E9{
func_378(uParam0);
func_377(uParam0);
return;
}


void func_377(var uParam0) // Position - 0xF4FD{
int i;
i=0;
for (i=0;
i < 4;
i=i + 1){
uParam0->f_812[i /*10*/]=_INVALID_PLAYER_INDEX();
}
return;
}


void func_378(var uParam0) // Position - 0xF527{
uParam0->f_714=GRAPHICS::REQUEST_SCALEFORM_MOVIE("IAA_HEIST_BOARD");
uParam0->f_715=GRAPHICS::REQUEST_SCALEFORM_MOVIE("INSTRUCTIONAL_BUTTONS");
return;
}


void func_379(var uParam0) // Position - 0xF549{
MISC::CLEAR_BIT(&(uParam0->f_4), uParam0->f_1);
return;
}


void func_380(var uParam0) // Position - 0xF55D{
func_210(uParam0, 1);
return;
}
BOOL func_381(var uParam0) // Position - 0xF56C{
return !IS_BIT_SET(uParam0->f_4, uParam0->f_1);
}


void func_382(var uParam0) // Position - 0xF57E{
MISC::SET_BIT(&(uParam0->f_3), *uParam0);
return;
}


void func_383(var uParam0) // Position - 0xF591{
return;
}
BOOL func_384(var uParam0) // Position - 0xF599{
return IS_BIT_SET(uParam0->f_3, *uParam0);
}


void func_385(var uParam0) // Position - 0xF5A9{
func_197(&(uParam0->f_718));
return;
}


void func_386() // Position - 0xF5BA{
int num;
if(IS_BIT_SET(Global_1964005.f_2825, 1)){
if(!IS_BIT_SET(Global_1964005.f_2825, 2)){
num=func_417(Global_1964005.f_794, Global_1964005.f_812.f_1999);
if(num !=-1){
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(500);
}elseif(Global_1964005.f_718==4){
func_416(&Global_1964005, 0);
}elseif(Global_1964005.f_718==3){
if(func_415(num)){
func_11(&uLocal_182, func_138(num), 2);
Global_1950108.f_507=1;
MISC::SET_BIT(&(Global_1964005.f_2825), 6);
}else{
func_413(func_414(num));
func_401(233, 0);
func_387();
}
MISC::SET_BIT(&(Global_1964005.f_2825), 2);
}}else{
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 1);
}}elseif(IS_BIT_SET(Global_1964005.f_2825, 6)){
if(!IS_BIT_SET(Global_1964005.f_2825, 7)){
MISC::SET_BIT(&(Global_1964005.f_2825), 7);
func_3(false, 0);
func_3(false, 0);
}
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 6);
}}
return;
}


void func_387() // Position - 0xF6CA{
int num;
var unk;
var address;
num=func_399(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7);
unk=32;
func_390(&unk);
MISC::SET_BIT(&address, 1);
func_388(num, &unk, address);
return;
}


void func_388(int iParam0, var uParam1, var uParam2) // Position - 0xF705{
struct<37> eventData;
int i;
int num;
eventData.f_3=32;
eventData=879177392;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_36=uParam2;
eventData.f_2=iParam0;
num=*uParam1;
if(num > 32) num=32;
for (i=0;
i < num;
i=i + 1){
eventData.f_3[i]=uParam1->[i];
}
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 37, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
return;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0xF772{
int address;
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, false, false))if(player !=PLAYER::PLAYER_ID() || includeLocalPlayer)if(includeSpectators) MISC::SET_BIT(&address, i);
elseif(!_NETWORK_IS_PLAYER_IN_SCTV(player, 0)) MISC::SET_BIT(&address, i);
}
return address;
}


void func_390(var uParam0) // Position - 0xF7D7{
Hash hash;
int num;
Player i;
int num2;
Player player;
var unk;
func_398(uParam0);
for (i=0;
i < 32;
i=i + 1){
player=i;
if(_NETWORK_IS_PLAYER_VALID(player, false, true)){
if(player==PLAYER::PLAYER_ID() || func_397(PLAYER::PLAYER_ID(), player)){
if(player==PLAYER::PLAYER_ID() || func_396(PLAYER::PLAYER_ID(), player, true, true)){
if(!func_395(player) || !func_394(player)){
if(func_391(player, _GET_BOSS_OF_LOCAL_PLAYER())){
hash=NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(player);
num=num2;
}
uParam0->[num2]=NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(player);
num2=num2 + 1;
}}}}}
if(uParam0->[0] !=hash){
unk=uParam0->[0];
uParam0->[0]=hash;
uParam0->[num]=unk;
}
return;
}
BOOL func_391(Player plParam0, Player plParam1) // Position - 0xF89F{
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))if(plParam0==plParam1) return func_392(plParam1);
return false;
}
BOOL func_392(Player plParam0) // Position - 0xF8C1{
return func_393(plParam0, 1);
}
BOOL func_393(Player plParam0, int iParam1) // Position - 0xF8D0{
if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1;
return false;
}
BOOL func_394(Player plParam0) // Position - 0xF8F6{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);
return false;
}
BOOL func_395(Player plParam0) // Position - 0xF927{
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 14)) return true;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 11)) return true;
return false;
}
BOOL func_396(Player plParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF960{
if(func_79(plParam0, true, false) && func_79(plParam1, true, false)){
if(Global_1853910[plParam0 /*862*/].f_267.f_34==Global_1853910[plParam1 /*862*/].f_267.f_34 && Global_1853910[plParam0 /*862*/].f_267.f_33==Global_1853910[plParam1 /*862*/].f_267.f_33){
if(!bParam2){
return true;
}else{
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 3) && IS_BIT_SET(Global_1853910[plParam1 /*862*/].f_267.f_31, 3)) return true;
if(!IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 3) && !IS_BIT_SET(Global_1853910[plParam1 /*862*/].f_267.f_31, 3)) return true;
}}}
if(bParam3)if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_8 > -1 && Global_2657589[plParam0 /*466*/].f_321.f_7==Global_2657589[plParam1 /*466*/].f_321.f_7 && Global_2657589[plParam0 /*466*/].f_321.f_8==Global_2657589[plParam1 /*466*/].f_321.f_8 && Global_2648605.f_903.f_168[plParam0]==Global_2648605.f_903.f_168[plParam1]) return true;
return false;
}
BOOL func_397(Player plParam0, Player plParam1) // Position - 0xFABF{
Player player;
if(plParam0 !=_INVALID_PLAYER_INDEX() && plParam1 !=_INVALID_PLAYER_INDEX()){
player=func_113(plParam0);
if(player !=_INVALID_PLAYER_INDEX()) return player==func_113(plParam1);
}
return false;
}


void func_398(var uParam0) // Position - 0xFAFB{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
uParam0->[i]=-1;
}
return;
}

int func_399(int iParam0) // Position - 0xFB1E{
int num;
int num2;
if(func_400(iParam0, 9)){
num=iParam0 - 89;
return num + 13;
}elseif(func_400(iParam0, 17)){
num2=iParam0 - 128;
return num2 + 22;
}
return 0;
}
BOOL func_400(int iParam0, int iParam1) // Position - 0xFB5C{
return func_75(iParam0)==iParam1;
}


void func_401(int iParam0, int iParam1) // Position - 0xFB6D{
iParam0 !=233;
func_412(iParam1);
func_402(iParam0, -1);
return;
}


void func_402(int iParam0, int iParam1) // Position - 0xFB89{
if(func_174() || !func_410(true) || func_409(iParam0)==3){
if(!func_408(PLAYER::PLAYER_ID(), 0) && !func_408(PLAYER::PLAYER_ID(), 3)){
func_407(iParam0);
func_403(iParam0, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), func_406(), func_405(), func_404(), iParam1);
}}
return;
}


void func_403(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5) // Position - 0xFBF1{
struct<7> eventData;
eventData=1311159119;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2=iParam0;
eventData.f_3=iParam2;
eventData.f_4=uParam3;
eventData.f_5=uParam4;
eventData.f_6=iParam5;
if(!iParam1==0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 7, iParam1);
return;
}


var func__404() // Position - 0xFC3B{
return Global_2793044.f_5225.f_346;
}


var func__405() // Position - 0xFC4D{
return Global_2793044.f_5225.f_345;
}

int func_406() // Position - 0xFC5F{
return Global_2793044.f_5225.f_344;
}


void func_407(int iParam0) // Position - 0xFC71{
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_32=iParam0;
return;
}
BOOL func_408(Player plParam0, int iParam1) // Position - 0xFC8A{
if(func_180(plParam0, false)) return func_409(Global_1894573[plParam0 /*608*/].f_10.f_33)==iParam1;
return false;
}

int func_409(int iParam0) // Position - 0xFCB4{
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
return 0;
case 276:
case 267:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}
BOOL func_410(BOOL bParam0) // Position - 0xFF1A{
return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0xFF2C{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}


void func_412(int iParam0) // Position - 0xFF57{
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_257=iParam0;
return;
}


void func_413(int iParam0) // Position - 0xFF71{
if(Global_2793044.f_5225.f_344 !=iParam0) Global_2793044.f_5225.f_344=iParam0;
return;
}

int func_414(int iParam0) // Position - 0xFF94{
switch (iParam0){
case 16:
return 5;
case 17:
return 3;
case 18:
return 6;
case 19:
return 7;
case 20:
return 1;
case 21:
return 4;
case 22:
return 2;
case 23:
return 8;
case 24:
return 0;
case 25:
return 9;
case 26:
return 10;
case 27:
return 11;
case 28:
return 12;
case 29:
return 13;
default:
}
return -1;
}
BOOL func_415(int iParam0) // Position - 0x10036{
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
return true;
default:
}
return false;
}


void func_416(var uParam0, int iParam1) // Position - 0x100AA{
uParam0->f_718.f_5=iParam1;
uParam0->f_725.f_34=0;
return;
}

int func_417(int iParam0, int iParam1) // Position - 0x100C3{
switch (iParam1){
case 0:
switch (iParam0){
case 1:
return 16;
case 2:
return -1;
case 3:
return 0;
case 4:
return 17;
case 5:
return -1;
case 6:
return 1;
case 7:
return 18;
case 8:
return -1;
case 9:
return 2;
case 10:
return -1;
case 11:
return -1;
case 12:
return -1;
case 13:
return -1;
case 14:
return -1;
case 15:
return -1;
default:
break;
}
break;
case 1:
switch (iParam0){
case 1:
return 19;
case 2:
return -1;
case 3:
return 4;
case 4:
return 20;
case 5:
return -1;
case 6:
return 5;
case 7:
return 21;
case 8:
return -1;
case 9:
return 6;
case 10:
return 22;
case 11:
return 23;
case 12:
return 7;
case 13:
return -1;
case 14:
return -1;
case 15:
return -1;
default:
break;
}
break;
case 2:
switch (iParam0){
case 1:
return 24;
case 2:
return 25;
case 3:
return 9;
case 4:
return 26;
case 5:
return -1;
case 6:
return 10;
case 7:
return 27;
case 8:
return -1;
case 9:
return 11;
case 10:
return 28;
case 11:
return -1;
case 12:
return 12;
case 13:
return 29;
case 14:
return -1;
case 15:
return 13;
default:
break;
}
break;
}
return -1;
}


void func_418() // Position - 0x102D8{
var unk;
if(func_177(1)){
if(func_176() || IS_BIT_SET(Global_1836154, 1)){
if(func_174()){
func_423();
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_EXPLAIN" /*This is the planning room ~HUD_COLOUR_H~~BLIP_MP_HEIST~~s~ Access the screen as a VIP, CEO or MC President to start The Doomsday Heist.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
unk={
func_422() 
};
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk)){
if(IS_BIT_SET(Global_1964005.f_2825, 15)){
func_170(&unk);
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 15);
}else{
func_169(&unk);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT)){
func_160();
func_416(&Global_1964005, 1);
func_421();
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Use", func_159(), func_158(), false, 0, false);
Global_1964005.f_812.f_2003=0;
func_420();
}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !IS_BIT_SET(Global_1836154, 1)){
if(func_146()) func_420();
}}else{
func_420();
func_419();
}}else{
func_423();
func_420();
}}else{
func_423();
func_420();
}
return;
}


void func_419() // Position - 0x103D8{
if(bLocal_179==false){
if(IS_BIT_SET(Global_1836154, 1)) func_169("HPBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Planning Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/);
else func_169("HPBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Planning Screen.*/);
bLocal_179=true;
}
return;
}


void func_420() // Position - 0x10405{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_PLAN" /*Press ~INPUT_CONTEXT~ to access the Planning Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_PLANb" /*Press ~INPUT_CONTEXT~ to access the Planning Screen.~n~Press ~INPUT_CONTEXT_SECONDARY~ to quickly join as a Crew Member.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_PLANc" /*Press ~INPUT_CONTEXT~ to access the Planning Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}


void func_421() // Position - 0x10439{
return;
}
struct<16> func_422() // Position - 0x10441{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPCONTEXT_PLAN" /*Press ~INPUT_CONTEXT~ to access the Planning Screen.*/, 64);
if(IS_BIT_SET(Global_1836154, 1)) TEXT_LABEL_APPEND_STRING(&unk, "c", 64);
elseif(!func_29()) TEXT_LABEL_APPEND_STRING(&unk, "b", 64);
return unk;
}


void func_423() // Position - 0x1047A{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Planning Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Planning Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(bLocal_179) bLocal_179=false;
return;
}


void func_424() // Position - 0x104A8{
func_425(&Global_1964005);
if(IS_BIT_SET(Global_1964005.f_2825, 1)) iLocal_178=4;
return;
}


void func_425(var uParam0) // Position - 0x104C7{
func_426(uParam0);
return;
}


void func_426(var uParam0) // Position - 0x104D5{
switch (uParam0->f_718){
case 0:
func_702(uParam0);
break;
case 1:
if(!func_384(&(uParam0->f_718))){
func_701(uParam0);
func_382(&(uParam0->f_718));
}
func_700(uParam0);
if(!func_381(&(uParam0->f_718))){
func_699(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 2:
if(!func_384(&(uParam0->f_718))){
func_697(uParam0);
func_382(&(uParam0->f_718));
}
func_695(uParam0);
if(!func_381(&(uParam0->f_718))){
func_694(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 3:
if(!func_384(&(uParam0->f_718))){
func_693(uParam0);
func_382(&(uParam0->f_718));
}
func_692(uParam0);
if(!func_381(&(uParam0->f_718))){
func_691(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 4:
if(!func_384(&(uParam0->f_718))){
func_684(uParam0);
func_382(&(uParam0->f_718));
}
func_433(uParam0);
if(!func_381(&(uParam0->f_718))){
func_431(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 5:
if(!func_384(&(uParam0->f_718))){
func_430(uParam0);
func_382(&(uParam0->f_718));
}
func_428(uParam0);
break;
case 6:
func_427(uParam0);
break;
}
return;
}


void func_427(var uParam0) // Position - 0x1064C{
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_PLANNING_BOARD");
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_714));
return;
}


void func_428(var uParam0) // Position - 0x10665{
if(!IS_BIT_SET(uParam0->f_2825, 6)){
func_201(uParam0);
func_200();
func_429(uParam0);
func_197(&(uParam0->f_718));
}
return;
}


void func_429(var uParam0) // Position - 0x10691{
func_199(&(uParam0->f_725.f_1), false, true);
CAM::SET_WIDESCREEN_BORDERS(false, 0);
return;
}


void func_430(var uParam0) // Position - 0x106AC{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
func_201(uParam0);
return;
}


void func_431(var uParam0) // Position - 0x106E0{
uParam0->f_703=0;
func_432(uParam0, false);
return;
}


void func_432(var uParam0, BOOL bParam1) // Position - 0x106F5{
if(uParam0->f_812==PLAYER::PLAYER_ID())if(bParam1) unk_0x78C12A99C170F456(uParam0->f_714, "ENABLE_NAVIGATION");
else unk_0x78C12A99C170F456(uParam0->f_714, "DISABLE_NAVIGATION");
else unk_0x78C12A99C170F456(uParam0->f_714, "DISABLE_NAVIGATION");
return;
}


void func_433(var uParam0) // Position - 0x1073B{
if(func_164()) func_416(&Global_1964005, 0);
func_348();
func_677(uParam0);
func_673(uParam0);
func_671(uParam0);
func_670(uParam0);
func_661(uParam0);
func_659(uParam0);
func_626(uParam0);
func_434(uParam0);
func_223(&(uParam0->f_725));
func_216();
uParam0->f_812.f_2003=-1;
if(!uParam0->f_718.f_5){
MISC::SET_BIT(&(uParam0->f_2825), 15);
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
func_429(uParam0);
func_205(&(uParam0->f_718));
}
return;
}


void func_434(var uParam0) // Position - 0x107CD{
int num;
BOOL flag;
if(uParam0->f_812.f_2002 !=-1 || uParam0->f_812.f_2003 !=-1 || uParam0->f_2817.f_1){
if(_STOPWATCH_IS_INITIALIZED(&(uParam0->f_794.f_7))) _STOPWATCH_RESET(&(uParam0->f_794.f_7), false, false);
return;
}
if(IS_BIT_SET(uParam0->f_2825, 1)) return;
if(!uParam0->f_718.f_5) return;
num=func_300(&(uParam0->f_804));
if(_STOPWATCH_IS_INITIALIZED(&(uParam0->f_794.f_7))){
if(_STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_794.f_7), 1000, false)) _STOPWATCH_DESTROY(&(uParam0->f_794.f_7));
return;
}
switch (num){
case 0:
case 1:
case 2:
case 3:
func_623(uParam0, num);
func_622(uParam0, 1);
break;
case 9:
case 10:
case 5:
func_621(uParam0, num);
break;
case 8:
func_416(uParam0, 0);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Back", func_159(), func_158(), false, 0, false);
func_421();
break;
case 7:
func_448(uParam0);
break;
case 4:
func_435(uParam0, &flag);
break;
}
if(flag) _STOPWATCH_RESET(&(uParam0->f_794.f_7), false, false);
return;
}


void func_435(var uParam0, var uParam1) // Position - 0x10919{
int num;
var unk;
num=func_417(uParam0->f_794, uParam0->f_812.f_1999);
if(!func_436(num)) return;
*uParam1=1;
if(MONEY::NETWORK_CAN_SPEND_MONEY2(func_317(), false, true, false, &unk, -1, 0)){
if(uParam0->f_812.f_2002==-1){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
uParam0->f_812.f_2002=0;
func_432(uParam0, false);
}}elseif(uParam0->f_812.f_2002==-1){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
uParam0->f_812.f_2002=8;
func_432(uParam0, false);
}
return;
}
BOOL func_436(int iParam0) // Position - 0x109BB{
if(!func_447(iParam0)) return false;
if(func_440(PLAYER::PLAYER_ID(), iParam0)==2) return false;
if(func_440(PLAYER::PLAYER_ID(), iParam0)==3) return false;
if(func_440(PLAYER::PLAYER_ID(), iParam0)==4) return false;
if(iParam0==29)if(!func_437(PLAYER::PLAYER_ID(), 29, false)) return false;
return true;
}
BOOL func_437(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x10A22{
switch (iParam1){
case 0:
if(func_140(plParam0, bParam2)==0 && func_438(plParam0, 16, bParam2)) return true;
break;
case 1:
if(func_140(plParam0, bParam2)==0 && func_438(plParam0, 17, bParam2)) return true;
break;
case 2:
if(func_140(plParam0, bParam2)==0 && func_438(plParam0, 18, bParam2)) return true;
break;
case 3:
if(func_140(plParam0, bParam2)==0 && func_438(plParam0, 0, bParam2) && func_438(plParam0, 1, bParam2) && func_438(plParam0, 2, bParam2)) return true;
break;
case 4:
if(func_140(plParam0, bParam2)==1 && func_438(plParam0, 19, bParam2)) return true;
break;
case 5:
if(func_140(plParam0, bParam2)==1 && func_438(plParam0, 20, bParam2)) return true;
break;
case 6:
if(func_140(plParam0, bParam2)==1 && func_438(plParam0, 21, bParam2)) return true;
break;
case 7:
if(func_140(plParam0, bParam2)==1 && func_438(plParam0, 22, bParam2) && func_438(plParam0, 23, bParam2)) return true;
break;
case 8:
if(func_140(plParam0, bParam2)==1 && func_438(plParam0, 4, bParam2) && func_438(plParam0, 5, bParam2) && func_438(plParam0, 6, bParam2) && func_438(plParam0, 7, bParam2)) return true;
break;
case 9:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 24, bParam2) && func_438(plParam0, 25, bParam2)) return true;
break;
case 10:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 26, bParam2)) return true;
break;
case 11:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 27, bParam2)) return true;
break;
case 12:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 28, bParam2)) return true;
break;
case 13:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 29, bParam2) && func_438(plParam0, 9, bParam2) && func_438(plParam0, 10, bParam2) && func_438(plParam0, 11, bParam2) && func_438(plParam0, 12, bParam2)) return true;
break;
case 14:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 13, bParam2)) return true;
break;
case 15:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 13, bParam2)) return true;
break;
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
return true;
case 29:
if(func_140(plParam0, bParam2)==2 && func_438(plParam0, 9, bParam2) && func_438(plParam0, 10, bParam2) && func_438(plParam0, 11, bParam2) && func_438(plParam0, 12, bParam2)) return true;
break;
}
return false;
}
BOOL func_438(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x10E08{
int num;
int num2;
Player player;
player=plParam0;
if(player !=-1){
if(func_415(iParam1)){
num=func_138(iParam1);
if(plParam0==PLAYER::PLAYER_ID() && bParam2) num2=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FLOW_MISSION_PROG, -1, 0);
else num2=Global_1890444[player /*129*/].f_38.f_23;
}elseif(func_447(iParam1)){
num=func_439(iParam1);
if(plParam0==PLAYER::PLAYER_ID() && bParam2) num2=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FM_MISSION_PROG, -1, 0);
else num2=Global_1890444[player /*129*/].f_38.f_24;
}
return IS_BIT_SET(num2, num);
}
return false;
}

int func_439(int iParam0) // Position - 0x10EA2{
switch (iParam0){
case 16:
return 0;
case 17:
return 1;
case 18:
return 2;
case 19:
return 3;
case 20:
return 4;
case 21:
return 5;
case 22:
return 6;
case 23:
return 7;
case 24:
return 8;
case 25:
return 9;
case 26:
return 10;
case 27:
return 11;
case 28:
return 12;
case 29:
return 13;
default:
}
return -1;
}

int func_440(Player plParam0, int iParam1) // Position - 0x10F44{
Player player;
player=plParam0;
if(player !=-1){
if(func_437(plParam0, iParam1, false)){
if(func_438(plParam0, iParam1, false)){
if(func_445(plParam0, iParam1)) return 3;
elseif(func_444(plParam0, iParam1)) return 4;
return 2;
}else{
if(func_447(iParam1) && func_441() && Global_262145.f_23110) return 1;
return 0;
}}else{
return 1;
}}
return -1;
}
BOOL func_441() // Position - 0x10FC7{
if(Global_1949970) return 0;
return func_442();
}

int func_442() // Position - 0x10FDE{
if(func_443()) return 1;
return Global_2683862.f_744;
}
BOOL func_443() // Position - 0x10FF8{
return Global_1575018==10;
}
BOOL func_444(Player plParam0, int iParam1) // Position - 0x11007{
int num;
int num2;
int num3;
Player player;
player=plParam0;
if(player !=-1){
if(func_447(iParam1)){
num=func_439(iParam1);
num2=Global_1890444[player /*129*/].f_38.f_24;
num3=Global_1890444[player /*129*/].f_38.f_25;
if(IS_BIT_SET(num2, num) && IS_BIT_SET(num3, num)) return true;
}}
return false;
}
BOOL func_445(Player plParam0, int iParam1) // Position - 0x1105D{
int num;
int num2;
Player player;
player=plParam0;
if(player !=-1){
if(func_447(iParam1)){
num=func_439(iParam1);
num2=Global_1890444[player /*129*/].f_38.f_24;
if(IS_BIT_SET(num2, num) && IS_BIT_SET(num2, func_446(num))) return true;
}}
return false;
}

int func_446(int iParam0) // Position - 0x110A9{
switch (iParam0){
case 0:
return 14;
case 1:
return 15;
case 2:
return 16;
case 3:
return 17;
case 4:
return 18;
case 5:
return 19;
case 6:
return 20;
case 7:
return 21;
case 8:
return 22;
case 9:
return 23;
case 10:
return 24;
case 11:
return 25;
case 12:
return 26;
case 13:
return 27;
default:
}
return -1;
}
BOOL func_447(int iParam0) // Position - 0x11153{
switch (iParam0){
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
return true;
default:
}
return false;
}


void func_448(var uParam0) // Position - 0x111BB{
int num;
if(uParam0->f_794.f_4 || uParam0->f_794.f_5) return;
num=func_417(uParam0->f_794, uParam0->f_812.f_1999);
if(func_459(num)){
if(!IS_BIT_SET(uParam0->f_2825, 1)){
if(func_440(uParam0->f_812, num)==0){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
if(func_447(num))if(!func_449(func_458(num), &(uParam0->f_812.f_2004), &(uParam0->f_812.f_2002), true)) MISC::SET_BIT(&(uParam0->f_2825), 1);
else MISC::SET_BIT(&(uParam0->f_2825), 1);
}elseif(func_440(uParam0->f_812, num)==1){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
if(num==29 && !func_437(PLAYER::PLAYER_ID(), 29, false)){
if(!IS_BIT_SET(uParam0->f_2825, 13)){
_DISPLAY_HELP_TEXT("HPLAUNCH_LOCK2" /*Locked Freemode Prep missions on the Planning Screen cannot be started until all previous Prep and Setup missions have been completed.*/, -1);
MISC::SET_BIT(&(uParam0->f_2825), 13);
}}elseif(func_447(num)){
if(!IS_BIT_SET(uParam0->f_2825, 12)){
_DISPLAY_HELP_TEXT("HPLAUNCH_LOCK3" /*Join a public session to source Heist Prep Equipment or pay a fee to purchase the equipment and unlock the associated Setup immediately.*/, -1);
MISC::SET_BIT(&(uParam0->f_2825), 12);
}}elseif(!IS_BIT_SET(uParam0->f_2825, 11)){
_DISPLAY_HELP_TEXT("HPLAUNCH_LOCK" /*Locked Setup missions on the Planning Screen cannot be started until all associated Freemode Prep missions have been completed.*/, -1);
MISC::SET_BIT(&(uParam0->f_2825), 11);
}}elseif(func_440(uParam0->f_812, num)==2){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
if(!IS_BIT_SET(uParam0->f_2825, 14)){
_DISPLAY_HELP_TEXT("HPLAUNCH_COMP" /*The mission you have selected has already been completed.*/, -1);
MISC::SET_BIT(&(uParam0->f_2825), 14);
}}else{
func_440(uParam0->f_812, num)==-1;
}}}else{
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Error", func_159(), func_158(), false, 0, false);
_DISPLAY_HELP_TEXT("HPLAUNCH_UNAV" /*The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please wait or look for rival Heist crews transporting Heist Prep Equipment ~BLIP_NHP_BAG~ to steal from.*/, -1);
}
return;
}
BOOL func_449(int iParam0, int* piParam1, var uParam2, BOOL bParam3) // Position - 0x1138C{
if(!func_455(3, iParam0)) MISC::SET_BIT(piParam1, 0);
if(!func_455(func_308(), iParam0)) MISC::SET_BIT(piParam1, 1);
if(!func_455(func_306(), iParam0)) MISC::SET_BIT(piParam1, 2);
if(*piParam1 !=0){
*uParam2=5;
return true;
}
if(bParam3){
if(!func_450(func_453())){
*uParam2=10;
return true;
}}
return false;
}
BOOL func_450(int iParam0) // Position - 0x113FA{
var gamerHandle2;
int i;
int num;
Player player;
var gamerHandle1;
int j;
var gamerHandle22;
if(iParam0==-1) return true;
if(!_IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), true)) return false;
if(func_111() !=iParam0) return false;
gamerHandle2={
GET_LOCAL_GAMER_HANDLE() 
};
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
gamerHandle1={
GET_GAMER_HANDLE_PLAYER(player) 
};
if(IS_GAMER_HANDLE_VALID(gamerHandle1)){
if(!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle2)){
if(func_397(PLAYER::PLAYER_ID(), player)){
for (j=0;
j < iParam0;
j=j + 1){
gamerHandle22={
Global_2359296[func_451() /*5568*/].f_681.f_4340[j /*13*/] 
};
if(IS_GAMER_HANDLE_VALID(gamerHandle22)){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle22)){
num=num + 1;
break;
}}
}}}}}}
if(num==iParam0) return true;
return false;
}

int func_451() // Position - 0x114E6{
int num;
num=0;
return num;
}
struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0x114F3{
var gamerHandle;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
return gamerHandle;
}

int func_453() // Position - 0x11508{
if(func_310()) return func_454(func_308());
elseif(func_309()) return func_454(func_306());
return -1;
}

int func_454(int iParam0) // Position - 0x11538{
switch (iParam0){
case 4:
return 3;
case 7:
return 1;
case 8:
return 2;
case 5:
return 3;
case 9:
return 1;
case 10:
return 2;
default:
}
return -1;
}
BOOL func_455(int iParam0, int iParam1) // Position - 0x11584{
int num;
int i;
int num2;
int num3;
if(!func_311(iParam0)) return true;
num=_MPPLY_STAT_GET_INT(func_313(iParam0));
for (i=0;
i < 8;
i=i + 1){
num2=func_457(i);
num3=func_457(i - 1);
if(num < func_456(num2) && num >=func_456(num3)){
if(iParam1 < num2 && iParam1 >=num3) return true;
return false;
}}
return false;
}

int func_456(int iParam0) // Position - 0x11600{
return SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam0))) - 1;
}

int func_457(int iParam0) // Position - 0x11619{
switch (iParam0){
case 0:
return 0;
case 1:
return 6;
case 2:
return 7;
case 3:
return 16;
case 4:
return 17;
case 5:
return 26;
case 6:
return 28;
case 7:
return 29;
default:
}
return -1;
}

int func_458(int iParam0) // Position - 0x1167E{
switch (iParam0){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
case 3:
return 6;
case 4:
return 12;
case 5:
return 13;
case 6:
return 14;
case 7:
return 15;
case 8:
return 16;
case 9:
return 22;
case 10:
return 23;
case 11:
return 24;
case 12:
return 25;
case 13:
return 27;
case 14:
return 28;
case 15:
return 28;
case 16:
return 0;
case 17:
return 1;
case 18:
return 2;
case 19:
return 7;
case 20:
return 8;
case 21:
return 9;
case 22:
return 10;
case 23:
return 11;
case 24:
return 17;
case 25:
return 18;
case 26:
return 19;
case 27:
return 20;
case 28:
return 21;
case 29:
return 26;
default:
}
return -1;
}
BOOL func_459(int iParam0) // Position - 0x117D0{
if(func_447(iParam0))if(func_460(PLAYER::PLAYER_ID(), 233, false) !=-1) return false;
return true;
}

int func_460(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x117F5{
int num;
int num2;
if(!func_490(func_593(iParam1, -1, -1, -1), func_550(iParam1, -1, 1, -1, -1, plParam0), func_499(iParam1, -1, -1, -1, -1, plParam0), false, true)) return 0;
num=iParam1;
if(func_489(plParam0))if(iParam1==153) num=211;
if(func_487(iParam1) >=func_486(num)) return 5;
if(func_485(plParam0)) return 6;
if(func_484(plParam0)) return 14;
if(func_483(plParam0) && !func_482(plParam0)) return 17;
num2=func_477(plParam0);
if(num2 !=-1) return num2;
if(func_409(iParam1)==1){
if(func_476() || func_475() || !bParam2 && func_474() !=0 && func_409(iParam1)==1) return 2;
}elseif(func_409(iParam1)==2){
if(!func_471(iParam1)) return 3;
if(!bParam2)if(Global_1894573[plParam0 /*608*/].f_10.f_34 !=_INVALID_PLAYER_INDEX()) return 9;
if(func_470(plParam0)) return 10;
}elseif(func_468(iParam1)){
if(func_112(plParam0) <=0) return 4;
}
if(func_467(iParam1)){
if(func_466()) return 13;
if(func_441()) return 12;
}
if(func_112(plParam0) + 1 < func_465(num)) return 4;
switch (iParam1){
case 157:
break;
case 152:
case 164:
case 173:
case 170:
case 201:
case 200:
if(!func_462(plParam0, false)) return 1;
break;
case 189:
if(func_461(plParam0, 21) || func_461(plParam0, 25)) return 0;
break;
}
return -1;
}
BOOL func_461(Player plParam0, int iParam1) // Position - 0x119E4{
return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_218, iParam1);
}
BOOL func_462(Player plParam0, BOOL bParam1) // Position - 0x119FA{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))if(!func_463(player, plParam0, true))if(bParam1 || !func_188(player, 31)) return true;
}
return false;
}
BOOL func_463(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x11A4C{
if(plParam1 !=_INVALID_PLAYER_INDEX()){
if(!bParam2)if(func_464(plParam0, plParam1)) return false;
if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return plParam1==Global_1894573[plParam0 /*608*/].f_10;
}
return false;
}
BOOL func_464(Player plParam0, Player plParam1) // Position - 0x11A96{
if(plParam1 !=_INVALID_PLAYER_INDEX())if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0) return plParam1==plParam0;
return false;
}

int func_465(int iParam0) // Position - 0x11ADB{
switch (iParam0){
case 180:
return Global_262145.f_18633;
case 183:
return Global_262145.f_18641;
case 185:
return Global_262145.f_18650;
case 182:
return Global_262145.f_18661;
case 186:
return Global_262145.f_18670;
case 195:
return Global_262145.f_18688;
case 198:
return Global_262145.f_18698;
case 197:
return Global_262145.f_18710;
case 207:
return Global_262145.f_18718;
case 209:
return Global_262145.f_18731;
case 208:
return Global_262145.f_18739;
case 201:
return Global_262145.f_18772;
case 211:
return Global_262145.f_18840;
case 193:
return Global_262145.f_18863;
case 205:
return Global_262145.f_18881;
case 189:
return Global_262145.f_18846;
case 216:
return 2;
case 220:
return 2;
default:
}
return 1;
}
BOOL func_466() // Position - 0x11BFF{
return Global_262145.f_15679;
}
BOOL func_467(int iParam0) // Position - 0x11C0E{
switch (iParam0){
case 167:
case 169:
case 168:
return true;
default:
}
return false;
}
BOOL func_468(int iParam0) // Position - 0x11C34{
switch (iParam0){
case 155:
case 160:
case 153:
case 162:
case 154:
case 163:
case 171:
case 172:
case 240:
case 239:
return true;
default:
}
return func_469(iParam0, 0);
}
BOOL func_469(int iParam0, int iParam1) // Position - 0x11C8E{
switch (iParam0){
case 199:
case 205:
case 210:
case 211:
return 1;
default:
}
if(iParam1==0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
default:
}}
return 0;
}
BOOL func_470(Player plParam0) // Position - 0x11CE3{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))if(Global_1894573[plParam0 /*608*/].f_10.f_34 !=_INVALID_PLAYER_INDEX() && Global_1894573[plParam0 /*608*/].f_10.f_34==player && Global_1894573[player /*608*/].f_10.f_34==plParam0) return true;
}
return false;
}
BOOL func_471(int iParam0) // Position - 0x11D53{
switch (iParam0){
case 179:
if(func_473() < 2) return false;
break;
case 148:
if(func_472() < 2) return false;
break;
default:
if(func_472() < 2) return false;
break;
}
return true;
}

int func_472() // Position - 0x11D9C{
int i;
int num;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))if(_IS_PLAYER_BOSS_OF_ORGANIZATION(player)) num=num + 1;
}
return num;
}

int func_473() // Position - 0x11DD9{
int i;
int num;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))if(func_489(player)) num=num + 1;
}
return num;
}

int func_474() // Position - 0x11E16{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_103;
}
BOOL func_475() // Position - 0x11E2D{
return Global_1923597.f_11.f_144 !=-1;
}
BOOL func_476() // Position - 0x11E3F{
return Global_1923597.f_11.f_143 !=-1;
}

int func_477(Player plParam0) // Position - 0x11E51{
int i;
Player player;
for (i=0;
i < func_479();
i=i + 1){
player=Global_1894573[plParam0 /*608*/].f_10.f_11[i];
if(player !=_INVALID_PLAYER_INDEX()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(func_485(player)) return 7;
if(func_484(player)) return 15;
if(func_478(player)) return 16;
}}}
return -1;
}
BOOL func_478(Player plParam0) // Position - 0x11EBD{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_4, 2) || IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_4, 3) || IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_4, 5) || IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_4, 6) || IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_4, 7) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_404.f_1, 1)) return true;
return false;
}

int func_479() // Position - 0x11F5B{
return func_480() - 1;
}

int func_480() // Position - 0x11F69{
return func_481(PLAYER::PLAYER_ID());
}

int func_481(Player plParam0) // Position - 0x11F79{
Player player;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==1) return 8;
return 4;
}
BOOL func_482(Player plParam0) // Position - 0x11FB3{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_75(Global_2657589[plParam0 /*466*/].f_321.f_7)==23;
return false;
}
BOOL func_483(Player plParam0) // Position - 0x11FFA{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_5, 4);
return false;
}
BOOL func_484(Player plParam0) // Position - 0x1201F{
Ped playerPed;
Hash entityModel;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return false;
if(plParam0==PLAYER::PLAYER_ID()){
return Global_2764905;
}else{
playerPed=PLAYER::GET_PLAYER_PED(plParam0);
if(ENTITY::DOES_ENTITY_EXIST(playerPed)){
entityModel=ENTITY::GET_ENTITY_MODEL(playerPed);
if(entityModel==joaat("MP_M_Freemode_01") || entityModel==joaat("MP_F_Freemode_01")) return false;
else return true;
}else{
return false;
}}
return false;
}
BOOL func_485(Player plParam0) // Position - 0x1208B{
Player player;
player=plParam0;
if(player !=-1) return IS_BIT_SET(Global_1894573[player /*608*/].f_1, 0);
return false;
}

int func_486(int iParam0) // Position - 0x120AE{
switch (iParam0){
case 162:
return Global_262145.f_13041;
case 155:
return Global_262145.f_13066;
case 153:
return Global_262145.f_13030;
case 163:
return Global_262145.f_13006;
case 160:
return Global_262145.f_13019;
case 154:
return Global_262145.f_13076;
case 169:
return 1;
case 171:
return Global_262145.f_15506;
case 172:
return Global_262145.f_15525;
case 148:
return Global_262145.f_18747;
case 179:
return Global_262145.f_18755;
case 201:
return Global_262145.f_18769;
case 200:
return Global_262145.f_18809;
case 211:
return Global_262145.f_18838;
case 194:
return Global_262145.f_18850;
case 193:
return Global_262145.f_18861;
case 210:
return Global_262145.f_18873;
case 205:
return Global_262145.f_18879;
case 199:
return Global_262145.f_18892;
case 249:
return 1;
case 238:
return 1;
default:
}
return 2147483647;
}

int func_487(int iParam0) // Position - 0x12200{
return Global_1923597.f_11.f_147[func_488(iParam0)];
}

int func_488(int iParam0) // Position - 0x12218{
switch (iParam0){
case 148:
return 0;
case 152:
return 1;
case 151:
return 2;
case 142:
return 3;
case 157:
return 4;
case 159:
return 5;
case 164:
return 6;
case 160:
return 7;
case 162:
return 8;
case 163:
return 9;
case 154:
return 10;
case 155:
return 11;
case 153:
return 12;
case 166:
return 13;
case 167:
return 14;
case 168:
return 15;
case 169:
return 16;
case 170:
return 17;
case 171:
return 18;
case 172:
return 19;
case 173:
return 20;
case 178:
return 21;
case 179:
return 22;
case 180:
return 23;
case 182:
return 24;
case 183:
return 25;
case 185:
return 26;
case 186:
return 27;
case 189:
return 28;
case 190:
return 29;
case 191:
return 30;
case 192:
return 31;
case 193:
return 32;
case 194:
return 33;
case 195:
return 34;
case 197:
return 35;
case 198:
return 36;
case 199:
return 37;
case 200:
return 38;
case 201:
return 39;
case 205:
return 40;
case 207:
return 41;
case 208:
return 42;
case 209:
return 43;
case 210:
return 44;
case 214:
return 45;
case 215:
return 46;
case 216:
return 47;
case 217:
return 48;
case 218:
return 49;
case 219:
return 50;
case 220:
return 51;
case 221:
return 52;
case 188:
return 53;
case 225:
return 54;
case 226:
return 55;
case 227:
return 56;
case 229:
return 57;
case 230:
return 58;
case 233:
return 59;
case 237:
return 60;
case 238:
return 61;
case 239:
return 62;
case 240:
return 63;
case 241:
return 64;
case 242:
return 65;
case 244:
return 66;
case 248:
return 67;
case 249:
return 68;
case 250:
return 69;
case 243:
return 70;
case 158:
return 71;
case 256:
return 72;
case 258:
return 73;
case 271:
return 74;
case 276:
return 75;
case 277:
return 76;
case 262:
return 79;
case 263:
return 78;
case 264:
return 77;
case 267:
return 80;
case 291:
return 81;
case 292:
return 82;
case 293:
return 83;
case 294:
return 84;
case 295:
return 85;
case 296:
return 86;
case 297:
return 87;
case 298:
return 88;
case 299:
return 89;
case 300:
return 90;
case 301:
return 91;
case 304:
return 92;
case 305:
return 93;
case 306:
return 94;
case 307:
return 95;
case 308:
return 96;
case 309:
return 97;
default:
}
return -1;
}
BOOL func_489(Player plParam0) // Position - 0x12656{
return func_367(plParam0, 1);
}
BOOL func_490(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12665{
if(func_498(iParam0, bParam3, bParam4) || func_497(iParam1, bParam3, bParam4) || func_491(iParam2, bParam3, bParam4)) return true;
return false;
}
BOOL func_491(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1269F{
return func_492(2, iParam0, false, bParam1, bParam2);
}
BOOL func_492(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x126B3{
int num;
int num2;
if(!IS_BIT_SET(Global_1666891, 0)) return 0;
if(bParam2 && !bParam3 && iParam1 <=func_496(iParam0) - func_495(iParam0, false)){
return 1;
}else{
if(bParam3){
if(bParam2) num=iParam1 - func_495(iParam0, false);
else num=iParam1;
num2=func_496(iParam0) - func_494(iParam0);
}else{
if(bParam2) num=iParam1 - func_495(iParam0, false);
else num=iParam1;
num2=func_496(iParam0) - func_495(iParam0, true);
}
if(!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=3) num2=num2 - func_493(iParam0);
if(num < num2) return 1;
}
return 0;
}

int func_493(int iParam0) // Position - 0x12779{
switch (iParam0){
case 0:
return 10;
case 1:
return 10;
case 2:
return 10;
}
return 0;
}

int func_494(int iParam0) // Position - 0x127B3{
switch (iParam0){
case 0:
return Global_1666891.f_1;
case 1:
return Global_1666891.f_2;
case 2:
return Global_1666891.f_3;
}
return 0;
}

int func_495(int iParam0, BOOL bParam1) // Position - 0x127F9{
Player player;
player=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) return Global_2657589[player /*466*/].f_219;
else return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) return Global_2657589[player /*466*/].f_220;
else return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()) return Global_2657589[player /*466*/].f_221;
else return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
break;
}
return 0;
}

int func_496(int iParam0) // Position - 0x12896{
switch (iParam0){
case 0:
return Global_1666899;
case 1:
return Global_1666900;
case 2:
return Global_1666901;
}
return 0;
}

int func_497(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x128D6{
return func_492(1, iParam0, false, bParam1, bParam2);
}

int func_498(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x128EA{
return func_492(0, iParam0, false, bParam1, bParam2);
}

int func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, Player plParam5) // Position - 0x128FE{
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 159:
case 142:
return 1;
case 167:
return func_549(iParam1);
case 170:
return 2;
case 171:
return 0;
case 172:
return 9;
case 173:
return 0;
case 168:
return 5;
case 178:
case 188:
return func_547(iParam1, iParam2, iParam3);
case 225:
case 226:
return func_541(iParam1, iParam2, iParam3, iParam4);
case 227:
return 0;
case 229:
case 230:
return func_529(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(plParam5), iParam4);
case 233:
return func_522(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(plParam5), iParam4);
case 179:
return 0;
case 182:
return 7;
case 185:
return 6;
case 186:
return 2;
case 180:
return 9;
case 190:
return 8;
case 191:
return 0;
case 192:
return func_515(iParam1, iParam2);
case 193:
return 0;
case 194:
return 0;
case 199:
return 0;
case 195:
return 9;
case 201:
return 16;
case 198:
return 12;
case 205:
return 8;
case 207:
return 0;
case 208:
return 15;
case 209:
return 0;
case 210:
return 0;
case 214:
return 9;
case 215:
return 0;
case 216:
return 16;
case 217:
return 0;
case 218:
return 0;
case 219:
return 0;
case 220:
return 30;
case 221:
return 30;
case 237:
case 250:
return func_512(iParam1, iParam2, iParam3);
case 238:
case 249:
return func_511(iParam1);
case 239:
return 4;
case 240:
return 1;
case 241:
return 1;
case 242:
return 1;
case 244:
return 4;
case 248:
return 5;
case 243:
return func_507(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(plParam5), iParam4);
case 158:
return func_503(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(plParam5), iParam4);
case 181:
return func_500(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(plParam5), iParam4);
default:
}
return 0;
}

int func_500(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x12BD1{
int num;
num=func_502(iParam0, iParam1, iParam3);
num=num + func_501(iParam0, plParam2);
return num;
}

int func_501(int iParam0, Player plParam1) // Position - 0x12BF4{
switch (iParam0){
case 2:
return 5;
default:
}
return 1;
}

int func_502(int iParam0, int iParam1, int iParam2) // Position - 0x12C0E{
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}

int func_503(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x12C28{
int num;
num=func_506(iParam0, iParam1, iParam3);
num=num + func_504(iParam0, plParam2);
return num;
}

int func_504(int iParam0, Player plParam1) // Position - 0x12C4B{
var unk;
unk=-1;
unk.f_1=-1;
unk.f_2=-1;
switch (iParam0){
case 4:
case 2:
case 1:
case 3:
case 30:
case 31:
case 32:
case 28:
case 29:
case 52:
case 37:
return 0;
case 19:
case 20:
return 1;
case 38:
case 8:
case 14:
case 17:
case 11:
case 18:
case 21:
case 22:
case 7:
case 34:
case 23:
case 41:
case 49:
case 48:
case 27:
case 15:
case 50:
case 24:
case 6:
case 9:
case 10:
case 47:
case 42:
case 26:
case 25:
return 2;
case 43:
return 3;
case 16:
return 4;
case 12:
case 13:
if(_IS_PLAYER_IN_AN_ORGANIZATION(plParam1, true)) unk={
func_505(plParam1) 
};
if(unk.f_1==4) return 4;
else return 2;
break;
case 33:
return 5;
}
return 1;
}


Vector3 func__505(Player plParam0) // Position - 0x12DB2{
return Global_1894573[plParam0 /*608*/].f_10.f_305;
}

int func_506(int iParam0, int iParam1, int iParam2) // Position - 0x12DCA{
switch (iParam0){
case 0:
return 5;
case 24:
return 1;
case 10:
switch (iParam1){
case 30:
return 11;
case 31:
case 32:
return 9;
default:
break;
}
break;
case 36:
return 0;
case 38:
return 3;
case 40:
return 4;
case 41:
return 4;
case 8:
return 13;
case 13:
switch (iParam1){
case 38:
case 39:
return 10;
case 40:
return 11;
default:
break;
}
break;
case 35:
return 5;
case 46:
return 2;
case 9:
return 8;
case 4:
return 7;
case 14:
return 11;
case 17:
return 8;
case 47:
return 11;
case 11:
return 9;
case 18:
return 13;
case 6:
return 17;
case 48:
return 21;
case 33:
return 5;
case 44:
return 2;
case 21:
return 22;
case 22:
return 12;
case 7:
return 10;
case 2:
return 0;
case 34:
switch (iParam1){
case 91:
return 16;
case 92:
return 14;
default:
break;
}
break;
case 27:
return 12;
case 23:
return 17;
case 31:
return 3;
case 12:
return 4;
case 3:
return 2;
case 49:
return 15;
case 19:
return 14;
case 50:
return 12;
case 20:
return 12;
case 32:
return 15;
case 30:
return 6;
case 16:
return 12;
case 39:
return 5;
case 42:
return 3;
case 37:
return 19;
case 52:
return 6;
case 15:
return 2;
case 25:
switch (iParam1){
case 69:
return 11;
case 70:
return 12;
default:
break;
}
break;
}
return 0;
}

int func_507(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x1302D{
int num;
num=func_510(iParam0, iParam1, iParam3);
if(!func_509(iParam0)) num=num + func_508(iParam0, plParam2);
return num;
}

int func_508(int iParam0, Player plParam1) // Position - 0x1305A{
switch (iParam0){
case 14:
case 5:
case 0:
case 3:
case 2:
return 0;
case 6:
if(func_112(plParam1) + 1==1) return 1;
else return 2;
break;
}
return 1;
}
BOOL func_509(int iParam0) // Position - 0x130AC{
return false;
}

int func_510(int iParam0, int iParam1, int iParam2) // Position - 0x130B5{
switch (iParam0){
case 13:
return 3;
case 5:
switch (iParam1){
case 15:
return 17;
case 16:
return 12;
case 17:
return 12;
default:
break;
}
break;
case 11:
switch (iParam1){
case 35:
case 36:
return 1;
default:
break;
}
break;
case 6:
switch (iParam1){
case 18:
return 3;
default:
break;
}
break;
case 12:
return 15;
case 0:
return 1;
case 9:
switch (iParam1){
case 28:
switch (iParam2){
case 0:
return 1;
case 1:
return 0;
case 2:
return 3;
default:
break;
}
break;
case 29:
switch (iParam2){
case 0:
return 1;
case 1:
return 2;
case 2:
return 0;
default:
break;
}
break;
case 30:
switch (iParam2){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
default:
break;
}
break;
}
break;
case 3:
switch (iParam1){
case 10:
return 6;
default:
}
return 5;
case 2:
switch (iParam1){
case 6:
return 22;
case 7:
return 23;
case 8:
return 25;
default:
break;
}
break;
case 8:
switch (iParam1){
case 25:
return 3;
case 26:
return 8;
case 27:
return 4;
default:
break;
}
break;
}
return 0;
}

int func_511(int iParam0) // Position - 0x13264{
switch (iParam0){
case 0:
return 3;
case 1:
return 3;
case 2:
return 4;
case 3:
return 0;
case 4:
return 3;
case 5:
return 0;
default:
}
return 0;
}

int func_512(int iParam0, int iParam1, int iParam2) // Position - 0x132B0{
int num;
num=func_514(iParam0, iParam1);
if(func_513(iParam0)) num=num + iParam2;
return num;
}
BOOL func_513(int iParam0) // Position - 0x132D4{
return true;
}

int func_514(int iParam0, int iParam1) // Position - 0x132DD{
switch (iParam0){
case 12:
return 3;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
return 3;
default:
break;
}
break;
case 11:
switch (iParam1){
case 77:
return 2;
default:
break;
}
break;
case 17:
switch (iParam1){
case 102:
case 103:
case 104:
return 4;
default:
break;
}
break;
case 23:
switch (iParam1){
case 133:
case 135:
return 1;
case 136:
return 2;
default:
break;
}
break;
case 1:
return 10;
case 18:
return 3;
case 3:
return 4;
case 21:
return 2;
case 0:
switch (iParam1){
case 0:
return 9;
case 1:
return 9;
case 2:
return 8;
case 3:
return 6;
case 4:
return 8;
case 5:
return 8;
case 6:
return 8;
case 7:
return 8;
case 8:
return 8;
case 9:
return 6;
default:
break;
}
break;
}
return 0;
}

int func_515(int iParam0, int iParam1) // Position - 0x1342C{
int num;
num=func_521(iParam0, iParam1);
if(!func_520(iParam0)) num=num + func_516(iParam0, func_111() + 1);
if(iParam0==14 || func_520(iParam0) && iParam0 !=9 && iParam0 !=16 && iParam0 !=7 && iParam0 !=17) num=num + func_516(iParam0, func_111() + 1);
if(iParam0==7) num=num + 6;
if(iParam0==17) num=num + 2;
return num;
}

int func_516(int iParam0, int iParam1) // Position - 0x134C0{
int num;
int num2;
int num3;
if(func_519(iParam0)){
num=1;
}else{
if(num==0){
num=iParam1;
num2=func_518(iParam0, iParam1);
num3=func_517(iParam0);
if(num > num2) num=num2;
elseif(num < num3) num=num3;
}
if(func_520(iParam0)){
if(num > Global_262145.f_18384) num=Global_262145.f_18384;
}else{
if(num < Global_262145.f_18383) num=Global_262145.f_18383;
if(num > Global_262145.f_18382) num=Global_262145.f_18382;
}}
return num;
}

int func_517(int iParam0) // Position - 0x13559{
switch (iParam0){
case 5:
return Global_262145.f_18421;
case 10:
return Global_262145.f_18446;
default:
}
return 1;
}

int func_518(int iParam0, int iParam1) // Position - 0x13589{
if(func_520(iParam0)){
if(iParam1 >=Global_262145.f_18385) return 2;
return 1;
}
switch (iParam0){
case 5:
return Global_262145.f_18422;
case 10:
return Global_262145.f_18447;
default:
}
return 8;
}
BOOL func_519(int iParam0) // Position - 0x135D7{
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
return true;
default:
}
return false;
}
BOOL func_520(int iParam0) // Position - 0x13609{
switch (iParam0){
case 14:
case 32:
case 0:
case 2:
case 4:
case 18:
case 6:
case 5:
case 10:
case 12:
case 13:
return false;
default:
}
return true;
}

int func_521(int iParam0, int iParam1) // Position - 0x1365F{
switch (iParam0){
case 32:
switch (iParam1){
case 195:
return 3;
case 196:
return 3;
case 197:
return 3;
case 198:
return 3;
case 199:
return 3;
default:
break;
}
break;
case 37:
switch (iParam1){
case 231:
return 2;
default:
break;
}
break;
case 1:
switch (iParam1){
case 7:
return 9;
case 8:
return 8;
case 9:
return 7;
case 10:
return 4;
case 11:
return 5;
case 12:
return 6;
default:
break;
}
break;
case 0:
switch (iParam1){
case 1:
return 10;
case 2:
return 10;
case 3:
return 8;
case 4:
return 10;
case 5:
return 10;
case 6:
return 10;
default:
break;
}
break;
case 2:
switch (iParam1){
case 13:
return 10;
case 14:
return 8;
case 15:
return 8;
case 16:
return 8;
case 17:
return 10;
case 18:
return 9;
default:
break;
}
break;
case 4:
switch (iParam1){
case 19:
return 5;
case 20:
return 8;
case 21:
return 4;
case 22:
return 0;
case 23:
return 10;
case 24:
return 1;
default:
break;
}
break;
case 6:
switch (iParam1){
case 25:
return 20;
case 26:
return 15;
case 27:
return 13;
case 28:
return 16;
case 29:
return 14;
case 30:
return 14;
default:
break;
}
break;
case 3:
switch (iParam1){
case 74:
return 7;
case 75:
return 5;
case 76:
return 5;
case 77:
return 4;
default:
break;
}
break;
case 8:
switch (iParam1){
case 64:
return 1;
case 67:
return 1;
default:
break;
}
break;
case 14:
switch (iParam1){
case 38:
return 6;
case 39:
return 6;
case 40:
return 7;
case 41:
return 6;
default:
break;
}
break;
}
return 0;
}

int func_522(int iParam0, int iParam1, int iParam2, Player plParam3, int iParam4) // Position - 0x138F1{
int num;
num=func_528(iParam0, iParam1, iParam2, iParam4);
if(!func_527(iParam0))if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_524(iParam0, func_112(plParam3) + 1, plParam3, -1, iParam2);
if(func_523(iParam0)) num=num + iParam2;
return num;
}
BOOL func_523(int iParam0) // Position - 0x13944{
switch (iParam0){
case 2:
case 5:
case 7:
return true;
default:
}
return false;
}

int func_524(int iParam0, int iParam1, Player plParam2, int iParam3, int iParam4) // Position - 0x1396A{
int num;
if(iParam4 > 0) return iParam4;
switch (iParam0){
case 5:
case 7:
case 6:
case 4:
case 10:
num=1;
break;
case 8:
num=2;
break;
case 3:
case 2:
num=4;
break;
default:
if(func_527(iParam0)) num=2;
else num=1;
break;
}
if(num > func_526(iParam0)) num=func_526(iParam0);
elseif(num < func_525(iParam0)) num=func_525(iParam0);
return num;
}

int func_525(int iParam0) // Position - 0x13A06{
return 1;
}

int func_526(int iParam0) // Position - 0x13A0F{
return 4;
}
BOOL func_527(int iParam0) // Position - 0x13A18{
switch (iParam0){
case 3:
case 2:
case 4:
case 5:
case 6:
case 7:
case 10:
return true;
default:
}
return false;
}

int func_528(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x13A56{
int num;
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
num=1;
switch (iParam1){
case 26:
return num + 1;
case 34:
return num + 1;
default:
}
return num;
case 4:
return 1;
case 5:
return 1;
case 8:
return 7;
case 12:
switch (iParam1){
case 125:
return 6;
default:
}
return 2;
case 9:
return 0;
case 13:
return 1;
case 10:
return 12;
}
return 0;
}

int func_529(int iParam0, int iParam1, int iParam2, Player plParam3, int iParam4) // Position - 0x13B11{
int num;
num=func_540(iParam0, iParam1, iParam2, iParam4);
if(!func_539(iParam0))if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_531(iParam0, func_112(plParam3) + 1, plParam3, -1, iParam2);
if(func_530(iParam0)) num=num + iParam2;
return num;
}
BOOL func_530(int iParam0) // Position - 0x13B64{
switch (iParam0){
case 23:
return true;
default:
}
return false;
}

int func_531(int iParam0, int iParam1, Player plParam2, int iParam3, int iParam4) // Position - 0x13B7E{
int num;
int num2;
if(iParam4 > 0) return iParam4;
if(func_538(iParam0)){
num2=func_537(iParam3);
switch (iParam0){
case 21:
num=1;
break;
case 23:
switch (num2){
case 1:
num=1;
break;
case 2:
num=2;
break;
case 3:
num=2;
break;
}
break;
case 15:
switch (num2){
case 1:
num=3;
break;
case 2:
num=6;
break;
case 3:
num=8;
break;
}
break;
case 20:
case 24:
case 22:
case 16:
case 17:
switch (num2){
case 1:
num=1;
break;
case 2:
num=2;
break;
case 3:
num=3;
break;
}
break;
case 25:
switch (num2){
case 1:
num=2;
break;
case 2:
num=3;
break;
case 3:
num=3;
break;
}
break;
}
return num;
}elseif(func_536(iParam0)){
num=1;
return num;
}else{
num=iParam1;
if(num > func_535(plParam2)) num=func_535(plParam2);
}
if(num > func_533(iParam0)) num=func_533(iParam0);
elseif(num < func_532(iParam0)) num=func_532(iParam0);
return num;
}

int func_532(int iParam0) // Position - 0x13CFC{
switch (iParam0){
case 15:
return 3;
default:
}
return 1;
}

int func_533(int iParam0) // Position - 0x13D16{
if(!func_538(iParam0)){
if(func_539(iParam0)){
if(func_534(iParam0)) return 2;
return 3;
}}else{
switch (iParam0){
case 21:
return 1;
case 23:
return 2;
case 15:
return 9;
default:
}
return 3;
}
return 4;
}
BOOL func_534(int iParam0) // Position - 0x13D70{
switch (iParam0){
case 12:
return true;
default:
}
return false;
}

int func_535(Player plParam0) // Position - 0x13D8A{
if(plParam0==_INVALID_PLAYER_INDEX() || Global_1853910[plParam0 /*862*/].f_267.f_293==0) return 50;
return 50 - Global_1853910[plParam0 /*862*/].f_267.f_293.f_3;
}
BOOL func_536(int iParam0) // Position - 0x13DCC{
switch (iParam0){
case 26:
return 1;
default:
}
return 0;
}

int func_537(int iParam0) // Position - 0x13DE6{
if(iParam0 > 25) return 3;
elseif(iParam0 > 10) return 2;
return 1;
}
BOOL func_538(int iParam0) // Position - 0x13E08{
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
return true;
default:
}
return false;
}
BOOL func_539(int iParam0) // Position - 0x13E5E{
if(func_538(iParam0) || func_536(iParam0)) return true;
return false;
}

int func_540(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x13E80{
switch (iParam0){
case 1:
return 1;
case 2:
return 12;
case 11:
return 1;
case 5:
return 10;
case 12:
switch (iParam1){
case 0:
return 3;
case 1:
return 3;
case 2:
return 10;
default:
break;
}
break;
case 10:
switch (iParam1){
case 34:
return 17;
case 35:
return 20;
case 36:
return 22;
default:
break;
}
break;
case 9:
switch (iParam1){
case 6:
return 9;
case 7:
return 0;
case 8:
return 5;
default:
break;
}
break;
case 0:
switch (iParam2){
case 1:
return 7;
case 2:
return 14;
case 3:
return 14;
case 4:
return 14;
default:
break;
}
break;
case 8:
return 2;
case 23:
return 2 * iParam2;
case 24:
return 2 * iParam2;
case 26:
return 2;
}
return 0;
}

int func_541(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x13FB2{
int num;
num=func_546(iParam0, iParam1, iParam2, iParam3);
if(!func_545(iParam0)) num=num + func_543(iParam0, func_111() + 1, -1, iParam2);
if(func_542(iParam0)) num=num + iParam2;
return num;
}
BOOL func_542(int iParam0) // Position - 0x13FF8{
switch (iParam0){
case 0:
case 12:
case 6:
case 14:
case 15:
case 16:
case 17:
case 7:
return true;
default:
}
return false;
}

int func_543(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1403D{
int num;
if(iParam3 > 0) return iParam3;
if(func_544(iParam0)){
if(iParam2 <=Global_262145.f_21683){
num=1;
if(iParam0==15) num=2;
}elseif(iParam2 <=Global_262145.f_21684){
num=2;
if(iParam0==18) num=1;
}else{
num=3;
if(iParam0==18) num=2;
elseif(iParam0==19 || iParam0==2) num=4;
}}elseif(iParam0==8){
if(iParam1 < 4) num=1;
else num=2;
}elseif(iParam0==0 || iParam0==20){
num=1;
}elseif(func_545(iParam0)){
if(iParam1 < Global_262145.f_21643) num=1;
else num=2;
}else{
num=iParam1;
}
if(num==0) num=1;
return num;
}
BOOL func_544(int iParam0) // Position - 0x1411A{
switch (iParam0){
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
return true;
default:
}
return false;
}
BOOL func_545(int iParam0) // Position - 0x14152{
switch (iParam0){
case 0:
case 3:
case 6:
case 7:
case 10:
case 11:
case 12:
case 14:
case 15:
case 16:
case 17:
case 19:
case 18:
return true;
default:
}
return false;
}

int func_546(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x141B4{
switch (iParam0){
case 0:
return 0;
case 1:
switch (iParam1){
case 0:
return 3;
case 1:
return 6;
case 2:
return 8;
default:
break;
}
break;
case 2:
switch (iParam1){
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 7:
return 0;
case 8:
return 0;
default:
break;
}
break;
case 3:
switch (iParam1){
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 0;
default:
break;
}
break;
case 4:
switch (iParam1){
case 14:
return 10;
case 15:
return 12;
case 13:
return 2;
default:
break;
}
break;
case 5:
switch (iParam1){
case 16:
return 0;
case 17:
return 0;
case 18:
return 0;
default:
break;
}
break;
case 6:
switch (iParam1){
case 19:
return 15;
case 20:
return 15;
case 21:
return 11;
default:
break;
}
break;
case 7:
switch (iParam1){
case 22:
return 10;
case 23:
return 7;
case 24:
return 6;
default:
break;
}
break;
case 8:
switch (iParam1){
case 25:
return 6 + (iParam2 * 2);
case 26:
return 7 + (iParam2 * 2);
default:
break;
}
break;
case 9:
switch (iParam1){
case 27:
return 9;
case 28:
return 10;
default:
break;
}
break;
case 10:
switch (iParam1){
case 29:
return 6;
case 30:
return 6;
case 31:
return 6;
default:
break;
}
break;
case 11:
switch (iParam1){
case 32:
return 8;
case 33:
return 8;
case 34:
return 8;
default:
break;
}
break;
case 12:
return 0;
case 13:
switch (iParam1){
case 35:
return 18;
case 36:
return 9;
case 37:
return 0;
default:
break;
}
break;
case 14:
switch (iParam3){
case 0:
return 9;
case 1:
return 16;
case 2:
return 6;
case 3:
return 3;
case 4:
return 9;
case 5:
return 6;
case 6:
return 6;
case 7:
return 3;
case 8:
return 3;
case 9:
return 3;
case 10:
return 0;
case 11:
return 9;
case 12:
return 3;
default:
break;
}
break;
case 15:
return iParam2;
case 16:
return 0;
case 17:
return 0;
case 18:
return 0;
case 19:
return 0;
case 20:
return 13;
}
return 0;
}

int func_547(int iParam0, int iParam1, int iParam2) // Position - 0x14500{
int num;
num=func_548(iParam0, iParam1);
if(iParam0==15) num=num + 1;
return num;
}

int func_548(int iParam0, int iParam1) // Position - 0x14521{
switch (iParam0){
case 6:
switch (iParam1){
case 18:
return 9;
case 19:
return 7;
case 20:
return 8;
default:
break;
}
break;
case 9:
switch (iParam1){
case 27:
return 1;
case 28:
return 1;
case 29:
return 1;
default:
break;
}
break;
case 10:
switch (iParam1){
case 21:
return 2;
case 22:
return 2;
case 23:
return 2;
default:
break;
}
break;
case 14:
switch (iParam1){
case 36:
return 8;
case 37:
return 7;
case 38:
return 8;
default:
break;
}
break;
case 2:
switch (iParam1){
case 39:
return 8;
case 40:
return 6;
case 41:
return 2;
default:
break;
}
break;
case 4:
switch (iParam1){
case 1:
return 5;
case 2:
return 5;
case 3:
return 5;
default:
break;
}
break;
case 17:
switch (iParam1){
case 42:
return 1;
case 43:
return 1;
case 44:
return 1;
default:
break;
}
break;
case 15:
switch (iParam1){
case 45:
return 12;
case 46:
return 12;
case 47:
return 12;
default:
break;
}
break;
case 16:
switch (iParam1){
case 48:
return 7;
case 49:
return 7;
case 50:
return 7;
default:
break;
}
break;
case 12:
return 3;
}
return 0;
}

int func_549(int iParam0) // Position - 0x146E1{
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 7:
return 0;
case 8:
return 0;
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 3;
case 13:
return 0;
case 14:
return 0;
case 15:
return 0;
case 16:
return 1;
case 17:
return 3;
case 19:
return 0;
case 18:
return 0;
default:
}
return 1;
}

int func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, Player plParam5) // Position - 0x147B9{
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 157:
return 4;
case 167:
return func_592(iParam1);
case 170:
return 2;
case 171:
return 0;
case 172:
return 5;
case 173:
return 14;
case 168:
return 8;
case 178:
case 188:
return func_588(iParam1, iParam3, iParam4);
case 225:
case 226:
return func_584(iParam1, iParam3, iParam4, false, false);
case 227:
return 0;
case 229:
case 230:
return func_578(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(plParam5), false, false, false);
case 233:
return func_572(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(plParam5), false, false, false);
case 190:
return 18;
case 191:
return 0;
case 192:
return func_571(iParam1, iParam3);
case 179:
return 0;
case 183:
return 5;
case 182:
return 14;
case 185:
return 24;
case 186:
return 13;
case 180:
return 6;
case 193:
return 6;
case 194:
return 0;
case 197:
return 4;
case 199:
return 0;
case 195:
return 20;
case 201:
return 0;
case 198:
return 8;
case 205:
return 1;
case 207:
return 8;
case 208:
return 2;
case 209:
return 6;
case 210:
return 0;
case 214:
return 5;
case 215:
return 11;
case 216:
return 8;
case 217:
return 24;
case 218:
return 23;
case 219:
return 1;
case 220:
return 4;
case 221:
return 4;
case 237:
case 250:
return func_570(iParam1, iParam3, iParam4);
case 238:
case 249:
return func_569(iParam1);
case 239:
return 4;
case 240:
return 11;
case 241:
return 3;
case 242:
return 5;
case 244:
return 4;
case 248:
return 1;
case 243:
return func_563(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(plParam5), false, -1, false, false);
case 158:
return func_557(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(plParam5), false, -1, false, false);
case 181:
return func_551(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(plParam5), false, -1, false, false);
default:
}
return 0;
}

int func_551(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x14AA8{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
}
if(!bParam5) num=num + func_556(iParam0, -1);
if(!bParam6)if(func_555(0, iParam1) !=-1) num=num + func_554(func_112(plParam2) + 1, iParam0, plParam2);
if(!bParam3)if(func_553(iParam0, iParam1)) num=num + func_552(iParam0, iParam1);
return num;
}

int func_552(int iParam0, int iParam1) // Position - 0x14B1E{
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}
BOOL func_553(int iParam0, int iParam1) // Position - 0x14B38{
return func_552(iParam0, iParam1) > 0;
}

int func_554(int iParam0, int iParam1, Player plParam2) // Position - 0x14B4A{
switch (iParam1){
case 2:
return 3;
default:
}
return 1;
}

int func_555(int iParam0, int iParam1) // Position - 0x14B64{
switch (iParam1){
case 0:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
default:
break;
}
break;
}
return -1;
}

int func_556(int iParam0, int iParam1) // Position - 0x14B98{
switch (iParam0){
case 2:
return 0;
default:
}
return 0;
}

int func_557(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x14BB2{
int num;
switch (iParam0){
case 0:
num=num + 1;
break;
case 24:
num=num + 1;
break;
case 10:
switch (iParam1){
case 30:
num=num + 4;
break;
case 31:
case 32:
num=num + 3;
break;
}
break;
case 33:
switch (iParam1){
case 89:
num=num + 1;
break;
case 90:
num=num + 2;
break;
}
break;
case 36:
num=num + 2;
break;
case 37:
num=num + 2;
break;
case 38:
num=num + 1;
break;
case 8:
num=num + 7;
break;
case 13:
switch (iParam1){
case 38:
num=num + 3;
break;
case 39:
num=num + 3;
break;
case 40:
num=num + 4;
break;
}
break;
case 16:
num=num + 12;
break;
case 35:
num=num + 4;
break;
case 4:
num=num + 16;
break;
case 46:
num=num + 1;
break;
case 9:
num=num + 7;
break;
case 14:
num=num + 7;
break;
case 17:
num=num + 7;
break;
case 47:
num=num + 2;
break;
case 11:
num=num + 3;
break;
case 18:
num=num + 4;
break;
case 6:
num=num + 11;
break;
case 48:
num=num + 2;
break;
case 44:
num=num + 2;
break;
case 21:
num=num + 8;
break;
case 22:
num=num + 3;
break;
case 7:
num=num + 7;
break;
case 15:
num=num + 1;
break;
case 2:
num=num + 1;
break;
case 34:
num=num + 5;
break;
case 27:
num=num + 9;
break;
case 26:
num=num + 3;
break;
case 31:
num=num + 1;
break;
case 3:
num=num + 21;
break;
case 12:
num=num + 20;
break;
case 41:
num=num + 11;
break;
case 49:
num=num + 3;
break;
case 29:
num=num + 1;
break;
case 5:
num=num + 3;
break;
case 50:
num=num + 4;
break;
case 23:
num=num + 4;
break;
case 20:
num=num + 3;
break;
case 32:
num=num + 0;
break;
case 51:
num=num + 4;
break;
case 52:
num=num + 6;
break;
case 39:
num=num + 2;
break;
case 40:
num=num + 1;
break;
case 25:
num=num + 3;
break;
}
if(!bParam5) num=num + func_562(iParam0, -1);
if(!bParam6)if(func_561(0, iParam1) !=-1) num=num + func_560(func_112(plParam2) + 1, iParam0, plParam2);
if(!bParam3)if(func_559(iParam0, iParam1)) num=num + func_558(iParam0, iParam1);
return num;
}

int func_558(int iParam0, int iParam1) // Position - 0x14F3D{
switch (iParam0){
case 0:
case 13:
case 18:
case 34:
case 27:
case 49:
case 48:
case 6:
case 50:
case 7:
case 16:
case 47:
case 5:
case 25:
case 26:
case 22:
case 11:
case 17:
case 14:
return 2;
default:
}
return 0;
}
BOOL func_559(int iParam0, int iParam1) // Position - 0x14FC3{
return func_558(iParam0, iParam1) > 0;
}

int func_560(int iParam0, int iParam1, Player plParam2) // Position - 0x14FD5{
var unk;
unk=-1;
unk.f_1=-1;
unk.f_2=-1;
switch (iParam1){
case 43:
return 3;
case 17:
case 18:
case 15:
return 2;
case 12:
case 13:
if(plParam2 !=_INVALID_PLAYER_INDEX())if(_IS_PLAYER_IN_AN_ORGANIZATION(plParam2, true)) unk={
func_505(plParam2) 
};
else return 4;
if(unk.f_1==4) return 4;
else return 2;
break;
case 53:
iParam0==1;
break;
}
return 1;
}

int func_561(int iParam0, int iParam1) // Position - 0x1506D{
switch (iParam1){
case 96:
case 97:
case 98:
case 108:
case 109:
case 110:
case 118:
case 119:
case 120:
case 105:
case 106:
case 107:
return 0;
case 66:
case 67:
case 68:
case 30:
case 31:
case 32:
case 121:
case 122:
case 123:
return 1;
case 93:
case 94:
case 95:
return 3;
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
case 116:
case 117:
return 2;
case 20:
return 9;
case 21:
return 5;
case 27:
case 28:
case 29:
return 7;
case 114:
case 115:
return iParam0;
case 46:
case 47:
case 48:
switch (iParam0){
case 0:
return 2;
case 1:
return 3;
case 2:
return 4;
case 3:
return 5;
default:
break;
}
break;
case 38:
case 39:
case 40:
switch (iParam0){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
case 3:
return 6;
default:
break;
}
break;
case 41:
case 42:
switch (iParam0){
case 0:
return 5;
case 1:
return 6;
default:
break;
}
break;
case 49:
case 50:
switch (iParam0){
case 0:
return 7;
case 1:
return 8;
default:
break;
}
break;
case 33:
case 34:
case 35:
switch (iParam0){
case 0:
case 1:
return 3;
default:
break;
}
break;
case 51:
case 52:
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
default:
break;
}
break;
case 43:
case 44:
case 45:
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
default:
break;
}
break;
case 36:
case 37:
switch (iParam0){
case 0:
return 20;
case 1:
return 21;
case 2:
return 22;
case 3:
return 23;
default:
break;
}
break;
case 17:
case 18:
case 19:
return 3;
case 131:
return 4;
}
return -1;
}

int func_562(int iParam0, int iParam1) // Position - 0x1534C{
switch (iParam0){
case 53:
return 0;
default:
}
return 0;
}

int func_563(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x15366{
int num;
switch (iParam0){
case 13:
num=num + 4;
break;
case 1:
num=num + 10;
break;
case 15:
num=num + 21;
break;
case 14:
num=num + 2;
break;
case 11:
switch (iParam1){
case 35:
num=num + 4;
break;
case 36:
num=num + 5;
break;
case 37:
num=num + 5;
break;
}
break;
case 5:
num=num + 3;
break;
case 6:
num=num + 2;
break;
case 0:
switch (iParam1){
case 0:
num=num + 5;
break;
case 1:
num=num + 5;
break;
}
break;
case 10:
switch (iParam1){
case 31:
num=num + 2;
break;
case 32:
num=num + 1;
break;
case 33:
num=num + 2;
break;
case 34:
num=num + 2;
break;
}
break;
case 12:
num=num + 3;
break;
case 9:
switch (iParam1){
case 28:
switch (iParam4){
case 0:
num=num + 3;
break;
case 1:
num=num + 4;
break;
case 2:
num=num + 3;
break;
}
break;
case 29:
switch (iParam4){
case 0:
num=num + 4;
break;
case 1:
num=num + 3;
break;
case 2:
num=num + 3;
break;
}
break;
case 30:
switch (iParam4){
case 0:
num=num + 3;
break;
case 1:
num=num + 3;
break;
case 2:
num=num + 3;
break;
}
break;
}
break;
case 3:
num=num + 6;
break;
case 4:
switch (iParam1){
case 12:
num=num + 7;
break;
case 13:
num=num + 10;
break;
case 14:
num=num + 8;
break;
}
break;
case 2:
num=num + 3;
break;
case 8:
num=num + 0;
break;
case 7:
num=num + 1;
break;
}
if(!bParam5){
if(func_509(iParam0)) num=num + func_508(iParam0, plParam2);
num=num + func_568(iParam0, -1);
}
if(!bParam6)if(func_567(0, iParam1) !=-1) num=num + func_566(func_112(plParam2) + 1, iParam0);
if(!bParam3)if(func_565(iParam0, iParam1)) num=num + func_564(iParam0, iParam1);
return num;
}

int func_564(int iParam0, int iParam1) // Position - 0x15641{
switch (iParam0){
case 4:
case 9:
case 8:
return 2;
default:
}
switch (iParam1){
case 37:
return 2;
default:
}
return 0;
}
BOOL func_565(int iParam0, int iParam1) // Position - 0x15678{
return func_564(iParam0, iParam1) > 0;
}

int func_566(int iParam0, int iParam1) // Position - 0x1568A{
switch (iParam1){
case 6:
if(iParam0==1) return 1;
else return 2;
break;
}
return 1;
}

int func_567(int iParam0, int iParam1) // Position - 0x156B4{
switch (iParam1){
case 46:
case 47:
case 48:
switch (iParam0){
case 0:
return 20;
default:
break;
}
break;
case 35:
case 36:
case 37:
return 0;
case 2:
case 3:
case 4:
case 5:
return 0;
case 28:
case 29:
case 30:
return 0;
case 18:
case 19:
case 20:
case 21:
switch (iParam0){
case 0:
return 2;
case 1:
return 3;
default:
break;
}
break;
case 31:
case 32:
case 33:
case 34:
return 0;
case 38:
case 39:
case 40:
return 0;
case 12:
return 6;
case 13:
return 9;
case 14:
return 7;
case 22:
case 23:
case 24:
return 0;
case 25:
case 26:
case 27:
return 0;
}
return -1;
}

int func_568(int iParam0, int iParam1) // Position - 0x157E6{
switch (iParam0){
case 16:
return 0;
default:
}
return 0;
}

int func_569(int iParam0) // Position - 0x15800{
switch (iParam0){
case 0:
return 5;
case 1:
return 4;
case 2:
return 6;
case 3:
return 1;
case 4:
return 3;
case 5:
return 4;
default:
}
return 0;
}

int func_570(int iParam0, int iParam1, int iParam2) // Position - 0x1584C{
int num;
switch (iParam0){
case 12:
switch (iParam1){
case 80:
num=num + 1;
break;
case 81:
num=num + 1;
break;
case 82:
num=num + 1;
break;
}
break;
case 22:
num=num + 4;
break;
case 18:
num=num + 4;
break;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
num=num + 3;
break;
}
break;
case 11:
switch (iParam1){
case 77:
case 78:
case 79:
num=num + 2;
break;
}
break;
case 15:
num=num + 1;
break;
case 23:
num=num + 1;
break;
case 20:
num=num + 4;
break;
case 17:
num=num + 1;
break;
case 19:
num=num + 1;
break;
case 16:
num=num + 1;
break;
case 3:
num=num + 8;
break;
case 14:
num=num + 1;
break;
case 10:
num=num + 8;
break;
case 4:
case 24:
case 2:
num=num + 1;
break;
case 1:
num=num + 5;
break;
case 5:
num=num + 3;
break;
case 0:
num=num + 3;
break;
}
if(func_513(iParam0)) num=num + iParam2;
return num;
}

int func_571(int iParam0, int iParam1) // Position - 0x159ED{
int num;
switch (iParam0){
case 20:
num=num + 0;
break;
case 0:
switch (iParam1){
case 1:
num=num + 7;
break;
case 2:
num=num + 6;
break;
case 3:
num=num + 4;
break;
case 4:
num=num + 2;
break;
case 5:
num=num + 3;
break;
case 6:
num=num + 2;
break;
}
break;
case 1:
switch (iParam1){
case 7:
num=num + 4;
break;
case 8:
num=num + 4;
break;
case 9:
num=num + 2;
break;
case 10:
num=num + 2;
break;
case 11:
num=num + 2;
break;
case 12:
num=num + 4;
break;
}
break;
case 2:
switch (iParam1){
case 13:
num=num + 2;
break;
case 14:
num=num + 4;
break;
case 15:
num=num + 6;
break;
case 16:
num=num + 3;
break;
case 17:
num=num + 3;
break;
case 18:
num=num + 2;
break;
}
break;
case 4:
switch (iParam1){
case 19:
num=num + 5;
break;
case 20:
num=num + 4;
break;
case 21:
num=num + 6;
break;
case 22:
num=num + 2;
break;
case 23:
num=num + 4;
break;
case 24:
num=num + 5;
break;
}
break;
case 6:
switch (iParam1){
case 19:
num=num + 5;
break;
case 20:
num=num + 4;
break;
case 21:
num=num + 6;
break;
case 22:
num=num + 2;
break;
case 23:
num=num + 4;
break;
case 24:
num=num + 5;
break;
}
break;
case 5:
switch (iParam1){
case 31:
num=num + 5;
break;
case 32:
num=num + 2;
break;
case 33:
num=num + 3;
break;
case 34:
num=num + 5;
break;
case 35:
num=num + 5;
break;
case 36:
num=num + 5;
break;
}
break;
case 9:
switch (iParam1){
case 68:
num=num + 0;
break;
case 69:
num=num + 0;
break;
case 70:
num=num + 0;
break;
case 71:
num=num + 0;
break;
case 72:
num=num + 0;
break;
case 73:
num=num + 0;
break;
}
break;
case 3:
switch (iParam1){
case 74:
num=num + 1;
break;
case 75:
num=num + 1;
break;
case 76:
num=num + 1;
break;
case 77:
num=num + 1;
break;
}
break;
case 10:
switch (iParam1){
case 78:
num=num + 0;
break;
case 79:
num=num + 0;
break;
case 80:
num=num + 0;
break;
case 81:
num=num + 0;
break;
case 82:
num=num + 0;
break;
case 83:
num=num + 0;
break;
case 84:
num=num + 0;
break;
}
break;
case 7:
num=num + 4;
break;
case 8:
switch (iParam1){
case 62:
num=num + 6;
break;
case 63:
num=num + 6;
break;
case 64:
num=num + 6;
break;
case 65:
num=num + 6;
break;
case 66:
num=num + 6;
break;
case 67:
num=num + 6;
break;
}
break;
case 11:
switch (iParam1){
case 85:
num=num + 0;
break;
case 86:
num=num + 0;
break;
case 87:
num=num + 0;
break;
case 88:
num=num + 0;
break;
case 89:
num=num + 0;
break;
}
break;
case 12:
switch (iParam1){
case 90:
num=num + 2;
break;
case 91:
num=num + 2;
break;
case 92:
num=num + 2;
break;
case 93:
num=num + 2;
break;
case 94:
num=num + 2;
break;
}
break;
case 13:
switch (iParam1){
case 37:
num=num + 3;
break;
}
break;
case 14:
switch (iParam1){
case 38:
num=num + 4;
break;
case 39:
num=num + 4;
break;
case 40:
num=num + 4;
break;
case 41:
num=num + 4;
break;
}
break;
case 15:
num=num + 0;
break;
case 16:
num=num + 0;
break;
case 17:
num=num + 0;
break;
case 18:
num=num + 0;
break;
case 19:
num=num + 0;
break;
default:
num=num + 0;
break;
}
if(func_520(iParam0) && iParam0 !=7 || iParam0==12) num=num + func_516(iParam0, func_111() + 1);
return num;
}

int func_572(int iParam0, int iParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x15FD4{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
num=num + 5;
break;
case 2:
num=num + 2;
break;
case 3:
num=num + 1;
break;
case 4:
num=num + 3;
break;
case 5:
num=num + 2;
break;
case 8:
num=num + 3;
break;
case 6:
num=num + 1;
break;
case 12:
num=num + 2;
break;
case 7:
num=num + 6;
break;
case 9:
num=num + 0;
break;
case 11:
num=num + 0;
break;
case 13:
num=num + 2;
break;
case 10:
num=num + 4;
break;
}
if(!bParam5){
if(func_527(iParam0))if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_524(iParam0, func_112(plParam3) + 1, plParam3, -1, iParam2);
if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_577(iParam0, func_112(plParam3) + 1);
}
if(!bParam6)if(func_576(0, iParam1) !=-1)if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_575(func_112(plParam3) + 1, iParam0);
if(!bParam4)if(func_574(iParam0)) num=num + func_573(iParam0);
return num;
}

int func_573(int iParam0) // Position - 0x1614A{
switch (iParam0){
case 0:
case 2:
case 8:
case 1:
case 12:
case 10:
case 11:
case 13:
return 2;
default:
}
return 0;
}
BOOL func_574(int iParam0) // Position - 0x1618E{
return func_573(iParam0) > 0;
}

int func_575(int iParam0, int iParam1) // Position - 0x1619E{
return 2;
}

int func_576(int iParam0, int iParam1) // Position - 0x161A7{
switch (iParam1){
case 136:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
break;
}
break;
}
return -1;
}

int func_577(int iParam0, int iParam1) // Position - 0x161EF{
int num;
switch (iParam0){
case 0:
return 0;
case 8:
if(iParam1 > 4) return 4;
return iParam1;
case 1:
num=_MPCHAR_STAT_GET_INT(MP_STAT_AT_FLOW_VEHICLE_BS, -1, 0);
if(IS_BIT_SET(num, 7)){
if(iParam1 > 4) return 4;
return iParam1;
}else{
return 0;
}
break;
}
return 0;
}

int func_578(int iParam0, int iParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1624F{
int num;
switch (iParam0){
case 11:
num=num + 9;
break;
case 1:
num=num + 0;
break;
case 7:
num=num + 10;
break;
case 2:
num=num + 12;
break;
case 4:
num=num + 10;
break;
case 8:
num=num + 1;
break;
case 5:
num=num + 2;
break;
case 12:
switch (iParam1){
case 0:
num=num + 1;
break;
case 1:
num=num + 1;
break;
case 2:
num=num + 0;
break;
}
break;
case 14:
switch (iParam1){
case 3:
num=num + 4;
break;
case 4:
num=num + 2;
break;
case 5:
num=num + 5;
break;
}
break;
case 3:
if(iParam2 >=4) num=num + 10;
elseif(iParam2==3) num=num + 8;
elseif(iParam2==2) num=num + 7;
elseif(iParam2==1) num=num + 6;
break;
case 10:
switch (iParam1){
case 34:
num=num + 1;
break;
}
break;
case 9:
switch (iParam1){
case 6:
num=num + 1;
break;
case 7:
num=num + 4;
break;
case 8:
num=num + 2;
break;
}
break;
case 0:
if(iParam2 >=3) num=num + 2;
else num=num + 1;
break;
case 23:
num=num + iParam2;
break;
case 20:
num=num + 5;
break;
case 22:
num=num + (5 * iParam2);
break;
case 25:
num=num + iParam2;
break;
case 24:
num=num + (3 * iParam2);
break;
case 16:
num=num + (5 * iParam2);
break;
case 17:
num=num + 5;
break;
case 26:
num=num + 1;
break;
}
if(!bParam5){
if(func_539(iParam0))if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_531(iParam0, func_112(plParam3) + 1, plParam3, -1, iParam2);
if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_583(iParam0, func_112(plParam3) + 1);
}
if(!bParam6)if(func_582(0, iParam1) !=-1)if(plParam3 !=_INVALID_PLAYER_INDEX()) num=num + func_581(func_112(plParam3) + 1, iParam0);
if(!bParam4)if(func_580(iParam0)) num=num + func_579(iParam0);
return num;
}

int func_579(int iParam0) // Position - 0x16515{
switch (iParam0){
case 12:
case 11:
case 1:
case 2:
case 14:
case 4:
case 10:
case 7:
case 3:
case 8:
case 0:
case 5:
return 2;
case 21:
case 16:
case 17:
return 2;
default:
}
return 0;
}
BOOL func_580(int iParam0) // Position - 0x16587{
return func_579(iParam0) > 0;
}

int func_581(int iParam0, int iParam1) // Position - 0x16597{
switch (iParam0){
case 1:
if(func_534(iParam1)) return 1;
else return 1;
break;
case 2:
if(func_534(iParam1)) return 1;
else return 1;
break;
case 3:
if(func_534(iParam1)) return 2;
else return 2;
break;
case 4:
if(func_534(iParam1)) return 2;
else return 2;
break;
case 5:
if(func_534(iParam1)) return 2;
else return 2;
break;
case 6:
if(func_534(iParam1)) return 2;
else return 2;
break;
case 7:
if(func_534(iParam1)) return 2;
else return 2;
break;
case 8:
if(func_534(iParam1)) return 2;
else return 2;
break;
}
return 1;
}

int func_582(int iParam0, int iParam1) // Position - 0x1668F{
switch (iParam1){
case 0:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
break;
}
break;
case 1:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
break;
}
break;
case 2:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
break;
}
break;
case 19:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
break;
}
break;
case 20:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
break;
}
break;
case 21:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
break;
}
break;
case 6:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
break;
}
break;
case 7:
switch (iParam0){
case 0:
return 4;
case 1:
return 4;
case 2:
return 5;
case 3:
return 5;
default:
break;
}
break;
case 8:
switch (iParam0){
case 0:
return 2;
case 1:
return 2;
case 2:
return 3;
case 3:
return 3;
default:
break;
}
break;
case 48:
case 49:
case 50:
switch (iParam0){
case 0:
return 2;
case 1:
return 2;
case 2:
return 3;
case 3:
return 3;
default:
break;
}
break;
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
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
break;
}
break;
case 28:
case 29:
case 30:
switch (iParam0){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
case 3:
return 9;
default:
break;
}
break;
case 43:
case 44:
case 45:
case 46:
case 47:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
break;
}
break;
case 40:
case 41:
case 42:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
default:
break;
}
break;
}
return -1;
}

int func_583(int iParam0, int iParam1) // Position - 0x16A2F{
switch (iParam0){
case 1:
if(iParam1 > 4) return 2;
return 1;
case 14:
if(iParam1 > 3) return 2;
return 1;
case 7:
if(iParam1 > 4) return 4;
return iParam1;
case 2:
case 4:
case 3:
if(iParam1 > 4) return 4;
return iParam1;
case 10:
if(iParam1 > 4) return 2;
return 1;
case 9:
return 1;
case 0:
if(iParam1 > 1) return 2;
return 1;
case 8:
if(iParam1 > 3) return 2;
return 1;
case 5:
if(iParam1 > 2) return 2;
return 1;
case 13:
if(iParam1 > 4) return 4;
return iParam1;
case 11:
if(iParam1 > 2) return 2;
return 1;
default:
}
return SYSTEM::CEIL((float)iParam1 / 2f);
}

int func_584(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16B28{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
switch (iParam1){
case 0:
num=num + 3;
break;
case 1:
num=num + 3;
break;
case 2:
num=num + 3;
break;
}
break;
case 2:
if(iParam2 >=4) num=num + iParam2 + 2;
else num=num + 5;
break;
case 3:
switch (iParam1){
case 9:
num=num + 3;
break;
case 10:
num=num + 3;
break;
case 11:
num=num + 2;
break;
case 12:
num=num + 2;
break;
}
break;
case 4:
switch (iParam1){
case 14:
num=num + 2;
break;
case 15:
num=num + 4;
break;
case 13:
num=num + 2;
break;
}
break;
case 5:
num=num + 4;
break;
case 6:
switch (iParam1){
case 19:
num=num + 5;
break;
case 20:
num=num + 5;
break;
case 21:
num=num + 5;
break;
}
break;
case 7:
switch (iParam1){
case 22:
num=num + 4;
break;
case 23:
num=num + 3;
break;
case 24:
num=num + 3;
break;
}
if(func_543(iParam0, func_111() + 1, -1, iParam2)==1) num=num + 1;
break;
case 8:
switch (iParam1){
case 25:
num=num + 5;
break;
case 26:
num=num + 5;
break;
}
break;
case 9:
switch (iParam1){
case 27:
num=num + 2;
break;
case 28:
num=num + 2;
break;
}
break;
case 10:
switch (iParam1){
case 29:
num=num + 4;
break;
case 30:
num=num + 4;
break;
case 31:
num=num + 4;
break;
}
break;
case 11:
switch (iParam1){
case 32:
num=num + 2;
break;
case 33:
num=num + 2;
break;
case 34:
num=num + 2;
break;
}
break;
case 12:
num=num + 0;
break;
case 13:
switch (iParam1){
case 35:
num=num + 3;
break;
case 36:
num=num + 3;
break;
case 37:
num=num + 2;
break;
}
break;
case 14:
num=num + 8;
break;
case 15:
num=num + 0;
break;
case 16:
num=num + 0;
break;
case 17:
num=num + 0;
break;
case 19:
num=num + 0;
break;
case 18:
num=num + iParam2;
break;
case 20:
num=num + 5;
break;
}
if(!bParam4){
if(func_545(iParam0)) num=num + func_543(iParam0, func_111() + 1, -1, iParam2);
num=num + func_587(iParam0, func_111() + 1);
}
if(!bParam3)if(func_586(iParam0)) num=num + func_585(iParam0);
return num;
}

int func_585(int iParam0) // Position - 0x16EAB{
switch (iParam0){
case 1:
case 2:
case 4:
case 5:
case 6:
case 7:
case 9:
case 10:
case 11:
case 12:
case 13:
case 15:
case 16:
case 17:
case 19:
case 8:
return 2;
default:
}
return 0;
}
BOOL func_586(int iParam0) // Position - 0x16F1F{
return func_585(iParam0) > 0;
}

int func_587(int iParam0, int iParam1) // Position - 0x16F2F{
switch (iParam0){
case 2:
if(iParam1==1) return 1;
return SYSTEM::FLOOR((float)iParam1 / 1.5f);
case 5:
if(iParam1==1) return 1;
return SYSTEM::FLOOR((float)iParam1 / 2f);
default:
}
return 0;
}

int func_588(int iParam0, int iParam1, int iParam2) // Position - 0x16F7B{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
num=num + 0;
break;
case 7:
num=num + 0;
break;
case 8:
num=num + 0;
break;
case 5:
num=num + 0;
break;
case 11:
num=num + 3;
break;
case 13:
num=num + 0;
break;
case 4:
switch (iParam1){
case 1:
num=num + 2;
break;
case 2:
num=num + 2;
break;
case 3:
num=num + 2;
break;
}
break;
case 6:
switch (iParam1){
case 18:
num=num + 2;
break;
case 19:
num=num + 2;
break;
case 20:
num=num + 2;
break;
}
break;
case 10:
switch (iParam1){
case 21:
num=num + 7;
break;
case 22:
num=num + 7;
break;
case 23:
num=num + 7;
break;
}
break;
case 9:
switch (iParam1){
case 27:
num=num + 0;
break;
case 28:
num=num + 0;
break;
case 29:
num=num + 0;
break;
}
break;
case 3:
switch (iParam1){
case 30:
num=num + 2;
break;
case 31:
num=num + 2;
break;
case 32:
num=num + 2;
break;
}
break;
case 14:
switch (iParam1){
case 36:
num=num + 7;
break;
case 37:
num=num + 7;
break;
case 38:
num=num + 7;
break;
}
break;
case 2:
switch (iParam1){
case 39:
num=num + 4;
break;
case 40:
num=num + 4;
break;
case 41:
num=num + 6;
break;
}
break;
case 17:
switch (iParam1){
case 42:
num=num + 2;
break;
case 43:
num=num + 2;
break;
case 44:
num=num + 2;
break;
}
break;
case 15:
switch (iParam1){
case 45:
num=num + 6;
break;
case 46:
num=num + 6;
break;
case 47:
num=num + 6;
break;
}
break;
case 16:
switch (iParam1){
case 48:
num=num + 2;
break;
case 49:
num=num + 2;
break;
case 50:
num=num + 2;
break;
}
break;
case 12:
num=num + 11;
break;
}
num=num + func_591(iParam0, func_111() + 1, iParam2);
num=num + func_589(iParam0);
return num;
}

int func_589(int iParam0) // Position - 0x17284{
if(func_590(iParam0)) return 2;
return 0;
}
BOOL func_590(int iParam0) // Position - 0x1729A{
switch (iParam0){
case 7:
case 2:
case 9:
case 4:
case 17:
case 15:
case 16:
case 8:
case 10:
return true;
default:
}
return false;
}

int func_591(int iParam0, int iParam1, int iParam2) // Position - 0x172E4{
int num;
if(num==0)if(iParam0==8) num=iParam2;
else num=1;
if(num==0) num=1;
return num;
}

int func_592(int iParam0) // Position - 0x1730E{
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 0;
case 3:
return 3;
case 4:
return 8;
case 5:
return 3;
case 6:
return 1;
case 7:
return 1;
case 8:
return 6;
case 9:
return 6;
case 10:
return 3;
case 11:
return 3;
case 12:
return 2;
case 13:
return 1;
case 14:
return 3;
case 15:
return 5;
case 16:
return 6;
case 17:
return 2;
case 19:
return 4;
case 18:
return 5;
default:
}
return 2;
}

int func_593(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x173E7{
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 167:
return func_620(iParam1);
case 168:
return 12;
case 170:
return 4;
case 171:
return 0;
case 172:
return 0;
case 173:
return 4;
case 178:
case 188:
return func_617(iParam1, iParam2, iParam3);
case 225:
case 226:
return func_614(iParam1, iParam2, iParam3, false);
case 227:
return 0;
case 229:
case 230:
return func_611(iParam1, iParam2, iParam3, false);
case 233:
return func_608(iParam1, iParam2, iParam3, false);
case 190:
return 20;
case 191:
return 4;
case 192:
return func_607(iParam1, iParam2);
case 179:
return 0;
case 183:
return 15;
case 182:
return 20;
case 185:
return 21;
case 186:
return 36;
case 180:
return 10;
case 193:
return 10;
case 194:
return 0;
case 197:
return 12;
case 199:
return 6;
case 195:
return 15;
case 201:
return 0;
case 198:
return 18;
case 205:
return 1;
case 207:
return 24;
case 208:
return 14;
case 209:
return 11;
case 210:
return 0;
case 214:
return 12;
case 215:
return 20;
case 216:
return 20;
case 217:
return func_606();
case 218:
return func_605();
case 219:
return 0;
case 220:
return 0;
case 221:
return 0;
case 237:
case 250:
return func_604(iParam1, iParam2, iParam3);
case 238:
case 249:
return func_603(iParam1, iParam2);
case 239:
return 6;
case 240:
return 11;
case 241:
return 14;
case 242:
return 14;
case 244:
return 9;
case 248:
return 10;
case 243:
return func_600(iParam1, iParam2, false, -1);
case 158:
return func_597(iParam1, iParam2, false, -1);
case 181:
return func_594(iParam1, iParam2, false, -1);
default:
}
return 0;
}

int func_594(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x176AF{
int num;
switch (iParam0){
case 2:
num=num + 6;
break;
}
if(!bParam2)if(func_553(iParam0, iParam1)) num=num + func_595(iParam0, iParam1);
return num;
}

int func_595(int iParam0, int iParam1) // Position - 0x176ED{
if(func_553(iParam0, iParam1)) return func_552(iParam0, iParam1) + func_596(iParam0, iParam1);
return 0;
}

int func_596(int iParam0, int iParam1) // Position - 0x17715{
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}

int func_597(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1772F{
int num;
switch (iParam0){
case 0:
num=num + 6;
break;
case 24:
num=num + 2;
break;
case 10:
switch (iParam1){
case 30:
num=num + 12;
break;
case 31:
case 32:
num=num + 10;
break;
}
break;
case 33:
switch (iParam1){
case 88:
num=num + 10;
break;
case 89:
num=num + 9;
break;
case 90:
num=num + 10;
break;
}
break;
case 36:
num=num + 9;
break;
case 43:
num=num + 6;
break;
case 38:
num=num + 6;
break;
case 40:
num=num + 6;
break;
case 8:
num=num + 16;
break;
case 16:
num=num + 14;
break;
case 35:
num=num + 13;
break;
case 4:
num=num + 32;
break;
case 45:
num=num + 2;
break;
case 46:
num=num + 9;
break;
case 9:
num=num + 15;
break;
case 14:
num=num + 16;
break;
case 17:
num=num + 14;
break;
case 47:
num=num + 13;
break;
case 11:
num=num + 11;
break;
case 18:
num=num + 24;
break;
case 6:
num=num + 14;
break;
case 48:
num=num + 15;
break;
case 44:
num=num + 9;
break;
case 21:
num=num + 20;
break;
case 22:
num=num + 14;
break;
case 7:
num=num + 22;
break;
case 15:
num=num + 10;
break;
case 2:
num=num + 2;
break;
case 34:
num=num + 18;
break;
case 27:
num=num + 16;
break;
case 26:
num=num + 10;
break;
case 23:
num=num + 10;
break;
case 31:
num=num + 20;
break;
case 3:
num=num + 14;
break;
case 12:
num=num + 7;
break;
case 41:
num=num + 10;
break;
case 49:
num=num + 30;
break;
case 19:
num=num + 15;
break;
case 5:
num=num + 7;
break;
case 30:
num=num + 1;
break;
case 13:
num=num + 20;
break;
case 29:
num=num + 9;
break;
case 50:
num=num + 24;
break;
case 20:
num=num + 26;
break;
case 32:
num=num + 30;
break;
case 28:
num=num + 3;
break;
case 42:
num=num + 13;
break;
case 52:
num=num + 12;
break;
case 39:
num=num + 5;
break;
case 37:
num=num + 6;
break;
case 25:
num=num + 6;
break;
case 51:
num=num + 20;
break;
}
if(!bParam2)if(func_559(iParam0, iParam1)) num=num + func_598(iParam0, iParam1);
return num;
}

int func_598(int iParam0, int iParam1) // Position - 0x17ABD{
if(func_559(iParam0, iParam1)) return func_558(iParam0, iParam1) + func_599(iParam0, iParam1);
return 0;
}

int func_599(int iParam0, int iParam1) // Position - 0x17AE5{
switch (iParam0){
case 0:
case 13:
case 18:
case 34:
case 49:
case 48:
case 7:
case 16:
case 5:
case 26:
case 22:
case 25:
case 11:
case 17:
case 14:
return 2;
case 6:
case 50:
case 47:
return 4;
case 27:
return 2;
default:
}
return 0;
}

int func_600(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x17B73{
int num;
switch (iParam0){
case 13:
num=num + 8;
break;
case 1:
switch (iParam1){
case 2:
num=num + 10;
break;
case 3:
num=num + 10;
break;
case 4:
num=num + 14;
break;
case 5:
num=num + 10;
break;
}
break;
case 15:
num=num + 20;
break;
case 14:
num=num + 19;
break;
case 11:
switch (iParam1){
case 35:
num=num + 6;
break;
case 36:
num=num + 7;
break;
case 37:
num=num + 17;
break;
}
break;
case 6:
num=num + 8;
break;
case 5:
num=num + 11;
break;
case 0:
num=num + 12;
break;
case 10:
switch (iParam1){
case 31:
num=num + 1;
break;
case 32:
num=num + 7;
break;
case 33:
num=num + 2;
break;
case 34:
num=num + 1;
break;
}
break;
case 12:
num=num + 30;
break;
case 9:
switch (iParam1){
case 28:
num=num + 10;
break;
case 29:
num=num + 8;
break;
case 30:
num=num + 9;
break;
}
break;
case 3:
num=num + 19;
break;
case 4:
switch (iParam1){
case 12:
num=num + 12;
break;
case 13:
num=num + 14;
break;
case 14:
num=num + 12;
break;
}
break;
case 2:
num=num + 12;
break;
case 8:
num=num + 7;
break;
case 7:
num=num + 1;
break;
}
if(!bParam2)if(func_565(iParam0, iParam1)) num=num + func_601(iParam0, iParam1);
return num;
}

int func_601(int iParam0, int iParam1) // Position - 0x17D96{
if(func_565(iParam0, iParam1)) return func_564(iParam0, iParam1) + func_602(iParam0, iParam1);
return 0;
}

int func_602(int iParam0, int iParam1) // Position - 0x17DBE{
switch (iParam0){
case 4:
case 9:
case 8:
return 2;
default:
}
switch (iParam1){
case 37:
return 2;
default:
}
return 0;
}

int func_603(int iParam0, int iParam1) // Position - 0x17DF5{
switch (iParam0){
case 0:
return 14;
case 1:
return 7;
case 2:
return 27;
case 3:
return 3;
case 4:
return 8;
case 5:
switch (iParam1){
case 0:
case 2:
return 11;
case 1:
return 9;
default:
break;
}
break;
}
return 0;
}

int func_604(int iParam0, int iParam1, int iParam2) // Position - 0x17E66{
int num;
switch (iParam0){
case 0:
switch (iParam1){
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
num=num + 19;
break;
}
break;
case 11:
switch (iParam1){
case 77:
case 78:
case 79:
num=num + 2;
break;
}
break;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
num=num + 9;
break;
}
break;
case 12:
switch (iParam1){
case 80:
case 81:
case 82:
num=num + 3;
break;
}
break;
case 22:
num=num + 8;
break;
case 15:
num=num + 1;
break;
case 23:
num=num + 3;
break;
case 20:
num=num + 12;
break;
case 18:
num=num + 20;
break;
case 17:
num=num + 9;
break;
case 19:
num=num + 1;
break;
case 3:
num=num + 5;
break;
case 14:
num=num + 1;
break;
case 10:
num=num + 17;
break;
case 4:
num=num + 3;
break;
case 1:
num=num + 30;
break;
case 2:
num=num + 4;
break;
case 5:
num=num + 16;
break;
}
return num;
}

int func_605() // Position - 0x18020{
int num;
num=32;
return num;
}

int func_606() // Position - 0x1802E{
int num;
num=8;
return num;
}

int func_607(int iParam0, int iParam1) // Position - 0x1803C{
int num;
switch (iParam0){
case 20:
num=num + 2;
break;
case 0:
switch (iParam1){
case 1:
num=num + 16;
break;
case 2:
num=num + 14;
break;
case 3:
num=num + 13;
break;
case 4:
num=num + 12;
break;
case 5:
num=num + 12;
break;
case 6:
num=num + 12;
break;
}
break;
case 1:
switch (iParam1){
case 7:
num=num + 12;
break;
case 8:
num=num + 12;
break;
case 9:
num=num + 12;
break;
case 10:
num=num + 12;
break;
case 11:
num=num + 12;
break;
case 12:
num=num + 12;
break;
}
break;
case 2:
switch (iParam1){
case 13:
num=num + 17;
break;
case 14:
num=num + 12;
break;
case 15:
num=num + 13;
break;
case 16:
num=num + 14;
break;
case 17:
num=num + 12;
break;
case 18:
num=num + 14;
break;
}
break;
case 4:
switch (iParam1){
case 19:
num=num + 14;
break;
case 20:
num=num + 14;
break;
case 21:
num=num + 14;
break;
case 22:
num=num + 14;
break;
case 23:
num=num + 14;
break;
case 24:
num=num + 14;
break;
}
break;
case 6:
switch (iParam1){
case 25:
num=num + 4;
break;
case 26:
num=num + 4;
break;
case 27:
num=num + 4;
break;
case 28:
num=num + 4;
break;
case 29:
num=num + 4;
break;
case 30:
num=num + 4;
break;
}
break;
case 5:
switch (iParam1){
case 31:
num=num + 13;
break;
case 32:
num=num + 13;
break;
case 33:
num=num + 13;
break;
case 34:
num=num + 13;
break;
case 35:
num=num + 13;
break;
case 36:
num=num + 13;
break;
}
break;
case 9:
switch (iParam1){
case 68:
num=num + 0;
break;
case 69:
num=num + 0;
break;
case 70:
num=num + 0;
break;
case 71:
num=num + 0;
break;
case 72:
num=num + 0;
break;
case 73:
num=num + 0;
break;
}
break;
case 3:
switch (iParam1){
case 74:
num=num + 10;
break;
case 75:
num=num + 10;
break;
case 76:
num=num + 10;
break;
case 77:
num=num + 10;
break;
}
break;
case 10:
switch (iParam1){
case 78:
num=num + 3;
break;
case 79:
num=num + 3;
break;
case 80:
num=num + 3;
break;
case 81:
num=num + 3;
break;
case 82:
num=num + 5;
break;
case 83:
num=num + 3;
break;
case 84:
num=num + 3;
break;
}
break;
case 7:
num=num + 8;
break;
case 8:
switch (iParam1){
case 62:
num=num + 8;
break;
case 63:
num=num + 8;
break;
case 64:
num=num + 8;
break;
case 65:
num=num + 8;
break;
case 66:
num=num + 8;
break;
case 67:
num=num + 8;
break;
}
break;
case 11:
switch (iParam1){
case 85:
num=num + 3;
break;
case 86:
num=num + 3;
break;
case 87:
num=num + 3;
break;
case 88:
num=num + 3;
break;
case 89:
num=num + 3;
break;
}
break;
case 12:
switch (iParam1){
case 90:
num=num + 2;
break;
case 91:
num=num + 2;
break;
case 92:
num=num + 2;
break;
case 93:
num=num + 2;
break;
case 94:
num=num + 2;
break;
}
break;
case 13:
switch (iParam1){
case 37:
num=num + 18;
break;
}
break;
case 14:
switch (iParam1){
case 38:
num=num + 8;
break;
case 39:
num=num + 8;
break;
case 40:
num=num + 8;
break;
case 41:
num=num + 8;
break;
}
break;
case 15:
num=num + 0;
break;
case 16:
num=num + 0;
break;
case 17:
num=num + 0;
break;
case 18:
num=num + 0;
break;
case 19:
num=num + 0;
break;
default:
num=num + 0;
break;
}
if(iParam0==12 || iParam0==9) num=num + func_516(iParam0, func_111() + 1);
return num;
}

int func_608(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x18619{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
num=num + 14;
break;
case 2:
num=num + 12;
break;
case 3:
num=num + 23;
break;
case 4:
num=num + 20;
break;
case 5:
num=num + 5;
break;
case 8:
num=num + 11;
break;
case 6:
num=num + 7;
break;
case 12:
num=num + 8;
break;
case 7:
num=num + 18;
break;
case 9:
num=num + 0;
break;
case 11:
num=num + 12;
break;
case 13:
num=num + 1;
break;
case 10:
num=num + 16;
break;
}
if(!bParam3)if(func_574(iParam0)) num=num + func_609(iParam0, iParam1);
return num;
}

int func_609(int iParam0, int iParam1) // Position - 0x18718{
if(func_574(iParam0)) return func_573(iParam0) + func_610(iParam0, iParam1);
return 0;
}

int func_610(int iParam0, int iParam1) // Position - 0x1873C{
switch (iParam0){
case 0:
return 6;
case 2:
case 12:
case 1:
case 11:
case 10:
return 2;
case 8:
return 4;
default:
}
return 0;
}

int func_611(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x18782{
int num;
switch (iParam0){
case 12:
num=num + 16;
break;
case 11:
num=num + 21;
break;
case 1:
num=num + 4;
break;
case 14:
num=num + 15;
break;
case 7:
num=num + 10;
break;
case 2:
num=num + 15;
break;
case 4:
num=num + 9;
break;
case 10:
num=num + 20;
break;
case 3:
num=num + 7;
break;
case 8:
num=num + 2;
break;
case 5:
num=num + 10;
break;
case 9:
switch (iParam1){
case 7:
num=num + 17;
break;
default:
num=num + 16;
break;
}
break;
case 0:
if(iParam2 >=3) num=num + 2;
else num=num + 1;
break;
case 23:
num=num + iParam2;
break;
case 20:
num=num + 10;
break;
case 22:
num=num + (5 * iParam2);
break;
case 25:
num=num + iParam2;
break;
case 24:
num=num + (3 * iParam2);
break;
case 26:
num=num + 2;
break;
}
if(!bParam3)if(func_580(iParam0)) num=num + func_612(iParam0, iParam1);
return num;
}

int func_612(int iParam0, int iParam1) // Position - 0x188FC{
if(func_580(iParam0)) return func_579(iParam0) + func_613(iParam0, iParam1);
return 0;
}

int func_613(int iParam0, int iParam1) // Position - 0x18920{
switch (iParam0){
case 11:
case 14:
case 2:
case 10:
case 5:
return 2;
case 1:
case 0:
return 4;
case 4:
return 1;
case 12:
switch (iParam1){
case 2:
return 2;
default:
break;
}
break;
case 21:
return 2;
case 17:
return 4;
}
return 0;
}

int func_614(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1899A{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
switch (iParam1){
case 0:
num=num + 18;
break;
case 1:
num=num + 18;
break;
case 2:
num=num + 18;
break;
}
break;
case 2:
if(iParam2 >=4) num=num + iParam2 + 2;
else num=num + 5;
break;
case 3:
switch (iParam1){
case 9:
num=num + 4;
break;
case 10:
num=num + 4;
break;
case 11:
num=num + 4;
break;
case 12:
num=num + 4;
break;
}
break;
case 4:
switch (iParam1){
case 13:
num=num + 20;
break;
case 14:
num=num + 20;
break;
case 15:
num=num + 20;
break;
}
break;
case 5:
num=num + 12;
break;
case 6:
switch (iParam1){
case 19:
num=num + 24;
break;
case 20:
num=num + 24;
break;
case 21:
num=num + 24;
break;
}
break;
case 7:
switch (iParam1){
case 22:
num=num + 12;
break;
case 23:
num=num + 12;
break;
case 24:
num=num + 12;
break;
}
break;
case 8:
switch (iParam1){
case 25:
num=num + 16;
break;
case 26:
num=num + 15;
break;
}
break;
case 9:
switch (iParam1){
case 27:
num=num + 25;
break;
case 28:
num=num + 25;
break;
}
break;
case 10:
switch (iParam1){
case 29:
num=num + 15;
break;
case 30:
num=num + 15;
break;
case 31:
num=num + 15;
break;
}
break;
case 11:
switch (iParam1){
case 32:
num=num + 12;
break;
case 33:
num=num + 12;
break;
case 34:
num=num + 12;
break;
}
break;
case 12:
num=num + 0;
break;
case 13:
switch (iParam1){
case 35:
num=num + 22;
break;
case 36:
num=num + 22;
break;
case 37:
num=num + 22;
break;
}
break;
case 14:
num=num + 16;
break;
case 15:
num=num + 0;
break;
case 16:
num=num + 0;
break;
case 17:
num=num + 0;
break;
case 18:
num=num + 0;
break;
case 19:
num=num + 0;
break;
case 20:
num=num + 22;
break;
}
if(!bParam3)if(func_586(iParam0)) num=num + func_615(iParam0);
return num;
}

int func_615(int iParam0) // Position - 0x18CCF{
if(func_586(iParam0)) return func_585(iParam0) + func_616(iParam0);
return 0;
}

int func_616(int iParam0) // Position - 0x18CF1{
switch (iParam0){
case 1:
case 2:
case 4:
case 6:
case 7:
case 9:
case 12:
case 13:
case 17:
case 11:
return 2;
case 15:
case 16:
case 19:
return 3;
case 10:
case 8:
case 5:
return 4;
default:
}
return 0;
}

int func_617(int iParam0, int iParam1, int iParam2) // Position - 0x18D6D{
int num;
switch (iParam0){
case 0:
num=num + 0;
break;
case 1:
num=num + 5;
break;
case 7:
num=num + 6;
break;
case 8:
num=num + 0;
break;
case 5:
num=num + 0;
break;
case 11:
num=num + 6;
break;
case 2:
num=num + 10;
break;
case 12:
num=num + 11;
break;
case 13:
num=num + 10;
break;
case 4:
switch (iParam1){
case 1:
num=num + 12;
break;
case 2:
num=num + 12;
break;
case 3:
num=num + 12;
break;
}
break;
case 6:
switch (iParam1){
case 18:
num=num + 8;
break;
case 19:
num=num + 8;
break;
case 20:
num=num + 8;
break;
}
break;
case 10:
switch (iParam1){
case 21:
num=num + 14;
break;
case 22:
num=num + 14;
break;
case 23:
num=num + 14;
break;
}
break;
case 9:
switch (iParam1){
case 27:
num=num + 14;
break;
case 28:
num=num + 14;
break;
case 29:
num=num + 14;
break;
}
break;
case 3:
switch (iParam1){
case 30:
num=num + 3;
break;
case 31:
num=num + 3;
break;
case 32:
num=num + 3;
break;
}
break;
case 14:
switch (iParam1){
case 36:
num=num + 18;
break;
case 37:
num=num + 18;
break;
case 38:
num=num + 18;
break;
}
break;
case 17:
switch (iParam1){
case 42:
num=num + 10;
break;
case 43:
num=num + 10;
break;
case 44:
num=num + 10;
break;
}
break;
case 15:
switch (iParam1){
case 45:
num=num + 17;
break;
case 46:
num=num + 17;
break;
case 47:
num=num + 17;
break;
}
break;
case 16:
switch (iParam1){
case 48:
num=num + 11;
break;
case 49:
num=num + 11;
break;
case 50:
num=num + 11;
break;
}
break;
}
num=num + func_618(iParam0);
return num;
}

int func_618(int iParam0) // Position - 0x19035{
if(func_590(iParam0)){
if(func_619(iParam0)) return 4;
return 2;
}
return 0;
}
BOOL func_619(int iParam0) // Position - 0x19058{
switch (iParam0){
case 7:
case 2:
case 9:
case 4:
case 17:
case 15:
case 16:
case 8:
case 10:
return true;
default:
}
return false;
}

int func_620(int iParam0) // Position - 0x190A2{
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 5;
case 4:
return 12;
case 5:
return 4;
case 6:
return 4;
case 7:
return 2;
case 8:
return 12;
case 9:
return 12;
case 10:
return 9;
case 11:
return 8;
case 12:
return 7;
case 13:
return 5;
case 14:
return 12;
case 15:
return 13;
case 16:
return 5;
case 17:
return 15;
case 19:
return 4;
case 18:
return 11;
default:
}
return 8;
}


void func_621(var uParam0, int iParam1) // Position - 0x19184{
if(uParam0->f_725.f_64) return;
switch (iParam1){
case 9:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}
break;
case 10:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}
break;
case 5:
if(uParam0->f_725.f_34 !=8){
uParam0->f_725.f_32=uParam0->f_725.f_34;
uParam0->f_725.f_33=uParam0->f_725.f_35;
uParam0->f_725.f_34=8;
uParam0->f_725.f_35=8;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==8){
uParam0->f_725.f_34=uParam0->f_725.f_32;
uParam0->f_725.f_35=uParam0->f_725.f_33;
func_210(uParam0, 1);
}
break;
}
return;
}


void func_622(var uParam0, int iParam1) // Position - 0x19306{
uParam0->f_794.f_4=iParam1;
return;
}


void func_623(var uParam0, int iParam1) // Position - 0x19317{
switch (iParam1){
case 1:
func_298(uParam0->f_714, 187);
switch (uParam0->f_812.f_1999){
case 0:
if(uParam0->f_794==7 || uParam0->f_794==8 || uParam0->f_794==9) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 1:
if(uParam0->f_794==10 || uParam0->f_794==11 || uParam0->f_794==12) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 2:
if(uParam0->f_794==13 || uParam0->f_794==14 || uParam0->f_794==15) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
}
break;
case 0:
func_298(uParam0->f_714, 188);
if(uParam0->f_794==1 || uParam0->f_794==2 || uParam0->f_794==3) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 2:
func_298(uParam0->f_714, 189);
if(uParam0->f_794==1 || uParam0->f_794==4 || uParam0->f_794==7 || uParam0->f_794==10 || uParam0->f_794==13) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 3:
func_298(uParam0->f_714, 190);
if(uParam0->f_794==3 || uParam0->f_794==6 || uParam0->f_794==9 || uParam0->f_794==12 || uParam0->f_794==15) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Left_Right_Photo_Change", func_159(), func_158(), false, 0, false);
break;
}
return;
}


void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x195B9{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x195F6{
return uParam0->f_1;
}


void func_626(var uParam0) // Position - 0x19602{
int num;
BOOL flag;
if(uParam0->f_812.f_2002==-1) return;
num=func_417(uParam0->f_794, uParam0->f_812.f_1999);
if(func_303(uParam0->f_812.f_2002, &flag, num, -1, uParam0->f_812.f_2004)){
if(flag){
switch (uParam0->f_812.f_2002){
case 0:
if(!func_658()){
func_637(uParam0, num);
}else{
uParam0->f_812.f_2002=6;
uParam0->f_812.f_2003=0;
}
break;
case 1:
func_633(uParam0);
break;
case 2:
func_633(uParam0);
break;
case 5:
func_633(uParam0);
break;
case 6:
func_637(uParam0, num);
func_627();
break;
case 10:
func_633(uParam0);
break;
case 8:
func_432(uParam0, true);
uParam0->f_812.f_2002=-1;
uParam0->f_812.f_2003=0;
uParam0->f_812.f_2004=0;
break;
}}else{
func_432(uParam0, true);
uParam0->f_812.f_2002=-1;
uParam0->f_812.f_2003=0;
uParam0->f_812.f_2004=0;
}}
return;
}


void func_627() // Position - 0x19729{
func_630(3);
func_629();
func_628();
return;
}


void func_628() // Position - 0x1973E{
func_630(5);
func_630(9);
func_630(10);
return;
}


void func_629() // Position - 0x19757{
func_630(4);
func_630(7);
func_630(8);
return;
}


void func_630(int iParam0) // Position - 0x1976F{
if(func_311(iParam0)){
_MPPLY_STAT_SET_INT(func_313(iParam0), 0);
MISC::SET_BIT(&Global_1944402, func_631(iParam0));
}
return;
}

int func_631(int iParam0) // Position - 0x19799{
switch (iParam0){
case 3:
return 0;
case 4:
return 1;
case 7:
return 2;
case 8:
return 3;
case 5:
return 4;
case 9:
return 5;
case 10:
return 6;
case 11:
return 7;
default:
}
return -1;
}


void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x197F9{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, true);
return;
}


void func_633(var uParam0) // Position - 0x19815{
MISC::SET_BIT(&(uParam0->f_2825), 1);
if(func_636(19)) func_635(19);
if(func_636(20)) func_634(20);
func_432(uParam0, true);
uParam0->f_812.f_2002=-1;
uParam0->f_812.f_2003=0;
uParam0->f_812.f_2004=0;
return;
}


void func_634(int iParam0) // Position - 0x19867{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::SET_BIT(&Global_2793044.f_5225.f_23[num], offset);
return;
}


void func_635(int iParam0) // Position - 0x19890{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::CLEAR_BIT(&Global_2793044.f_5225.f_23[num], offset);
return;
}
BOOL func_636(int iParam0) // Position - 0x198B9{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
return IS_BIT_SET(Global_2793044.f_5225.f_23[num], num2);
}


void func_637(var uParam0, int iParam1) // Position - 0x198DF{
int num;
if(_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()){
_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"), func_317(), &num, false, true, false);
Global_4535172[num /*85*/].f_9=iParam1;
}else{
MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(iParam1, func_317(), 0, 1);
}
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Pay", func_159(), func_158(), false, 0, false);
func_644(1, MP_STAT_GANGOPS_PREP_SKIP);
func_639(iParam1, true, false, true, true);
func_638(74);
if(iParam1==24){
if(func_636(19)) func_635(19);
func_634(20);
}elseif(!IS_BIT_SET(Global_2793044.f_1835, 22)){
if(!func_636(20)) func_634(19);
MISC::SET_BIT(&(Global_2793044.f_1835), 22);
}
func_210(uParam0, 1);
func_432(uParam0, true);
uParam0->f_812.f_2002=-1;
uParam0->f_812.f_2003=0;
uParam0->f_812.f_2004=0;
return;
}


void func_638(int iParam0) // Position - 0x199BA{
int i;
if(Global_262145.f_9036) return;
for (i=0;
i < 3;
i=i + 1){
if(Global_2359296[func_451() /*5568*/].f_681.f_4242[i /*3*/]==iParam0){
if(Global_1574742.f_1[i]==-1){
Global_1574742.f_1[i]=iParam0;
Global_1574742=1;
return;
}}}
return;
}


void func_639(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x19A1D{
int offset;
int address;
int address2;
int address3;
if(func_415(iParam0)){
offset=func_138(iParam0);
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FLOW_MISSION_PROG, -1, 0);
address2=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FLOW_BITSET_MISS0, -1, 0);
if(bParam1){
if(!IS_BIT_SET(address, offset)){
MISC::SET_BIT(&address, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FLOW_MISSION_PROG, address, -1, true, false);
if(!IS_BIT_SET(address2, offset)){
MISC::SET_BIT(&address2, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FLOW_BITSET_MISS0, address2, -1, true, false);
}}}elseif(IS_BIT_SET(address, offset)){
MISC::CLEAR_BIT(&address, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FLOW_MISSION_PROG, address, -1, true, false);
}
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_23=address;
}elseif(func_447(iParam0)){
offset=func_439(iParam0);
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FM_MISSION_PROG, -1, 0);
address2=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FM_BITSET_MISS0, -1, 0);
address3=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_FM_MISSION_SKIP, -1, 0);
if(bParam1){
if(!IS_BIT_SET(address, offset)){
MISC::SET_BIT(&address, offset);
if(bParam2) MISC::SET_BIT(&address, func_446(offset));
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FM_MISSION_PROG, address, -1, true, false);
if(bParam3){
MISC::SET_BIT(&address3, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FM_MISSION_SKIP, address3, -1, true, false);
}
if(!IS_BIT_SET(address2, offset)){
MISC::SET_BIT(&address2, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FM_BITSET_MISS0, address2, -1, true, false);
}}}elseif(IS_BIT_SET(address, offset)){
MISC::CLEAR_BIT(&address, offset);
MISC::CLEAR_BIT(&address, func_446(offset));
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FM_MISSION_PROG, address, -1, true, false);
if(IS_BIT_SET(address3, offset)){
MISC::CLEAR_BIT(&address3, offset);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_FM_MISSION_SKIP, address3, -1, true, false);
}}
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_24=address;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_25=address3;
if(func_643()==0 && !Global_1575060)if(bParam4) func_640(-1564914501, 28, false);
}
if(Global_1964005.f_812.f_2001==0) Global_1964005.f_812.f_2001=1;
return;
}


void func_640(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19C08{
int num;
if(func_642(iParam1, bParam2)){
num=func_641();
Global_2694418[num]=iParam1;
Global_2694429[num]=iParam0;
}
return;
}

int func_641() // Position - 0x19C35{
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
BOOL func_642(int iParam0, BOOL bParam1) // Position - 0x19C6A{
if(Global_1575048) return false;
if(iParam0==22) return true;
if(bParam1 || !Global_1575060 || iParam0==3 || iParam0==10 || iParam0==11 || iParam0==27 || iParam0==28 || iParam0==29 || iParam0==30) return true;
else return false;
return true;
}

int func_643() // Position - 0x19CF0{
return Global_32163;
}


void func_644(int iParam0, eMPStat empsParam1) // Position - 0x19CFB{
int num;
if(iParam0 <=0) return;
num=_MPCHAR_STAT_GET_INT(empsParam1, -1, 0);
_MPCHAR_STAT_SET_INT(empsParam1, num + iParam0, -1, true, false);
return;
}


void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x19D24{
int num;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) return;
num=1;
if(bParam4) num=4;
elseif(bParam3) num=2;
elseif(bParam5) num=8;
switch (hParam0){
case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
case joaat("SERVICE_SPEND_UTILITY_BILLS"):
case joaat("SERVICE_SPEND_PROSTITUTES"):
case joaat("SERVICE_SPEND_STRIP_CLUB"):
case joaat("SERVICE_SPEND_CINEMA"):
case joaat("SERVICE_SPEND_FAIRGROUND"):
case joaat("SERVICE_SPEND_LOTTERY"):
case joaat("SERVICE_SPEND_TELESCOPE"):
case joaat("SERVICE_SPEND_CALL_PLAYER"):
case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
case joaat("SERVICE_SPEND_CAR_REPAIR"):
case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
case joaat("SERVICE_SPEND_CAR_IMPOUND"):
case joaat("SERVICE_SPEND_CARWASH"):
case joaat("SERVICE_SPEND_HEALTHCARE"):
case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
case joaat("SERVICE_SPEND_ARREST_BAIL"):
case joaat("SERVICE_SPEND_CASH_DROP"):
case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
case joaat("SERVICE_SPEND_BETTING"):
case joaat("SERVICE_SPEND_AIRSTRIKE"):
case joaat("SERVICE_SPEND_AMMO_DROP"):
case joaat("SERVICE_SPEND_BACKUP_GANG"):
case joaat("SERVICE_SPEND_BACKUP_HELI"):
case joaat("SERVICE_SPEND_BOAT_PICKUP"):
case joaat("SERVICE_SPEND_BOUNTY"):
case joaat("SERVICE_SPEND_BULL_SHARK"):
case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
case joaat("SERVICE_SPEND_HELI_PICKUP"):
case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
case joaat("SERVICE_SPEND_HIRE_MUGGER"):
case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
case joaat("SERVICE_SPEND_PASSIVE"):
case joaat("SERVICE_SPEND_REQUEST_HEIST"):
case joaat("SERVICE_SPEND_REQUEST_JOB"):
case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
case joaat("SERVICE_SPEND_TAXI"):
case joaat("SERVICE_SPEND_BANK_INTEREST"):
case joaat("SERVICE_SPEND_CASH_GIFT"):
case joaat("SERVICE_SPEND_CASH_SHARED"):
case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
case joaat("SERVICE_SPEND_BOUNTY_DM"):
case joaat("SERVICE_SPEND_WAGER"):
case joaat("SERVICE_SPEND_PAY_BOSS"):
case joaat("SERVICE_SPEND_PAY_GOON"):
case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
case 2115896461:
case 797947947:
case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
case joaat("SERVICE_SPEND_JUKEBOX"):
case joaat("SERVICE_SPEND_BUSINESS"):
case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
if(iParam1 > 0 || Global_262145.f_28375) func_646(uParam2, -1135378931, 537254313, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
break;
case joaat("SERVICE_EARN_PICKUP"):
case joaat("SERVICE_EARN_JOBS"):
case joaat("SERVICE_EARN_BETTING"):
case joaat("SERVICE_EARN_LOTTERY"):
case joaat("SERVICE_EARN_CHALLENGE_WIN"):
case joaat("SERVICE_EARN_PROPERTY_SALES"):
case joaat("SERVICE_EARN_VEHICLE_SALES"):
case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
case joaat("SERVICE_EARN_CRATE_DROP"):
case joaat("SERVICE_EARN_HOLDUPS"):
case joaat("SERVICE_EARN_IMPORT_EXPORT"):
case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
case joaat("SERVICE_EARN_JOBSHARE_CASH"):
case joaat("SERVICE_EARN_NOT_BADSPORT"):
case joaat("SERVICE_EARN_BANK_INTEREST"):
case joaat("SERVICE_EARN_ROCKSTAR"):
case joaat("SERVICE_EARN_DEBUG"):
case joaat("SERVICE_EARN_CNCW"):
case joaat("SERVICE_EARN_CNCB"):
case joaat("SERVICE_EARN_JOB_BONUS"):
case joaat("SERVICE_EARN_BEND_JOB"):
case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
case joaat("SERVICE_EARN_REFUND_LOTTERY"):
case -1426920838:
case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
case joaat("SERVICE_EARN_BOSS"):
case joaat("SERVICE_EARN_GOON"):
case joaat("SERVICE_EARN_BOSS_AGENCY"):
case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
case joaat("SERVICE_EARN_PREMIUM_JOB"):
case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
case joaat("SERVICE_EARN_WAGE_PAYMENT"):
case joaat("SERVICE_EARN_REFUNDAMMODROP"):
case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
case joaat("SERVICE_EARN_CASHING_OUT"):
case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
case joaat("SERVICE_EARN_GANGOPS_WAGES"):
case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
case joaat("SERVICE_EARN_GANGOPS_SETUP"):
case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
case joaat("SERVICE_EARN_GANGOPS_FINALE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
func_646(uParam2, -1135378931, 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
break;
}
switch (hParam0){
case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
case joaat("SERVICE_SPEND_CASINO_GENERIC"):
case joaat("SERVICE_SPEND_ARCADE_GAME"):
case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
case joaat("SERVICE_SPEND_TONY_LIMO"):
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28375) func_646(uParam2, -1135378931, 537254313, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
break;
case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
case joaat("SERVICE_EARN_ARENA_WAR"):
case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
case joaat("SERVICE_EARN_FROM_CONTRABAND"):
case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1633116913:
case 668586600:
case 15168061:
case 590289134:
case 99792878:
case 1866258778:
case -178394060:
case 409592287:
case 593836803:
case 1973036520:
case 2063456538:
case -728008329:
case 119239868:
func_646(uParam2, -1135378931, 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
break;
}
return;
}

int func_646(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1A5C5{
BOOL flag;
BOOL flag2;
int i;
BOOL flag3;
int transactionId;
BOOL flag4;
flag=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) flag=true;
flag2=1;
if(!flag){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_102()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695819){
if(hParam3==joaat("CATEGORY_WEAPON_AMMO") || hParam3==joaat("CATEGORY_MART")){
Global_4536675=1;
return 0;
}}}
flag3=false;
for (i=0;
i < 15;
i=i + 1){
if(Global_4535172[i /*85*/].f_66.f_2==0) flag3=true;
}
if(!flag3) return 0;
*uParam0=15;
transactionId=2147483647;
if(flag || flag2 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&transactionId, hParam3, hParam4, hParam2, iParam5, iParam6)){
if(flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId)){
*uParam0=func_653(transactionId, iParam1, hParam4, hParam2, hParam3, iParam5, false, iParam6, iParam7, 1, true);
if(flag2 && !flag){
}
if(flag){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536673=1;
Global_4536676=hParam4;
Global_4536678=hParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536676=hParam4;
Global_4536678=hParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
flag4=false;
if(flag4){
func_652(1, hParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0) func_647(-1, hParam4, iParam6, iParam5, -1);
}
return 0;
}


void func_647(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1A772{
switch (hParam1){
case joaat("SERVICE_SPEND_BETTING"):
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1) func_648(iParam0);
return;
}


void func_648(int iParam0) // Position - 0x1A7AA{
BOOL flag;
flag=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) flag=true;
if(iParam0 !=-1){
if(func_651(iParam0))if(!flag) NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE();
elseif(!flag) NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
func_649(&Global_4535172[iParam0 /*85*/]);
}
return;
}


void func_649(var uParam0) // Position - 0x1A7FE{
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=joaat("CATEGORY_CLOTH");
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_650(&(uParam0->f_14));
func_650(&(uParam0->f_14.f_13));
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_26), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_34), "", 24);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_40), "", 16);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
return;
}


void func_650(var uParam0) // Position - 0x1A90E{
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
return;
}
BOOL func_651(int iParam0) // Position - 0x1A956{
if(iParam0 >=0 && iParam0 < 15) return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
return false;
}


void func_652(int iParam0, Hash hParam1) // Position - 0x1A981{
Global_2697013=hParam1;
Global_2697012=iParam0;
return;
}

int func_653(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x1A995{
int i;
i=0;
for (i=0;
i < 15;
i=i + 1){
if(Global_4535172[i /*85*/].f_66.f_2==0){
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) iParam0=i + 900;
Global_4535172[i /*85*/].f_66.f_2=1;
Global_4535172[i /*85*/].f_66.f_1=iParam5;
Global_4535172[i /*85*/].f_66.f_3=iParam1;
Global_4535172[i /*85*/].f_66.f_4=hParam2;
Global_4535172[i /*85*/].f_66.f_7=hParam3;
Global_4535172[i /*85*/].f_66.f_5=0;
Global_4535172[i /*85*/].f_66=iParam0;
Global_4535172[i /*85*/].f_66.f_6=hParam4;
Global_4535172[i /*85*/].f_66.f_11=iParam8;
Global_4535172[i /*85*/].f_66.f_10=iParam7;
Global_4535172[i /*85*/].f_66.f_13=iParam9;
Global_4535172[i /*85*/].f_66.f_12=0;
Global_4535172[i /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[i /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6) Global_4535172[i /*85*/].f_66.f_5=1;
if(iParam1==-1135378931 && bParam10) func_654(Global_4535172[i /*85*/], i);
return i;
}}
return -1;
}


void func_654(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Position - 0x1AAD2{
struct<36> eventData;
int playerBits;
if(iParam85 < 0) return;
eventData.f_2=2147483647;
eventData=-444617715;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2={
uParam0.f_66 
};
eventData.f_2.f_33=iParam85;
playerBits=_GET_PLAYER_SCRIPT_EVENT_BITS(eventData.f_1);
if(Global_262145.f_24076 && !Global_262145.f_24077 && !Global_262145.f_24078) return;
if(!playerBits==0){
func_655();
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 36, playerBits);
}
return;
}


void func_655() // Position - 0x1AB64{
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
return;
}
int _GET_PLAYER_SCRIPT_EVENT_BITS(int iParam0) // Position - 0x1AB74{
var address;
if(iParam0 !=-1) MISC::SET_BIT(&address, iParam0);
return address;
}
BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x1AB8C{
if(MISC::IS_PC_VERSION()) return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
return false;
}
BOOL func_658() // Position - 0x1ABA3{
return func_311(3) || func_310() || func_309();
}


void func_659(var uParam0) // Position - 0x1ABC4{
if(uParam0->f_702 && Global_1968304==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_714)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
HUD::SET_TEXT_RENDER_ID(uParam0->f_717);
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_714, true);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_714, 0.501f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
if(!uParam0->f_2821){
uParam0->f_2821.f_1=AUDIO::GET_SOUND_ID();
if(uParam0->f_2821.f_1 !=-1){
AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_2821.f_1, "Background", func_159(), func_158(), false, 0, false);
uParam0->f_2821=1;
}}
uParam0->f_704;
}}
if(uParam0->f_703) func_660(uParam0);
return;
}


void func_660(var uParam0) // Position - 0x1AC81{
var unk;
int num;
unk={
func_335() 
};
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return;
if(uParam0->f_2817.f_1) return;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)){
if(uParam0->f_794.f_6==0){
uParam0->f_705=1;
uParam0->f_794.f_6=1;
}}elseif(uParam0->f_794.f_6==1){
uParam0->f_705=1;
uParam0->f_794.f_6=0;
}
if(!uParam0->f_705){
func_329(&(uParam0->f_715), &unk, uParam0, 0);
return;
}
if(!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) func_328(uParam0, 0.5f);
else func_328(uParam0, 0.7f);
func_326(uParam0);
num=func_417(uParam0->f_794, uParam0->f_812.f_1999);
switch (uParam0->f_725.f_34){
case 0:
if(func_440(uParam0->f_812, num)==0 && func_459(num)) func_324(2, 201, "HEIST_IB_LAUNCH" /*Launch Mission*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(func_436(num)) func_324(2, 203, "HPPAY_SETUP" /*Pay for Setup*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
func_324(2, 205, "HP_MAP" /*Map*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 8:
if(func_440(uParam0->f_812, num)==0 && func_459(num)) func_324(2, 201, "HEIST_IB_LAUNCH" /*Launch Mission*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(func_436(num)) func_324(2, 203, "HPPAY_SETUP" /*Pay for Setup*/, uParam0, true, 363);
switch (uParam0->f_725.f_32){
case 0:
func_324(2, 204, "HP_MISSION" /*Missions*/, uParam0, true, 363);
break;
case 1:
func_324(2, 204, "HP_MAP" /*Map*/, uParam0, true, 363);
break;
case 2:
func_324(2, 204, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
break;
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_324(2, 208, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(func_440(uParam0->f_812, num)==0 && func_459(num)) func_324(2, 201, "HEIST_IB_LAUNCH" /*Launch Mission*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(func_436(num)) func_324(2, 203, "HPPAY_SETUP" /*Pay for Setup*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_MISSION" /*Missions*/, uParam0, true, 363);
func_324(2, 205, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 2:
if(func_440(uParam0->f_812, num)==0 && func_459(num)) func_324(2, 201, "HEIST_IB_LAUNCH" /*Launch Mission*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
if(func_436(num)) func_324(2, 203, "HPPAY_SETUP" /*Pay for Setup*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_MAP" /*Map*/, uParam0, true, 363);
func_324(2, 205, "HP_MISSION" /*Missions*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
func_329(&(uParam0->f_715), &unk, uParam0, uParam0->f_705);
func_210(uParam0, 0);
return;
}


void func_661(var uParam0) // Position - 0x1B0E7{
int i;
int j;
float num;
var unk;
float value;
int num2;
const char* str;
if(func_277(uParam0)){
num2=func_417(uParam0->f_794, uParam0->f_812.f_1999);
value={
func_275(num2) 
};
num=func_274(num2);
func_273(uParam0->f_714, SYSTEM::CEIL(value), SYSTEM::CEIL(value.f_1), num, false);
if(!func_272(value, uParam0->f_725.f_66, false)){
if(uParam0->f_2821){
if(uParam0->f_2821.f_1 !=-1){
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_2821.f_1, "x", value);
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_2821.f_1, "y", value.f_1);
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_2821.f_1, "scale", num);
}}
uParam0->f_725.f_66={
value 
};
}
func_270(uParam0->f_714);
for (j=0;
j <=9;
j=j + 1){
unk={
func_269(num2, j) 
};
if(!_IS_NULL_VECTOR(unk)) func_268(uParam0->f_714, j, unk, j);
}
func_267(uParam0, 0);
}
if(func_669(uParam0)){
func_242(uParam0->f_714, func_244(uParam0->f_812.f_1999), func_243(0, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(1, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(2, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(3, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(4, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(5, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(6, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(7, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(8, uParam0->f_794, uParam0->f_812.f_1999, 3), func_243(9, uParam0->f_794, uParam0->f_812.f_1999, 3));
func_668(uParam0, 0);
}
if(func_667(uParam0)){
for (i=0;
i <=uParam0->f_812.f_2000 - 1;
i=i + 1){
func_664(uParam0->f_714, uParam0->f_812.f_1999, i, &uParam0->f_812.f_1[i /*280*/].f_189[0 /*45*/], &(uParam0->f_812.f_1[i /*280*/].f_189[0 /*45*/].f_16), uParam0->f_812.f_1[i /*280*/].f_189[0 /*45*/].f_32, &(uParam0->f_812.f_1[i /*280*/].f_189[0 /*45*/].f_33), &uParam0->f_812.f_1[i /*280*/].f_189[1 /*45*/], &(uParam0->f_812.f_1[i /*280*/].f_189[1 /*45*/].f_16), uParam0->f_812.f_1[i /*280*/].f_189[1 /*45*/].f_32, &(uParam0->f_812.f_1[i /*280*/].f_189[1 /*45*/].f_33), &(uParam0->f_812.f_1[i /*280*/].f_3), &(uParam0->f_812.f_1[i /*280*/].f_19), uParam0->f_812.f_1[i /*280*/].f_186, &(uParam0->f_812.f_1[i /*280*/].f_35), &(uParam0->f_812.f_1[i /*280*/].f_189[0 /*45*/].f_39), &(uParam0->f_812.f_1[i /*280*/].f_189[1 /*45*/].f_39));
}
func_663(uParam0, 0);
}
if(func_259(uParam0)){
str=func_363(uParam0->f_812, false);
if(uParam0->f_812 !=_INVALID_PLAYER_INDEX())if(_IS_PLAYER_BOSS_OF_ORGANIZATION(uParam0->f_812)) str=func_360(uParam0->f_812);
func_662(uParam0->f_714, uParam0->f_700, &(uParam0->f_812.f_1965), str, &(uParam0->f_812.f_1981));
if(uParam0->f_700) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Draw_Board", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Bootup", func_159(), func_158(), false, 0, false);
func_235(uParam0, 0);
}
return;
}


void func_662(Player plParam0, BOOL bParam1, const char* sParam2, const char* sParam3, const char* sParam4) // Position - 0x1B495{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SHOW_SETUP");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam2));
func_247(sParam3);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam4));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_663(var uParam0, int iParam1) // Position - 0x1B4CC{
if(uParam0->f_711 !=iParam1) uParam0->f_711=iParam1;
return;
}


void func_664(Player plParam0, var uParam1, int iParam2, const char* sParam3, const char* sParam4, int iParam5, const char* sParam6, const char* sParam7, const char* sParam8, int iParam9, const char* sParam10, const char* sParam11, const char* sParam12, int iParam13, const char* sParam14, const char* sParam15, const char* sParam16) // Position - 0x1B4E5{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_SETUP_MISSION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam3));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam4));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam6);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam7));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam8));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam10);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam11));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam12));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam13);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam14);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_666(uParam1, iParam2, iParam13)));
if(HUD::DOES_TEXT_LABEL_EXIST(sParam15) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam15)) func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam15));
else func_247("");
if(HUD::DOES_TEXT_LABEL_EXIST(sParam16) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)) func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam16));
else func_247("");
func_247("");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(func_665(uParam1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


char* func_665(int iParam0) // Position - 0x1B5DA{
switch (iParam0){
case 0:
return "HEIST_IAA";
case 1:
return "HEIST_SUB";
case 2:
return "HEIST_MISSILE";
default:
}
return "";
}


char* func_666(int iParam0, int iParam1, int iParam2) // Position - 0x1B614{
if(iParam2==1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return "HPLOCK_IAA1" /*LOCKED:
COMPLETE PARAMEDIC EQUIPMENT*/;
case 1:
return "HPLOCK_IAA2" /*LOCKED:
COMPLETE DELUXOS*/;
case 2:
return "HPLOCK_IAA3" /*LOCKED:
COMPLETE AKULA*/;
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return "HPLOCK_SUB1" /*LOCKED:
COMPLETE KEYCARDS*/;
case 1:
return "HPLOCK_SUB2" /*LOCKED:
COMPLETE ULP INTEL*/;
case 2:
return "HPLOCK_SUB3" /*LOCKED:
COMPLETE RIOT CONTROL VAN*/;
case 3:
return "HPLOCK_SUB4" /*LOCKED:
COMPLETE STROMBERGS & TORPEDO ECU*/;
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return "HPLOCK_SILO1" /*LOCKED:
COMPLETE MARKED CASH & RECON*/;
case 1:
return "HPLOCK_SILO2" /*LOCKED:
COMPLETE CHERNOBOG*/;
case 2:
return "HPLOCK_SILO3" /*LOCKED:
COMPLETE FLIGHT PATH*/;
case 3:
return "HPLOCK_SILO4" /*LOCKED:
COMPLETE TEST SITE INTEL*/;
case 4:
return "HPLOCK_SILO5" /*LOCKED:
COMPLETE ONBOARD COMPUTER*/;
default:
break;
}
break;
}}
return "";
}
BOOL func_667(var uParam0) // Position - 0x1B6F9{
return uParam0->f_711;
}


void func_668(var uParam0, int iParam1) // Position - 0x1B706{
if(uParam0->f_710 !=iParam1) uParam0->f_710=iParam1;
return;
}
BOOL func_669(var uParam0) // Position - 0x1B71F{
return uParam0->f_710;
}


void func_670(var uParam0) // Position - 0x1B72C{
int scaleformMovieMethodReturnValueInt;
if(uParam0->f_794.f_4 && uParam0->f_794.f_5) uParam0->f_794.f_5=0;
if(!uParam0->f_794.f_5){
if(uParam0->f_794.f_4){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_714, "GET_CURRENT_SELECTION");
uParam0->f_794.f_9=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
uParam0->f_794.f_4=0;
uParam0->f_794.f_5=1;
}}elseif(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_794.f_9)){
scaleformMovieMethodReturnValueInt=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_794.f_9);
if(uParam0->f_794 !=scaleformMovieMethodReturnValueInt){
uParam0->f_794=scaleformMovieMethodReturnValueInt;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_22=scaleformMovieMethodReturnValueInt;
func_421();
func_210(uParam0, 1);
func_267(uParam0, 1);
func_668(uParam0, 1);
}
uParam0->f_794.f_5=0;
}
return;
}


void func_671(var uParam0) // Position - 0x1B7F6{
if(uParam0->f_812 !=PLAYER::PLAYER_ID() && uParam0->f_812 !=_INVALID_PLAYER_INDEX()){
if(Global_1890444[uParam0->f_812 /*129*/].f_38 !=Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38){
uParam0->f_812.f_2001=1;
Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38=Global_1890444[uParam0->f_812 /*129*/].f_38;
}
if(uParam0->f_794 !=Global_1890444[uParam0->f_812 /*129*/].f_38.f_22){
uParam0->f_794=Global_1890444[uParam0->f_812 /*129*/].f_38.f_22;
func_672(uParam0->f_714, uParam0->f_794);
func_210(uParam0, 1);
func_267(uParam0, 1);
func_668(uParam0, 1);
}}
return;
}


void func_672(Player plParam0, int iParam1) // Position - 0x1B8A6{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_CURRENT_SELECTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_673(var uParam0) // Position - 0x1B8C3{
int i;
int num;
int num2;
if(uParam0->f_812.f_2001){
for (i=0;
i < 16;
i=i + 1){
if(func_676(i, uParam0->f_812.f_1999)){
num2=func_417(i, uParam0->f_812.f_1999);
num=func_440(uParam0->f_812, num2);
if(func_675(uParam0, i) !=num){
func_674(uParam0, i, num);
func_663(uParam0, 1);
}}}
if(uParam0->f_812==PLAYER::PLAYER_ID()) Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38=Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38 + 1;
uParam0->f_812.f_2001=0;
}
return;
}


void func_674(var uParam0, int iParam1, int iParam2) // Position - 0x1B96A{
switch (iParam1){
case 1:
uParam0->f_812.f_1[0 /*280*/].f_189[0 /*45*/].f_32=iParam2;
break;
case 2:
uParam0->f_812.f_1[0 /*280*/].f_189[1 /*45*/].f_32=iParam2;
break;
case 3:
uParam0->f_812.f_1[0 /*280*/].f_186=iParam2;
break;
case 4:
uParam0->f_812.f_1[1 /*280*/].f_189[0 /*45*/].f_32=iParam2;
break;
case 5:
uParam0->f_812.f_1[1 /*280*/].f_189[1 /*45*/].f_32=iParam2;
break;
case 6:
uParam0->f_812.f_1[1 /*280*/].f_186=iParam2;
break;
case 7:
uParam0->f_812.f_1[2 /*280*/].f_189[0 /*45*/].f_32=iParam2;
break;
case 8:
uParam0->f_812.f_1[2 /*280*/].f_189[1 /*45*/].f_32=iParam2;
break;
case 9:
uParam0->f_812.f_1[2 /*280*/].f_186=iParam2;
break;
case 10:
uParam0->f_812.f_1[3 /*280*/].f_189[0 /*45*/].f_32=iParam2;
break;
case 11:
uParam0->f_812.f_1[3 /*280*/].f_189[1 /*45*/].f_32=iParam2;
break;
case 12:
uParam0->f_812.f_1[3 /*280*/].f_186=iParam2;
break;
case 13:
uParam0->f_812.f_1[4 /*280*/].f_189[0 /*45*/].f_32=iParam2;
break;
case 14:
uParam0->f_812.f_1[4 /*280*/].f_189[1 /*45*/].f_32=iParam2;
break;
case 15:
uParam0->f_812.f_1[4 /*280*/].f_186=iParam2;
break;
}
return;
}

int func_675(var uParam0, int iParam1) // Position - 0x1BB13{
switch (iParam1){
case 1:
return uParam0->f_812.f_1[0 /*280*/].f_189[0 /*45*/].f_32;
case 2:
return uParam0->f_812.f_1[0 /*280*/].f_189[1 /*45*/].f_32;
case 3:
return uParam0->f_812.f_1[0 /*280*/].f_186;
case 4:
return uParam0->f_812.f_1[1 /*280*/].f_189[0 /*45*/].f_32;
case 5:
return uParam0->f_812.f_1[1 /*280*/].f_189[1 /*45*/].f_32;
case 6:
return uParam0->f_812.f_1[1 /*280*/].f_186;
case 7:
return uParam0->f_812.f_1[2 /*280*/].f_189[0 /*45*/].f_32;
case 8:
return uParam0->f_812.f_1[2 /*280*/].f_189[1 /*45*/].f_32;
case 9:
return uParam0->f_812.f_1[2 /*280*/].f_186;
case 10:
return uParam0->f_812.f_1[3 /*280*/].f_189[0 /*45*/].f_32;
case 11:
return uParam0->f_812.f_1[3 /*280*/].f_189[1 /*45*/].f_32;
case 12:
return uParam0->f_812.f_1[3 /*280*/].f_186;
case 13:
return uParam0->f_812.f_1[4 /*280*/].f_189[0 /*45*/].f_32;
case 14:
return uParam0->f_812.f_1[4 /*280*/].f_189[1 /*45*/].f_32;
case 15:
return uParam0->f_812.f_1[4 /*280*/].f_186;
default:
}
return -1;
}
BOOL func_676(int iParam0, int iParam1) // Position - 0x1BC9F{
if(func_417(iParam0, iParam1) !=-1) return true;
return false;
}


void func_677(var uParam0) // Position - 0x1BCB8{
char* str;
if(uParam0->f_812==PLAYER::PLAYER_ID() && !func_683(PLAYER::PLAYER_ID())){
if(func_682()) str="HP_GANG_MC" /*Motorcycle Club*/;
else str="HP_GANG_ORG" /*Organization*/;
switch (uParam0->f_2817){
case 0:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_DISPLAY_HELP_TEXT("HP_TUT_1" /*This is the Planning Screen. Here you can view the Freemode Preps and Setups that must be completed in order to progress to the Finale.*/, 10000);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=1;
uParam0->f_2817.f_1=1;
func_432(uParam0, false);
func_210(uParam0, 1);
uParam0->f_2817=uParam0->f_2817 + 1;
}
break;
case 1:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_1" /*This is the Planning Screen. Here you can view the Freemode Preps and Setups that must be completed in order to progress to the Finale.*/)){
_DISPLAY_HELP_TEXT("HP_TUT_2" /*In order to unlock a Setup you must obtain the necessary Heist Prep Equipment from Freemode Preps.*/, 10000);
uParam0->f_2817=uParam0->f_2817 + 1;
}
break;
case 2:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_2" /*In order to unlock a Setup you must obtain the necessary Heist Prep Equipment from Freemode Preps.*/)){
func_681("HP_TUT_3" /*There are three ways to acquire Heist Prep Equipment. By completing Freemode Preps, stealing it from rival Heist Crews or by purchasing the equipment directly.*/, str, 10000);
uParam0->f_2817=uParam0->f_2817 + 1;
}
break;
case 3:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_3" /*There are three ways to acquire Heist Prep Equipment. By completing Freemode Preps, stealing it from rival Heist Crews or by purchasing the equipment directly.*/)){
func_681("HP_TUT_4" /*Freemode Preps can be completed in any order. Setups can also be completed in any order once unlocked.*/, str, 10000);
uParam0->f_2817=uParam0->f_2817 + 1;
}
break;
case 4:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_TUT_4" /*Freemode Preps can be completed in any order. Setups can also be completed in any order once unlocked.*/)){
func_681("HP_TUT_5" /*Complete all Freemode Preps and Setups to progress to the Heist Finale Screen.*/, str, 10000);
uParam0->f_2817=uParam0->f_2817 + 1;
}
break;
case 5:
if(!func_680("HP_TUT_5" /*Complete all Freemode Preps and Setups to progress to the Heist Finale Screen.*/, str)) func_679();
break;
}}else{
if(uParam0->f_2817.f_1){
uParam0->f_2817.f_1=0;
func_432(uParam0, true);
uParam0->f_703=1;
func_210(uParam0, 1);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}
if(func_678(PLAYER::PLAYER_ID())){
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26, 14)){
if(!IS_BIT_SET(Global_2793044.f_1835, 1)){
_DISPLAY_HELP_TEXT("HPREPLAY_AV2" /*You have completed The Doomsday Heist;
cancel or complete your current act to access the Replay Screen. You can cancel your current act by calling Lester.*/, -1);
MISC::SET_BIT(&(Global_2793044.f_1835), 1);
}}}}
return;
}
BOOL func_678(Player plParam0) // Position - 0x1BE93{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 13)) return true;
return false;
}


void func_679() // Position - 0x1BEBB{
int address;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 7)){
MISC::SET_BIT(&address, 7);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
return;
}
BOOL func_680(char* sParam0, char* sParam1) // Position - 0x1BEE9{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_681(char* sParam0, char* sParam1, int iParam2) // Position - 0x1BF02{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
return;
}
BOOL func_682() // Position - 0x1BF1F{
return func_489(PLAYER::PLAYER_ID());
}
BOOL func_683(Player plParam0) // Position - 0x1BF2F{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 7);
return false;
}


void func_684(var uParam0) // Position - 0x1BF52{
func_690(uParam0);
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
if(!func_683(PLAYER::PLAYER_ID())) uParam0->f_2817.f_1=1;
uParam0->f_703=1;
func_210(uParam0, 1);
func_687();
func_672(uParam0->f_714, 1);
func_432(uParam0, true);
func_267(uParam0, 1);
func_686(uParam0->f_714);
if(uParam0->f_812.f_1999==2){
if(func_437(uParam0->f_812, 29, false)) func_685(uParam0->f_714, 13);
if(func_437(uParam0->f_812, 13, false)) func_685(uParam0->f_714, 15);
}
return;
}


void func_685(Player plParam0, int iParam1) // Position - 0x1BFF6{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "PULSE_ELEMENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_686(var uParam0) // Position - 0x1C016{
unk_0x78C12A99C170F456(uParam0, "FLASH_ACTIVE_ELEMENT");
return;
}


void func_687() // Position - 0x1C028{
int i;
for (i=0;
i <=3;
i=i + 1){
if(Global_2672505.f_2513[i /*80*/].f_2 !=0){
Global_2672505.f_2513[i /*80*/].f_2=5;
func_688(&(Global_2672505.f_2513[i /*80*/].f_69), 1);
}}
return;
}


void func_688(var uParam0, int iParam1) // Position - 0x1C073{
func_689(uParam0, iParam1);
return;
}


void func_689(var uParam0, int iParam1) // Position - 0x1C083{
*uParam0=*uParam0 || iParam1;
return;
}


void func_690(var uParam0) // Position - 0x1C094{
var unk;
var unk4;
var unk7;
var unk10;
int num;
uParam0->f_725.f_37=0f;
uParam0->f_725.f_37.f_1=0f;
uParam0->f_725.f_37.f_2=-180f;
unk={
func_354(&(uParam0->f_725), 0) 
};
unk4={
func_231(&(uParam0->f_725)) 
};
unk7={
func_353(&(uParam0->f_725), 0) 
};
unk10={
func_230(&(uParam0->f_725)) 
};
func_352(&(uParam0->f_725.f_1), unk4, unk10, 60f, 20, 10, 3, 1101004800, 1, 0, -1f, false);
func_351(&(uParam0->f_725));
CAM::SET_WIDESCREEN_BORDERS(true, 0);
num=func_232(uParam0->f_725.f_34);
unk={
func_354(&(uParam0->f_725), num) 
};
unk7={
func_353(&(uParam0->f_725), num) 
};
uParam0->f_725.f_34=0;
uParam0->f_725.f_40={
func_231(&(uParam0->f_725)) 
};
uParam0->f_725.f_43={
func_230(&(uParam0->f_725)) 
};
return;
}


void func_691(var uParam0) // Position - 0x1C17D{
return;
}


void func_692(var uParam0) // Position - 0x1C185{
func_673(uParam0);
func_671(uParam0);
func_661(uParam0);
func_659(uParam0);
if(uParam0->f_718.f_5){
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 0, false);
func_197(&(uParam0->f_718));
}
return;
}


void func_693(var uParam0) // Position - 0x1C1C3{
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_694(var uParam0) // Position - 0x1C1F2{
func_659(uParam0);
func_235(uParam0, 1);
func_267(uParam0, 1);
func_668(uParam0, 1);
func_663(uParam0, 1);
uParam0->f_794=1;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_22=uParam0->f_794;
return;
}


void func_695(var uParam0) // Position - 0x1C235{
BOOL flag;
flag=true;
if(!func_375(uParam0)) flag=false;
if(!func_696()) flag=false;
if(!func_374()) flag=false;
if(flag) func_197(&(uParam0->f_718));
return;
}
BOOL func_696() // Position - 0x1C271{
return Global_2692733.f_6;
}


void func_697(var uParam0) // Position - 0x1C27F{
func_698(uParam0);
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_698(var uParam0) // Position - 0x1C2B3{
uParam0->f_714=GRAPHICS::REQUEST_SCALEFORM_MOVIE("IAA_HEIST_BOARD");
uParam0->f_715=GRAPHICS::REQUEST_SCALEFORM_MOVIE("INSTRUCTIONAL_BUTTONS");
return;
}


void func_699(var uParam0) // Position - 0x1C2D5{
func_210(uParam0, 1);
return;
}


void func_700(var uParam0) // Position - 0x1C2E4{
func_197(&(uParam0->f_718));
return;
}


void func_701(var uParam0) // Position - 0x1C2F5{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_702(var uParam0) // Position - 0x1C323{
func_197(&(uParam0->f_718));
return;
}


void func_703(BOOL bParam0) // Position - 0x1C334{
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION())if(!bParam0)if(Global_1964005.f_812 !=func_705() && Global_1964005.f_812 !=_INVALID_PLAYER_INDEX())if(Global_1964005.f_718 < 5) func_704(&(Global_1964005.f_718), 5);
elseif(Global_1964005.f_718==6) iLocal_178=6;
elseif(Global_1966831.f_812.f_41 !=func_705() && Global_1966831.f_812.f_41 !=_INVALID_PLAYER_INDEX())if(Global_1966831.f_718 < 5) func_704(&(Global_1966831.f_718), 5);
elseif(Global_1966831.f_718==6) iLocal_178=6;
return;
}


void func_704(int iParam0, int iParam1) // Position - 0x1C3E1{
iParam0->f_1=*iParam0;
MISC::SET_BIT(&(iParam0->f_4), iParam0->f_1);
MISC::CLEAR_BIT(&(iParam0->f_3), iParam0->f_1);
*iParam0=iParam1;
if(*iParam0==7) *iParam0=5;
return;
}
Player func_705() // Position - 0x1C418{
return func_706(PLAYER::PLAYER_ID());
}
Player func_706(Player plParam0) // Position - 0x1C428{
int num;
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
if(func_707(plParam0) !=-1){
num=func_75(func_707(plParam0));
if(num==2 || num==1 || num==0 || num==25){
if(_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, false)) return func_113(plParam0);
return plParam0;
}elseif(num==3){
return _INVALID_PLAYER_INDEX();
}
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}
return _INVALID_PLAYER_INDEX();
}

int func_707(Player plParam0) // Position - 0x1C4B7{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_7;
elseif(Global_1575060 || Global_2635559.f_2680 && plParam0==PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false)) return Global_2657589[plParam0 /*466*/].f_321.f_7;
return -1;
}


void func_708() // Position - 0x1C526{
if(IS_BIT_SET(Global_1963033.f_971, 8))if(Global_1963033.f_718 < 5) func_197(&(Global_1963033.f_718));
else Global_1963033.f_718==6;
return;
}


void func_709() // Position - 0x1C55F{
var unk;
var unk17;
if(func_177(0)){
if(func_176() || IS_BIT_SET(Global_1836154, 1)){
if(func_174()){
func_715();
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_EXPLAIN" /*This is the planning room ~HUD_COLOUR_H~~BLIP_MP_HEIST~~s~ Access the screen as a VIP, CEO or MC President to start The Doomsday Heist.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(Global_1963033.f_812.f_147){
unk={
func_714() 
};
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk)){
if(IS_BIT_SET(Global_1963033.f_971, 15)){
func_170(&unk);
MISC::CLEAR_BIT(&(Global_1963033.f_971), 15);
}
else{
func_169(&unk);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT)){
func_160();
func_713(&Global_1963033, 1);
func_421();
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Use", func_159(), func_158(), false, 0, false);
Global_1963033.f_812.f_150=0;
func_712();
}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !IS_BIT_SET(Global_1836154, 1)){
if(func_146()) func_712();
}}else{
unk17={
func_711() 
};
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&unk17)){
if(IS_BIT_SET(Global_1963033.f_971, 15)){
func_170(&unk17);
MISC::CLEAR_BIT(&(Global_1963033.f_971), 15);
}
else{
func_169(&unk17);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT)){
func_160();
func_713(&Global_1963033, 1);
func_421();
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Use", func_159(), func_158(), false, 0, false);
Global_1963033.f_812.f_150=0;
func_712();
}}}else{
func_712();
func_710();
}}else{
func_715();
func_712();
}}else{
func_715();
func_712();
}
return;
}


void func_710() // Position - 0x1C6E9{
if(bLocal_179==false){
if(Global_1963033.f_812.f_147)if(IS_BIT_SET(Global_1836154, 1)) func_169("HRBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Replay Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/);
else func_169("HRBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Replay Screen.*/);
elseif(IS_BIT_SET(Global_1836154, 1)) func_169("HIBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Setup Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/);
else func_169("HIBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Setup Screen.*/);
bLocal_179=true;
}
return;
}
struct<16> func_711() // Position - 0x1C741{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPCONTEXT_STP" /*Press ~INPUT_CONTEXT~ to access the Setup Screen.*/, 64);
if(IS_BIT_SET(Global_1836154, 1)) TEXT_LABEL_APPEND_STRING(&unk, "c", 64);
return unk;
}


void func_712() // Position - 0x1C767{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_STP" /*Press ~INPUT_CONTEXT~ to access the Setup Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_STPb" /*Press ~INPUT_CONTEXT~ to access the Setup Screen.~n~Press ~INPUT_CONTEXT_SECONDARY~ to quickly join as a Crew Member.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_STPc" /*Press ~INPUT_CONTEXT~ to access the Setup Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_RPLY" /*Press ~INPUT_CONTEXT~ to access the Replay Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_RPLYb" /*Press ~INPUT_CONTEXT~ to access the Replay Screen.~n~Press ~INPUT_CONTEXT_SECONDARY~ to quickly join as a Crew Member.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HPCONTEXT_RPLYc" /*Press ~INPUT_CONTEXT~ to access the Replay Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}


void func_713(var uParam0, int iParam1) // Position - 0x1C7C5{
uParam0->f_718.f_5=iParam1;
uParam0->f_725.f_34=0;
return;
}
struct<16> func_714() // Position - 0x1C7DE{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPCONTEXT_RPLY" /*Press ~INPUT_CONTEXT~ to access the Replay Screen.*/, 64);
if(IS_BIT_SET(Global_1836154, 1)) TEXT_LABEL_APPEND_STRING(&unk, "c", 64);
elseif(!func_29()) TEXT_LABEL_APPEND_STRING(&unk, "b", 64);
return unk;
}


void func_715() // Position - 0x1C817{
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HRBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Replay Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HIBOARD_REG" /*Register as a VIP, CEO or MC President to gain access to the Setup Screen.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HRBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Replay Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HIBOARD_REGb" /*Register as a VIP, CEO or MC President to gain access to the Setup Screen.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(bLocal_179) bLocal_179=false;
return;
}


void func_716() // Position - 0x1C861{
func_717(&Global_1963033);
if(IS_BIT_SET(Global_1963033.f_971, 8)) iLocal_178=5;
return;
}


void func_717(var uParam0) // Position - 0x1C881{
func_718(uParam0);
return;
}


void func_718(var uParam0) // Position - 0x1C88F{
switch (uParam0->f_718){
case 0:
func_772(uParam0);
break;
case 1:
if(!func_384(&(uParam0->f_718))){
func_771(uParam0);
func_382(&(uParam0->f_718));
}
func_770(uParam0);
if(!func_381(&(uParam0->f_718))){
func_769(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 2:
if(!func_384(&(uParam0->f_718))){
func_767(uParam0);
func_382(&(uParam0->f_718));
}
func_766(uParam0);
if(!func_381(&(uParam0->f_718))){
func_765(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 3:
if(!func_384(&(uParam0->f_718))){
func_764(uParam0);
func_382(&(uParam0->f_718));
}
func_763(uParam0);
if(!func_381(&(uParam0->f_718))){
func_762(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 4:
if(!func_384(&(uParam0->f_718))){
func_760(uParam0);
func_382(&(uParam0->f_718));
}
func_725(uParam0);
if(!func_381(&(uParam0->f_718))){
func_723(uParam0);
func_379(&(uParam0->f_718));
}
break;
case 5:
if(!func_384(&(uParam0->f_718))){
func_722(uParam0);
func_382(&(uParam0->f_718));
}
func_720(uParam0);
break;
case 6:
func_719(uParam0);
break;
}
return;
}


void func_719(var uParam0) // Position - 0x1CA06{
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_PLANNING_BOARD");
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_714));
return;
}


void func_720(var uParam0) // Position - 0x1CA1F{
func_201(uParam0);
func_200();
func_721(uParam0);
func_197(&(uParam0->f_718));
if(func_40() && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE() && !_IS_FMMC_ACTIVE() && func_206(PLAYER::PLAYER_ID()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
return;
}


void func_721(var uParam0) // Position - 0x1CA7D{
func_199(&(uParam0->f_725.f_1), false, true);
CAM::SET_WIDESCREEN_BORDERS(false, 0);
return;
}


void func_722(var uParam0) // Position - 0x1CA98{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
func_201(uParam0);
return;
}


void func_723(var uParam0) // Position - 0x1CACC{
uParam0->f_703=0;
func_724(uParam0, false);
return;
}


void func_724(var uParam0, BOOL bParam1) // Position - 0x1CAE1{
if(uParam0->f_812.f_146==PLAYER::PLAYER_ID())if(bParam1) unk_0x78C12A99C170F456(uParam0->f_714, "ENABLE_NAVIGATION");
else unk_0x78C12A99C170F456(uParam0->f_714, "DISABLE_NAVIGATION");
else unk_0x78C12A99C170F456(uParam0->f_714, "DISABLE_NAVIGATION");
return;
}


void func_725(var uParam0) // Position - 0x1CB29{
func_348();
func_757(uParam0);
func_756(uParam0);
func_755(uParam0);
func_750(uParam0);
func_748(uParam0);
func_747(uParam0);
func_742(uParam0);
func_726(uParam0);
func_223(&(uParam0->f_725));
func_216();
uParam0->f_812.f_150=-1;
if(!uParam0->f_718.f_5){
MISC::SET_BIT(&(uParam0->f_971), 15);
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
func_721(uParam0);
func_205(&(uParam0->f_718));
}
return;
}


void func_726(var uParam0) // Position - 0x1CBAA{
int playerAccountId;
int posixTime;
int num;
int num2;
int address;
if(IS_BIT_SET(uParam0->f_971, 19)){
if(STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&playerAccountId, &posixTime)){
_MPCHAR_STAT_SET_INT(MP_STAT_HEIST2_SESSION_ID_MACADDR, playerAccountId, -1, true, false);
_MPCHAR_STAT_SET_INT(MP_STAT_HEIST2_SESSION_ID_POSTIME, posixTime, -1, true, false);
num=func_741(uParam0->f_794);
if(_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()){
_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_GANGOPS_START_STRAND"), Global_1963033.f_812.f_133[num], &num2, false, true, false);
Global_4535172[num2 /*85*/].f_9=func_276(Global_1963033.f_812.f_137[num]);
}else{
MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(func_276(Global_1963033.f_812.f_137[num]), Global_1963033.f_812.f_133[num], false, true);
}
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Pay", func_159(), func_158(), false, 0, false);
func_735(false, func_276(Global_1963033.f_812.f_137[num]));
func_733(func_276(Global_1963033.f_812.f_137[num]));
if(func_276(Global_1963033.f_812.f_137[num])==1){
if(IS_BIT_SET(Global_2793044.f_1835, 8)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 8);
}elseif(func_276(Global_1963033.f_812.f_137[num])==2){
if(IS_BIT_SET(Global_2793044.f_1835, 9)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 9);
if(IS_BIT_SET(Global_2793044.f_1836, 13)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 13);
if(IS_BIT_SET(Global_2793044.f_1836, 14)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 14);
}
if(func_732(PLAYER::PLAYER_ID()) && !func_731(70)) func_727(0, true);
if(uParam0->f_812.f_147){
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 14)){
MISC::SET_BIT(&address, 14);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
Global_1968306=1;
}
MISC::SET_BIT(&(uParam0->f_971), 8);
MISC::CLEAR_BIT(&(uParam0->f_971), 19);
}}
return;
}


void func_727(int iParam0, BOOL bParam1) // Position - 0x1CD90{
int num;
num=func_730(iParam0);
if(bParam1){
if(!func_731(num)){
func_729(iParam0);
return;
}}else{
func_728(iParam0);
}
return;
}


void func_728(int iParam0) // Position - 0x1CDC1{
MISC::CLEAR_BIT(&Global_1962931, iParam0);
return;
}


void func_729(int iParam0) // Position - 0x1CDD3{
MISC::SET_BIT(&Global_1962931, iParam0);
return;
}

int func_730(int iParam0) // Position - 0x1CDE5{
switch (iParam0){
case 0:
return 70;
case 1:
return 71;
case 2:
return 72;
case 3:
return 73;
case 4:
return 74;
case 5:
return 75;
case 6:
return 76;
case 7:
return 77;
default:
}
return 70;
}
BOOL func_731(int iParam0) // Position - 0x1CE4E{
return PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0);
}
BOOL func_732(Player plParam0) // Position - 0x1CE5C{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1853910[plParam0 /*862*/].f_267.f_300 !=0;
return false;
}


void func_733(int iParam0) // Position - 0x1CE82{
int address;
BOOL flag;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
switch (iParam0){
case -1:
MISC::CLEAR_BIT(&address, 0);
MISC::CLEAR_BIT(&address, 1);
MISC::CLEAR_BIT(&address, 2);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 0);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 1);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 2);
flag=true;
break;
case 0:
MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 0);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 1);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 2);
MISC::SET_BIT(&address, 0);
MISC::CLEAR_BIT(&address, 1);
MISC::CLEAR_BIT(&address, 2);
flag=true;
break;
case 1:
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 0);
MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 1);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 2);
MISC::CLEAR_BIT(&address, 0);
MISC::SET_BIT(&address, 1);
MISC::CLEAR_BIT(&address, 2);
flag=true;
break;
case 2:
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 0);
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 1);
MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_26), 2);
MISC::CLEAR_BIT(&address, 0);
MISC::CLEAR_BIT(&address, 1);
MISC::SET_BIT(&address, 2);
flag=true;
break;
}
if(flag){
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
func_734();
}
return;
}


void func_734() // Position - 0x1D01C{
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_PREP_SKIP, 0, -1, true, false);
return;
}


void func_735(BOOL bParam0, int iParam1) // Position - 0x1D02F{
int num;
int address;
num=func_140(PLAYER::PLAYER_ID(), false);
if(iParam1 !=-1) num=iParam1;
if(num !=-1){
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
switch (num){
case 0:
MISC::CLEAR_BIT(&address, 0);
func_639(16, false, false, false, true);
func_639(17, false, false, false, true);
func_639(18, false, false, false, true);
func_639(0, false, false, false, true);
func_639(1, false, false, false, true);
func_639(2, false, false, false, true);
func_639(3, false, false, false, true);
func_740();
if(bParam0) func_738(num, -1);
break;
case 1:
MISC::CLEAR_BIT(&address, 1);
func_639(19, false, false, false, true);
func_639(20, false, false, false, true);
func_639(21, false, false, false, true);
func_639(22, false, false, false, true);
func_639(23, false, false, false, true);
func_639(4, false, false, false, true);
func_639(5, false, false, false, true);
func_639(6, false, false, false, true);
func_639(7, false, false, false, true);
func_639(8, false, false, false, true);
func_740();
if(bParam0) func_738(num, -1);
break;
case 2:
MISC::CLEAR_BIT(&address, 2);
func_639(24, false, false, false, true);
func_639(25, false, false, false, true);
func_639(26, false, false, false, true);
func_639(27, false, false, false, true);
func_639(28, false, false, false, true);
func_639(29, false, false, false, true);
func_639(9, false, false, false, true);
func_639(10, false, false, false, true);
func_639(11, false, false, false, true);
func_639(12, false, false, false, true);
func_639(13, false, false, false, true);
func_639(14, false, false, false, true);
func_639(15, false, false, false, true);
func_740();
if(bParam0) func_738(num, -1);
break;
}
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
func_734();
func_736();
}
return;
}


void func_736() // Position - 0x1D1FF{
int num;
BOOL flag;
int profileSetting;
int profileSetting2;
num=func_102();
profileSetting=func_737(num);
profileSetting2=MISC::GET_PROFILE_SETTING(profileSetting);
if(IS_BIT_SET(profileSetting2, 24)){
MISC::CLEAR_BIT(&profileSetting2, 24);
flag=true;
}
if(IS_BIT_SET(profileSetting2, 25)){
MISC::CLEAR_BIT(&profileSetting2, 25);
flag=true;
}
if(IS_BIT_SET(profileSetting2, 26)){
MISC::CLEAR_BIT(&profileSetting2, 26);
flag=true;
}
if(flag) STATS::SET_FREEMODE_PROLOGUE_DONE(profileSetting2, num);
_MPCHAR_STAT_SET_INT(MP_STAT_OPPRESSOR_MG_HEADSHOTS, 0, -1, true, false);
return;
}

int func_737(int iParam0) // Position - 0x1D26E{
int num;
if(iParam0==-1) iParam0=func_102();
switch (iParam0){
case 0:
num=914;
break;
case 1:
num=915;
break;
case 2:
num=916;
break;
case 3:
num=917;
break;
case 4:
num=918;
break;
}
return num;
}


void func_738(int iParam0, int iParam1) // Position - 0x1D2D1{
int address;
int cloudTimeAsInt;
int num;
BOOL flag;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
cloudTimeAsInt=NETWORK::GET_CLOUD_TIME_AS_INT();
flag=IS_BIT_SET(address, 13);
switch (iParam0){
case 0:
if(flag){
num=cloudTimeAsInt + func_739(iParam0, iParam1);
_MPCHAR_STAT_SET_INT(MP_STAT_HEISTCOOLDOWNTIMER0, num, -1, true, false);
}
if(!IS_BIT_SET(address, 15)){
MISC::SET_BIT(&address, 15);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
break;
case 1:
if(flag){
num=cloudTimeAsInt + func_739(iParam0, iParam1);
_MPCHAR_STAT_SET_INT(MP_STAT_HEISTCOOLDOWNTIMER1, num, -1, true, false);
}
if(!IS_BIT_SET(address, 16)){
MISC::SET_BIT(&address, 16);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
break;
case 2:
if(flag){
num=cloudTimeAsInt + func_739(iParam0, iParam1);
_MPCHAR_STAT_SET_INT(MP_STAT_HEISTCOOLDOWNTIMER2, num, -1, true, false);
}
if(!IS_BIT_SET(address, 17)){
MISC::SET_BIT(&address, 17);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
break;
}
if(func_643()==0 && !Global_1575060 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_640(-1564914501, 28, false);
return;
}

int func_739(int iParam0, int iParam1) // Position - 0x1D3F6{
switch (iParam0){
case 0:
switch (iParam1){
case 2:
return Global_262145.f_23365;
case 3:
return Global_262145.f_23368;
case 4:
return Global_262145.f_23371;
default:
}
return Global_262145.f_23363;
case 1:
switch (iParam1){
case 2:
return Global_262145.f_23366;
case 3:
return Global_262145.f_23369;
case 4:
return Global_262145.f_23372;
default:
}
return Global_262145.f_23364;
case 2:
switch (iParam1){
case 2:
return Global_262145.f_23367;
case 3:
return Global_262145.f_23370;
case 4:
return Global_262145.f_23373;
default:
}
return Global_262145.f_23374;
}
return 3600;
}


void func_740() // Position - 0x1D4E6{
if(IS_BIT_SET(Global_2793044.f_1835, 5)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 5);
if(IS_BIT_SET(Global_2793044.f_1834, 26)) MISC::CLEAR_BIT(&(Global_2793044.f_1834), 26);
if(IS_BIT_SET(Global_2793044.f_1835, 6)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 6);
if(IS_BIT_SET(Global_2793044.f_1834, 27)) MISC::CLEAR_BIT(&(Global_2793044.f_1834), 27);
if(IS_BIT_SET(Global_2793044.f_1835, 8)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 8);
if(IS_BIT_SET(Global_2793044.f_1834, 28)) MISC::CLEAR_BIT(&(Global_2793044.f_1834), 28);
if(IS_BIT_SET(Global_2793044.f_1835, 11)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 11);
if(IS_BIT_SET(Global_2793044.f_1834, 29)) MISC::CLEAR_BIT(&(Global_2793044.f_1834), 29);
if(IS_BIT_SET(Global_2793044.f_1835, 9)) MISC::CLEAR_BIT(&(Global_2793044.f_1835), 9);
if(IS_BIT_SET(Global_2793044.f_1836, 0)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 0);
if(IS_BIT_SET(Global_2793044.f_1836, 1)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 1);
if(IS_BIT_SET(Global_2793044.f_1836, 2)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 2);
if(IS_BIT_SET(Global_2793044.f_1836, 3)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 3);
if(IS_BIT_SET(Global_2793044.f_1836, 4)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 4);
if(IS_BIT_SET(Global_2793044.f_1836, 5)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 5);
if(IS_BIT_SET(Global_2793044.f_1836, 6)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 6);
if(IS_BIT_SET(Global_2793044.f_1836, 7)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 7);
if(IS_BIT_SET(Global_2793044.f_1836, 8)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 8);
if(IS_BIT_SET(Global_2793044.f_1836, 9)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 9);
if(IS_BIT_SET(Global_2793044.f_1836, 10)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 10);
if(IS_BIT_SET(Global_2793044.f_1836, 11)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 11);
if(IS_BIT_SET(Global_2793044.f_1836, 12)) MISC::CLEAR_BIT(&(Global_2793044.f_1836), 12);
return;
}

int func_741(int iParam0) // Position - 0x1D716{
switch (iParam0){
case 29:
return 0;
case 30:
return 1;
case 31:
return 2;
case 32:
return 3;
case 33:
return 4;
default:
}
return 0;
}


void func_742(var uParam0) // Position - 0x1D758{
int num;
if(uParam0->f_812.f_149 !=-1 || uParam0->f_812.f_150 !=-1) return;
num=func_300(&(uParam0->f_804));
switch (num){
case 0:
case 1:
case 2:
case 3:
if(uParam0->f_812.f_147){
func_746(uParam0, num);
func_745(uParam0, 1);
}
break;
case 9:
case 10:
case 5:
func_744(uParam0, num);
break;
case 8:
func_713(uParam0, 0);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Back", func_159(), func_158(), false, 0, false);
func_421();
break;
case 7:
func_743(uParam0);
break;
case 4:
break;
}
return;
}


void func_743(var uParam0) // Position - 0x1D821{
int num;
num=func_741(uParam0->f_794);
if(uParam0->f_812.f_141[num]==0){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
uParam0->f_812.f_149=7;
}elseif(uParam0->f_812.f_141[num]==5){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Select" /*Filter List*/, func_159(), func_158(), false, 0, false);
_DISPLAY_HELP_TEXT("HPSTRAND_ONCD" /*There is a delay before you can replay the same Heist again. Please select a different Heist or wait for this to become available.*/, -1);
}
return;
}


void func_744(var uParam0, int iParam1) // Position - 0x1D88E{
if(uParam0->f_725.f_64) return;
switch (iParam1){
case 9:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}
break;
case 10:
if(uParam0->f_725.f_34==0){
uParam0->f_725.f_34=2;
uParam0->f_725.f_35=2;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==1){
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==2){
uParam0->f_725.f_34=1;
uParam0->f_725.f_35=1;
func_210(uParam0, 1);
}
break;
case 5:
if(uParam0->f_725.f_34 !=8){
uParam0->f_725.f_32=uParam0->f_725.f_34;
uParam0->f_725.f_33=uParam0->f_725.f_35;
uParam0->f_725.f_34=8;
uParam0->f_725.f_35=8;
func_210(uParam0, 1);
}elseif(uParam0->f_725.f_34==8){
uParam0->f_725.f_34=uParam0->f_725.f_32;
uParam0->f_725.f_35=uParam0->f_725.f_33;
func_210(uParam0, 1);
}
break;
}
return;
}


void func_745(var uParam0, int iParam1) // Position - 0x1DA10{
uParam0->f_794.f_4=iParam1;
return;
}


void func_746(var uParam0, int iParam1) // Position - 0x1DA21{
switch (iParam1){
case 1:
func_298(uParam0->f_714, 187);
switch (uParam0->f_812.f_145){
case 1:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
break;
case 2:
if(uParam0->f_794==30) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 3:
if(uParam0->f_794==31) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
}
break;
case 0:
func_298(uParam0->f_714, 188);
if(uParam0->f_794==29) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Up_Down_Photo_Change", func_159(), func_158(), false, 0, false);
break;
case 2:
func_298(uParam0->f_714, 189);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
break;
case 3:
func_298(uParam0->f_714, 190);
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Nav_Blocked", func_159(), func_158(), false, 0, false);
break;
}
return;
}


void func_747(var uParam0) // Position - 0x1DB82{
var unk;
BOOL flag;
int num;
if(uParam0->f_812.f_149==-1) return;
num=func_741(uParam0->f_794);
if(MONEY::NETWORK_CAN_SPEND_MONEY2(Global_1963033.f_812.f_133[num], false, true, false, &unk, -1, 0)){
if(func_303(uParam0->f_812.f_149, &flag, -1, func_276(Global_1963033.f_812.f_137[num]), Global_1963033.f_812.f_133[num])){
if(flag) MISC::SET_BIT(&(uParam0->f_971), 19);
func_724(uParam0, true);
uParam0->f_812.f_149=-1;
uParam0->f_812.f_150=0;
}}elseif(func_303(9, &flag, -1, func_276(Global_1963033.f_812.f_137[num]), Global_1963033.f_812.f_133[num])){
func_724(uParam0, true);
uParam0->f_812.f_149=-1;
uParam0->f_812.f_150=0;
}
return;
}


void func_748(var uParam0) // Position - 0x1DC58{
if(uParam0->f_702 && Global_1968304==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_714)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
HUD::SET_TEXT_RENDER_ID(uParam0->f_717);
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_714, true);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_714, 0.501f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
if(!uParam0->f_967){
uParam0->f_967.f_1=AUDIO::GET_SOUND_ID();
if(uParam0->f_967.f_1 !=-1){
AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_967.f_1, "Background", func_159(), func_158(), false, 0, false);
uParam0->f_967=1;
}}
uParam0->f_704;
}}
if(uParam0->f_703) func_749(uParam0);
return;
}


void func_749(var uParam0) // Position - 0x1DD15{
var unk;
unk={
func_335() 
};
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) return;
if(!uParam0->f_705){
func_329(&(uParam0->f_715), &unk, uParam0, 0);
return;
}
if(!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) func_328(uParam0, 0.5f);
else func_328(uParam0, 0.7f);
func_326(uParam0);
switch (uParam0->f_725.f_34){
case 0:
if(uParam0->f_812.f_141[func_741(uParam0->f_794)]==0) func_324(2, 201, "HPSEL_STRAND" /*Setup*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
func_324(2, 205, "HP_MAP" /*Map*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
if(uParam0->f_812.f_147) func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 8:
if(uParam0->f_812.f_141[func_741(uParam0->f_794)]==0) func_324(2, 201, "HPSEL_STRAND" /*Setup*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
switch (uParam0->f_725.f_32){
case 0:
func_324(2, 204, "HP_HEIST" /*Heists*/, uParam0, true, 363);
break;
case 1:
func_324(2, 204, "HP_MAP" /*Map*/, uParam0, true, 363);
break;
case 2:
func_324(2, 204, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
break;
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_324(2, 208, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
if(uParam0->f_812.f_147) func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 1:
if(uParam0->f_812.f_141[func_741(uParam0->f_794)]==0) func_324(2, 201, "HPSEL_STRAND" /*Setup*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_HEIST" /*Heists*/, uParam0, true, 363);
func_324(2, 205, "HP_SURVEIL" /*Surveillance*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
if(uParam0->f_812.f_147) func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
case 2:
if(uParam0->f_812.f_141[func_741(uParam0->f_794)]==0) func_324(2, 201, "HPSEL_STRAND" /*Setup*/, uParam0, true, 363);
func_324(2, 202, "HEIST_IB_QUIT" /*Quit*/, uParam0, true, 363);
func_324(2, 204, "HP_OVERVIEW" /*Overview*/, uParam0, true, 363);
func_324(2, 206, "HP_MAP" /*Map*/, uParam0, true, 363);
func_324(2, 205, "HP_HEIST" /*Heists*/, uParam0, true, 363);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) func_324(2, 39, "HEIST_IB_ZOOM" /*Zoom*/, uParam0, true, 363);
else func_322(2, 15, "HEIST_IB_ZOOM" /*Zoom*/, uParam0);
func_322(2, 1, "HEIST_IB_LOOK" /*Look Around*/, uParam0);
if(uParam0->f_812.f_147) func_322(2, 0, "HEIST_IB_NAV" /*Navigate*/, uParam0);
break;
}
func_329(&(uParam0->f_715), &unk, uParam0, uParam0->f_705);
func_210(uParam0, 0);
return;
}


void func_750(var uParam0) // Position - 0x1E0CA{
int i;
int num;
int num2;
int j;
float value;
var unk3;
if(func_277(uParam0)){
num=uParam0->f_812.f_137[func_741(uParam0->f_794)];
value={
350f, 2000f, 0f 
};
func_273(uParam0->f_714, SYSTEM::CEIL(value), SYSTEM::CEIL(value.f_1), 0f, false);
func_270(uParam0->f_714);
for (j=0;
j <=9;
j=j + 1){
unk3={
func_754(num, j) 
};
if(!_IS_NULL_VECTOR(unk3)) func_268(uParam0->f_714, j, unk3, j);
}
func_267(uParam0, 0);
}
if(func_669(uParam0)){
num=uParam0->f_812.f_137[func_741(uParam0->f_794)];
if(uParam0->f_812.f_147) num2=0;
else num2=1;
func_242(uParam0->f_714, func_244(num), func_243(0, uParam0->f_794, num, num2), func_243(1, uParam0->f_794, num, num2), func_243(2, uParam0->f_794, num, num2), func_243(3, uParam0->f_794, num, num2), func_243(4, uParam0->f_794, num, num2), func_243(5, uParam0->f_794, num, num2), func_243(6, uParam0->f_794, num, num2), func_243(7, uParam0->f_794, num, num2), func_243(8, uParam0->f_794, num, num2), func_243(9, uParam0->f_794, num, num2));
func_668(uParam0, 0);
}
if(uParam0->f_812.f_147){
if(func_667(uParam0)){
for (i=0;
i <=uParam0->f_812.f_145 - 1;
i=i + 1){
func_753(uParam0->f_714, i, &uParam0->f_812.f_16[i /*16*/], &uParam0->f_812.f_65[i /*16*/], uParam0->f_812.f_133[i], &uParam0->f_812.f_114[i /*6*/], uParam0->f_812.f_141[i]==5);
}
func_663(uParam0, 0);
}
if(func_259(uParam0)){
func_752(uParam0->f_714, uParam0->f_700, &(uParam0->f_812), uParam0->f_812.f_146);
if(uParam0->f_700) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Draw_Board", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Bootup", func_159(), func_158(), false, 0, false);
func_235(uParam0, 0);
}}elseif(func_259(uParam0)){
func_751(uParam0->f_714, uParam0->f_700, &(uParam0->f_812), uParam0->f_812.f_146, &uParam0->f_812.f_16[0 /*16*/], &uParam0->f_812.f_65[0 /*16*/], uParam0->f_812.f_133[0], &uParam0->f_812.f_114[0 /*6*/]);
if(uParam0->f_700) AUDIO::PLAY_SOUND_FROM_COORD(-1, "Draw_Board", func_159(), func_158(), false, 0, false);
else AUDIO::PLAY_SOUND_FROM_COORD(-1, "Bootup", func_159(), func_158(), false, 0, false);
func_235(uParam0, 0);
}
return;
}


void func_751(Player plParam0, BOOL bParam1, const char* sParam2, Player plParam3, const char* sParam4, const char* sParam5, int iParam6, const char* sParam7) // Position - 0x1E394{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SHOW_LAUNCH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam2));
func_247(func_360(plParam3));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam4));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam5));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("HEIST_SETUP");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_752(Player plParam0, BOOL bParam1, const char* sParam2, Player plParam3) // Position - 0x1E3ED{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SHOW_REPLAY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam2));
func_247(func_360(plParam3));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_753(Player plParam0, int iParam1, const char* sParam2, const char* sParam3, int iParam4, const char* sParam5, BOOL bParam6) // Position - 0x1E41E{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_REPLAY_MISSION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam2));
func_247(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam3));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("HEIST_REPLAY" /*Call Lester to request a Heist replay. Each Heist is available for replay on the phone after completing them as Leader. There is a delay before you can replay the same Heist again.*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


Vector3 func__754(int iParam0, int iParam1) // Position - 0x1E469{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 245.7666f, -1373.5952f, 48.1986f;
case 1:
return 820.6853f, -822.576f, 25.1811f;
case 2:
return 2516.6697f, -383.9083f, 92.1404f;
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return -288.2928f, 6127.79f, 30.4128f;
case 1:
return 1100.7981f, -1983.3372f, 30.0147f;
case 2:
return 1228.0615f, 1875.402f, 77.8802f;
case 3:
return -2474.387f, 3630.0312f, 12.9909f;
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 26.2862f, -2755.8767f, 4.9999f;
case 1:
return 75.6565f, 6539.4585f, 30.6815f;
case 2:
return -454.2658f, 1144.9369f, 324.9044f;
case 3:
return 2381.1965f, 3067.612f, 47.1529f;
case 4:
return 1671.6829f, 3241.8843f, 39.6894f;
default:
break;
}
break;
}
return 0f, 0f, 0f;
}


void func_755(var uParam0) // Position - 0x1E5CB{
int scaleformMovieMethodReturnValueInt;
if(uParam0->f_794.f_4 && uParam0->f_794.f_5) uParam0->f_794.f_5=0;
if(!uParam0->f_794.f_5){
if(uParam0->f_794.f_4){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_714, "GET_CURRENT_SELECTION");
uParam0->f_794.f_9=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
uParam0->f_794.f_4=0;
uParam0->f_794.f_5=1;
}}elseif(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_794.f_9)){
scaleformMovieMethodReturnValueInt=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_794.f_9);
if(uParam0->f_794 !=scaleformMovieMethodReturnValueInt){
uParam0->f_794=scaleformMovieMethodReturnValueInt;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_22=scaleformMovieMethodReturnValueInt;
func_421();
func_210(uParam0, 1);
func_668(uParam0, 1);
func_267(uParam0, 1);
uParam0->f_794.f_5=0;
}}
return;
}


void func_756(var uParam0) // Position - 0x1E695{
if(uParam0->f_812.f_146 !=PLAYER::PLAYER_ID() && uParam0->f_812.f_146 !=_INVALID_PLAYER_INDEX()){
if(Global_1890444[uParam0->f_812.f_146 /*129*/].f_38 !=Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38){
uParam0->f_812.f_148=1;
Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_38=Global_1890444[uParam0->f_812.f_146 /*129*/].f_38;
}
if(uParam0->f_794 !=Global_1890444[uParam0->f_812.f_146 /*129*/].f_38.f_22){
uParam0->f_794=Global_1890444[uParam0->f_812.f_146 /*129*/].f_38.f_22;
func_672(uParam0->f_714, uParam0->f_794);
func_210(uParam0, 1);
func_267(uParam0, 1);
func_668(uParam0, 1);
}}
return;
}


void func_757(var uParam0) // Position - 0x1E750{
if(uParam0->f_812.f_146==PLAYER::PLAYER_ID() && !func_759(PLAYER::PLAYER_ID())){
switch (uParam0->f_963){
case 0:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_DISPLAY_HELP_TEXT("HP_SETUP_TUT1" /*An upfront setup cost is required to begin each act of The Doomsday Heist. This pays for a portion of the equipment needed and covers Lester's initial surveillance.*/, 10000);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=1;
uParam0->f_963.f_1=1;
func_724(uParam0, false);
func_210(uParam0, 1);
uParam0->f_963=uParam0->f_963 + 1;
}
break;
case 1:
if(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HP_SETUP_TUT1" /*An upfront setup cost is required to begin each act of The Doomsday Heist. This pays for a portion of the equipment needed and covers Lester's initial surveillance.*/)) func_758();
break;
}}elseif(uParam0->f_963.f_1){
uParam0->f_963.f_1=0;
func_724(uParam0, true);
uParam0->f_703=1;
func_210(uParam0, 1);
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_30=0;
}
return;
}


void func_758() // Position - 0x1E81D{
int address;
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 18)){
MISC::SET_BIT(&address, 18);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}
return;
}
BOOL func_759(Player plParam0) // Position - 0x1E84D{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 18);
return false;
}


void func_760(var uParam0) // Position - 0x1E871{
func_761(uParam0);
uParam0->f_725.f_34=0;
uParam0->f_725.f_35=0;
uParam0->f_703=1;
func_210(uParam0, 1);
func_687();
func_672(uParam0->f_714, 1);
func_724(uParam0, true);
func_686(uParam0->f_714);
return;
}


void func_761(var uParam0) // Position - 0x1E8BA{
var unk;
var unk4;
var unk7;
var unk10;
int num;
uParam0->f_725.f_37=0f;
uParam0->f_725.f_37.f_1=0f;
uParam0->f_725.f_37.f_2=-180f;
unk={
func_354(&(uParam0->f_725), 0) 
};
unk4={
func_231(&(uParam0->f_725)) 
};
unk7={
func_353(&(uParam0->f_725), 0) 
};
unk10={
func_230(&(uParam0->f_725)) 
};
func_352(&(uParam0->f_725.f_1), unk4, unk10, 60f, 20, 10, 3, 1101004800, 1, 0, -1f, false);
func_351(&(uParam0->f_725));
CAM::SET_WIDESCREEN_BORDERS(true, 0);
num=func_232(uParam0->f_725.f_34);
unk={
func_354(&(uParam0->f_725), num) 
};
unk7={
func_353(&(uParam0->f_725), num) 
};
uParam0->f_725.f_34=0;
uParam0->f_725.f_40={
func_231(&(uParam0->f_725)) 
};
uParam0->f_725.f_43={
func_230(&(uParam0->f_725)) 
};
return;
}


void func_762(var uParam0) // Position - 0x1E9A3{
return;
}


void func_763(var uParam0) // Position - 0x1E9AB{
func_756(uParam0);
func_750(uParam0);
func_748(uParam0);
if(uParam0->f_718.f_5){
_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 0, false);
func_197(&(uParam0->f_718));
}
return;
}


void func_764(var uParam0) // Position - 0x1E9E3{
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_765(var uParam0) // Position - 0x1EA12{
func_748(uParam0);
func_235(uParam0, 1);
func_668(uParam0, 1);
func_267(uParam0, 1);
func_663(uParam0, 1);
uParam0->f_794=1;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_22=uParam0->f_794;
return;
}


void func_766(var uParam0) // Position - 0x1EA55{
BOOL flag;
flag=true;
if(!func_375(uParam0)) flag=false;
if(!func_696()) flag=false;
if(!func_374()) flag=false;
if(flag) func_197(&(uParam0->f_718));
return;
}


void func_767(var uParam0) // Position - 0x1EA91{
func_768(uParam0);
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_768(var uParam0) // Position - 0x1EAC5{
uParam0->f_714=GRAPHICS::REQUEST_SCALEFORM_MOVIE("IAA_HEIST_BOARD");
uParam0->f_715=GRAPHICS::REQUEST_SCALEFORM_MOVIE("INSTRUCTIONAL_BUTTONS");
return;
}


void func_769(var uParam0) // Position - 0x1EAE7{
func_210(uParam0, 1);
return;
}


void func_770(var uParam0) // Position - 0x1EAF6{
func_197(&(uParam0->f_718));
return;
}


void func_771(var uParam0) // Position - 0x1EB07{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
return;
}


void func_772(var uParam0) // Position - 0x1EB35{
func_197(&(uParam0->f_718));
return;
}


void func_773() // Position - 0x1EB46{
Player player;
BOOL flag;
BOOL flag2;
int address;
char* name;
char* name2;
char* name3;
player=_INVALID_PLAYER_INDEX();
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
player=Global_1966831.f_812.f_41;
if(player !=_INVALID_PLAYER_INDEX()){
}}else{
player=func_705();
}
if(player !=_INVALID_PLAYER_INDEX()){
if(player==PLAYER::PLAYER_ID()){
address=_MPCHAR_STAT_GET_INT(MP_STAT_GANGOPS_HEIST_STATUS, -1, 0);
if(!IS_BIT_SET(address, 6)){
if(func_140(PLAYER::PLAYER_ID(), false)==-1){
if(!IS_BIT_SET(Global_2793044.f_1834, 24)){
_DISPLAY_HELP_TEXT("HP_EXPLAIN" /*This is the planning room ~HUD_COLOUR_H~~BLIP_MP_HEIST~~s~ Access the screen as a VIP, CEO or MC President to start The Doomsday Heist.*/, -1);
MISC::SET_BIT(&(Global_2793044.f_1834), 24);
}}else{
MISC::SET_BIT(&address, 6);
_MPCHAR_STAT_SET_INT(MP_STAT_GANGOPS_HEIST_STATUS, address, -1, true, false);
}}}
if(func_806(*Global_4718592.f_113724) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
flag=true;
}elseif(func_140(player, true)==-1){
flag2=true;
}else{
if(func_437(player, 3, false)) flag=true;
if(func_437(player, 8, false)) flag=true;
if(func_437(player, 14, false)) flag=true;
if(func_437(player, 15, false)) flag=true;
}
if(flag2){
if(!IS_BIT_SET(Global_1963033.f_971, 0)){
name="Prop_x17DLC_Monitor_Wall_01a";
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED(name)){
HUD::REGISTER_NAMED_RENDERTARGET(name, false);
HUD::LINK_NAMED_RENDERTARGET(joaat("xm_prop_x17dlc_monitor_wall_01a"));
Global_1963033.f_717=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(name);
}else{
Global_1963033.f_812.f_146=player;
if(func_802(false, 0, false) || _IS_FMMC_ACTIVE() || Global_1950108.f_3347) Global_1963033.f_700=1;
Global_1963033.f_806={
func_159() 
};
Global_1963033.f_725.f_34=0;
Global_1963033.f_725.f_52={
1f, -2.5f, -1.2f 
};
Global_1963033.f_725.f_55={
-0.5f, -2.5f, -1.2f 
};
Global_1963033.f_725.f_58={
0f, 0f, 0f 
};
Global_1963033.f_725.f_61={
0f, 0f, 0f 
};
Global_1963033.f_725.f_37=0f;
Global_1963033.f_725.f_37.f_1=0f;
Global_1963033.f_725.f_37.f_2=-180f;
if(func_678(Global_1963033.f_812.f_146)) Global_1963033.f_812.f_147=1;
func_794();
_STOPWATCH_INITIALIZE(&uLocal_180, false, false);
MISC::SET_BIT(&(Global_1963033.f_971), 0);
iLocal_178=1;
}}}elseif(flag){
if(!IS_BIT_SET(Global_1966831.f_1247, 0)){
name2="Prop_x17DLC_Monitor_Wall_01a";
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED(name2)){
HUD::REGISTER_NAMED_RENDERTARGET(name2, false);
HUD::LINK_NAMED_RENDERTARGET(joaat("xm_prop_x17dlc_monitor_wall_01a"));
Global_1966831.f_717=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(name2);
}else{
if(Global_1966831.f_812.f_41 !=player) Global_1966831.f_812.f_41=player;
Global_1966831.f_812.f_77=func_793(Global_1966831.f_812.f_41);
if(func_802(false, 0, false) || _IS_FMMC_ACTIVE() || Global_1950108.f_3347) Global_1966831.f_700=1;
Global_1966831.f_806={
func_159() 
};
Global_1966831.f_725.f_34=0;
Global_1966831.f_725.f_52={
1f, -2.5f, -1.2f 
};
Global_1966831.f_725.f_55={
-0.5f, -2.5f, -1.2f 
};
Global_1966831.f_725.f_58={
0f, 0f, 0f 
};
Global_1966831.f_725.f_61={
0f, 0f, 0f 
};
Global_1966831.f_725.f_37=0f;
Global_1966831.f_725.f_37.f_1=0f;
Global_1966831.f_725.f_37.f_2=-180f;
func_790();
_STOPWATCH_INITIALIZE(&uLocal_180, false, false);
if(Global_1968299==false){
Global_1968299=true;
MISC::SET_BIT(&(Global_1966831.f_1247), 5);
}
MISC::SET_BIT(&(Global_1966831.f_1247), 0);
iLocal_178=3;
}}}elseif(!IS_BIT_SET(Global_1964005.f_2825, 0)){
name3="Prop_x17DLC_Monitor_Wall_01a";
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED(name3)){
HUD::REGISTER_NAMED_RENDERTARGET(name3, false);
HUD::LINK_NAMED_RENDERTARGET(joaat("xm_prop_x17dlc_monitor_wall_01a"));
Global_1964005.f_717=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(name3);
}else{
Global_1964005.f_812=player;
if(func_802(false, 0, false) || _IS_FMMC_ACTIVE() || Global_1950108.f_3347) Global_1964005.f_700=1;
Global_1964005.f_806={
func_159() 
};
Global_1964005.f_725.f_34=0;
Global_1964005.f_725.f_52={
1f, -2.5f, -1.2f 
};
Global_1964005.f_725.f_55={
-0.5f, -2.5f, -1.2f 
};
Global_1964005.f_725.f_58={
0f, 0f, 0f 
};
Global_1964005.f_725.f_61={
0f, 0f, 0f 
};
Global_1964005.f_725.f_37=0f;
Global_1964005.f_725.f_37.f_1=0f;
Global_1964005.f_725.f_37.f_2=-180f;
Global_1964005.f_812.f_1999=func_793(Global_1964005.f_812);
func_774();
_STOPWATCH_INITIALIZE(&uLocal_180, false, false);
MISC::SET_BIT(&(Global_1964005.f_2825), 0);
iLocal_178=2;
}}}
return;
}


void func_774() // Position - 0x1F012{
int i;
int num;
num=func_276(Global_1964005.f_812.f_1999);
switch (num){
case 0:
Global_1964005.f_812.f_1998=func_789(num);
Global_1964005.f_812.f_1997=Global_794709.f_4[0 /*88*/].f_54;
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1965), func_788(Global_1964005.f_812.f_1999, false), 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1981), func_787(Global_1964005.f_812.f_1999), 64);
Global_1964005.f_812.f_2000=3;
for (i=0;
i <=Global_1964005.f_812.f_2000 - 1;
i=i + 1){
func_775(i, num);
}
break;
case 1:
Global_1964005.f_812.f_1998=func_789(num);
Global_1964005.f_812.f_1997=Global_794709.f_4[0 /*88*/].f_54;
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1965), func_788(Global_1964005.f_812.f_1999, false), 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1981), func_787(Global_1964005.f_812.f_1999), 64);
Global_1964005.f_812.f_2000=4;
for (i=0;
i <=Global_1964005.f_812.f_2000 - 1;
i=i + 1){
func_775(i, num);
}
break;
case 2:
Global_1964005.f_812.f_1998=func_789(num);
Global_1964005.f_812.f_1997=Global_794709.f_4[0 /*88*/].f_54;
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1965), func_788(Global_1964005.f_812.f_1999, false), 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1981), func_787(Global_1964005.f_812.f_1999), 64);
Global_1964005.f_812.f_2000=5;
for (i=0;
i <=Global_1964005.f_812.f_2000 - 1;
i=i + 1){
func_775(i, num);
}
break;
}
if(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_28==0) Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_28=1;
return;
}


void func_775(int iParam0, int iParam1) // Position - 0x1F20B{
int num;
int num2;
int num3;
int num4;
var unk;
num=func_786(iParam0, iParam1);
if(func_785(num)){
num4=Global_1968280[func_138(num)];
num2=func_784(num, 0);
num3=func_784(num, 1);
if(num4 !=-1){
unk={
func_783(num) 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_3={
unk 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_187=Global_794709.f_4[num4 /*88*/].f_54;
Global_1964005.f_812.f_1[iParam0 /*280*/].f_186=func_440(Global_1964005.f_812, num);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1[iParam0 /*280*/].f_35), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(num), 24);
Global_1964005.f_812.f_1[iParam0 /*280*/].f_19={
func_781(num) 
};
unk={
func_780(num2) 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[0 /*45*/]={
unk 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[0 /*45*/].f_32=func_440(Global_1964005.f_812, num2);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[0 /*45*/].f_33), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(num2), 24);
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[0 /*45*/].f_16={
func_781(num2) 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[0 /*45*/].f_39={
func_776(num2) 
};
if(num3 !=-1){
unk={
func_780(num3) 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/]={
unk 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_32=func_440(Global_1964005.f_812, num3);
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_33), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(num3), 24);
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_16={
func_781(num3) 
};
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_39={
func_776(num3) 
};
}else{
Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_32=-1;
TEXT_LABEL_ASSIGN_STRING(&(Global_1964005.f_812.f_1[iParam0 /*280*/].f_189[1 /*45*/].f_33), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(num3), 24);
}}}
return;
}


struct<6> func_776(int iParam0) // Position - 0x1F458{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HP_PARTIAL_", 24);
if(func_779(func_414(iParam0))){
switch (iParam0){
case 17:
case 22:
switch (func_777(iParam0)){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
break;
case 1:
TEXT_LABEL_APPEND_STRING(&unk, "A_1", 24);
break;
case 2:
TEXT_LABEL_APPEND_STRING(&unk, "A_2", 24);
break;
case 3:
TEXT_LABEL_APPEND_STRING(&unk, "A_3", 24);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
break;
}
break;
case 23:
switch (func_777(iParam0)){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
break;
case 1:
TEXT_LABEL_APPEND_STRING(&unk, "B_1", 24);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
break;
}
break;
}}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
}
return unk;
}

int func_777(int iParam0) // Position - 0x1F541{
switch (iParam0){
case 17:
return func_778(18989, -1);
case 22:
return func_778(18990, -1);
case 23:
return func_778(18991, -1);
default:
}
return 0;
}

int func_778(int iParam0, int iParam1) // Position - 0x1F584{
if(iParam1==-1) iParam1=func_102();
return unk_0x088E49A1CEC4C23F(iParam0, iParam1);
}
BOOL func_779(int iParam0) // Position - 0x1F5A0{
switch (iParam0){
case 3:
case 2:
case 8:
return true;
default:
}
return false;
}
struct<16> func_780(int iParam0) // Position - 0x1F5C6{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_MIS_", 64);
TEXT_LABEL_APPEND_INT(&unk, func_439(iParam0), 64);
return unk;
}
struct<16> func_781(int iParam0) // Position - 0x1F5E5{
var unk;
if(func_415(iParam0)){
if(iParam0==13 && !func_437(Global_1964005.f_812, 13, false) && !func_437(Global_1964005.f_812, 29, false)){
TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTP_DESC_11b" /*Locked:
Complete all available Preps and Setups to unlock Setup:
Air Defenses.*/, 64);
return unk;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HPSTP_DESC_", 64);
switch (iParam0){
case 0:
TEXT_LABEL_APPEND_INT(&unk, 0, 64);
break;
case 1:
TEXT_LABEL_APPEND_INT(&unk, 1, 64);
break;
case 2:
TEXT_LABEL_APPEND_INT(&unk, 2, 64);
break;
case 4:
TEXT_LABEL_APPEND_INT(&unk, 3, 64);
break;
case 5:
TEXT_LABEL_APPEND_INT(&unk, 4, 64);
break;
case 6:
TEXT_LABEL_APPEND_INT(&unk, 5, 64);
break;
case 7:
TEXT_LABEL_APPEND_INT(&unk, 6, 64);
break;
case 9:
TEXT_LABEL_APPEND_INT(&unk, 7, 64);
break;
case 10:
TEXT_LABEL_APPEND_INT(&unk, 8, 64);
break;
case 11:
TEXT_LABEL_APPEND_INT(&unk, 9, 64);
break;
case 12:
TEXT_LABEL_APPEND_INT(&unk, 10, 64);
break;
case 13:
TEXT_LABEL_APPEND_INT(&unk, 11, 64);
break;
}}elseif(func_447(iParam0)){
if(iParam0==29 && !func_437(Global_1964005.f_812, 29, false)){
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_DESC_13b" /*Locked:
Complete all available Preps and Setups to unlock Prep:
Onboard Computer.*/, 64);
return unk;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HPPREP_DESC_", 64);
TEXT_LABEL_APPEND_INT(&unk, func_439(iParam0), 64);
}
return unk;
}
char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1F740{
switch (iParam0){
case 16:
return "1_1_prep_double";
case 17:
return "1_2_prep_double";
case 18:
return "1_3_prep_double";
case 19:
return "2_1_prep_double";
case 20:
return "2_2_prep_double";
case 21:
return "2_3_prep_double";
case 22:
return "2_4_A_prep_single";
case 23:
return "2_4_B_prep_single";
case 24:
return "3_1_A_prep_single";
case 25:
return "3_1_B_prep_single";
case 26:
return "3_2_setup_double";
case 27:
return "3_3_prep_double";
case 28:
return "3_4_A_prep_double";
case 29:
return "3_4_B_prep_double";
case 0:
return "1_1_setup_quad";
case 1:
return "1_2_setup_quad";
case 2:
return "1_3_setup_quad";
case 4:
return "2_1_setup_quad";
case 5:
return "2_2_setup_quad";
case 6:
return "2_3_setup_quad";
case 7:
return "2_4_setup_quad";
case 9:
return "3_1_setup_quad";
case 10:
return "3_2_prep_quad";
case 11:
return "3_3_setup_quad";
case 12:
return "3_4_A_setup_Quad";
case 13:
return "3_4_B_setup_quad";
default:
}
return "";
}
struct<16> func_783(int iParam0) // Position - 0x1F8A5{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "HPSETUP_MIS_", 64);
switch (iParam0){
case 0:
TEXT_LABEL_APPEND_INT(&unk, 0, 64);
break;
case 1:
TEXT_LABEL_APPEND_INT(&unk, 1, 64);
break;
case 2:
TEXT_LABEL_APPEND_INT(&unk, 2, 64);
break;
case 4:
TEXT_LABEL_APPEND_INT(&unk, 3, 64);
break;
case 5:
TEXT_LABEL_APPEND_INT(&unk, 4, 64);
break;
case 6:
TEXT_LABEL_APPEND_INT(&unk, 5, 64);
break;
case 7:
TEXT_LABEL_APPEND_INT(&unk, 6, 64);
break;
case 9:
TEXT_LABEL_APPEND_INT(&unk, 7, 64);
break;
case 10:
TEXT_LABEL_APPEND_INT(&unk, 8, 64);
break;
case 11:
TEXT_LABEL_APPEND_INT(&unk, 9, 64);
break;
case 12:
TEXT_LABEL_APPEND_INT(&unk, 10, 64);
break;
case 13:
TEXT_LABEL_APPEND_INT(&unk, 11, 64);
break;
}
return unk;
}

int func_784(int iParam0, int iParam1) // Position - 0x1F96D{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 16;
case 1:
return -1;
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 17;
case 1:
return -1;
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 18;
case 1:
return -1;
default:
break;
}
break;
case 4:
switch (iParam1){
case 0:
return 19;
case 1:
return -1;
default:
break;
}
break;
case 5:
switch (iParam1){
case 0:
return 20;
case 1:
return -1;
default:
break;
}
break;
case 6:
switch (iParam1){
case 0:
return 21;
case 1:
return -1;
default:
break;
}
break;
case 7:
switch (iParam1){
case 0:
return 22;
case 1:
return 23;
default:
break;
}
break;
case 9:
switch (iParam1){
case 0:
return 24;
case 1:
return 25;
default:
break;
}
break;
case 10:
switch (iParam1){
case 0:
return 26;
case 1:
return -1;
default:
break;
}
break;
case 11:
switch (iParam1){
case 0:
return 27;
case 1:
return -1;
default:
break;
}
break;
case 12:
switch (iParam1){
case 0:
return 28;
case 1:
return -1;
default:
break;
}
break;
case 13:
switch (iParam1){
case 0:
return 29;
case 1:
return -1;
default:
break;
}
break;
}
return -1;
}
BOOL func_785(int iParam0) // Position - 0x1FB3B{
if(iParam0 > -1 && iParam0 < 30) return true;
return false;
}

int func_786(int iParam0, int iParam1) // Position - 0x1FB59{
switch (iParam1){
case 0:
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
default:
break;
}
break;
case 1:
switch (iParam0){
case 0:
return 4;
case 1:
return 5;
case 2:
return 6;
case 3:
return 7;
case 4:
return 8;
default:
break;
}
break;
case 2:
switch (iParam0){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
case 3:
return 12;
case 4:
return 13;
case 5:
return 14;
case 6:
return 15;
default:
break;
}
break;
}
return -1;
}


char* func_787(int iParam0) // Position - 0x1FC41{
switch (iParam0){
case 0:
return "HPDESC_IAA" /*Help Avon Hertz in tracking down multiple data breaches to protect the government from being attacked.*/;
case 1:
return "HPDESC_SUB" /*Work with the IAA to eliminate enemy agents operating throughout San Andreas and prevent a war.*/;
case 2:
return "HPDESC_MSIL" /*San Andreas's defense systems have been high-jacked. Save agents and stop the build-up of weaponry to save the world from destruction.*/;
default:
}
return "*INVALID*";
}


char* func_788(int iParam0, BOOL bParam1) // Position - 0x1FC7B{
switch (iParam0){
case 0:
if(bParam1) return "HPSTRAND_IAAb" /*The Data Breaches*/;
return "HPSTRAND_IAA" /*THE DATA BREACHES*/;
case 1:
if(bParam1) return "HPSTRAND_SUBb" /*The Bogdan Problem*/;
return "HPSTRAND_SUB" /*THE BOGDAN PROBLEM*/;
case 2:
if(bParam1) return "HPSTRAND_MSILb" /*The Doomsday Scenario*/;
return "HPSTRAND_MSIL" /*THE DOOMSDAY SCENARIO*/;
default:
}
return "*INVALID*";
}

int func_789(int iParam0) // Position - 0x1FCD9{
switch (iParam0){
case 0:
return Global_262145.f_23346;
case 1:
return Global_262145.f_23347;
case 2:
return Global_262145.f_23348;
default:
}
return -1;
}


void func_790() // Position - 0x1FD19{
int i;
int j;
var gxt;
float num;
int num2;
for (i=0;
i <=3;
i=i + 1){
Global_1966831.f_812.f_56[i]=-1;
Global_1966831.f_812.f_50[i]=0;
}
Global_1966831.f_812.f_43=func_791(*Global_4718592.f_114184, true);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
num=1f;
switch (Global_2680247[2]){
case 0:
num=1f;
break;
case 1:
num=Global_262145.f_9202;
break;
case 2:
num=Global_262145.f_9203;
break;
}
Global_1966831.f_812.f_43=SYSTEM::ROUND((float)Global_1966831.f_812.f_43 * num);
}
if(Global_1966831.f_812.f_43 > Global_262145.f_23289) Global_1966831.f_812.f_43=Global_262145.f_23289;
num2=func_276(Global_1966831.f_812.f_77);
switch (num2){
case 0:
TEXT_LABEL_ASSIGN_STRING(&(Global_1966831.f_812.f_78), HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HPSTRAND_IAA" /*THE DATA BREACHES*/), 64);
for (j=0;
j <=18;
j=j + 1){
TEXT_LABEL_ASSIGN_STRING(&gxt, "HP_IAA_STEP_", 64);
TEXT_LABEL_APPEND_INT(&gxt, j, 64);
if(HUD::DOES_TEXT_LABEL_EXIST(&gxt)) Global_1966831.f_812.f_110[j /*16*/]={
gxt 
};
}
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&(Global_1966831.f_812.f_78), HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HPSTRAND_SUB" /*THE BOGDAN PROBLEM*/), 64);
Global_1966831.f_812.f_415=0;
for (j=0;
j <=18;
j=j + 1){
TEXT_LABEL_ASSIGN_STRING(&gxt, "HP_SUB_STEP_A", 64);
TEXT_LABEL_APPEND_INT(&gxt, j, 64);
if(HUD::DOES_TEXT_LABEL_EXIST(&gxt)) Global_1966831.f_812.f_110[j /*16*/]={
gxt 
};
}
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&(Global_1966831.f_812.f_78), HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HPSTRAND_MSIL" /*THE DOOMSDAY SCENARIO*/), 64);
for (j=0;
j <=18;
j=j + 1){
TEXT_LABEL_ASSIGN_STRING(&gxt, "HP_MSI_STEP_", 64);
TEXT_LABEL_APPEND_INT(&gxt, j, 64);
if(HUD::DOES_TEXT_LABEL_EXIST(&gxt)) Global_1966831.f_812.f_110[j /*16*/]={
gxt 
};
}
break;
}
if(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_28==0){
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_28=1;
_STOPWATCH_INITIALIZE(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_36), false, false);
}
return;
}

int func_791(int iParam0, BOOL bParam1) // Position - 0x1FF51{
int value;
if(func_792(*Global_4718592.f_166301)) return 20000;
if(bParam1){
switch (iParam0){
case 21:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_PACIFIC_STANDARD_JOB_CASH_REWARD"), &value)) return value;
return Global_262145.f_9132;
case 22:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_PRISON_BREAK_CASH_REWARD"), &value)) return value;
return Global_262145.f_9129;
case 23:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_HUMANE_LABS_RAID_CASH_REWARD"), &value)) return value;
return Global_262145.f_9130;
case 24:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_SERIES_A_FUNDING_CASH_REWARD"), &value)) return value;
return Global_262145.f_9131;
case 25:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), joaat("HEIST_FLEECA_JOB_CASH_REWARD"), &value)) return value;
return Global_262145.f_9128;
case 26:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), 419800513, &value)) return value;
return Global_262145.f_9133;
case 27:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), -829097151, &value)) return value;
return Global_262145.f_9134;
case 28:
if(NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(joaat("MP_Global"), 287993374, &value)) return value;
return Global_262145.f_9135;
default:
}}
switch (iParam0){
case 0:
value=500;
break;
case 1:
value=1000;
break;
case 2:
value=1500;
break;
case 3:
value=2000;
break;
case 4:
value=3000;
break;
case 5:
value=5000;
break;
case 6:
value=7000;
break;
case 7:
value=9000;
break;
case 8:
value=10000;
break;
case 9:
value=12000;
break;
case 10:
value=14000;
break;
case 11:
value=16000;
break;
case 12:
value=18000;
break;
case 13:
value=20000;
break;
case 14:
value=23000;
break;
case 15:
value=25000;
break;
case 16:
value=30000;
break;
case 17:
value=40000;
break;
case 18:
value=50000;
break;
case 19:
value=100000;
break;
case 20:
value=0;
break;
case 21:
value=Global_262145.f_9132;
break;
case 22:
value=Global_262145.f_9129;
break;
case 23:
value=Global_262145.f_9130;
break;
case 24:
value=Global_262145.f_9131;
break;
case 25:
value=Global_262145.f_9128;
break;
case 26:
value=Global_262145.f_9133;
break;
case 27:
value=Global_262145.f_9134;
break;
case 28:
value=Global_262145.f_9135;
break;
case 29:
value=Global_262145.f_9136;
break;
case 30:
value=Global_262145.f_9137;
break;
case 31:
value=Global_262145.f_9138;
break;
case 32:
value=Global_262145.f_28379;
break;
case 33:
value=Global_262145.f_29728;
break;
}
return value;
}
BOOL func_792(int iParam0) // Position - 0x202D6{
return iParam0==3;
}

int func_793(Player plParam0) // Position - 0x202E2{
switch (func_140(plParam0, false)){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case -1:
return -1;
default:
}
return -1;
}


void func_794() // Position - 0x2031F{
int i;
i=0;
if(Global_1963033.f_812.f_147){
Global_1963033.f_812.f_145=3;
TEXT_LABEL_ASSIGN_STRING(&(Global_1963033.f_812), "HPIDLE_REPLAY" /*REPLAY THE DOOMSDAY HEIST*/, 64);
for (i=0;
i <=Global_1963033.f_812.f_145 - 1;
i=i + 1){
Global_1963033.f_812.f_137[i]=i;
Global_1963033.f_812.f_141[i]=func_800(Global_1963033.f_812.f_146, func_276(Global_1963033.f_812.f_137[i]));
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_16[i /*16*/], func_788(Global_1963033.f_812.f_137[i], false), 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_65[i /*16*/], func_787(Global_1963033.f_812.f_137[i]), 64);
Global_1963033.f_812.f_133[i]=func_789(func_276(Global_1963033.f_812.f_137[i]));
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_114[i /*6*/], func_799(Global_1963033.f_812.f_137[i], false), 24);
}}else{
Global_1963033.f_812.f_145=1;
TEXT_LABEL_ASSIGN_STRING(&(Global_1963033.f_812), "HPIDLE_PLAY" /*THE DOOMSDAY HEIST SETUP*/, 64);
Global_1963033.f_812.f_137[i]=func_795(Global_1963033.f_812.f_146);
Global_1963033.f_812.f_141[i]=func_800(Global_1963033.f_812.f_146, func_276(Global_1963033.f_812.f_137[i]));
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_16[i /*16*/], func_788(Global_1963033.f_812.f_137[i], false), 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_65[i /*16*/], func_787(Global_1963033.f_812.f_137[i]), 64);
Global_1963033.f_812.f_133[i]=func_789(func_276(Global_1963033.f_812.f_137[i]));
TEXT_LABEL_ASSIGN_STRING(&Global_1963033.f_812.f_114[i /*6*/], func_799(Global_1963033.f_812.f_137[i], true), 24);
}
return;
}

int func_795(Player plParam0) // Position - 0x2050A{
return func_796(func_797(plParam0));
}

int func_796(int iParam0) // Position - 0x2051C{
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
return -1;
}

int func_797(Player plParam0) // Position - 0x2054A{
if(!func_678(plParam0))if(func_798(plParam0, 1)) return 2;
elseif(func_798(plParam0, 0)) return 1;
else return 0;
return -1;
}
BOOL func_798(Player plParam0, int iParam1) // Position - 0x20586{
if(plParam0 !=_INVALID_PLAYER_INDEX()){
switch (iParam1){
case 0:
return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 3);
case 1:
return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 4);
case 2:
return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_26, 5);
default:
}}
return false;
}


char* func_799(int iParam0, BOOL bParam1) // Position - 0x205E4{
switch (iParam0){
case 0:
if(bParam1) return "SETUP_IAA";
return "1_replay";
case 1:
if(bParam1) return "SETUP_SUB";
return "2_replay";
case 2:
if(bParam1) return "SETUP_SILO";
return "3_replay";
default:
}
return "";
}

int func_800(Player plParam0, int iParam1) // Position - 0x20642{
Player player;
player=plParam0;
if(player !=-1)if(func_801(plParam0, iParam1)) return 5;
else return 0;
return -1;
}
BOOL func_801(Player plParam0, int iParam1) // Position - 0x2066B{
Player player;
player=plParam0;
if(player !=-1){
switch (iParam1){
case 0:
if(IS_BIT_SET(Global_1890444[player /*129*/].f_38.f_26, 15)) return true;
break;
case 1:
if(IS_BIT_SET(Global_1890444[player /*129*/].f_38.f_26, 16)) return true;
break;
case 2:
if(IS_BIT_SET(Global_1890444[player /*129*/].f_38.f_26, 17)) return true;
break;
}}
return false;
}
BOOL func_802(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x206E2{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i))){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(player !=PLAYER::PLAYER_ID() || player==PLAYER::PLAYER_ID() && bParam2)if(func_803(player, bParam0, iParam1, false)) return true;
}}
return false;
}
BOOL func_803(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20743{
if(plParam0 !=_INVALID_PLAYER_INDEX()){
if(func_206(plParam0) && func_804(PLAYER::PLAYER_ID(), plParam0, true) || bParam2){
if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_27, 6)) return false;
if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_27, 0))if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_27, 1) || bParam1)if(bParam3)if(IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_38.f_27, 2)) return true;
else return true;
}}
return false;
}
BOOL func_804(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x207D6{
if(func_805(plParam0) && func_805(plParam1)){
if(Global_2657589[plParam0 /*466*/].f_321.f_7==Global_2657589[plParam1 /*466*/].f_321.f_7){
if(bParam2) return Global_2648605.f_903.f_1[plParam0]==Global_2648605.f_903.f_1[plParam1];
return true;
}}
return false;
}
BOOL func_805(Player plParam0) // Position - 0x20839{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1;
elseif(Global_1575060 && plParam0==PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false)) return Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1;
return false;
}
BOOL func_806(int iParam0) // Position - 0x2089F{
if(iParam0==Global_262145.f_5042[3] || iParam0==Global_262145.f_5042[8] || iParam0==Global_262145.f_5042[14] || iParam0==Global_262145.f_5042[15]) return true;
return false;
}


void func_807() // Position - 0x208F8{
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))if(!_IS_FMMC_ACTIVE() && !func_162() && !func_58())if(func_814()) func_813();
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 6)) func_813();
if(func_809() || func_808()){
if(iLocal_178 > 0 && iLocal_178 < 6) iLocal_178=6;
func_813();
}
return;
}
BOOL func_808() // Position - 0x20980{
return IS_BIT_SET(Global_2683862.f_2, 20);
}
BOOL func_809() // Position - 0x20991{
Player player;
if(func_812(PLAYER::PLAYER_ID()) !=_INVALID_PLAYER_INDEX()){
player=func_812(PLAYER::PLAYER_ID());
if(player !=-1)if(IS_BIT_SET(Global_1890444[player /*129*/].f_38.f_27, 5)) return true;
}
if(func_811() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_162() && func_6()==1 || func_810()) return true;
return false;
}
BOOL func_810() // Position - 0x20A03{
if(IS_BIT_SET(Global_1966831.f_1247, 17) || IS_BIT_SET(Global_1964005.f_2825, 17)) return true;
return false;
}
BOOL func_811() // Position - 0x20A2D{
return Global_2683862.f_696;
}
Player func_812(Player plParam0) // Position - 0x20A3C{
if(plParam0==_INVALID_PLAYER_INDEX()) return plParam0;
return Global_2657589[plParam0 /*466*/].f_321.f_10;
}


void func_813() // Position - 0x20A60{
if(Global_1966831.f_718 < 5) func_704(&(Global_1966831.f_718), 5);
elseif(Global_1966831.f_718==6) iLocal_178=6;
if(Global_1964005.f_718 < 5) func_704(&(Global_1964005.f_718), 5);
elseif(Global_1964005.f_718==6) iLocal_178=6;
if(Global_1963033.f_718 < 5){
func_704(&(Global_1963033.f_718), 5);
iLocal_178=1;
}elseif(Global_1963033.f_718==6){
iLocal_178=6;
}
return;
}
BOOL func_814() // Position - 0x20AE3{
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 353.71417f, 4877.06f, -59.14812f, true) >=21f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 345.1879f, 4864.4146f, -60.02681f, 334.60175f, 4848.472f, -56.749474f, 6f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 336.94904f, 4848.107f, -60.249474f, 339.97388f, 4843.7324f, -56.74947f, 7f, false, true, 0) && !Global_2766478) return true;
if(Global_2766478 && !func_802(false, 0, false)) return true;
if(Global_1963033.f_718 >=3)if(IS_BIT_SET(Global_1963033.f_971, 0) && func_140(Global_1963033.f_812.f_146, false) !=-1) return true;
return false;
}


void func_815() // Position - 0x20BC8{
func_821();
func_819();
func_817();
func_816();
return;
}


void func_816() // Position - 0x20BE0{
if(IS_BIT_SET(Global_1966831.f_1247, 0)){
if(IS_BIT_SET(Global_1966831.f_1247, 16)){
func_103(&uLocal_182, -1, 0, 1, true);
iLocal_178=3;
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 6);
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 7);
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 1);
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 2);
MISC::CLEAR_BIT(&(Global_1966831.f_1247), 16);
}}elseif(IS_BIT_SET(Global_1964005.f_2825, 0)){
if(IS_BIT_SET(Global_1964005.f_2825, 16)){
func_103(&uLocal_182, -1, 0, 1, true);
iLocal_178=2;
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 6);
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 7);
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 1);
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 2);
MISC::CLEAR_BIT(&(Global_1964005.f_2825), 16);
}}
return;
}


void func_817() // Position - 0x20CB1{
if(_STOPWATCH_IS_INITIALIZED(&uLocal_180))if(_STOPWATCH_HAS_TIME_PASSED(&uLocal_180, func_818(), false))if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 2)) MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 2);
return;
}

int func_818() // Position - 0x20CFA{
if(IS_BIT_SET(Global_1963033.f_971, 0) || IS_BIT_SET(Global_1964005.f_2825, 0)) return 5000;
return 7000;
}


void func_819() // Position - 0x20D26{
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 3)) func_820();
if(_IS_FMMC_ACTIVE() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_820();
if(IS_BIT_SET(Global_1964005.f_2825, 1) || IS_BIT_SET(Global_1964005.f_2825, 2) && !IS_BIT_SET(Global_1964005.f_2825, 7)) func_820();
if(IS_BIT_SET(Global_1966831.f_1247, 1) || IS_BIT_SET(Global_1966831.f_1247, 2) && !IS_BIT_SET(Global_1966831.f_1247, 7)) func_820();
return;
}


void func_820() // Position - 0x20DB6{
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i))){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(player !=_INVALID_PLAYER_INDEX()) NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(player, false);
}}
return;
}


void func_821() // Position - 0x20DF6{
if(Global_1963033.f_718==4 || Global_1964005.f_718==4 || Global_1966831.f_718==4){
if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 3)){
MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 3);
func_822(1);
if(Global_1966831.f_718==4) Global_786546=NETWORK::GET_NETWORK_TIME();
}}elseif(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 3)){
MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 3);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
func_822(0);
}
return;
}


void func_822(int iParam0) // Position - 0x20EA4{
Global_2696952=iParam0;
return;
}


void func_823() // Position - 0x20EB2{
if(IS_BIT_SET(Global_1966831.f_1247, 5))if(Global_1968299) Global_1968299=false;
func_841();
func_840();
func_824(false);
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED("Prop_x17DLC_Monitor_Wall_01a")) HUD::RELEASE_NAMED_RENDERTARGET("Prop_x17DLC_Monitor_Wall_01a");
func_103(&uLocal_182, -1, 0, 1, true);
if(Global_1968298){
Global_1968298=false;
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 0)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 0);
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 1)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 1);
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 3)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 3);
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 2)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 2);
}
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_824(BOOL bParam0) // Position - 0x20FA8{
func_838();
func_836();
func_825(bParam0);
func_200();
return;
}


void func_825(BOOL bParam0) // Position - 0x20FC2{
func_835(&Global_1966831);
func_834(&(Global_1966831.f_718));
func_833(&(Global_1966831.f_725));
func_832(&(Global_1966831.f_794));
func_831(&(Global_1966831.f_804));
func_830(&(Global_1966831.f_806));
func_829(&(Global_1966831.f_812));
func_828(&(Global_1966831.f_1239));
func_827(&(Global_1966831.f_1243));
Global_1966831.f_1247=0;
if(!bParam0) func_826();
func_200();
return;
}


void func_826() // Position - 0x21040{
var unk;
unk.f_1=4;
unk.f_6=4;
unk.f_11=4;
unk.f_16=5;
unk.f_31=4;
Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38={
unk 
};
return;
}


void func_827(BOOL bParam0) // Position - 0x2107D{
var unk;
unk.f_1=-1;
unk.f_3=-1;
*bParam0={
unk 
};
return;
}


void func_828(var uParam0) // Position - 0x2109C{
var unk;
*uParam0={
unk 
};
return;
}


void func_829(var uParam0) // Position - 0x210AC{
var unk;
unk=4;
unk.f_45=4;
unk.f_50=5;
unk.f_56=4;
unk.f_61=4;
unk.f_66=5;
unk.f_72=4;
unk.f_110=19;
unk.f_418=4;
unk.f_423=-1;
unk.f_424=-1;
unk.f_425=-1;
unk.f_426=1000000;
*uParam0={
unk 
};
return;
}


void func_830(var uParam0) // Position - 0x21118{
var unk;
*uParam0={
unk 
};
return;
}


void func_831(var uParam0) // Position - 0x21128{
var unk;
*uParam0={
unk 
};
return;
}


void func_832(var uParam0) // Position - 0x21138{
var unk;
*uParam0={
unk 
};
return;
}


void func_833(var uParam0) // Position - 0x2114A{
var unk;
unk.f_65=500;
*uParam0={
unk 
};
return;
}


void func_834(int iParam0) // Position - 0x21167{
var unk;
*iParam0={
unk 
};
return;
}


void func_835(var uParam0) // Position - 0x21177{
var unk;
unk.f_1=12;
unk.f_699=1065353216;
unk.f_701=1;
unk.f_702=1;
unk.f_717=-1;
*uParam0={
unk 
};
return;
}


void func_836() // Position - 0x211B7{
func_835(&Global_1964005);
func_834(&(Global_1964005.f_718));
func_833(&(Global_1964005.f_725));
func_837(&(Global_1964005.f_812));
func_832(&(Global_1964005.f_794));
func_831(&(Global_1964005.f_804));
func_830(&(Global_1964005.f_806));
func_828(&(Global_1964005.f_2817));
func_827(&(Global_1964005.f_2821));
Global_1964005.f_2825=0;
func_200();
return;
}


void func_837(Player plParam0) // Position - 0x2122B{
var unk;
unk.f_1=7;
unk.f_1.f_1.f_57=8;
unk.f_1.f_1.f_189=2;
unk.f_1.f_1.f_280.f_57=8;
unk.f_1.f_1.f_280.f_189=2;
unk.f_1.f_1.f_280.f_280.f_57=8;
unk.f_1.f_1.f_280.f_280.f_189=2;
unk.f_1.f_1.f_280.f_280.f_280.f_57=8;
unk.f_1.f_1.f_280.f_280.f_280.f_189=2;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_57=8;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_189=2;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_280.f_57=8;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_280.f_189=2;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_280.f_280.f_57=8;
unk.f_1.f_1.f_280.f_280.f_280.f_280.f_280.f_280.f_189=2;
unk.f_2002=-1;
unk.f_2003=-1;
*plParam0={
unk 
};
return;
}


void func_838() // Position - 0x212CA{
func_835(&Global_1963033);
func_834(&(Global_1963033.f_718));
func_833(&(Global_1963033.f_725));
func_839(&(Global_1963033.f_812));
func_832(&(Global_1963033.f_794));
func_831(&(Global_1963033.f_804));
func_830(&(Global_1963033.f_806));
func_828(&(Global_1963033.f_963));
func_827(&(Global_1963033.f_967));
Global_1963033.f_971=0;
Global_1963033.f_812.f_147=0;
func_200();
return;
}


void func_839(char* sParam0) // Position - 0x21348{
var unk;
unk.f_16=3;
unk.f_65=3;
unk.f_114=3;
unk.f_133=3;
unk.f_137=3;
unk.f_141=3;
unk.f_149=-1;
unk.f_150=-1;
*sParam0={
unk 
};
return;
}


void func_840() // Position - 0x2138D{
if(Global_1963033.f_967){
if(Global_1963033.f_967.f_1 !=-1){
AUDIO::STOP_SOUND(Global_1963033.f_967.f_1);
AUDIO::RELEASE_SOUND_ID(Global_1963033.f_967.f_1);
Global_1963033.f_967.f_1=-1;
Global_1963033.f_967=0;
}}
if(Global_1964005.f_2821){
if(Global_1964005.f_2821.f_1 !=-1){
AUDIO::STOP_SOUND(Global_1964005.f_2821.f_1);
AUDIO::RELEASE_SOUND_ID(Global_1964005.f_2821.f_1);
Global_1964005.f_2821.f_1=-1;
Global_1964005.f_2821=0;
}}
if(Global_1966831.f_1243){
if(Global_1966831.f_1243.f_1 !=-1){
AUDIO::STOP_SOUND(Global_1966831.f_1243.f_1);
AUDIO::RELEASE_SOUND_ID(Global_1966831.f_1243.f_1);
Global_1966831.f_1243.f_1=-1;
Global_1966831.f_1243=0;
}}
func_209(&Global_1966831);
return;
}


void func_841() // Position - 0x21466{
func_420();
func_157();
func_712();
func_423();
func_173();
func_715();
return;
}


void func_842() // Position - 0x21486{
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(!func_29()) func_160();
if(Global_1968298==false){
Global_1968298=true;
if(IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 6)) MISC::CLEAR_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 6);
if(!Global_2766478)if(!IS_BIT_SET(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27, 0)) MISC::SET_BIT(&(Global_1890444[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*129*/].f_38.f_27), 0);
}
return;
}