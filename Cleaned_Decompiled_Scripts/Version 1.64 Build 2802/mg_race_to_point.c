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
float fLocal_12=0f;
float fLocal_13=0f;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
char* sLocal_18=NULL;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
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
float fLocal_60=0f;
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
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
struct<24> Local_89={
0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
struct<4> Local_116[32];
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
int iLocal_249=0;
int iLocal_250=0;
int iLocal_251=0;
int iLocal_252=0;
bool bLocal_253=0;
int iLocal_254=0;
int iLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
int iLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
int iLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
struct<4> Local_264={
0, 0, 0, 0 
};
struct<3> Local_268={
0, 0, 0 
};
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=-1134206910;
var uLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=0;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
struct<21> Local_296={
5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_317=0;
var uLocal_318=0;
int iLocal_319=0;
struct<3> Local_320={
0, 0, 0 
};
var uLocal_323=0;
var uLocal_324=0;
int iLocal_325=0;
int iLocal_326=0;
int iLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
int iLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
struct<21> ScriptParam_0={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
};
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
sLocal_18="NULL";
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_60=((0.05f + 0.275f) - 0.01f);
iLocal_87=10;
iLocal_88=1;
iLocal_250=1;
iLocal_258=-1;
iLocal_261=-1;
iLocal_319=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_579(ScriptParam_0)){
func_572();
}
if(!MISC::IS_PC_VERSION()){
if(func_571()){
func_572();
}}
if(Global_60543 || Global_75693){
func_572();
}}
while (true){
func_570();
iLocal_254=0;
iLocal_255=0;
if(func_563()){
func_572();
}
if(!func_529(0, 0, 0)){
func_572();
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() !=iLocal_326){
func_572();
}
if(func_518(0)){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=2;
}
switch (func_517(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
func_511(0);
func_509(0, -1, 0);
if(!func_571()){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=1;
}elseif(func_508(&uLocal_262, 5000, 0)){
func_572();
}
if(func_507()==4){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=3;
}
break;
case 1:
if(func_507()==1){
func_32();
}elseif(func_507()==0){
if(func_571()){
func_572();
}}elseif(func_507()==4){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=3;
}
if(func_27()){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
}
break;
case 3:
func_25(&(Local_89.f_23));
if(func_24(&(Local_89.f_23))){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
}
break;
case 2:
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
case 4:
func_572();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_507()){
case 0:
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
Local_89.f_0=1;
break;
case 1:
func_22();
func_3();
if(func_1()){
Local_89.f_0=4;
}
break;
case 4:
break;
}}}}

int func_1(){
if(func_2()){
return 1;
}
return 0;
}

int func_2(){
if(Local_89.f_22==0){
if(MISC::IS_BIT_SET(Local_89.f_1, 3)){
return 1;
}}
return 0;
}


void func_3(){
switch (Local_89.f_22){
case 0:
if(func_13()){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
func_4(Local_89.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
Local_89.f_22=1;
}
break;
case 1:
Local_89.f_13=NETWORK::GET_NETWORK_TIME();
Local_89.f_22=2;
break;
case 2:
if(Local_89.f_2 !=-1){
Local_89.f_22=3;
}
break;
case 3:
Local_89.f_22=4;
break;
case 4:
break;
}}


void func_4(struct<3> Param0, int iParam3, int iParam4){
struct<4> Var0;
Var0.f_0=-1962062913;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam3;
Var0.f_3={
Param0 
};
if(!iParam4==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 13, iParam4);
}}

int func_5(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_12(iVar2, 1, 1) && func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar2)==iParam0 || (Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0 && func_6(iParam0, PLAYER::GET_PLAYER_TEAM(bVar2), 0, -1))){
if(bVar2 !=PLAYER::PLAYER_ID()){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar2), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1), 1) <=IntToFloat(iParam1)){
MISC::SET_BIT(&uVar0, iVar1);
}}}}
bVar1++;
}
return uVar0;
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
if(iParam2==1){
if(iParam0==iParam1){
return 1;
}
return 0;
}
if((iParam0 > -1 && iParam1 > -1) && iParam0==iParam1){
return 1;
}
if(((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4){
bVar0=Global_1058070.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0)){
bVar1=Global_1058070.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_7(iParam0, bVar0, iParam1, bVar1) || !func_7(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 15);
default:
}
break;
}
return 0;
}

int func_7(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3)){
return 0;
}
iVar0=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}
iVar5=0;
iVar5=0;
while (iVar5 <=31){
iVar1=iVar5;
if(((!func_12(iVar1, 1, 1) || func_9(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_8(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(PED::IS_PED_INJURED(uVar2)){
}else{
iVar3=ENTITY::GET_ENTITY_MODEL(iVar2);
if(iVar4==joaat("mp_f_freemode_01") || iVar4==joaat("mp_m_freemode_01")){
if(iVar3==joaat("mp_f_freemode_01") || iVar3==joaat("mp_m_freemode_01")){
return 1;
}else{
return 0;
}}elseif(iVar4 !=iVar3){
return 0;
}}}
iVar5++;
}
return iVar0;
}


var func__8(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}


bool func_9(bool bParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_10(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_10(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_11();
}
if(Global_1575040[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_11(){
return Global_1574918;
}

int func_12(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
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

int func_13(){
if(func_19()){
return 0;
}
if(Local_296.f_14 !=4){
return 0;
}
if(MISC::IS_BIT_SET(Local_89.f_1, 7) && !MISC::IS_BIT_SET(Local_89.f_1, 9)){
return 0;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f){
return 0;
}
if(func_15(func_16(), 0f, 0f, 0f, 0) || func_15(func_16(), 0f, 0f, -2000f, 0)){
return 0;
}
if(func_14() || iLocal_254){
if(Local_89.f_14 >=2){
if(((Local_89.f_15[2] <=0 || Local_89.f_15[2] > iLocal_87) && !HUD::IS_WAYPOINT_ACTIVE()) && !MISC::IS_BIT_SET(Local_89.f_1, 10)){
return 0;
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
return 1;
}}}
return 0;
}

int func_14(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176)){
return 1;
}
return 0;
}


bool func_15(struct<3> Param0, struct<3> Param3, bool bParam6){
if(bParam6){
return (Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1);
}
return ((Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1) && Param0.f_2==Param3.f_2);
}


Vector3 func__16(){
struct<3> Var0;
switch (Local_89.f_15[2]){
case 0:
if(HUD::IS_WAYPOINT_ACTIVE()){
Var0={
HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) 
};
Var0.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((Var0.f_0 - 5f), (Var0.f_1 - 5f), (Var0.f_0 + 5f), (Var0.f_1 + 5f));
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, Var0, 1) > 1000f){
if(!MISC::IS_BIT_SET(Local_89.f_1, 7)){
func_18();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(1);
MISC::SET_BIT(&(Local_89.f_1), 7);
}
return Var0;
}}
return Local_89.f_10;
break;
case 1:
func_18();
return 15.072f, -1121.513f, 27.8034f;
break;
case 2:
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0 && !MISC::IS_BIT_SET(Global_2793044.f_1824, 24)){
func_18();
return func_17(11, 0);
}else{
func_18();
return Global_2793044.f_261;
}
break;
case 3:
func_18();
return -1151.037f, -1620.84f, (3.2754f + 3f);
break;
case 4:
func_18();
return 132.931f, -1305.746f, 28.1664f;
break;
case 5:
func_18();
return 2054.093f, 3935.84f, 32.1771f;
break;
case 6:
func_18();
return 514.7371f, 5532.385f, 774.9705f;
break;
case 7:
func_18();
return -1340.363f, -3041.919f, 12.9444f;
break;
case 8:
func_18();
return -2352.071f, 3423.654f, 27.8667f;
break;
case 9:
func_18();
return 54.7835f, 7243.388f, 1.5166f;
break;
case 10:
func_18();
return 675.3948f, 1203.25f, 322.2605f;
break;
}
func_18();
return 0f, 0f, -2000f;
}


Vector3 func__17(int iParam0, int iParam1){
switch (iParam0){
case 11:
return -1370.398f, 56.4489f, 52.5023f;
break;
case 122:
return -1154.816f, -2716.453f, 18.8923f;
break;
case 13:
switch (iParam1){
case 0:
return 16.3823f, -1099.956f, 28.797f;
case 1:
return 817.6979f, -2161.982f, 28.619f;
default:
}
break;
case 12:
switch (iParam1){
case 0:
return -1162.552f, -1628.393f, 3.3739f;
case 1:
return 479.8226f, -234.8953f, 52.7934f;
case 2:
return -1237.39f, 333.6207f, 78.9863f;
case 3:
return -2870.161f, 9.0811f, 10.6081f;
case 4:
return -939.5128f, -1255.697f, 6.9671f;
case 5:
return -1618.915f, 249.326f, 58.5552f;
case 6:
return -1369.999f, -117.22f, 49.7046f;
default:
}
break;
case 15:
switch (iParam1){
case 0:
return 904.329f, -173.7431f, 73.0754f;
case 1:
return 1440.432f, -2215.596f, 60.133f;
case 2:
return -83.8271f, -1330.888f, 28.2913f;
case 3:
return 366.4715f, -2446.227f, 5.1129f;
case 4:
return 1222.72f, 2721.2f, 37.0042f;
case 5:
return 1051.479f, 2667.29f, 38.5509f;
case 6:
return 273.371f, 2607.768f, 43.7028f;
case 7:
return -193.7423f, 6277.675f, 30.4892f;
case 8:
return 1687.137f, 4966.838f, 42.0569f;
case 9:
return 2343.971f, 3134.054f, 47.2088f;
default:
}
break;
case 14:
switch (iParam1){
case 0:
return 1994.783f, 3049.323f, 46.1123f;
default:
}
break;
}
return 0f, 0f, 0f;
}


void func_18(){
if(MISC::IS_BIT_SET(Local_89.f_1, 7)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
MISC::CLEAR_BIT(&(Local_89.f_1), 7);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
}
if(MISC::IS_BIT_SET(Local_89.f_1, 8)){
PED::SPAWNPOINTS_CANCEL_SEARCH();
MISC::CLEAR_BIT(&(Local_89.f_1), 8);
}
if(MISC::IS_BIT_SET(Local_89.f_1, 9)){
MISC::CLEAR_BIT(&(Local_89.f_1), 9);
}}

int func_19(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 1;
}
if(func_21(8, -1)){
return 1;
}
if(func_20(0)){
return 1;
}
return 0;
}

int func_20(int iParam0){
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


bool func_21(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_22(){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
int iVar4;
bool bVar5;
bool bVar6;
int iVar7;
fVar2=999999f;
MISC::SET_BIT(&(Local_89.f_1), 2);
MISC::SET_BIT(&(Local_89.f_1), true);
MISC::CLEAR_BIT(&(Local_89.f_1), false);
MISC::SET_BIT(&(Local_89.f_1), 3);
MISC::SET_BIT(&(Local_89.f_1), 6);
Local_89.f_14=0;
if(Local_89.f_22==0){
iLocal_114=0;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
bVar6=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
iVar7=PLAYER::GET_PLAYER_PED(bVar6);
Local_89.f_14++;
if(MISC::IS_BIT_SET(Local_89.f_1, 3)){
if(ENTITY::IS_ENTITY_AT_COORD(iVar7, Local_89.f_4, 350f, 350f, 350f, 0, 1, 0)){
MISC::CLEAR_BIT(&(Local_89.f_1), 3);
}}
if(func_12(bVar6, 1, 1)){
MISC::CLEAR_BIT(&(Local_89.f_1), 2);
MISC::SET_BIT(&(Local_89.f_1), false);
if(Global_2793044.f_28.f_81==1 && Global_2793044.f_28.f_46==0){
fVar3=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar7, 1), Local_89.f_7, 1);
if(fVar3 < fVar2){
if(func_23(iVar7)){
fVar2=fVar3;
Local_89.f_2=iVar0;
}}}
if(Local_89.f_22==0){
iLocal_114=(iLocal_114 + Local_116[iVar0 /*4*/].f_2);
}elseif(Local_89.f_22==2){
bVar5=bVar6;
iVar4=Global_2793044.f_28.f_47[bVar5];
if(Global_2793044.f_28.f_46==1){
if(func_508(&uLocal_335, 750, 0)){
if(iVar4 !=0){
if(iVar4 < iVar1 || iVar1==0){
iVar1=iVar4;
Local_89.f_2=iVar0;
}}
}}}}else{
MISC::CLEAR_BIT(&(Local_89.f_1), true);
}}
iVar0++;
}
if(Local_89.f_22==0){
if(iLocal_114 > Global_262145.f_176){
iLocal_114=Global_262145.f_176;
}
if(Local_89.f_3 !=iLocal_114){
iLocal_249=1;
Local_89.f_3=iLocal_114;
}
if(Local_89.f_3 < SYSTEM::ROUND((50f * Global_262145.f_178))){
Local_89.f_3=SYSTEM::ROUND((50f * Global_262145.f_178));
}}}

int func_23(int iParam0){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
iVar2=0;
while (iVar2 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uVar0) + 1){
uVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, (iVar2 - 1), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(!PED::IS_PED_INJURED(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(iVar3 !=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3))){
return 0;
}}}else{
return 1;
}
}}}
iVar2++;
}}}
return 1;
}

int func_24(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_25(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_26(uParam0, 0, 0);
}}}


void func_26(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}

int func_27(){
if(Local_89.f_22==0){
if(!func_12(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(func_31() !=0){
return 1;
}
if(func_30()){
return 1;
}
if(Global_1574964==1){
return 1;
}
if(Global_1836374==1){
return 1;
}
if(Global_60543){
return 1;
}
if(Global_75693){
return 1;
}
if(HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 1;
}
if(MISC::IS_BIT_SET(Global_2793044.f_4690, 16)){
MISC::CLEAR_BIT(&(Global_2793044.f_4690), 16);
return 1;
}
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89.f_4, 350f, 350f, 350f, 0, 1, 0)){
if(!func_15(func_16(), 0f, 0f, 0f, 0) && !func_15(func_16(), 0f, 0f, -2000f, 0)){
return 1;
}}elseif(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89.f_4, 300f, 300f, 300f, 0, 1, 0)){
if(!func_29(&uLocal_330)){
func_26(&uLocal_330, 0, 0);
}}elseif(func_29(&uLocal_330)){
func_28(&uLocal_330);
HUD::CLEAR_HELP(1);
}}
return 0;
}


void func_28(var uParam0){
uParam0->f_1=0;
}


bool func_29(var uParam0){
return uParam0->f_1;
}


bool func_30(){
return Global_100733.f_388 > 0;
}

int func_31(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192;
}


void func_32(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
switch (Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3){
case 0:
func_511(0);
func_506();
func_505();
func_504(&Local_320);
func_501();
NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!MISC::IS_BIT_SET(uLocal_245, 4)){
if(HUD::DOES_BLIP_EXIST(uLocal_246)){
iVar0=func_499(PLAYER::PLAYER_ID());
iVar1=func_497(Local_89.f_4, Local_89.f_7);
if(MONEY::NETWORK_CAN_SPEND_MONEY(iVar1, 0, 0, 0, -1, 0)){
if(iVar0 < iVar1){
if(iVar0 > 0){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=iVar0;
}else{
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=0;
}}else{
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=iVar1;
}
}
else{
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=0;
}
iLocal_249=1;
MISC::SET_BIT(&uLocal_245, 4);
}else{
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2=SYSTEM::ROUND((50f * Global_262145.f_178));
}}
func_234();
iVar2=PLAYER::PLAYER_ID();
if(MISC::IS_BIT_SET(Global_1890444[iVar2 /*129*/].f_14, 0)){
func_572();
}}
if(Local_89.f_22 > 0){
if(func_233()){
func_232();
}
func_231();
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
func_228(1, -1);
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=1;
}
break;
case 1:
func_511(0);
func_504(&Local_320);
if(!MISC::IS_BIT_SET(uLocal_245, 3)){
if(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0){
if(func_227()){
func_216(1564537328, Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, &uVar3, 0, 0, 0);
}else{
func_213(-Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 0);
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, "RaceToPoint", 0, 0);
}}
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
func_212(1);
func_211(1);
Local_268={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Global_2793044.f_28.f_80=1;
func_210(2, 1);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0){
Global_1853910[PLAYER::PLAYER_ID() /*862*/]=32;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2=32;
}
func_201(2, 0, 1);
MISC::SET_BIT(&uLocal_245, 3);
}
if(Local_89.f_22 > 1 && func_200(&Local_320)){
if(func_189(&Local_320, 1, 0, 1, 3, 1, 1, 0)){
Local_320.f_1=0;
func_188(&(Local_320.f_2));
func_187(&Local_320);
Global_2793044.f_28.f_80=0;
HUD::SET_MISSION_NAME(1, "R2P_MENU");
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=2;
}elseif(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_268, 7.5f, 7.5f, 7.5f, 0, 1, 0)){
Local_320.f_1=0;
func_188(&(Local_320.f_2));
func_187(&Local_320);
MISC::SET_BIT(&uLocal_245, 7);
func_186(27, "R2P_DQBIG", "R2P_DQSTR", 1, -1, 2, 1, 0);
func_572();
}}
break;
case 2:
func_505();
func_184();
if(Local_89.f_2 > -1){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}
break;
case 3:
func_33();
break;
case 4:
func_572();
break;
}}


void func_33(){
struct<8> Var0;
int iVar10;
int iVar11;
if(!MISC::IS_BIT_SET(uLocal_245, 1)){
Var0.f_0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_4={
Local_89.f_4 
};
Var0.f_7={
Local_89.f_7 
};
if(Local_89.f_2==NETWORK::PARTICIPANT_ID_TO_INT()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
if(iLocal_114 > Global_262145.f_176){
iLocal_114=Global_262145.f_176;
}
if(Local_89.f_3 < SYSTEM::ROUND((50f * Global_262145.f_178))){
Local_89.f_3=SYSTEM::ROUND((50f * Global_262145.f_178));
}
iVar10=Local_89.f_3;
func_167(&iVar10, 1);
if(iVar10 > 0){
if(func_227()){
func_216(-1027218631, iVar10, &iVar11, 0, 0, 0);
StringCopy(&(Global_4535172[iVar11 /*85*/].f_14.f_26), "mg_race_to_point", 32);
}else{
func_213(iVar10, 0);
MONEY::NETWORK_EARN_FROM_JOB(iVar10, "mg_race_to_point");
}}
func_115(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", -1636175450, 883210409, SYSTEM::ROUND((150f * Global_262145.f_4249)), 1, -1, 0, 0, 0);
func_114(25, Local_89.f_3, "R2P_IWSTR", 0, 1, -1, -1082130432, 2, 0);
Var0.f_3=1;
STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 150, Local_89.f_3, &Var0);
func_109(joaat("mpply_race_2_point_wins"), 1);
func_105(54, 1, -1);
}else{
func_86(26, "R2P_ILSTR", PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_89.f_2))), 1, -1, 0, 2);
Var0.f_3=0;
STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 0, 0, &Var0);
if(Local_89.f_2 !=-1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_89.f_2))){
func_38("R2P_PWTIC", NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_89.f_2)), 0, 0, 0, 1, 0);
}}
func_109(joaat("mpply_race_2_point_lost"), 1);
}
if(HUD::DOES_BLIP_EXIST(uLocal_246)){
HUD::REMOVE_BLIP(&uLocal_246);
}
GRAPHICS::DELETE_CHECKPOINT(uLocal_247);
func_36(21);
func_34();
MISC::SET_BIT(&uLocal_245, true);
}elseif(func_508(&uLocal_328, 7500, 0)){
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=4;
}}


void func_34(){
int iVar0;
iVar0=func_35(50);
Global_2645068[iVar0 /*83*/]=50;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_35(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645068[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645068[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}


void func_36(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_37() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_37(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_38(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
struct<16> Var2;
int iVar18;
int iVar19;
iVar0=-1;
iVar1=PLAYER::GET_PLAYER_TEAM(bParam1);
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam3){
if(!bParam2){
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if((iVar1 !=-1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4){
if(Global_4718592.f_108449[iVar1] !=-1){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_84(iVar1, bParam1, 0));
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_47(bParam1, -2, 1, 0, 0));
}}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_47(bParam1, -2, 1, 0, 0));
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_45(&Var2));
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764201={
func_44(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201)){
iVar18=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764131.f_22), "Leader") && Global_2764131.f_30==0){
iVar18=1;
}
if(Global_2764131.f_21 > 0){
iVar19=0;
}else{
iVar19=1;
}
if(bParam5){
if(bParam6){
Var2={
func_43(&Var2) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764131, 35), &(Global_2764131.f_17), Global_2764131.f_30, iVar18, 0, Global_2764131, &Var2, Global_1576217, Global_1576218, Global_1576219);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764131, 35), &(Global_2764131.f_17), Global_2764131.f_30, iVar18, 0, Global_2764131, Global_1576217, Global_1576218, Global_1576219);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_39(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_39(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_42() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_9(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_40(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944061.f_5[iVar0 /*53*/]=iParam0;
Global_1944061.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944061.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944061.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_40(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_41(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944061++;
if(Global_1944061 > 5){
Global_1944061=5;
return Global_1944061;
}
return (Global_1944061 - 1);
}


void func_41(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_42(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_43(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}
struct<13> func_44(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


var func__45(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_46(&cVar0);
}


var func__46(char[4] cParam0){
return cParam0;
}

int func_47(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_82(iParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_108449[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_82(PLAYER::PLAYER_ID()) || (func_81() && func_80())) && !MISC::IS_BIT_SET(Global_2793044.f_4690, 31)) && !bParam4){
uVar1=func_79();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(uVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_84(iParam1, bParam0, 0);
}else{
return func_59(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_59(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_84(iParam1, bParam0, 0);
}else{
return func_48(0, -1, 0);
}}else{
return func_48(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_84(iParam1, bParam0, 0);
}else{
return func_59(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_59(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_48(bool bParam0, int iParam1, bool bParam2){
return func_49(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_49(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_58() || (func_57() && func_55())) && Global_1665699.f_1){
if(bParam1){
return func_54(iParam2, iVar0);
}else{
return func_54(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_6(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_53(1);
}else{
return func_53(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_50(iVar0, iParam2, 1, 4);
}else{
return func_50(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_53(1);
}
return func_53(0);
}

int func_50(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_52(iParam0, iParam1, iParam3);
if(func_51(Global_4718592.f_113724, 1)){
if(iVar0==1){
iVar0=0;
}}
if(bParam2){
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
case 3:
return 31;
case 4:
return 32;
case 5:
return 33;
case 6:
return 34;
case 7:
return 35;
case 8:
return 36;
case 9:
return 37;
case 10:
return 38;
case 11:
return 39;
case 12:
return 40;
case 13:
return 41;
case 14:
return 42;
case 15:
return 43;
default:}}else{
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
}
default:
}
return 28;
}

int func_51(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(Global_4718592.f_166301==65){
return 1;
}}
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(iParam0==Global_262145.f_9486[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_52(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_6(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_53(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_54(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_52(iParam1, iParam0, 4);
}
switch (iParam0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
default:
}
return 28;
}

int func_55(){
if(func_56()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_56(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_57(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_58(){
if(func_56() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_59(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
}else{
iVar0=iParam2;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148){
bVar1=true;
}
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853910[iVar2 /*862*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_69()){
iVar3=func_64(bParam0);
if(!iVar3==-1){
return func_62(iVar3);
}}
if((func_61(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_6(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_53(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_60(1);
}else{
return func_49(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_53(1);
}else{
return func_49(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_64(bParam0);
if(!iVar4==-1){
return func_62(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_60(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_61(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(bParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}

int func_62(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_63(iParam0);
switch (iVar0){
case 0:
return 192;
case 1:
return 193;
case 2:
return 194;
case 3:
return 195;
case 4:
return 196;
case 5:
return 197;
case 6:
return 198;
case 7:
return 199;
case 8:
return 200;
case 9:
return 201;
case 10:
return 202;
case 11:
return 203;
case 12:
return 204;
case 13:
return 205;
case 14:
return 206;
}
default:
}
return 1;
}


var func__63(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_64(int iParam0){
if(!iParam0==func_68()){
if(func_66(iParam0, 1)){
return Global_2648605.f_818.f_11[func_65(iParam0)];
}}
return -1;
}

int func_65(int iParam0){
if(iParam0 !=func_68()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_68();
}


bool func_66(int iParam0, bool bParam1){
if(!bParam1){
if(func_67(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_68();
}

int func_67(int iParam0){
if(iParam0 !=func_68()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_68()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_68(){
return -1;
}

int func_69(){
if((((((func_78() || func_77()) || func_76()) || func_75()) || func_74()) || func_72()) || func_70()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_70(){
return func_71(Global_4718592.f_113724);
}

int func_71(int iParam0){
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

int func_72(){
return func_73(Global_4718592.f_113724);
}

int func_73(int iParam0){
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


var func__74(){
return Global_2683862.f_24;
}


var func__75(){
return Global_2683862.f_21;
}


bool func_76(){
return Global_2683862.f_19;
}


var func__77(){
return Global_2683862.f_18;
}


var func__78(){
return Global_2683862.f_17;
}


var func__79(){
return Global_2621446.f_2;
}


var func__80(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__81(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_82(int iParam0){
if(func_9(iParam0, 0)){
return 1;
}
if(func_83()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_83(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_84(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_69()){
iVar2=func_64(iParam1);
if(!iVar2==-1){
return func_62(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_68()){
if(Global_4718592.f_108449[iParam0] !=-1 && Global_4718592.f_108449[iParam0] <=4){
if(Global_4718592.f_108449[iParam0]==0){
iVar0=15;
}elseif(Global_4718592.f_108449[iParam0]==1){
iVar0=18;
}elseif(Global_4718592.f_108449[iParam0]==2){
iVar0=24;
}elseif(Global_4718592.f_108449[iParam0]==4){
if(MISC::IS_BIT_SET(Global_4718592.f_15, 29)){
iVar0=21;
}else{
iVar0=6;
}}else{
iVar0=Global_4718592.f_108449[iParam0];
}}else{
iVar0=func_49(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_85(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_6(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_60(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_85(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_4718592.f_166456;
break;
case 1:
iVar0=Global_4718592.f_166457;
break;
case 2:
iVar0=Global_4718592.f_166458;
break;
case 3:
iVar0=Global_4718592.f_166459;
break;
}
switch (iVar0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
case 4:
return 6;
case 5:
return 9;
case 6:
return 3;
case 7:
return 1;
case 8:
return 12;
case 9:
return 2;
default:
}
return 2;
}

int func_86(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_104(iParam0, &Var0, -1, sParam1, sParam5);
StringCopy(&(Var0.f_25), sParam2, 64);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam6;
return func_87(&Var0);
}

int func_87(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2835){
return 0;
}}
func_103(uParam0, uParam0->f_17);
func_100(uParam0);
if(func_76()){
func_100(uParam0);
}
if(func_99(uParam0->f_1)){
func_92();
if(Global_2672505.f_2513[0 /*80*/].f_2==0){
Global_2672505.f_2513[0 /*80*/]={
*uParam0 
};
if(func_91(uParam0->f_69, 8192)){
Global_1935182=1;
}
return 1;
}
if(((Global_2672505.f_2513[0 /*80*/].f_1==13 || Global_2672505.f_2513[0 /*80*/].f_1==53) || Global_2672505.f_2513[0 /*80*/].f_1==54) || Global_2672505.f_2513[0 /*80*/].f_1==58){
Global_2672505.f_2513[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672505.f_2513[iVar0 + 1 /*80*/]={
Global_2672505.f_2513[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672505.f_2513[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672505.f_2513[iVar0 /*80*/].f_2==0){
Global_2672505.f_2513[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_92();
}
return 1;
}else{
if(uParam0->f_1==1){
func_89(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2513[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_91(uParam0->f_69, 128)){
if(func_88(Global_2672505.f_2513[iVar0 /*80*/].f_1)){
Global_2672505.f_2513[iVar0 /*80*/].f_2=5;
func_89(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_88(int iParam0){
switch (iParam0){
case 88:
case 87:
case 91:
case 92:
case 86:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}


void func_89(var uParam0, int iParam1){
func_90(uParam0, iParam1);
}


void func_90(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_91(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_92(){
bool bVar0;
if(Global_2672505.f_2836){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_93();
if(bVar0){
Global_78827=0;
}}


void func_93(){
Global_2672505.f_2837=0;
Global_2672505.f_2837.f_582=0;
func_97(&(Global_2672505.f_2837.f_1));
Global_2672505.f_2837.f_1.f_1=0;
func_94(&(Global_2672505.f_2837.f_1), 1);
}


void func_94(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78827){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78828){
if(CAM::IS_SCREEN_FADED_OUT() && !func_96(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_95(0);
}


void func_95(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_96(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_97(var uParam0){
func_98(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_98(var uParam0){
uParam0->f_547=1f;
uParam0->f_546=0;
uParam0->f_572=0f;
uParam0->f_562=0;
uParam0->f_30=0f;
uParam0->f_548=0f;
uParam0->f_563=0f;
uParam0->f_564=0f;
uParam0->f_545=0;
uParam0->f_567=0;
uParam0->f_576=0;
uParam0->f_568=0;
uParam0->f_569=0;
uParam0->f_570=0;
*uParam0=0.1125f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_578=0;
uParam0->f_579=0;
uParam0->f_577=1f;
}

int func_99(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_100(var uParam0){
if(func_102(uParam0->f_1)){
uParam0->f_72=func_101();
}}

int func_101(){
return 21;
}

int func_102(int iParam0){
switch (iParam0){
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
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
return 1;
default:
}
return 0;
}


void func_103(var uParam0, int iParam1){
if(func_102(uParam0->f_1)){
uParam0->f_73=1;
}
if(iParam1==func_68() || !func_12(iParam1, 0, 1)){
return;
}
if(func_88(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_47(iParam1, -2, 0, 0, 0);
}}}


void func_104(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_68();
uParam1->f_18=func_68();
uParam1->f_19=func_68();
uParam1->f_20=func_68();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=iParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}


void func_105(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_107(iParam0, func_108(iParam2));
iVar0=(iVar0 + iParam1);
func_106(iParam0, iVar0, iParam2);
}


void func_106(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=Global_2850192[iParam0 /*3*/][func_108(iParam2)];
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_107(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850192[iParam0 /*3*/][func_108(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_108(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_11();
if(iVar1 > -1){
Global_2804739=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804739=1;
}}
return iVar0;
}


void func_109(int iParam0, int iParam1){
int iVar0;
iVar0=func_113(iParam0);
iVar0=(iVar0 + iParam1);
if(!func_112(iParam0)){
func_111(iParam0, iVar0);
}else{
func_110(iParam0, iVar0);
}}


void func_110(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=iParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=iParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=iParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=iParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=iParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=iParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=iParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=iParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=iParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=iParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=iParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=iParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=iParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=iParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=iParam1;
break;
default:
break;
}}


void func_111(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_112(int iParam0){
if(Global_1665487){
switch (iParam0){
case joaat("mpply_crew_0_id"):
case joaat("mpply_crew_1_id"):
case joaat("mpply_crew_2_id"):
case joaat("mpply_crew_3_id"):
case joaat("mpply_crew_4_id"):
case joaat("mpply_crew_local_xp_0"):
case joaat("mpply_crew_local_xp_1"):
case joaat("mpply_crew_local_xp_2"):
case joaat("mpply_crew_local_xp_3"):
case joaat("mpply_crew_local_xp_4"):
case joaat("mpply_became_cheater_num"):
case joaat("mpply_friendly"):
case joaat("mpply_offensive_language"):
case joaat("mpply_griefing"):
case joaat("mpply_helpful"):
case joaat("mpply_offensive_tagplate"):
case joaat("mpply_offensive_ugc"):
return 1;
break;
}}
return 0;
}

int func_113(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_114(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_104(iParam0, &Var0, iParam1, sParam2, sParam3);
Var0.f_71=iParam4;
Var0.f_6=iParam5;
Var0.f_7=iParam6;
Var0.f_72=iParam7;
if(iParam8 !=0){
func_89(&(Var0.f_69), iParam8);
}
return func_87(&Var0);
}

int func_115(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_116(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_116(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10){
int iVar0;
var uVar1;
iVar0=func_126(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_122(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
}}}else{
func_117(iParam1, iVar0, sParam8, uParam10);
}
return iVar0;
}


void func_117(int iParam0, int iParam1, char* sParam2, var uParam3){
struct<3> Var0;
Var0={
func_120(iParam0, 1) 
};
if(iParam0==func_119(PLAYER::PLAYER_PED_ID())){
func_118(1);
}
func_122(Var0, iParam1, 0, sParam2, uParam3);
}


void func_118(int iParam0){
Global_2672505.f_1681=iParam0;
}

int func_119(var uParam0){
return uParam0;
}


Vector3 func__120(int iParam0, bool bParam1){
struct<3> Var0;
struct<3> Var3;
float fVar6;
struct<3> Var7;
struct<3> Var10;
float fVar13;
if(CAM::IS_GAMEPLAY_CAM_RENDERING()){
Var3={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
}
if(iParam0==func_121(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
fVar6=0f;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar6=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar6=Var3.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
if(bParam1){
fVar13=(Var10.f_2 + 0.18f);
}else{
fVar13=(Var7.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) 
};
return Var0;
}

int func_121(var uParam0){
return uParam0;
}


void func_122(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6){
int iVar0;
int iVar1;
if(iParam3 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672505.f_1080[iVar0 /*30*/].f_6==0 || Global_2672505.f_1080[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672505.f_1080[iVar1 /*30*/]={
Param0 
};
Global_2672505.f_1080[iVar1 /*30*/].f_6=1;
Global_2672505.f_1080[iVar1 /*30*/].f_4=func_125(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672505.f_1080[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1080[iVar1 /*30*/].f_3=iParam3;
Global_2672505.f_1080[iVar1 /*30*/].f_8=iParam4;
Global_2672505.f_1080[iVar1 /*30*/].f_9=func_124();
Global_2672505.f_1080[iVar1 /*30*/].f_10=func_123();
StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam5, 16);
Global_2672505.f_1080[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
}}}

int func_123(){
if(Global_2672505.f_1681){
Global_2672505.f_1681=0;
return 1;
}
Global_2672505.f_1681=0;
return 0;
}


var func__124(){
var uVar0;
uVar0=Global_2672505.f_1683;
Global_2672505.f_1683=1;
return uVar0;
}


float func_125(struct<3> Param0, var uParam3, var uParam4){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam3=0.402f;
*uParam4=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam3=0.212f;
*uParam4=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam3=(fVar2 + 0.212f);
*uParam4=(fVar3 + 0.286f);
return fVar1;
}


var func__126(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_127(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_127(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_158();
if(func_157(uParam2)){}
if(func_156()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_154(iVar1);
fVar3=(SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
iVar1=SYSTEM::ROUND(fVar3);
if(bParam10){
iVar1=func_153(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_150(0, &iVar1);
break;
case 3:
func_150(1, &iVar1);
break;
case 1:
func_147(&iVar1);
break;
}}
if(iVar1 > Global_1961999){
return 0;
}
if(iParam1==0){
if(iVar1 > iVar2){
if(iParam0==1){
iVar1=iVar2;
}
if(iParam0==2 || iParam0==3){
iVar1=iVar2;
}}}
if(bParam7){
func_144(1165, iVar1, -1);
if(iParam1==0){
func_134((func_143(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_144(1166, iVar1, -1);
}
func_130(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_128((func_129(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_128((func_129(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_128(int iParam0){
if(func_156()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_111(joaat("mpply_globalxp"), iParam0);
}}

int func_129(bool bParam0){
if(bParam0 > -1){
if(func_12(bParam0, 0, 1)){
if(bParam0==PLAYER::PLAYER_ID()){
return func_113(joaat("mpply_globalxp"));
}else{
return Global_1853910[bParam0 /*862*/].f_205.f_5;
}}else{
return func_113(joaat("mpply_globalxp"));
}}
return 0;
}


void func_130(int iParam0){
struct<13> Var0;
int iVar13;
Var0={
func_44(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar13=func_132(func_133(&Var0));
if(iVar13==0){
func_131(&Global_1665493, iParam0);
func_110(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar13==1){
func_131(&Global_1665494, iParam0);
func_110(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar13==2){
func_131(&Global_1665495, iParam0);
func_110(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar13==3){
func_131(&Global_1665496, iParam0);
func_110(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar13==4){
func_131(&Global_1665497, iParam0);
func_110(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_131(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_132(int iParam0){
if(iParam0==Global_1665488){
return 0;
}elseif(iParam0==Global_1665489){
return 1;
}elseif(iParam0==Global_1665490){
return 2;
}elseif(iParam0==Global_1665491){
return 3;
}elseif(iParam0==Global_1665492){
return 4;
}else{
return -1;
}
return -1;
}

int func_133(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694466;
}}
return Global_2694466;
}


void func_134(int iParam0, int iParam1, int iParam2){
if(func_156()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_108(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_108(-1)]){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_142(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_140(iParam0, 1);
}
func_139(640, iParam0, -1, 1);
func_138(641, func_140(iParam0, 1), -1, 1, 0);
Global_1665638[func_108(-1)]=iParam0;
func_135(-1109644434, 7, 0);
}}


void func_135(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_137(iParam1, iParam2)){
iVar0=func_136();
Global_2694418[iVar0]=iParam1;
Global_2694429[iVar0]=iParam0;
}}

int func_136(){
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

int func_137(int iParam0, var uParam1){
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


void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805027[iParam0 /*3*/][func_108(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_139(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805027[iParam0 /*3*/][func_108(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_108(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_108(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_108(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_108(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_108(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_108(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_108(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_108(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_108(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_108(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_108(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_108(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_108(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_108(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_108(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_108(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_108(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_108(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_108(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_108(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_108(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_108(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_108(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_108(iParam2)]=iParam1;
break;
case 1878:
Global_2851323[0 /*3*/][func_108(iParam2)]=iParam1;
break;
case 2269:
Global_2851323[1 /*3*/][func_108(iParam2)]=iParam1;
break;
case 2932:
Global_2851323[2 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3061:
Global_2851323[3 /*3*/][func_108(iParam2)]=iParam1;
break;
case 12424:
Global_2851502[func_108(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_108(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_108(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_108(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_108(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_108(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_108(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_108(iParam2)]=iParam1;
break;
case 3056:
Global_2851411[0 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3057:
Global_2851411[1 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3058:
Global_2851411[2 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3059:
Global_2851411[3 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3060:
Global_2851411[4 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3639:
Global_2851505[0 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3640:
Global_2851505[1 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3641:
Global_2851505[2 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3642:
Global_2851505[3 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3643:
Global_2851505[4 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3644:
Global_2851521[0 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3645:
Global_2851521[1 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3646:
Global_2851521[2 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3647:
Global_2851521[3 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3648:
Global_2851521[4 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3224:
Global_2851411[5 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3230:
Global_2851323[4 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3666:
Global_2851537[func_108(iParam2)]=iParam1;
break;
case 3667:
Global_2851546[func_108(iParam2)]=iParam1;
break;
case 3668:
Global_2851540[func_108(iParam2)]=iParam1;
break;
case 3669:
Global_2851549[func_108(iParam2)]=iParam1;
break;
case 3670:
Global_2851543[func_108(iParam2)]=iParam1;
break;
case 3671:
Global_2851552[func_108(iParam2)]=iParam1;
break;
case 3692:
Global_2851555[func_108(iParam2)]=iParam1;
break;
case 3232:
Global_2851411[6 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3233:
Global_2851323[5 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3237:
Global_2851411[7 /*3*/][func_108(iParam2)]=iParam1;
break;
case 3235:
Global_2851323[6 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4022:
Global_2851411[8 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4023:
Global_2851323[7 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4025:
Global_2851411[9 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4026:
Global_2851323[8 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4028:
Global_2851411[10 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4029:
Global_2851323[9 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4031:
Global_2851411[11 /*3*/][func_108(iParam2)]=iParam1;
break;
case 4032:
Global_2851323[10 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6112:
Global_2851411[12 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6113:
Global_2851323[11 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6170:
Global_2851411[13 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6171:
Global_2851323[12 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6548:
Global_2851411[14 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6549:
Global_2851323[13 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6561:
Global_2851411[15 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6562:
Global_2851323[14 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6564:
Global_2851411[16 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6565:
Global_2851323[15 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6567:
Global_2851411[17 /*3*/][func_108(iParam2)]=iParam1;
break;
case 6568:
Global_2851323[16 /*3*/][func_108(iParam2)]=iParam1;
break;
case 7286:
Global_2851323[17 /*3*/][func_108(iParam2)]=iParam1;
break;
case 7288:
Global_2851323[18 /*3*/][func_108(iParam2)]=iParam1;
break;
case 7290:
Global_2851323[19 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8013:
Global_2851323[20 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8285:
Global_2851558[func_108(iParam2)]=iParam1;
break;
case 8286:
Global_2851561[func_108(iParam2)]=iParam1;
break;
case 8287:
Global_2851564[func_108(iParam2)]=iParam1;
break;
case 8288:
Global_2851567[func_108(iParam2)]=iParam1;
break;
case 8289:
Global_2851570[func_108(iParam2)]=iParam1;
break;
case 8290:
Global_2851573[func_108(iParam2)]=iParam1;
break;
case 8291:
Global_2851576[func_108(iParam2)]=iParam1;
break;
case 8292:
Global_2851579[func_108(iParam2)]=iParam1;
break;
case 8293:
Global_2851582[func_108(iParam2)]=iParam1;
break;
case 8294:
Global_2851585[func_108(iParam2)]=iParam1;
break;
case 8295:
Global_2851588[func_108(iParam2)]=iParam1;
break;
case 8296:
Global_2851591[func_108(iParam2)]=iParam1;
break;
case 8297:
Global_2851594[func_108(iParam2)]=iParam1;
break;
case 8905:
Global_2851597[func_108(iParam2)]=iParam1;
break;
case 8537:
Global_2851323[21 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8982:
Global_2851411[23 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8980:
Global_2851323[22 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8985:
Global_2851411[24 /*3*/][func_108(iParam2)]=iParam1;
break;
case 8983:
Global_2851323[23 /*3*/][func_108(iParam2)]=iParam1;
break;
case 9624:
Global_2851323[24 /*3*/][func_108(iParam2)]=iParam1;
break;
case 9913:
Global_2851323[25 /*3*/][func_108(iParam2)]=iParam1;
break;
case 10443:
Global_2851411[27 /*3*/][func_108(iParam2)]=iParam1;
break;
case 10441:
Global_2851323[26 /*3*/][func_108(iParam2)]=iParam1;
break;
case 10446:
Global_2851411[28 /*3*/][func_108(iParam2)]=iParam1;
break;
case 10444:
Global_2851323[27 /*3*/][func_108(iParam2)]=iParam1;
break;
default:
break;
}}

int func_140(int iParam0, bool bParam1){
if(bParam1){}
return func_141(iParam0, 0);
}

int func_141(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
if(iParam1==0){}
iVar1=8000;
iVar2=0;
iVar3=((iVar1 - iVar2) / 2);
iVar0=0;
while (iVar0 <=100){
if(iVar1==iVar2){
iVar0=8000;
if(iVar3==0){
iVar3=1;
}
return iVar3;
}
if(Global_297010[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297010[iVar3] < iParam0){
if(iVar2==iVar3){
iVar2++;
}else{
iVar2=iVar3;
}}elseif(iVar1==iVar3){
iVar1=(iVar1 - 1);
}else{
iVar1=iVar3;
}
fVar4=(((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
iVar3=SYSTEM::ROUND(fVar4);
iVar0++;
}
return 8000;
}

int func_142(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}

int func_143(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_108(-1)];
}elseif(func_142(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_108(-1)];
}
return 0;
}


void func_144(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_146(iParam0, func_108(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_145(iParam0)){
func_138(iParam0, iVar0, iParam2, 1, 0);
}else{
func_139(iParam0, iVar0, iParam2, 1);
}}

int func_145(int iParam0){
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

int func_146(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805027[iParam0 /*3*/][func_108(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_147(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
bVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(bVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_6(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_149(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=SYSTEM::ROUND((func_148(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=SYSTEM::ROUND((func_148(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_148(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=SYSTEM::TO_FLOAT(iParam0);
fVar1=SYSTEM::TO_FLOAT(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_149(int iParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764201={
func_44(iParam0) 
};
Global_2764214={
func_44(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
if(Global_2764131==Global_2764166){
return 1;
}}}}
return 0;
}


void func_150(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_12(bVar4, 0, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_149(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
bVar4=iVar0;
if(func_12(bVar4, 1, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
if(func_151(PLAYER::PLAYER_ID(), bVar4) <=20f){
iVar1++;
if(func_149(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=SYSTEM::ROUND((func_148(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=SYSTEM::ROUND((func_148(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_151(int iParam0, bool bParam1){
return SYSTEM::VDIST(func_152(iParam0), func_152(bParam1));
return 0f;
}


Vector3 func__152(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_153(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=SYSTEM::ROUND((func_148(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_154(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_143(PLAYER::PLAYER_ID())){
iParam0=-func_143(PLAYER::PLAYER_ID());
}}
if(func_155(8000, 0, 0) > 0){
if(func_155(8000, 0, 0) < (iParam0 + func_143(PLAYER::PLAYER_ID()))){
iParam0=(func_155(8000, 0, 0) - func_143(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_155(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297010[iParam0];
}

int func_156(){
return 1;
}

int func_157(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_158(){
int iVar0;
if(func_166(PLAYER::PLAYER_ID()) || func_165(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_163() || func_159(PLAYER::PLAYER_ID())){
if(Global_262145.f_23282 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23282;
}}elseif(Global_262145.f_7095 > 30000){
iVar0=30000;
}else{
iVar0=Global_262145.f_7095;
}
return iVar0;
}

int func_159(int iParam0){
return func_160(func_161(iParam0));
}

int func_160(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_161(int iParam0){
if(func_162(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_162(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


bool func_163(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_76();
}
return func_164(Global_4718592.f_113724);
}

int func_164(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_165(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_166(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


void func_167(var uParam0, int iParam1){
int iVar0;
if(*uParam0 > 0){
if(!func_183()){
if(func_182(0)){
if(!func_178(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_177())){
if(func_176()==100){
iVar0=*uParam0;
*uParam0=0;
}
else{
iVar0=((*uParam0 / 100) * func_176());
*uParam0=(*uParam0 - iVar0);
}
func_174(&iVar0, 0);
if(iParam1==1){
func_173("GB_BCUT_TICK1", func_177(), iVar0, 0, 0, 1);
}
func_172(20);
func_168(func_177(), iVar0, 1);
}}}}}}


void func_168(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_12(bParam0, 0, 1)){
Var0.f_0=-1597942809;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_171(bParam0);
func_170(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_169(bParam0));
}}

int func_169(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_170(var uParam0, var uParam1){
*uParam0=Global_1923597.f_9;
*uParam1=Global_1923597.f_10;
}


var func__171(int iParam0){
return Global_1894573[iParam0 /*608*/].f_510;
}


void func_172(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793044.f_5225.f_7[iVar0]), bVar1);
}

int func_173(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_47(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_45(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_39(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_174(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_175(1);
}else{
iVar1=func_175(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_175(bool bParam0){
if(bParam0){
return SYSTEM::ROUND((0.05f * 100f));
}
return Global_262145.f_12865;
}

int func_176(){
return Global_262145.f_12864;
}


bool func_177(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


bool func_178(bool bParam0){
return func_179(PLAYER::PLAYER_ID(), bParam0);
}

int func_179(int iParam0, bool bParam1){
return func_180(iParam0, bParam1, 1);
}

int func_180(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_68()){
return 0;
}
if(!bParam1){
if(func_181(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_68() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_181(int iParam0, int iParam1){
if(iParam0 !=func_68()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_68()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}


bool func_182(bool bParam0){
return func_66(PLAYER::PLAYER_ID(), bParam0);
}


bool func_183(){
return func_67(PLAYER::PLAYER_ID());
}


void func_184(){
if(!MISC::IS_BIT_SET(uLocal_245, 5)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89.f_7 + Vector(((20f / 2f) + 4f), 0f, 0f), 7f, 7f, 20f, 0, 1, 0)){
if(func_23(PLAYER::PLAYER_PED_ID())){
iLocal_332=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_89.f_13);
func_185(iLocal_332, func_169(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
MISC::SET_BIT(&uLocal_245, 5);
}}}elseif(func_508(&uLocal_333, 250, 0)){
func_185(iLocal_332, func_169(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
func_28(&uLocal_333);
}}


void func_185(int iParam0, int iParam1){
struct<3> Var0;
Var0.f_0=-2085699648;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam1);
}}

int func_186(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_104(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_89(&(Var0.f_69), iParam7);
}
return func_87(&Var0);
}


void func_187(var uParam0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}


void func_188(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}

int func_189(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7){
char* sVar0;
char* sVar1;
char* sVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
int iVar9;
bool bVar10;
int iVar11;
int iVar12;
int iVar13;
var uVar14;
if(bParam7){
func_199(&(uParam0->f_2), 1);
}
if(!func_198(&(uParam0->f_2))){
func_196(&(uParam0->f_2));
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
if(iParam4 > 3){
iParam4=3;
}elseif(iParam4 < 0){
iParam4=0;
}
if(bParam5){
sVar0="3_2_1";
sVar1="GO";
sVar2="HUD_MINI_GAME_SOUNDSET";
}else{
sVar0="3_2_1";
sVar1="GO";
sVar2="321_GO_LOW_VOL_SOUNDSET";
}
if(bParam7){
if(func_198(&(uParam0->f_2))){
if(func_195(&(uParam0->f_2))){
fVar3=uParam0->f_2.f_2;
}else{
fVar3=(func_194(1) - uParam0->f_2.f_1);
if(fVar3 < 0f){
fVar3=0f;
func_188(&(uParam0->f_2));
if(func_91(uParam0->f_1, 1)){
func_89(&(uParam0->f_1), 8);
HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
func_193("CNTDWN_GO");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return 1;
}
func_196(&(uParam0->f_2));
}}}else{
fVar3=uParam0->f_2.f_1;
}
iVar4=SYSTEM::FLOOR(fVar3);
}else{
iVar4=SYSTEM::FLOOR(func_192(&(uParam0->f_2)));
}
iVar9=(iVar4 - iParam4);
bVar10=false;
if(!func_91(uParam0->f_1, 8)){
if(iVar9 >=-3 && !func_91(uParam0->f_1, 1)){
func_89(&(uParam0->f_1), 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_191(uParam0, iVar9);
}elseif(iVar9 >=-2 && !func_91(uParam0->f_1, 2)){
func_89(&(uParam0->f_1), 2);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_191(uParam0, iVar9);
}elseif(iVar9 >=-1 && !func_91(uParam0->f_1, 4)){
func_89(&(uParam0->f_1), 4);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
func_191(uParam0, iVar9);
}elseif(iVar9 >=-1 && !func_91(uParam0->f_1, 16)){
if(MISC::ABSF((func_192(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f){
if(bParam5 || bParam6){
func_89(&(uParam0->f_1), 16);
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
}}}elseif(iVar9 >=0 && !func_91(uParam0->f_1, 8)){
if(!bParam5 && !bParam6){
AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
}
func_89(&(uParam0->f_1), 8);
HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
func_193("CNTDWN_GO");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(!bParam1){
bVar10=true;
}}}elseif(iVar9==1){
bVar10=true;
}
if((iParam2 && func_190()) || iVar4 > 5){
bVar10=true;
}
if(bVar10){
if(bParam3){
uParam0->f_1=0;
func_188(&(uParam0->f_2));
}
return 1;
}
return 0;
}

int func_190(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18)){
return 1;
}
return 0;
}


void func_191(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


float func_192(var uParam0){
if(func_198(uParam0)){
if(func_195(uParam0)){
return uParam0->f_2;
}else{
return (func_194(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


void func_193(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


float func_194(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=SYSTEM::TO_FLOAT(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}


bool func_195(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


void func_196(var uParam0){
func_197(uParam0, 0f);
}


void func_197(var uParam0, float fParam1){
uParam0->f_1=(func_194(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, true);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


bool func_198(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_199(var uParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(uParam0, 4);
}else{
MISC::CLEAR_BIT(uParam0, 4);
}
if(MISC::IS_BIT_SET(*uParam0, 4)){}}


bool func_200(var uParam0){
return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1));
}


void func_201(int iParam0, int iParam1, bool bParam2){
if(func_209()){
if(iParam1==1){
if(Global_2793044.f_4492==-1){
Global_2793044.f_4492=Global_262145.f_27184;
}
func_208(&(Global_2793044.f_4490), 0, 0);
if(bParam2){
if(Global_2793044.f_4495==-1){
Global_2793044.f_4495=Global_262145.f_27185;
}
func_208(&(Global_2793044.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_207(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_207(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_206()) && !func_202(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_202(int iParam0){
if(func_203(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_203(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_204(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_204(int iParam0){
return func_205(iParam0);
}


var func__205(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_206(){
return Global_2683862.f_841;
}


void func_207(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_209()){
if(func_12(PLAYER::PLAYER_ID(), 1, 0)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
}
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
Global_1574582.f_2=0;
if(bParam0){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
}}}else{
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(1, 0);
}}
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
}}}


void func_208(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}


bool func_209(){
return Global_1574582;
}


void func_210(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
}}


void func_211(bool bParam0){
if(Global_2646729.f_1544){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2646729.f_1545)){
if(!Global_2646729.f_1545==SCRIPT::GET_ID_OF_THIS_THREAD()){
return;
}}else{
Global_2646729.f_1544=0;
}}
if(bParam0){
if(!Global_2646729.f_1544){
Global_2646729.f_1544=1;
Global_2646729.f_1545=SCRIPT::GET_ID_OF_THIS_THREAD();
StringCopy(&(Global_2646729.f_1546), SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(Global_2646729.f_1545), 64);
Global_2646729.f_1562=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}elseif(Global_2646729.f_1544){
Global_2646729.f_1544=0;
Global_2646729.f_1545=-1;
}}


void func_212(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(func_12(iVar1, 0, 1) && iVar1 !=PLAYER::PLAYER_ID()){
NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, iParam0);
}}
iVar0++;
}}


void func_213(int iParam0, int iParam1){
func_215(iParam0, 1, 1, 0);
if(iParam1==1){
func_214(iParam0, 0);
}}


void func_214(int iParam0, bool bParam1){
if(bParam1){}
iParam0=iParam0;
}


void func_215(int iParam0, int iParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
if(iParam1 < 1){
iParam1=1;
}
iVar0=(iParam0 * iParam1);
fParam3=0f;
if(iVar0 > 0){
fVar2=(100f - fParam3);
iVar1=SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
}else{
iVar1=iVar0;
}
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_4=iVar1;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3=(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 + iVar1);
if(iParam2==1){
func_214(iVar1, 0);
}}


void func_216(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_227()){
return;
}
iVar0=1;
if(bParam4){
iVar0=4;
}elseif(bParam3){
iVar0=2;
}elseif(bParam5){
iVar0=8;
}
switch (iParam0){
case -1645229221:
case -585718395:
case -1359375127:
case 454359403:
case -982394051:
case 1643659499:
case -2072289654:
case 650665123:
case 1654961868:
case -876847842:
case 68030260:
case -2122299283:
case 366672791:
case 283351220:
case 291576838:
case 1182673174:
case -516219046:
case 1036455748:
case 277665518:
case 2043854386:
case 1839532116:
case 1022400740:
case 1940862352:
case -1389227906:
case 711665950:
case 1704445500:
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 1612072658:
case -517447402:
case 1948102096:
case 1108628223:
case -1834046564:
case -1239008812:
case -222363842:
case -1276678868:
case 1564537328:
case -96593501:
case 742499889:
case 2050093329:
case -1752488069:
case 634375935:
case 2115896461:
case 797947947:
case 1941570214:
case 665109499:
case -1330755006:
case 1976384368:
case 268924934:
case 1869490922:
case -336803850:
case -1412692765:
case 618167454:
case 980623936:
case 437291904:
case -135813048:
case -930104477:
case -1420909320:
case -1733398043:
case -1892760262:
case -1545737048:
case 2039302543:
case 402505853:
case -1143510182:
case 1678112166:
case 837955913:
case -1532467144:
case 1815541181:
if(iParam1 > 0 || Global_262145.f_28375){
func_217(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case -31156877:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 312105838:
case 1982688246:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -101307780:
case -664597565:
case 599804707:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
func_217(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}
switch (iParam0){
case -1342064661:
case -1693570755:
case 1868043300:
case -697248883:
case -1295545795:
case 914079366:
case 395122350:
case -331981076:
case 1671535231:
case -1896606724:
case -1291433573:
case 538631715:
case 133782822:
case 2081885153:
case -1314365345:
case 1322977732:
case 396623013:
case 1981664462:
case -1921250821:
case -1370731547:
case 1683798242:
case -910968288:
case -168319378:
case 1637817605:
case 830018386:
case 1051883823:
case -2013760296:
case -1033889004:
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28375){
func_217(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case 1240683675:
case 1241904665:
case -1100963799:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case -2017925037:
case 1668610896:
case -2032529561:
case -1224479447:
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case 1220095570:
case 2050320631:
case 592672421:
case 1775876058:
case -842062976:
case -518651910:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
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
func_217(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_227()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695819){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar3=false;
iVar2=0;
while (iVar2 < 15){
if(Global_4535172[iVar2 /*85*/].f_66.f_2==0){
bVar3=true;
}
iVar2++;
}
if(!bVar3){
return 0;
}
*uParam0=15;
iVar4=2147483647;
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6)){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4)){
*uParam0=func_224(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
if(iVar1 && !bVar0){
}
if(bVar0){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536673=1;
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
bVar5=false;
if(bVar5){
func_223(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_218(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_218(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_219(iParam0);
}}


void func_219(int iParam0){
bool bVar0;
bVar0=false;
if(!func_227()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_222(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_220(&(Global_4535172[iParam0 /*85*/]));
}}


void func_220(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_221(&(uParam0->f_14));
func_221(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
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
}


void func_221(var uParam0){
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
}

int func_222(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_223(int iParam0, var uParam1){
Global_2697013=uParam1;
Global_2697012=iParam0;
}

int func_224(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_227()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=uParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=uParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=iParam0;
Global_4535172[iVar0 /*85*/].f_66.f_6=iParam4;
Global_4535172[iVar0 /*85*/].f_66.f_11=uParam8;
Global_4535172[iVar0 /*85*/].f_66.f_10=uParam7;
Global_4535172[iVar0 /*85*/].f_66.f_13=iParam9;
Global_4535172[iVar0 /*85*/].f_66.f_12=0;
Global_4535172[iVar0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[iVar0 /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6){
Global_4535172[iVar0 /*85*/].f_66.f_5=1;
}
if(iParam1==-1135378931 && iParam10){
func_225(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_225(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85){
struct<3> Var0;
int iVar36;
if(iParam85 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-444617715;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam85;
iVar36=func_169(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar36==0){
func_226();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar36);
}}


void func_226(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_227(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_228(bool bParam0, int iParam1){
int iVar0;
if(!func_230(&iVar0, 0, iParam1)){
return;
}
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23270.f_6071[iVar0]=0;
}
if(Global_23270.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[iVar0]=0;
}
if(Global_23270.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[iVar0]=0;
}
if(bParam0){
func_229(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_229(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_230(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar16;
int iVar17;
int iVar18;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar16=MISC::GET_HASH_KEY(&cVar0);
iVar18=-1;
iVar17=0;
while (iVar17 < 6){
if(Global_23270.f_6164[iVar17]==iVar16){
*uParam0=iVar17;
return 1;
}elseif(Global_23270.f_6164[iVar17]==0){
iVar18=iVar17;
}
iVar17++;
}
if(bParam1){
if(iVar18 !=-1){
Global_23270.f_6164[iVar18]=iVar16;
*uParam0=iVar18;
return 1;
}}
return 0;
}


void func_231(){
if(HUD::DOES_BLIP_EXIST(uLocal_248)){
HUD::REMOVE_BLIP(&uLocal_248);
}}


void func_232(){
Global_2683862.f_756=1;
}


bool func_233(){
return MISC::IS_BIT_SET(Global_2683862.f_2, 11);
}


void func_234(){
bool bVar0;
int iVar1;
if(func_509(0, -1, 0)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
bVar0=true;
}elseif(Local_89.f_3 !=iLocal_115){
iLocal_115=Local_89.f_3;
iLocal_249=1;
}
if(bVar0){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::SET_INPUT_EXCLUSIVE(2, 237);
PAD::SET_INPUT_EXCLUSIVE(2, 238);
PAD::SET_INPUT_EXCLUSIVE(2, 241);
PAD::SET_INPUT_EXCLUSIVE(2, 242);
PAD::SET_INPUT_EXCLUSIVE(2, 239);
PAD::SET_INPUT_EXCLUSIVE(2, 240);
func_496(0, -1, 1);
func_493(0, 0, 0, 1);
if(Global_4541029 > -1){
if(Local_296.f_14==Global_4541029){
if(Global_4541029==2 && PAD::IS_CONTROL_PRESSED(2, 237)){
iLocal_255=func_492(0);
}
elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
iLocal_254=1;
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 237)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_296.f_14=Global_4541029;
func_491(Local_296.f_14, 1, 1);
iLocal_249=1;
}}}}
func_488();
func_482();
if(bVar0){
if(!MISC::IS_BIT_SET(Local_296.f_15, 0)){
MISC::SET_BIT(&(Local_296.f_15), false);
iLocal_249=1;
iLocal_250=1;
MISC::CLEAR_BIT(&(Local_89.f_1), 7);
MISC::CLEAR_BIT(&(Local_89.f_1), 8);
MISC::CLEAR_BIT(&(Local_89.f_1), 9);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
}}elseif(MISC::IS_BIT_SET(Local_296.f_15, 0)){
MISC::CLEAR_BIT(&(Local_296.f_15), false);
iLocal_249=1;
iLocal_250=1;
}
if(Local_89.f_14 !=iLocal_325){
iLocal_325=Local_89.f_14;
iLocal_249=1;
}
if((func_478(bVar0) || !MISC::IS_BIT_SET(Local_296.f_15, 1)) || PAD::HAVE_CONTROLS_CHANGED(2)){
if(!MISC::IS_BIT_SET(Local_296.f_15, 1)){
if(bVar0==1){
func_477();
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0 && !MISC::IS_BIT_SET(Global_2793044.f_1824, 24)){
Local_89.f_15[2]=Global_2793044.f_28.f_39;
}else{
Local_89.f_15[2]=2;
}}}
if(((iLocal_249==1 || !MISC::IS_BIT_SET(Local_296.f_15, 1)) || PAD::HAVE_CONTROLS_CHANGED(2)) || Local_296.f_20 !=Local_89.f_15.f_6){
Local_296.f_20=Local_89.f_15.f_6;
if(bVar0){
iVar1=0;
while (iVar1 < iLocal_87){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f && Local_89.f_15[2] !=0){
Local_89.f_15[2]++;
if(Local_89.f_15[2] > func_476(2)){
Local_89.f_15[2]=0;
}
}
else{
iVar1=99;
}
iVar1++;
}
if(iLocal_250==1){
Local_89.f_7={
func_16() 
};
iLocal_250=0;
}}
if(iLocal_251==1 && bVar0==1){
func_466();
}else{
func_452(bVar0);
}
iLocal_249=0;
}
if(!MISC::IS_BIT_SET(Local_296.f_15, 1)){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
MISC::SET_BIT(&(Local_296.f_15), true);
}}
if(func_29(&uLocal_330)){
func_451("R2P_WARNH", 0, 0);
}elseif(bVar0){
if(iLocal_251==1){
if(bLocal_253==1){
func_451("R2P_MENU_IVP", 0, 0);
}}elseif((Local_89.f_15[2] <=0 || Local_89.f_15[2] > iLocal_87) && iLocal_327==1){
func_451("R2P_MENU_WAY", 0, 0);
}elseif(Local_89.f_14 < 2){
func_451("R2P_MENU_MPL", 0, 0);
}else{
func_451("R2P_MENU_DSQ", 0, 0);
}}else{
func_451("R2P_MENU_WAI", 0, 0);
func_450(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
}
if(bVar0==1){
if(Local_89.f_15[2] <=0 || Local_89.f_15[2] > iLocal_87){
func_289();
}}
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_288();
func_268(&uLocal_271);
func_237(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
func_235(&uLocal_294);
}}


void func_235(var uParam0){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=0f;
fVar1=0.5f;
Var2={
0f, 0f, 0f 
};
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
}else{
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var2={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
fVar0=func_236(Var2.f_2, 0f, 360f);
if((uParam0->f_1==0f || (uParam0->f_1 - fVar0) > fVar1) || (uParam0->f_1 - fVar0) < -fVar1){
uParam0->f_1=fVar0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}}


float func_236(float fParam0, float fParam1, float fParam2){
float fVar0;
if(fParam1==fParam2){
return fParam1;
}
fVar0=(fParam2 - fParam1);
fParam0=(fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
if(fParam0 < fParam1){
fParam0=(fParam0 + fVar0);
}
return fParam0;
}


void func_237(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
bool bVar33;
float fVar34;
float fVar35;
float fVar36;
float fVar37;
struct<3> Var38;
bool bVar41;
float fVar42;
float fVar43;
float fVar44;
float fVar45;
float fVar46;
int iVar47;
int iVar48;
int iVar49;
int iVar50;
float fVar51;
bool bVar52;
bool bVar53;
bool bVar54;
bool bVar55;
float fVar56;
float fVar57;
float fVar58;
float fVar59;
var uVar60;
var uVar61;
float fVar62;
char cVar63[64];
char cVar79[64];
float fVar95;
int iVar96;
float fVar97;
float fVar98;
int iVar99;
int iVar100;
int iVar101;
int iVar102;
int iVar103;
int iVar104;
char cVar105[16];
float fVar109;
float fVar110;
float fVar111;
float fVar112;
float fVar113;
if(!func_230(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_266(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar57=0f;
if(Global_23270){
if(func_264(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar58=(fVar37 / fVar36);
}else{
Global_23270=0;
}}
if(fParam5==-1f){
fParam5=Global_23269;
}
fVar57=(fParam5 * fVar58);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar59=Global_23268;
}else{
fVar59=(((Global_23268 + fVar57) + 0.034722f) + 0f);
}
fVar62=1f;
func_262(bParam7, &uVar60, &uVar61, &fVar62);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_258(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar51=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar63, func_257(29), 64);
StringCopy(&cVar79, func_255(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_254(Global_23267, Global_23268, fParam5, fVar57, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23270.f_8862){
iVar1=Global_23270.f_8858;
iVar2=Global_23270.f_8859;
iVar3=Global_23270.f_8860;
iVar4=Global_23270.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_254(Global_23267, (Global_23268 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar51=(((Global_23268 + fVar57) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_253();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23270.f_74){
if(Global_23270.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[iVar15]);
iVar15++;
}
elseif(Global_23270.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
iVar16++;
}
elseif(Global_23270.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23267 + 0.00390625f), ((Global_23268 + fVar57) + 0.00416664f), 0);
}
if(Global_23270.f_6178){
func_253();
func_251((((Global_23267 + fParam5) - 0.00390625f) - func_252("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_253();
func_251((((Global_23267 + fParam5) - 0.00390625f) - func_252("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
}}}
iVar6=Global_23270.f_6181;
iVar9=0;
fVar95=fVar51;
if(Global_23270.f_8872){
iVar1=Global_23270.f_8868;
iVar2=Global_23270.f_8869;
iVar3=Global_23270.f_8870;
iVar4=Global_23270.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23270.f_5668 && iVar6 <=Global_23270.f_5661){
if(iVar6 >=0){
if(Global_23270.f_5928[iVar6]){
if(Global_23270.f_5799[iVar6] && iVar6 !=Global_23270.f_6181){
fVar51=(fVar51 + 0.00277776f);
}
fVar56=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar56=Global_23270.f_6188[iVar6];
}
fVar51=(fVar51 + fVar56);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_8877){
iVar1=Global_23270.f_8873;
iVar2=Global_23270.f_8874;
iVar3=Global_23270.f_8875;
iVar4=Global_23270.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_254(Global_23267, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar62));
Var38.f_1=(Var38.f_1 * (0.5f / fVar62));
if(Global_23270.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar51=(fVar51 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_5081)) !=0 && Global_23270.f_5163 !=-1){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
if(Global_23270.f_5165 !=0){
func_264(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar42=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_254(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
if(Global_23270.f_5165 !=0){
func_264(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_249(Global_23270.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_5165), func_255(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar51=(fVar51 + (0.00138888f * 6f));
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_254(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23270.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23270.f_5164) > Global_23270.f_5163){
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_254(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar51=(fVar51 + (0.00277776f * 2f));
fVar42=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_264(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar42=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_254(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_250(fVar42);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
if(Global_4540953.f_67 !=0){
func_264(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_249(Global_4540953.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_257(Global_4540953.f_67), func_255(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
fVar51=(fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_245(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23270.f_6171){
iVar19=0;
iVar23=0;
iVar20=0;
iVar21=0;
iVar22=0;
iVar9=0;
iVar10=0;
iVar11=0;
iVar12=0;
iVar13=0;
iVar96=Global_23270.f_5661;
if(Global_23270.f_6172){
iVar96=(Global_23270.f_6175 - 1);
}
fVar97=0f;
fVar98=0f;
iVar7=0;
while (iVar7 <=iVar96){
fVar56=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar56=Global_23270.f_6188[iVar6];
}
if(Global_23270.f_6172){
iVar6=Global_23270.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23270.f_6181 && iVar9 < Global_23270.f_5668){
bVar33=true;
if(Global_23270.f_6182==iVar6){
fVar98=fVar97;
}
if(Global_23270.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23270.f_6322[iVar6]=fVar35;
fVar34=(Global_23267 + 0.0046875f);
bVar41=false;
bVar32=Global_23270.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar100=255;
iVar101=255;
iVar102=255;
iVar103=255;
if(Global_23270.f_8884){
HUD::GET_HUD_COLOUR(Global_23270.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
}else{
HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
Global_23270.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23270.f_5669){
if(MISC::IS_BIT_SET(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_6172){
iVar19=Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar20=Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar21=Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar22=Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar23=Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
}
else{
Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar19;
Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar20;
Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar21;
Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar22;
Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar23;
}
iVar104=0;
bVar55=false;
if(Global_23270.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[0]){
bVar55=true;
iVar104=0;
}
}
if(Global_23270.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[1]){
bVar55=true;
iVar104=1;
}
}
if(Global_23270.f_5505[iVar8] !=-1f){
fVar34=((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23270.f_5505[iVar8 + 1]){
fVar46=(Global_23270.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar46=(((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
}
if((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32){
bVar54=true;
}
else{
bVar54=false;
}
switch (Global_23270.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23270.f_6172){
fVar43=0f;
fVar44=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
bVar52=false;
bVar53=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar53=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar52=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_264(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar44=(fVar44 + fVar36);
if(iVar14 > 0){
fVar44=(fVar44 - (0.00078125f * 4f));
}
if((Global_23270.f_4824[(iVar22 + iVar14)]==2 || Global_23270.f_4824[(iVar22 + iVar14)]==52) || Global_23270.f_4824[(iVar22 + iVar14)]==62){
fVar44=(fVar44 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar44;
if(Global_23270.f_5526[iVar8]==2){
iVar99=(iVar8 - 1);
while (iVar99 >=0){
if(Global_23270.f_5526[iVar99]==2){
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)]=(Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] - Global_23270.f_5511[iVar8]);
}
iVar99=(iVar99 + -1);
}
}
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar44=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_264(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_264(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(26), func_255(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_264(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_264(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(27), func_255(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar52=false;
bVar53=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar53=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar52=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_242(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23270.f_4824[(iVar22 + iVar28)]==2 || Global_23270.f_4824[(iVar22 + iVar28)]==52) || Global_23270.f_4824[(iVar22 + iVar28)]==62){
if(func_264(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + (fVar36 * 0.5f));
if(func_264(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_249(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[(iVar22 + iVar28)]), func_255(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[(iVar22 + iVar28)]), func_255(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
fVar42=(fVar42 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23270.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
if(func_42() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar53=true;
}
func_243(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
StringCopy(&cVar105, "TEST_LABEL", 16);
fVar109=0f;
fVar110=55f;
fVar111=0.0185f;
fVar112=0.004f;
fVar113=0.02f;
HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), 0);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23270.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar42=(fVar42 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23270.f_4824[(iVar22 + iVar14)] !=2 && Global_23270.f_4824[(iVar22 + iVar14)] !=52) && Global_23270.f_4824[(iVar22 + iVar14)] !=62){
if(func_264(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_264(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_249(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[(iVar22 + iVar14)]), func_255(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[(iVar22 + iVar14)]), func_255(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[(iVar22 + iVar14)]), func_255(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
}
fVar42=(fVar42 + (12f * 0.00078125f));
}}
iVar14++;
}
}}
bVar41=true;
iVar19++;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23270.f_6172){
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_242(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[iVar20]);
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_264(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_264(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(26), func_255(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_264(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_264(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(27), func_255(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
if(iVar5==1){
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
func_241((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar41=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_242(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
fVar43=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar43;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar43=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_264(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_264(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(26), func_255(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
if(func_264(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_264(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(27), func_255(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}
}
}
func_243(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
func_240((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar41=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_264(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23270.f_6172){
fVar44=fVar36;
fVar42=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
}elseif(Global_23270.f_5526[iVar8]==0){
fVar42=(fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar44;
}
else{
fVar42=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar44=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar54){
if(func_264(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar42=(fVar42 - (fVar36 * 2f));
}
fVar45=(fVar36 * 0.5f);
if(func_264(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(26), func_255(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}}
if(func_264(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
fVar45=(fVar36 * 0.5f);
if(func_264(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_249(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_257(27), func_255(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}}}
}
if(iVar5==1){
if(func_264(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_249(Global_23270.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
GRAPHICS::DRAW_SPRITE(func_257(Global_23270.f_4824[iVar22]), func_255(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_239(Global_23270.f_4824[iVar22])), (fVar37 * func_239(Global_23270.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
}
}
}}
bVar41=true;
iVar22++;
break;
case 5:
bVar41=true;
break;
}
if(Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
if(Global_23270.f_5518[iVar8]){
if(func_264(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}
iVar8++;
}
if(bVar41){
if(bVar33){
Global_23270.f_8513[iVar9]=iVar6;
Global_23270.f_6183=iVar6;
iVar9++;
if(Global_23270.f_5799[iVar6]){
iVar13++;
}
if(Global_23270.f_6188[iVar6] !=0f){
fVar97=(fVar97 + Global_23270.f_6188[iVar6]);
}
else{
fVar97=(fVar97 + 0.034722f);
}}
if(!Global_23270.f_6171){
Global_23270.f_5928[iVar6]=1;
if(Global_23270.f_5670[iVar6]){
if(bVar32){
Global_23270.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23270.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23270.f_6171){
Global_23270.f_6173=((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
Global_23270.f_6176=iVar11;
Global_23270.f_6174=iVar10;
Global_23270.f_6171=1;
}}
if(!Global_23270.f_6172){
Global_23270.f_6175=iVar9;
Global_23270.f_6172=1;
}
iVar5++;
}
Global_23270.f_6319=fVar51;
Global_23270.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);
if(!Global_23270.f_8857){
func_511(0);
}
Global_23270.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_238(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_238(int iParam0){
Global_1655472.f_1163=iParam0;
}


float func_239(int iParam0){
switch (iParam0){
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 39:
case 40:
case 38:
case 54:
case 45:
case 46:
case 47:
return 0.85f;
break;
}
return 1f;
}


void func_240(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_241(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


void func_242(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_243(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_244(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
if((iVar0 < 20 && iVar1 < 20) && iVar2 < 20){
if(bParam0==0){
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
}}elseif((iVar0 > 230 && iVar1 > 230) && iVar2 > 230){
if(bParam0){
iVar0=0;
iVar1=0;
iVar2=0;
}}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}elseif(bParam1){
if(bParam0){
HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}else{
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}}elseif(bParam1){
if(bParam0){
HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
}else{
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_JUSTIFICATION(1);
if(bParam5){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(4);
}elseif(bParam6){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(6);
}else{
HUD::SET_TEXT_FONT(0);
}
HUD::SET_TEXT_WRAP(0f, 1f);
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_244(int iParam0, var uParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
*uParam1=8;
*uParam2=8;
*uParam3=8;
break;
case 1:
*uParam1=37;
*uParam2=37;
*uParam3=39;
break;
case 22:
*uParam1=140;
*uParam2=146;
*uParam3=154;
break;
case 23:
*uParam1=91;
*uParam2=93;
*uParam3=94;
break;
case 6:
*uParam1=81;
*uParam2=84;
*uParam3=89;
break;
case 111:
*uParam1=240;
*uParam2=240;
*uParam3=240;
break;
case 28:
*uParam1=150;
*uParam2=8;
*uParam3=0;
break;
case 34:
*uParam1=38;
*uParam2=3;
*uParam3=6;
break;
case 88:
*uParam1=245;
*uParam2=137;
*uParam3=15;
break;
case 45:
*uParam1=74;
*uParam2=22;
*uParam3=7;
break;
case 56:
*uParam1=45;
*uParam2=58;
*uParam3=53;
break;
case 58:
*uParam1=71;
*uParam2=120;
*uParam3=60;
break;
case 54:
*uParam1=77;
*uParam2=98;
*uParam3=104;
break;
case 73:
*uParam1=14;
*uParam2=49;
*uParam3=109;
break;
case 68:
*uParam1=22;
*uParam2=34;
*uParam3=72;
break;
case 140:
*uParam1=0;
*uParam2=174;
*uParam3=239;
break;
case 131:
*uParam1=255;
*uParam2=183;
*uParam3=0;
break;
case 90:
*uParam1=142;
*uParam2=140;
*uParam3=70;
break;
case 97:
*uParam1=156;
*uParam2=141;
*uParam3=113;
break;
case 89:
*uParam1=145;
*uParam2=115;
*uParam3=71;
break;
case 105:
*uParam1=98;
*uParam2=68;
*uParam3=40;
break;
case 100:
*uParam1=124;
*uParam2=27;
*uParam3=68;
break;
case 99:
*uParam1=114;
*uParam2=42;
*uParam3=63;
break;
case 136:
*uParam1=246;
*uParam2=151;
*uParam3=153;
break;
case 49:
*uParam1=32;
*uParam2=32;
*uParam3=44;
break;
case 146:
*uParam1=26;
*uParam2=1;
*uParam3=23;
break;
default:
*uParam1=255;
*uParam2=255;
*uParam3=255;
break;
}}


void func_245(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_230(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_266(bParam4, bParam8)){
return;
}
if(func_247()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_9(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5465[iVar1] !=363){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5465[iVar1], 1), 64);
}elseif(Global_23270.f_5480[iVar1] !=32){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23270.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_246(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_246(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_193(&(Global_23270.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23270.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_246(&Global_4540953);
if(Global_4540953.f_20==-1){
func_193(&(Global_4540953.f_16));
}else{
iVar4=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar1++;
}
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
if(bParam6){
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


void func_246(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_247(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_248()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20328==0){
if(Var0.f_1 > -119f){
return 1;
}else{
return 0;
}}elseif(Var0.f_1 > -101f){
return 1;
}else{
return 0;
}}
return 0;
}

int func_248(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_249(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
switch (iParam0){
case 28:
*iParam2=194;
*iParam3=80;
*iParam4=80;
break;
case 15:
case 4:
case 16:
case 26:
case 27:
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 54:
case 39:
case 40:
case 38:
case 44:
case 43:
case 45:
case 46:
case 47:
case 53:
case 57:
case 58:
case 59:
case 60:
if(bParam1){
*iParam2=0;
*iParam3=0;
*iParam4=0;
}
break;
case 55:
*iParam5=100;
break;
case 63:
*iParam5=100;
break;
case 56:
HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
break;
}}


void func_250(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_251(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_252(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_253();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_253(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23270.f_8867){
iVar0=Global_23270.f_8863;
iVar1=Global_23270.f_8864;
iVar2=Global_23270.f_8865;
iVar3=Global_23270.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_254(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__255(int iParam0, bool bParam1){
char* sVar0[2];
var uVar3;
struct<13> Var19;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var19={
func_44(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3)){
return func_256(&uVar3);
}}else{
return func_256(&(Global_23270.f_7488[iParam0 /*16*/]));
}}
switch (iParam0){
case 3:
sVar0[0]="MP_hostCrown";
sVar0[1]="MP_hostCrown";
break;
case 21:
sVar0[0]="MP_SpecItem_Coke";
sVar0[1]="MP_SpecItem_Coke";
break;
case 22:
sVar0[0]="MP_SpecItem_Heroin";
sVar0[1]="MP_SpecItem_Heroin";
break;
case 23:
sVar0[0]="MP_SpecItem_Weed";
sVar0[1]="MP_SpecItem_Weed";
break;
case 24:
sVar0[0]="MP_SpecItem_Meth";
sVar0[1]="MP_SpecItem_Meth";
break;
case 25:
sVar0[0]="MP_SpecItem_Cash";
sVar0[1]="MP_SpecItem_Cash";
break;
case 1:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 2:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 4:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 6:
sVar0[0]="Shop_Box_CrossB";
sVar0[1]="Shop_Box_Cross";
break;
case 7:
sVar0[0]="Shop_Box_BlankB";
sVar0[1]="Shop_Box_Blank";
break;
case 5:
sVar0[0]="Shop_Box_TickB";
sVar0[1]="Shop_Box_Tick";
break;
case 8:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 9:
sVar0[0]="Shop_Clothing_Icon_B";
sVar0[1]="Shop_Clothing_Icon_A";
break;
case 10:
sVar0[0]="Shop_GunClub_Icon_B";
sVar0[1]="Shop_GunClub_Icon_A";
break;
case 17:
sVar0[0]="Shop_Ammo_Icon_B";
sVar0[1]="Shop_Ammo_Icon_A";
break;
case 18:
sVar0[0]="Shop_Armour_Icon_B";
sVar0[1]="Shop_Armour_Icon_A";
break;
case 19:
sVar0[0]="Shop_Health_Icon_B";
sVar0[1]="Shop_Health_Icon_A";
break;
case 20:
sVar0[0]="Shop_MakeUp_Icon_B";
sVar0[1]="Shop_MakeUp_Icon_A";
break;
case 11:
sVar0[0]="Shop_Tattoos_Icon_B";
sVar0[1]="Shop_Tattoos_Icon_A";
break;
case 12:
sVar0[0]="Shop_Garage_Icon_B";
sVar0[1]="Shop_Garage_Icon_A";
break;
case 13:
sVar0[0]="Shop_Garage_Bike_Icon_B";
sVar0[1]="Shop_Garage_Bike_Icon_A";
break;
case 14:
sVar0[0]="Shop_Barber_Icon_B";
sVar0[1]="Shop_Barber_Icon_A";
break;
case 15:
sVar0[0]="shop_Lock";
sVar0[1]="shop_Lock";
break;
case 16:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 26:
sVar0[0]="arrowleft";
sVar0[1]="arrowleft";
break;
case 27:
sVar0[0]="arrowright";
sVar0[1]="arrowright";
break;
case 28:
sVar0[0]="MP_AlertTriangle";
sVar0[1]="MP_AlertTriangle";
break;
case 29:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 31:
sVar0[0]="Shop_Michael_Icon_B";
sVar0[1]="Shop_Michael_Icon_A";
break;
case 32:
sVar0[0]="Shop_Franklin_Icon_B";
sVar0[1]="Shop_Franklin_Icon_A";
break;
case 33:
sVar0[0]="Shop_Trevor_Icon_B";
sVar0[1]="Shop_Trevor_Icon_A";
break;
case 52:
sVar0[0]="SaleIcon";
sVar0[1]="SaleIcon";
break;
case 53:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 55:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 56:
sVar0[0]="Shop_Lock_Arena";
sVar0[1]="Shop_Lock_Arena";
break;
case 57:
sVar0[0]="Card_Suit_Clubs";
sVar0[1]="Card_Suit_Clubs";
break;
case 58:
sVar0[0]="Card_Suit_Hearts";
sVar0[1]="Card_Suit_Hearts";
break;
case 59:
sVar0[0]="Card_Suit_Spades";
sVar0[1]="Card_Suit_Spades";
break;
case 60:
sVar0[0]="Card_Suit_Diamonds";
sVar0[1]="Card_Suit_Diamonds";
break;
case 61:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 63:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 62:
sVar0[0]="Shop_Chips_A";
sVar0[1]="Shop_Chips_B";
break;
case 0:
sVar0[0]="";
sVar0[1]="";
break;
}
if(bParam1){
return sVar0[0];
}
return sVar0[1];
}


var func__256(var uParam0){
return uParam0;
}


char* func_257(int iParam0){
var uVar0;
struct<13> Var16;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var16={
func_44(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
return func_256(&uVar0);
}else{
return func_256(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_258(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=1){
while (Global_23270.f_5662 < 4 && iVar0 !=1){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23270.f_1616[Global_23270.f_5663]=bParam3;
Global_23270.f_1873[Global_23270.f_5663]=iParam4;
Global_23270.f_2130[Global_23270.f_5663]=iParam6;
Global_23270.f_5663++;
if(!bParam3){
func_261(Global_23270.f_5661, 1);
}else{
func_261(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_260(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_264(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_259(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=1;
Global_23270.f_6185=(Global_23270.f_5663 - 1);
Global_23270.f_6186=0;
Global_23270.f_6184=iParam2;
}


float func_259(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_260(char* sParam0){
if(!MISC::IS_STRING_NULL(uParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_243(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_261(int iParam0, bool bParam1){
int iVar0;
iVar0=SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_262(bool bParam0, var uParam1, var uParam2, float fParam3){
float fVar0;
float fVar1;
float fVar2;
if(!bParam0){
GRAPHICS::GET_SCREEN_RESOLUTION(uParam1, uParam2);
return;
}
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(uParam1, uParam2);
fVar0=SYSTEM::TO_FLOAT(*uParam1);
fVar1=SYSTEM::TO_FLOAT(*uParam2);
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(func_263(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=SYSTEM::ROUND((fVar1 * fVar2));
*uParam2=SYSTEM::ROUND(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=SYSTEM::ROUND((fVar0 / *fParam3));
*uParam2=SYSTEM::ROUND((fVar1 / *fParam3));
}


bool func_263(int iParam0, int iParam1){
return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_264(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar16[64];
int iVar32;
int iVar33;
float fVar34;
struct<3> Var35;
float fVar38;
StringCopy(&cVar0, func_257(iParam0), 64);
StringCopy(&cVar16, func_255(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar16) !=0){
fVar34=1f;
func_262(bParam5, &iVar32, &iVar33, &fVar34);
Var35={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) 
};
fVar38=(func_265(iParam0) / fVar34);
Var35={
Var35 * Vector(fVar38, fVar38, fVar38) 
};
if(!bParam2){
Var35.f_0=(Var35.f_0 - 2f);
Var35.f_1=(Var35.f_1 - 2f);
}
if(iParam0==30){
Var35.f_0=288f;
Var35.f_1=106f;
}
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
Var35.f_0=106f;
Var35.f_1=106f;
}
*fParam3=((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
*fParam4=(((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
if(!bParam5){
if(!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 !=30){
*fParam3=(*fParam3 * 1.33f);
}}
if(iParam0==29){
if(*fParam3 > Global_23269){
*fParam4=(*fParam4 * (Global_23269 / *fParam3));
*fParam3=Global_23269;
}}
return 1;
}
return 0;
}


float func_265(int iParam0){
switch (iParam0){
case 33:
case 4:
case 11:
case 31:
case 20:
case 15:
case 10:
case 12:
case 13:
case 32:
case 9:
case 5:
case 6:
case 7:
case 14:
case 18:
case 19:
case 17:
case 28:
case 26:
case 27:
case 53:
case 57:
case 58:
case 59:
case 60:
case 61:
case 63:
return 0.5f;
break;
case 62:
return 0.8f;
break;
}
return 1f;
}

int func_266(bool bParam0, bool bParam1){
if(Global_2672505.f_1684.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_21(8, -1) && func_267() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_267(){
return Global_1574993;
}


void func_268(var uParam0){
if(func_286() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_284(uParam0);
}else{
func_269(uParam0);
}}


void func_269(var uParam0){
Global_23268=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_276("CommonMenu", "Interaction_bgd", &(uParam0->f_14), 1, 0, 4, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_270(&(uParam0->f_11), uParam0, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 1, 1);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_270(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5){
char* sVar0;
if(!func_157(sParam2)){
if(func_274()){
func_273(uParam1, 0);
HUD::SET_TEXT_JUSTIFICATION(iParam5);
if(func_157(sParam3)){
sVar0="STRING";
}else{
sVar0=sParam3;
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_272(*uParam0), func_271(uParam0->f_1), 0);
}}}


float func_271(float fParam0){
return (fParam0 + fLocal_13);
}


float func_272(float fParam0){
return (fParam0 + fLocal_12);
}


void func_273(var uParam0, bool bParam1){
HUD::SET_TEXT_FONT(*uParam0);
if(!uParam0->f_8==0f || !uParam0->f_9==0f){
HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
}
HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
switch (uParam0->f_7){
case 0:
break;
case 1:
HUD::SET_TEXT_OUTLINE();
HUD::SET_TEXT_DROP_SHADOW();
break;
case 3:
HUD::SET_TEXT_DROP_SHADOW();
break;
case 2:
HUD::SET_TEXT_OUTLINE();
break;
}
if(bParam1){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}

int func_274(){
if(func_275()){
return 1;
}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()){
return 0;
}
if(MISC::IS_FRONTEND_FADING()){
return 0;
}
return 1;
}


bool func_275(){
return Global_1574604;
}


void func_276(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0={
*uParam2 
};
switch (iParam4){
case 0:
func_283(&Var0);
break;
case 1:
func_282(&Var0);
break;
case 5:
func_281(&Var0);
break;
case 6:
func_280(&Var0);
break;
case 7:
func_279(&Var0);
break;
case 8:
func_278(&Var0);
break;
case 9:
func_277(&Var0);
break;
}
if(func_274()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
if(iParam3==1){
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_272(Var0.f_0), func_271(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}else{
GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_272(Var0.f_0), func_271(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}


void func_277(var uParam0){
uParam0->f_4=128;
uParam0->f_5=128;
uParam0->f_6=128;
}


void func_278(var uParam0){
uParam0->f_7=2;
}


void func_279(var uParam0){
uParam0->f_7=5;
}


void func_280(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=70;
}


void func_281(var uParam0){
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=100;
}


void func_282(var uParam0){
uParam0->f_4=(uParam0->f_4 - 50);
uParam0->f_5=(uParam0->f_5 - 50);
uParam0->f_6=(uParam0->f_6 - 50);
}


void func_283(var uParam0){
uParam0->f_4=uParam0->f_4;
uParam0->f_5=uParam0->f_5;
uParam0->f_6=uParam0->f_6;
uParam0->f_7=uParam0->f_7;
}


void func_284(var uParam0){
char* sVar0;
char* sVar1;
Global_23268=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
sVar0="FIXER_MENU_BANNERS";
sVar1="SHOP_BANNER_SHORT_TRIPS_FRANKLIN";
if(func_285(PLAYER::PLAYER_ID())==joaat("ig_lamardavis_02")){
sVar1="SHOP_BANNER_SHORT_TRIPS_LAMAR";
}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0)){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
func_276(sVar0, sVar1, &(uParam0->f_14), 1, 0, 4, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_285(bool bParam0){
return ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
}

int func_286(){
return func_287(Global_4718592.f_113724);
}

int func_287(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(Global_262145.f_31722[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_288(){
Global_2793044.f_4629=0;
}


void func_289(){
var uVar0;
struct<3> Var1;
struct<35> Var4;
struct<3> Var39;
if(!MISC::IS_BIT_SET(Local_89.f_1, 9)){
if(MISC::IS_BIT_SET(Local_89.f_1, 8)){
Local_89.f_7.f_2=(PATHFIND::GET_APPROX_FLOOR_FOR_AREA((Local_89.f_7 - 7f), (Local_89.f_7.f_1 - 7f), (Local_89.f_7 + 7f), (Local_89.f_7.f_1 + 7f)) + 5f);
Var1={
Local_89.f_7 
};
Var4.f_5=1115815936;
Var4.f_13=2;
Var4.f_20=2;
Var4.f_32=-1082130432;
Var4.f_34=1;
Var4.f_4=1;
Var4.f_5=0f;
Var4.f_6=1;
if(((WATER::GET_WATER_HEIGHT_NO_WAVES(Var1, &uVar0) && !func_449(Var1)) || func_448()) || func_290(Var1, 100f, &(Local_89.f_7), &uVar0, &Var4)){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
Local_89.f_10={
Local_89.f_7 
};
iLocal_249=1;
MISC::SET_BIT(&(Local_89.f_1), 9);
MISC::SET_BIT(&(Local_89.f_1), 10);
Local_89.f_15[2]=0;
}}elseif(MISC::IS_BIT_SET(Local_89.f_1, 7)){
MISC::SET_BIT(&(Local_89.f_1), 8);
}}
if(!HUD::IS_WAYPOINT_ACTIVE()){
if(MISC::IS_BIT_SET(uLocal_245, 2)){
func_18();
MISC::CLEAR_BIT(&uLocal_245, 2);
}}elseif(!MISC::IS_BIT_SET(uLocal_245, 2)){
Var39={
HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) 
};
Var39.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((Var39.f_0 - 5f), (Var39.f_1 - 5f), (Var39.f_0 + 5f), (Var39.f_1 + 5f));
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, Var39, 1) > 1000f){
func_18();
Local_89.f_7={
Var39 
};
Local_89.f_10={
Var39 
};
HUD::SET_MINIMAP_BLOCK_WAYPOINT(1);
MISC::SET_BIT(&(Local_89.f_1), 7);
MISC::SET_BIT(&uLocal_245, 2);
iLocal_249=1;
}}}

int func_290(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6){
struct<17> Var0;
struct<18> Var34;
struct<3> Var65;
if(uParam6->f_5 > (fParam3 - 20f)){
uParam6->f_5=(fParam3 - 20f);
}
Var0=5;
Var0.f_16=5;
Var0.f_22=5;
Var0.f_28=5;
Var34.f_16=1;
Var34.f_22=1;
Var34.f_23=1;
Var34.f_24=1;
Var34.f_28=-1;
Var34={
Param0 
};
Var34.f_3=uParam6->f_11;
Var34.f_4=fParam3;
Var34.f_5=0;
Var34.f_6=1;
Var34.f_7=0;
Var34.f_15=0;
Var34.f_16=1;
Var34.f_17=0;
if(func_291(&Var34, uParam6, &Var0)){
if((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8){
Var65={
Param0 - Var0[0 /*3*/] 
};
if(Var65.f_2 > uParam6->f_12){
Var0[0 /*3*/]={
Param0 
};
Var0.f_16[0]=uParam6->f_11;
}}
*uParam4={
Var0[0 /*3*/] 
};
*uParam5=Var0.f_16[0];
return 1;
}
return 0;
}

int func_291(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
struct<3> Var8;
struct<3> Var11;
struct<3> Var14;
int iVar17;
struct<3> Var18;
struct<3> Var21;
var uVar24;
bool bVar25;
struct<61> Var26;
bool bVar87;
bVar25=false;
switch (uParam0->f_7){
case 0:
if(((!Global_2635559.f_2466==*uParam0 || !Global_2635559.f_2466.f_1==uParam0->f_1) || !Global_2635559.f_2466.f_2==uParam0->f_2) || !Global_2635559.f_2469==uParam0->f_4){
bVar25=true;
}
break;
case 1:
if(((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2){
bVar25=true;
}
break;
case 2:
if((((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2) || !Global_2635559.f_2486==uParam0->f_14){
bVar25=true;
}
break;
}
if(Global_1574477){
if(!Global_2635559.f_2487==uParam0->f_7){
bVar25=true;
}
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473) && !Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
bVar25=true;
}}
if(bVar25){
if(Global_2635559.f_2464==1){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473)){
if(Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_447(0)){
return 0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_447(0)){
return 0;
}}
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_446();
}
Global_2635559.f_2464=0;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) > func_447(0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
func_440();
}
switch (uParam0->f_7){
case 0:
fVar4=(*uParam0 - uParam0->f_4);
fVar5=(uParam0->f_1 - uParam0->f_4);
fVar6=(*uParam0 + uParam0->f_4);
fVar7=(uParam0->f_1 + uParam0->f_4);
break;
case 1:
if(uParam0->f_8 < uParam0->f_11){
fVar4=uParam0->f_8;
fVar6=uParam0->f_11;
}else{
fVar4=uParam0->f_11;
fVar6=uParam0->f_8;
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar5=uParam0->f_8.f_1;
fVar7=uParam0->f_11.f_1;
}else{
fVar5=uParam0->f_11.f_1;
fVar7=uParam0->f_8.f_1;
}
break;
case 2:
if(uParam0->f_8 < uParam0->f_11){
fVar4=(uParam0->f_8 - (0.5f * uParam0->f_14));
fVar6=(uParam0->f_11 + (0.5f * uParam0->f_14));
}else{
fVar4=(uParam0->f_11 - (0.5f * uParam0->f_14));
fVar6=(uParam0->f_8 + (0.5f * uParam0->f_14));
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar5=(uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
fVar7=(uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
}else{
fVar5=(uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
fVar7=(uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
}
break;
}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar4, fVar5, fVar6, fVar7);
if(uParam0->f_7==0){
Var8={
*uParam0 
};
}else{
Var8={
uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
}
Var11={
Var8 + Vector(-0.1f, -0.1f, -0.1f) 
};
Var14={
Var8 + Vector(0.1f, 0.1f, 0.1f) 
};
if(!Global_2635559.f_2464){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_446();
if(uParam1->f_7 && uParam0->f_7==0){
if(SYSTEM::VMAG(*uParam0) > 0f){
if(func_439(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
return 1;
}}}
if(!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
Global_2635559.f_2487=uParam0->f_7;
switch (uParam0->f_7){
case 0:
Global_2635559.f_2466={
*uParam0 
};
Global_2635559.f_2469=uParam0->f_4;
break;
case 1:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=0f;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
case 2:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=uParam0->f_14;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
if(!uParam1->f_8 && !uParam1->f_9){
func_438(Var8.f_0, Var8.f_1);
}
Global_2635559.f_2465=1;
Global_2635559.f_2464=1;
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2473=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
return 0;
}}
if(Global_2635559.f_2464){
if(Global_2635559.f_2465==1){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 5000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(uParam1->f_8 || uParam1->f_9){
if(uParam0->f_21){
*(uParam2[0 /*3*/])={
uParam0->f_18 
};
}else{
*(uParam2[0 /*3*/])={
Var8 
};
}
Var26.f_6=1082130432;
Var26.f_7=1176255488;
Var26.f_8=1;
Var26.f_10=1;
Var26.f_13=1;
Var26.f_15=1;
Var26.f_16=1;
Var26.f_31=1;
Var26.f_34=joaat("tailgater");
Var26.f_38=2;
Var26.f_45=2;
Var26.f_49=1123024896;
Var26.f_53=999;
Var26.f_54=1176256410;
Var26.f_55=1;
Var26.f_56=1;
Var26.f_57=1;
Var26={
*uParam1 
};
Var26.f_3=uParam1->f_5;
Var26.f_11=uParam1->f_9;
Var26.f_18=1;
if(uParam1->f_32 > 0f){
Var26.f_6=uParam1->f_32;
}
switch (uParam0->f_7){
case 0:
Var26.f_19={
*uParam0 
};
Var26.f_25=uParam0->f_4;
break;
case 1:
Var26.f_19={
uParam0->f_8 
};
Var26.f_22={
uParam0->f_11 
};
Var26.f_25=0f;
break;
case 2:
Var26.f_19={
uParam0->f_8 
};
Var26.f_22={
uParam0->f_11 
};
Var26.f_25=uParam0->f_14;
break;
}
Var26.f_26=uParam0->f_7;
Var26.f_12=uParam0->f_15;
if(uParam0->f_21){
Var26.f_30=1;
Var26.f_32=1;
}
iVar17=0;
while (iVar17 < 2){
Var26.f_38[iVar17 /*3*/]={
uParam1->f_13[iVar17 /*3*/] 
};
Var26.f_45[iVar17]=uParam1->f_20[iVar17];
iVar17++;
}
Var26.f_51=uParam1->f_30;
Var26.f_55=uParam0->f_16;
if(uParam0->f_26){
Var26.f_10=0;
}
if(func_437(Global_4718592.f_166301)){
Var26.f_9=1;
}
Var26.f_60=uParam0->f_30;
func_410(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
if((uParam1->f_7 && uParam1->f_9) && uParam0->f_7==0){
if(!func_409(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
}}
Global_2635559.f_2465=9;
}else{
Global_2635559.f_2465=2;
}}}
if(Global_2635559.f_2465==2){
if((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var11, Var14)==0){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(uParam0->f_5 && !func_9(PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_2465=3;
}else{
Global_2635559.f_2465=4;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2475) > 7000){
func_408(Var8.f_0, Var8.f_1);
}}
if(Global_2635559.f_2465==3){
if(func_407() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 10000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=4;
}}
if(Global_2635559.f_2465==4){
if(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
}else{
iVar0=0;
func_440();
if(uParam0->f_5){
if(SYSTEM::VMAG(*uParam1)==0f){
iVar0 +=2;
}
if(uParam1->f_3){
iVar0 +=8;
}
iVar0 +=16;
iVar0 +=32;
if(!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
iVar0 +=64;
iVar0 +=128;
iVar0 +=256;
}
iVar0 +=2048;
iVar0 +=512;
iVar0 +=1024;
switch (uParam0->f_7){
case 0:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 1:
func_406(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var18, Var21, uVar24, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 2:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
}}else{
if(uParam1->f_3){
iVar0++;
}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_406(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, uVar24, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}}}
if(Global_2635559.f_2465==5){
if(func_341(uParam2, uParam0, uParam1, 0)){
if(Global_2635559.f_2491.f_5){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=6;
}else{
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!uParam0->f_5){
if(!SYSTEM::VMAG(*uParam1)==0f){
Var1={
*uParam1 - *(uParam2[0 /*3*/]) 
};
uParam2->f_16[0]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}}
Global_2635559.f_2465=9;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==6){
iVar0=0;
Global_2635559.f_2491.f_1=0;
if(uParam1->f_3){
iVar0++;
}elseif(uParam0->f_7==0){
if(!func_340(uParam0->f_4)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8))){
iVar0++;
}}}elseif(!func_339(uParam0->f_8, uParam0->f_11, uParam0->f_14)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8))){
iVar0++;
}}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
if(uParam0->f_15){
iVar0 +=16;
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=7;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_406(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, uVar24, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}
if(Global_2635559.f_2465==7){
if(func_341(uParam2, uParam0, uParam1, 1)){
if(SYSTEM::VMAG(*(uParam2[0 /*3*/]))==0f){
iVar17=0;
while (iVar17 < 3){
if(SYSTEM::VMAG(*(uParam2[0 /*3*/]))==0f){
if(!SYSTEM::VMAG(Global_2635559.f_2625[iVar17 /*3*/])==0f){
switch (uParam0->f_7){
case 0:
if(func_409(Global_2635559.f_2625[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar17 /*3*/] 
};
}
break;
case 1:
if(func_337(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar17 /*3*/] 
};
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar17 /*3*/] 
};
}
break;
}}
}
iVar17++;
}
if(SYSTEM::VMAG(*(uParam2[0 /*3*/]))==0f){
switch (uParam0->f_7){
case 0:
Var1={
*uParam0 
};
break;
case 1:
case 2:
Var1={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
func_294(&Var1, 0, 1, 1, 0, uParam0, uParam1);
*(uParam2[0 /*3*/])={
Var1 
};
}}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!SYSTEM::VMAG(*uParam1)==0f){
iVar17=0;
while (iVar17 < 5){
Var1={
*uParam1 - *(uParam2[iVar17 /*3*/]) 
};
uParam2->f_16[iVar17]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
iVar17++;
}}
Global_2635559.f_2465=9;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==8){
if(uParam0->f_5){
if(func_293(Global_2635559.f_489)){
}}elseif(Global_2635559.f_2491.f_2){
func_292(uParam2, &(Global_2635559.f_2491.f_6));
}else{
if(uParam0->f_15){
bVar87=false;
}else{
bVar87=true;
}
*(uParam2[0 /*3*/])={
Global_2635559.f_2466 
};
func_294(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=9;
}
if(Global_2635559.f_2465==9){
Global_2635559.f_2464=0;
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_446();
return 1;
}
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
}
return 0;
}


void func_292(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < 5){
*(uParam0[iVar0 /*3*/])={
(uParam1[iVar0 /*10*/])->f_4 
};
uParam0->f_16[iVar0]=(uParam1[iVar0 /*10*/])->f_7;
uParam0->f_22[iVar0]=(*uParam1)[iVar0 /*10*/];
iVar0++;
}}

int func_293(int iParam0){
if(iParam0==3 || iParam0==26){
return 1;
}
return 0;
}


void func_294(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6){
struct<3> Var0;
var uVar3;
struct<61> Var4;
var uVar65;
int iVar66;
bool bVar67;
int iVar68;
struct<3> Var69;
struct<3> Var72;
struct<3> Var75;
float fVar78;
Var4.f_6=1082130432;
Var4.f_7=1176255488;
Var4.f_8=1;
Var4.f_10=1;
Var4.f_13=1;
Var4.f_15=1;
Var4.f_16=1;
Var4.f_31=1;
Var4.f_34=joaat("tailgater");
Var4.f_38=2;
Var4.f_45=2;
Var4.f_49=1123024896;
Var4.f_53=999;
Var4.f_54=1176256410;
Var4.f_55=1;
Var4.f_56=1;
Var4.f_57=1;
if(bParam1){
iVar68=0;
}else{
iVar68=16;
}
if(!uParam6->f_3){
if(uParam5->f_5){
if(!uParam5->f_22){
iVar68 +=4;
}else{
switch (uParam5->f_7){
case 0:
Var69={
*uParam5 
};
if(func_340(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69))){
iVar68 +=4;
}
break;
case 1:
Var69={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_339(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69))){
iVar68 +=4;
}
break;
case 2:
Var69={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_339(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69))){
iVar68 +=4;
}
break;
}}}else{
iVar68 +=4;
}}
if(func_308(*uParam0, &Var0, iVar68, iParam3, 1)){}else{
bVar67=true;
}
if(bVar67){
Var0={
*uParam0 
};
Var4={
*uParam6 
};
Var4.f_8=1;
Var4.f_3=uParam6->f_5;
if(bParam2){
Var4.f_10=0;
}else{
Var4.f_10=1;
}
Var4.f_13=uParam5->f_15;
Var4.f_15=iParam3;
if(uParam6->f_32 > 0f){
Var4.f_6=uParam6->f_32;
}
if(bParam4){
Var4.f_18=1;
Var4.f_26=uParam5->f_7;
switch (uParam5->f_7){
case 0:
Var4.f_19={
*uParam5 
};
Var4.f_25=uParam5->f_4;
break;
case 1:
Var4.f_19={
uParam5->f_8 
};
Var4.f_22={
uParam5->f_11 
};
Var4.f_25=0f;
break;
case 2:
Var4.f_19={
uParam5->f_8 
};
Var4.f_22={
uParam5->f_11 
};
Var4.f_25=uParam5->f_14;
break;
}}
iVar66=0;
while (iVar66 < 2){
Var4.f_38[iVar66 /*3*/]={
uParam6->f_13[iVar66 /*3*/] 
};
Var4.f_45[iVar66]=uParam6->f_20[iVar66];
iVar66++;
}
Var4.f_51=uParam6->f_30;
Var4.f_55=uParam5->f_16;
if(func_306(PLAYER::PLAYER_ID(), 0)){
Var4.f_9=1;
}
Var4.f_60=uParam5->f_30;
func_410(&Var0, &uVar3, &Var4);
}
if(bParam4){
switch (uParam5->f_7){
case 0:
Var72={
*uParam5 
};
fVar78=uParam5->f_4;
break;
case 1:
Var72={
uParam5->f_8 
};
Var75={
uParam5->f_11 
};
break;
case 2:
Var72={
uParam5->f_8 
};
Var75={
uParam5->f_11 
};
fVar78=uParam5->f_14;
break;
}
if(!func_305(Var0, uParam5->f_7, Var72, Var75, fVar78)){
if(func_308(*uParam0, &Var0, iVar68, iParam3, 0)){
if(!func_305(Var0, uParam5->f_7, Var72, Var75, fVar78)){
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var72 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, 0, 0)){
Var0.f_2=uVar65;
}}}elseif(func_295(uParam0, 1, 1, 1, 1)){
func_294(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
}else{
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var72 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, 0, 0)){
Var0.f_2=uVar65;
}}}}
*uParam0={
Var0 
};
Global_2635559.f_667=1;
}

int func_295(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_304(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640505[iVar0 /*17*/].f_12){
*uParam0={
Global_2640505[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_296(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_295(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_296(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
}
*uParam0={
Var1 
};
}}
return 1;
}}}
iVar0++;
}
return 0;
}


void func_296(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_303(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_303(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_303(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_301(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_300(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_297(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}


void func_297(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
float fVar9;
struct<3> Var10;
struct<3> Var13;
float fVar16;
struct<3> Var17;
struct<3> Var20;
struct<3> Var23;
struct<3> Var26;
struct<3> Var29;
Var0={
Param4 - Param1 
};
Var0.f_2=0f;
Var3={
*uParam0 - Param1 
};
Var3.f_2=0f;
Var6={
func_299(0f, 0f, 1f, Var0) 
};
Var6={
Var6 / FtoV(SYSTEM::VMAG(Var6)) 
};
fVar9=(SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
if(fVar9 < (fParam7 * 0.5f)){
if(!bParam9){
if(func_298(Var6, Var3) >=0f){
Var6={
Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) 
};
}else{
Var6={
Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) 
};
}}elseif(func_298(Var6, Var3) >=0f){
Var6={
Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) 
};
}else{
Var6={
Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) 
};
}
Var10={
*uParam0 + Var6 
};
fVar16=SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
Var17={
Param1 + Param4 / Vector(2f, 2f, 2f) 
};
Var17.f_2=0f;
Var6={
func_299(0f, 0f, 1f, Var0) 
};
Var6={
Var6 / FtoV(SYSTEM::VMAG(Var6)) 
};
Var6={
Var6 * FtoV((fParam7 * 0.5f)) 
};
Var20={
Var17 - Var6 
};
Var23={
Var17 + Var6 
};
Var26={
Var23 - Var20 
};
Var26.f_2=0f;
Var29={
*uParam0 - Var20 
};
Var29.f_2=0f;
Var6={
func_299(0f, 0f, 1f, Var26) 
};
Var6={
Var6 / FtoV(SYSTEM::VMAG(Var6)) 
};
fVar9=(SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
if(!bParam9){
if(func_298(Var6, Var29) >=0f){
Var6={
Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) 
};
}else{
Var6={
Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) 
};
}}elseif(func_298(Var6, Var29) >=0f){
Var6={
Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) 
};
}else{
Var6={
Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) 
};
}
Var13={
*uParam0 + Var6 
};
if(SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f)){
*uParam0={
Var10 
};
}else{
*uParam0={
Var13 
};
}}}


float func_298(struct<3> Param0, struct<3> Param3){
return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}


Vector3 func__299(struct<3> Param0, struct<3> Param3){
return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}


void func_300(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8){
struct<3> Var0;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
Var0={
*uParam0 
};
fVar3=(*uParam0 - Param1.f_0);
fVar4=(*uParam0 - Param4.f_0);
if(fVar3 < fVar4){
fVar5=fVar3;
}else{
fVar5=fVar4;
}
fVar6=(uParam0->f_1 - Param1.f_1);
fVar7=(uParam0->f_1 - Param4.f_1);
if(fVar6 < fVar7){
fVar8=fVar6;
}else{
fVar8=fVar7;
}
Var0={
*uParam0 
};
if(!bParam8){
if(fVar5 < fVar8){
if(fVar3 < fVar4){
Var0.f_0=(Param1.f_0 - fParam7);
}else{
Var0.f_0=(Param4.f_0 + fParam7);
}}elseif(fVar6 < fVar7){
Var0.f_1=(Param1.f_1 - fParam7);
}else{
Var0.f_1=(Param4.f_1 + fParam7);
}}elseif(fVar5 < fVar8){
if(fVar3 < fVar4){
Var0.f_0=(Param4.f_0 + fParam7);
}else{
Var0.f_0=(Param1.f_0 - fParam7);
}}elseif(fVar6 < fVar7){
Var0.f_1=(Param4.f_1 + fParam7);
}else{
Var0.f_1=(Param1.f_1 - fParam7);
}
*uParam0={
Var0 
};
}


void func_301(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7){
struct<3> Var0;
struct<3> Var3;
Var0={
*uParam0 - Param1 
};
Var0.f_2=0f;
if(SYSTEM::VMAG(Var0) > 0f){
Var0={
Var0 / FtoV(SYSTEM::VMAG(Var0)) 
};
}else{
Var0={
0f, 1f, 0f 
};
if(fParam7==0f){
func_302(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_302(&Var0, 0f, 0f, fParam7);
}}
Var0={
Var0 * FtoV((fParam4 + fParam5)) 
};
if(!bParam6){
Var3={
Param1 + Var0 
};
}else{
Var3={
Param1 - Var0 
};
}
*uParam0=Var3.f_0;
uParam0->f_1=Var3.f_1;
}


void func_302(var uParam0, struct<3> Param1){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=SYSTEM::COS(Param1.f_0);
fVar1=SYSTEM::SIN(Param1.f_0);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=SYSTEM::COS(Param1.f_1);
fVar1=SYSTEM::SIN(Param1.f_1);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=SYSTEM::COS(Param1.f_2);
fVar1=SYSTEM::SIN(Param1.f_2);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


Vector3 func__303(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12){
int iVar0;
struct<3> Var1;
switch (iParam10){
case 0:
func_301(&Param0, Param3, fParam9, fParam11, bParam12, 0);
break;
case 1:
func_300(&Param0, Param3, Param6, fParam11, bParam12);
break;
case 2:
func_297(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam10){
case 0:
if(!func_409(Var1, Param3, fParam9, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_337(Var1, Param3, Param6, 0, 0)){
return Var1;
}
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, 0, 1)){
return Var1;
}
break;
}
iVar0++;
}
return Param0;
}

int func_304(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6){
switch (uParam3->f_10){
case 0:
return func_409(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635559.f_2735) * uParam3->f_8)), bParam5, bParam6);
break;
case 1:
return func_337(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
break;
case 2:
if(bParam5 && bParam6){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
}elseif(bParam5){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2)){
return 1;
}else{
return 0;
}}elseif(bParam6){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2)){
return 1;
}else{
return 0;
}}else{
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}
break;
}
return 0;
}

int func_305(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10){
switch (iParam3){
case 0:
if(SYSTEM::VDIST(Param0, Param4) <=fParam10){
return 1;
}
break;
case 1:
return func_337(Param0, Param4, Param7, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param4, Param7, fParam10, 0, 1);
break;
}
return 0;
}

int func_306(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_68()){
return func_307(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_307(int iParam0){
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

int func_308(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6){
if(func_336(Param0, uParam3)){
if(func_309(Param0, uParam3, iParam5, bParam6)){
return 1;
}}
if(PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam3, iParam4)){
if(func_309(Param0, uParam3, iParam5, bParam6)){
return 1;
}}
return 0;
}

int func_309(struct<3> Param0, var uParam3, int iParam4, bool bParam5){
float fVar0;
var uVar1;
var uVar8;
fVar0=SYSTEM::VDIST(Param0, *uParam3);
if(fVar0 < 40f){
uVar1=2;
uVar8=2;
if((iParam4==1 && !func_322(Global_2635559.f_512, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4==0){
if(!func_313(*uParam3, 1056964608)){
if(!func_310(uParam3, 0)){
return 1;
}}}}
return 0;
}

int func_310(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
int iVar4;
Var1={
*uParam0 
};
iVar4=func_312(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar4]){
if(func_311(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_297(&Var1, Global_2640710[iVar4 /*155*/][iVar0 /*7*/], Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3, Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_311(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_297(&Var1, Global_2640710[8 /*155*/][iVar0 /*7*/], Global_2640710[8 /*155*/][iVar0 /*7*/].f_3, Global_2640710[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}


bool func_311(struct<3> Param0, var uParam3){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_312(struct<2> Param0, var uParam2){
if(Param0.f_1 > Global_2642117[0]){
return 0;
}
if(Param0.f_1 > Global_2642117[1]){
if(Param0.f_0 < Global_2642121[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642117[2]){
if(Param0.f_0 < Global_2642121[1]){
return 3;
}elseif(Param0.f_0 < Global_2642121[2]){
return 4;
}elseif(Param0.f_0 < Global_2642121[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_313(struct<3> Param0, float fParam3){
int iVar0;
if(func_203(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_314(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam3)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_314(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_314(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_314(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_314(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}

int func_314(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8){
struct<3> Var0;
struct<3> Var3;
float fVar6;
if(SYSTEM::VDIST(Param0, Param3) < func_321(iParam7, 1008981770)){
func_315(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, 0, 1)){
return 1;
}}
return 0;
}


void func_315(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
struct<3> Var9;
struct<3> Var12;
Var0={
0f, 1f, 0f 
};
func_302(&Var0, 0f, 0f, fParam3);
Var0={
Var0 / FtoV(SYSTEM::VMAG(Var0)) 
};
func_316(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
Var9={
Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) 
};
Var9.f_2=(Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
Var12={
Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) 
};
Var12.f_2=(Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
*uParam5={
Var9 
};
*uParam6={
Var12 
};
*uParam7=MISC::ABSF((Var6.f_0 - Var3.f_0));
}


void func_316(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_319(iParam0);
if(iVar0 !=0){
func_317(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(SYSTEM::VMAG(*uParam1) <=0.01f || SYSTEM::VMAG(*uParam2) <=0.01f){
if(iParam0==joaat("kosatka")){
if(fParam4 < 20.7f){
fParam4=20.7f;
}
if(fParam3 < 137.2f){
fParam3=137.2f;
}
if(fParam5 < 21.1f){
fParam5=21.1f;
}}
*uParam1=(0f - (fParam4 * 0.5f));
*uParam2=(0f + (fParam4 * 0.5f));
uParam1->f_1=(0f - (fParam3 * 0.5f));
uParam2->f_1=(0f + (fParam3 * 0.5f));
uParam1->f_2=(0f - (fParam5 * 0.5f));
uParam2->f_2=(0f + (fParam5 * 0.5f));
}}


void func_317(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_318(iParam0, &Global_1577994);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1577994[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
}
if(SYSTEM::VMAG(Global_1577998[iVar0 /*3*/]) <=0.01f || SYSTEM::VMAG(Global_1578005[iVar0 /*3*/]) <=0.01f){
Global_1577998[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578005[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1577998[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578005[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1577998[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578005[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578012[iVar0]=(Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
Global_1578015[iVar0]=(Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
Global_1578018[iVar0]=(Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
if(Global_1578012[iVar0] > Global_1578021){
Global_1578021=Global_1578012[iVar0];
}
if(Global_1578018[iVar0] > Global_1578022){
Global_1578022=Global_1578018[iVar0];
}
iVar0++;
}
Global_1578023=(Global_1578021 * -0.5f);
Global_1578026=(Global_1578021 * 0.5f);
Global_1578023.f_1=((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
Global_1578026.f_1=(0.5f * Global_1578015[0]);
Global_1578023.f_2=(Global_1578018[0] * -0.5f);
Global_1578026.f_2=(Global_1578018[0] * 0.5f);
*uParam1={
Global_1578023 
};
*uParam2={
Global_1578026 
};
}


void func_318(int iParam0, var uParam1){
switch (iParam0){
case 1:
(*uParam1)[0]=joaat("hauler2");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
(*uParam1)[0]=joaat("phantom3");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
(*uParam1)[0]=joaat("nightshark");
(*uParam1)[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}}

int func_319(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_320(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_320(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


float func_321(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
float fVar9;
if(iParam0==0){
return 5f;
}
func_316(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
Var6={
Var3 - Var0 
};
fVar9=(SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
return fVar9;
}

int func_322(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7){
int iVar0;
bool bVar1;
if(func_329(Param0)){
if(func_295(uParam3, bParam6, 0, 1, 1)){
if(bParam6){
}
return 1;
}}
if(func_324(uParam3, bParam6, 1)){
if(bParam6){
}
return 1;
}
if(bParam7){
if(func_323(*uParam3, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam4){
if(SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0]){
if(bParam6){
func_301(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
}
bVar1=true;
}
iVar0++;
}
if(bVar1){
return 1;
}
return 0;
}

int func_323(struct<3> Param0, float fParam3){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(SYSTEM::VDIST(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam3){
return 1;
}
iVar0++;
}
return 0;
}

int func_324(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_326(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_296(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_326(Var2, &uVar1) || func_325(Var2)){
Var2={
*uParam0 
};
func_296(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}

int func_325(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=SYSTEM::VDIST(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}

int func_326(struct<3> Param0, var uParam3){
int iVar0;
int iVar1;
if(func_328()){
return 0;
}
iVar1=func_327();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_304(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam3=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_327(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635559.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_328(){
return Global_1950108.f_528;
}

int func_329(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_333(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_332(Param0, 1008981770)){
if(!func_295(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_295(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_331(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_330(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_295(&Var1, 0, 0, 0, 1)){
if(!func_295(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__330(var uParam0){
switch (uParam0->f_10){
case 0:
return *uParam0;
break;
case 1:
case 2:
return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
break;
}
return *uParam0;
}

int func_331(struct<3> Param0, float fParam3){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_304(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_332(struct<3> Param0, float fParam3){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_304(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_333(int iParam0, bool bParam1){
if(func_335() !=0){
return func_334(iParam0) !=0;
}
return func_203(iParam0, bParam1, 0);
}

int func_334(int iParam0){
if(func_12(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_335(){
return Global_32163;
}

int func_336(struct<3> Param0, var uParam3){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
iVar1=-1;
fVar2=999999.9f;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
fVar3=SYSTEM::VDIST(Global_2635559.f_2263[iVar0 /*4*/], Param0);
if(fVar3 < fVar2){
iVar1=iVar0;
fVar2=fVar3;
}
iVar0++;
}
if(!iVar1==-1){
*uParam3={
Global_2635559.f_2263[iVar1 /*4*/] 
};
return 1;
}}
return 0;
}

int func_337(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10){
func_338(&Param3, &Param6);
if(((!Param0.f_0 >=Param3.f_0 || !Param0.f_1 >=Param3.f_1) || !Param0.f_0 <=Param6.f_0) || !Param0.f_1 <=Param6.f_1){
return 0;
}
if(bParam9 && bParam10){
return 1;
}elseif(bParam9){
if(Param0.f_2 >=Param3.f_2){
return 1;
}}elseif(bParam10){
if(Param0.f_2 <=Param6.f_2){
return 1;
}}elseif(Param0.f_2 >=Param3.f_2 && Param0.f_2 <=Param6.f_2){
return 1;
}
return 0;
}


void func_338(var uParam0, var uParam1){
var uVar0;
if(*uParam0 > *uParam1){
uVar0=*uParam1;
*uParam1=*uParam0;
*uParam0=uVar0;
}
if(uParam0->f_1 > uParam1->f_1){
uVar0=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=uVar0;
}
if(uParam0->f_2 > uParam1->f_2){
uVar0=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=uVar0;
}}

int func_339(struct<3> Param0, struct<3> Param3, float fParam6){
struct<3> Var0;
struct<3> Var3;
if(Param0.f_0 > Param3.f_0){
Var3.f_0=Param0.f_0;
Var0.f_0=Param3.f_0;
}else{
Var3.f_0=Param3.f_0;
Var0.f_0=Param0.f_0;
}
if(Param0.f_1 > Param3.f_1){
Var3.f_1=Param0.f_1;
Var0.f_1=Param3.f_1;
}else{
Var3.f_1=Param3.f_1;
Var0.f_1=Param0.f_1;
}
if(Param0.f_2 > Param3.f_2){
Var3.f_2=Param0.f_2;
Var0.f_2=Param3.f_2;
}else{
Var3.f_2=Param3.f_2;
Var0.f_2=Param0.f_2;
}
if(SYSTEM::VMAG(Var3 - Var0) > 100f){
return 1;
}
if(fParam6 > 50f){
return 1;
}
return 0;
}

int func_340(float fParam0){
if(fParam0 > 50f){
return 1;
}
return 0;
}

int func_341(var uParam0, var uParam1, var uParam2, bool bParam3){
struct<3> Var0;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
if(Global_2635559.f_2491.f_1==0 && Global_2635559.f_2491==0){
if(uParam1->f_5 && !bParam3){
switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635559.f_2491.f_1))){
case 0:
func_404(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
if(uParam2->f_7 && Global_2635559.f_555.f_7==0){
*(uParam0[0 /*3*/])={
*uParam1 
};
uParam0->f_16[0]=uParam1->f_3;
return 1;
}
else{
if(uParam1->f_21){
*(uParam0[0 /*3*/])={
uParam1->f_18 
};
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
}
if(uParam1->f_5 && func_293(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_294(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
func_294(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 1;
}}
break;
case 1:
func_404(uParam1, uParam2);
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
}}elseif(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
if(!PED::SPAWNPOINTS_IS_SEARCH_FAILED()){
if(PED::SPAWNPOINTS_IS_SEARCH_COMPLETE()){
func_404(uParam1, uParam2);
Global_2635559.f_2491.f_1=PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
}else{
return 0;
}}else{
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_404(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
Global_2635559.f_2491.f_5=1;
return 1;
}}}else{
return 0;
}}
if(uParam1->f_5){
func_401(Global_2635559.f_555, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90));
}
if(uParam2->f_7 && !Global_2635559.f_2491.f_4){
Global_2635559.f_2491.f_4=1;
func_349(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
}
iVar6=0;
if(uParam1->f_5){
iVar7=64;
}else{
iVar7=32;
}
if(Global_2635559.f_2491.f_1 > 0 || Global_2635559.f_2491 > 0){
if(uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
iVar4=0;
while (iVar4 < Global_2635559.f_2491.f_1){
if(iVar6 < iVar7){
if(iVar4 <=Global_2635559.f_2491.f_3){
iVar4=Global_2635559.f_2491.f_3 + 1;
}
if(iVar4 > (Global_2635559.f_2491.f_1 - 1)){
iVar4=(Global_2635559.f_2491.f_1 - 1);
}
if(iVar4 < 0){
iVar4=0;
}
if(uParam1->f_5 && !bParam3){
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
fVar3=(fVar3 * 57.29578f);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
}
if(uParam1->f_5 && !bParam3){
iVar5=NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar4, &iVar5);
}
func_349(Var0, fVar3, uParam1, uParam2, 0, iVar5);
iVar6++;
Global_2635559.f_2491.f_3=iVar4;
}else{
return 0;
}
iVar4++;
}}else{
iVar4=Global_2635559.f_2491.f_1;
}
if(Global_2635559.f_2491.f_1==iVar4){
if(uParam1->f_5 && Global_2635559.f_2889){
func_343(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}
if(uParam1->f_5 && func_293(Global_2635559.f_489)){
if(Global_2635559.f_2491.f_2){
func_292(uParam0, &(Global_2635559.f_2491.f_6));
func_342(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_294(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_342(*(uParam0[0 /*3*/]));
return 1;
}}elseif(Global_2635559.f_2491.f_2){
func_292(uParam0, &(Global_2635559.f_2491.f_6));
func_342(*(uParam0[0 /*3*/]));
return 1;
}elseif(uParam1->f_5){
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_2491.f_1);
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
if(!func_310(uParam0[0 /*3*/], 0)){
uParam0->f_16[0]=(uParam0->f_16[0] * 57.29578f);
func_342(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_294(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_342(*(uParam0[0 /*3*/]));
return 1;
}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_294(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_342(*(uParam0[0 /*3*/]));
return 1;
}}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
if(uParam1->f_5 && func_293(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_294(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
if(uParam1->f_15){
bVar8=false;
}else{
bVar8=true;
}
func_294(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_342(*(uParam0[0 /*3*/]));
return 1;
}
return 0;
}


void func_342(struct<3> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(iVar0 > 0){
Global_2635559.f_2625[(3 - iVar0) /*3*/]={
Global_2635559.f_2625[(3 - iVar0 + 1) /*3*/] 
};
}
iVar0++;
}
Global_2635559.f_2625[0 /*3*/]={
Param0 
};
}


void func_343(var uParam0, var uParam1, var uParam2){
if(func_293(Global_2635559.f_489) && func_348() < 4096){
func_347(uParam0, 0f);
func_347(uParam1, uParam0->f_2);
func_347(uParam2, uParam1->f_2);
}else{
func_346(uParam0);
func_345(uParam2, uParam0->f_4);
func_344(uParam1, uParam0->f_4, uParam2->f_4);
}}


void func_344(var uParam0, struct<3> Param1, struct<3> Param4){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
struct<10> Var5;
fVar1=-1f;
Var5.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=SYSTEM::VDIST(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar3=SYSTEM::VDIST(Global_2638502[iVar0 /*10*/].f_4, Param4);
fVar4=(fVar2 + fVar3);
fVar4=(fVar4 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar4 > fVar1){
fVar1=fVar4;
Var5={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var5 
};
}


void func_345(var uParam0, struct<3> Param1){
int iVar0;
float fVar1;
float fVar2;
struct<10> Var3;
fVar1=-1f;
Var3.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=SYSTEM::VDIST(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar2=(fVar2 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar2 > fVar1){
fVar1=fVar2;
Var3={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var3 
};
}


void func_346(var uParam0){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=-1f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 > fVar1){
fVar1=Global_2638502[iVar0 /*10*/].f_1;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}


void func_347(var uParam0, float fParam1){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=999999.9f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_2 < fVar1 && Global_2638502[iVar0 /*10*/].f_2 > fParam1){
fVar1=Global_2638502[iVar0 /*10*/].f_2;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}

int func_348(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > iVar1){
iVar1=Global_2638502[iVar0 /*10*/];
}
iVar0++;
}
return iVar1;
}


void func_349(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
float fVar5;
float fVar6;
var uVar7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
struct<3> Var12;
bool bVar15;
int iVar16;
struct<3> Var17;
struct<3> Var20;
float fVar23;
int iVar24;
struct<10> Var25;
bool bVar35;
bool bVar36;
iVar10=0;
iVar8=0;
bVar9=false;
if(uParam4->f_5){
if(Global_2635559.f_489==1){
if(MISC::ABSF((Global_2635559.f_512.f_2 - Param0.f_2)) < 25f){
iVar8++;
}}else{
iVar8++;
}}else{
iVar8++;
}
if(uParam4->f_5){
if(func_398(PLAYER::PLAYER_ID())){
if(iParam7==-1){
bVar9=true;
}elseif(!iParam7 & 1==0){
bVar9=true;
}}elseif(iParam7==-1){
iVar8 +=2;
}elseif(!iParam7 & 1==0){
iVar8 +=2;
}}else{
iVar8 +=2;
}
if(uParam4->f_5 && uParam4->f_6){
if(!func_397(Param0, 1084227584, 1123024896, 0)){
iVar8 +=4;
}}else{
iVar8 +=4;
}
if(uParam4->f_5){
if(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f)){
iVar8 +=8;
iVar8 +=16;
}elseif(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f)){
iVar8 +=8;
}}else{
iVar8 +=8;
iVar8 +=16;
}
if(uParam4->f_5){
if(!func_396(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0)){
iVar8 +=32;
}}else{
iVar8 +=32;
}
bVar15=true;
iVar11=0;
while (iVar11 < 2){
if(SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f){
if(!SYSTEM::VDIST(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11]){
bVar15=false;
}}
iVar11++;
}
if(bVar15){
if((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1)){
bVar15=false;
}}}
if(bVar15){
iVar8 +=256;
}
if(uParam4->f_5){
if(func_391(Param0, fParam3, uParam4->f_15, func_395(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0)){
iVar8 +=64;
iVar8 +=128;
}else{
iVar10=Global_2635559.f_3;
}}elseif(!func_388(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1)){
if(uParam4->f_15){
fVar1=3.5f;
}else{
fVar1=1f;
}
if(!func_385(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1)){
iVar8 +=128;
iVar8 +=64;
}elseif(!func_385(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1)){
iVar8 +=64;
}}
if(uParam4->f_5){
if(!Global_2635559.f_701){
Var12={
Global_2635559.f_512 
};
if(Global_2635559.f_489==26){
Var12={
Global_2635559.f_555.f_18 
};
}
if(!func_323(Param0, 0.5f)){
if(func_329(Var12)){
if(!func_295(&Param0, 0, 0, 0, 1) && !func_384(&Param0, 0)){
iVar8 +=512;
}}elseif(!func_384(&Param0, 0)){
iVar8 +=512;
}}}else{
iVar8 +=512;
}}elseif(!func_383(Param0, 2.5f, 3)){
iVar8 +=512;
}
if(uParam4->f_5){
if(!(func_202(PLAYER::PLAYER_ID()) && func_381(PLAYER::PLAYER_ID()))){
if(!func_380(&Param0, &(Global_2635559.f_2491.f_90), 0, 1065353216)){
iVar8 +=1024;
}}else{
iVar8 +=1024;
}}else{
iVar8 +=1024;
}
if(uParam4->f_5){
if(!func_381(PLAYER::PLAYER_ID())){
if(!func_379(Param0, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90), 1073741824)){
iVar8 +=2048;
}}else{
iVar8 +=2048;
}}else{
iVar8 +=2048;
}
if(func_378(Param0)){
if(uParam4->f_5){
if(func_293(Global_2635559.f_489)){
if(func_332(Param0, 0.01f)){
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}
if(uParam4->f_5){
if(func_377(Param0)){
iVar8 +=8192;
}}else{
iVar8 +=8192;
}
if(!Global_2635559.f_45.f_55){
iVar8 +=16384;
}elseif(uParam4->f_5){
if(!iParam7 & 1==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}}elseif(!iParam7 & 2==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}
if(uParam4->f_5){
if(!Global_2635559.f_701){
if(!func_324(&Param0, 0, 0)){
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}
if(!func_310(&Param0, 0)){
iVar8=(iVar8 + 65536);
}else{
iVar16=func_331(Param0, 1008981770);
if(iVar16 > -1){
func_376(Param0, &Var17, &Var20, &fVar23);
if(!func_371(&(Global_2635559.f_45[iVar16 /*12*/]), Var17, Var20, fVar23)){
iVar8=-1;
}}else{
iVar8=-1;
}}
if(func_313(Param0, 1056964608)){
iVar8=-1;
}
if(uParam5->f_33){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f)){
iVar8=-1;
}}
if(uParam5->f_34){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f)){
iVar8=-1;
}}
if(uParam4->f_5){}elseif(func_370(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888)){
iVar8=0;
}
Var25.f_2=1176256410;
bVar35=false;
bVar36=false;
if(Global_2635559.f_2889 && uParam4->f_5){
if(iVar8 > 0){
if(bParam6){
uParam5->f_4=0;
bVar4=false;
}else{
bVar4=true;
}
if(uParam4->f_21){
fVar0=func_361(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
}else{
fVar0=func_361(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
if(func_293(Global_2635559.f_489) && iVar8 < 4096){
Var25.f_2=func_359(Param0);
}
uVar7=func_355(Param0, 1, 0, 0, 0, 0);
Var25.f_4={
Param0 
};
Var25.f_7=fParam3;
Var25.f_0=iVar8;
Var25.f_1=fVar0;
Var25.f_9=uVar7;
func_354(Var25);
Global_2635559.f_2491.f_2=1;
}}else{
iVar24=0;
while (iVar24 < 5){
if(iVar8 >=Global_2635559.f_2491.f_6[iVar24 /*10*/]){
if(uParam4->f_5){
if(!bVar35){
if(bParam6){
uParam5->f_4=0;
bVar4=false;
}
else{
bVar4=true;
}
if(uParam4->f_21){
fVar0=func_361(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
}
else{
fVar0=func_361(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
bVar35=true;
}
if((func_293(Global_2635559.f_489) && iVar8==Global_2635559.f_2491.f_6[iVar24 /*10*/]) && iVar8 < 4096){
if(!bVar36){
fVar2=func_359(Param0);
bVar36=true;
}
if(fVar2 < Global_2635559.f_2491.f_6[iVar24 /*10*/].f_2){
Var25.f_4={
Param0 
};
Var25.f_7=fParam3;
Var25.f_0=iVar8;
Var25.f_1=fVar0;
Var25.f_2=fVar2;
func_353(Var25, iVar24);
Global_2635559.f_2491.f_2=1;
return;
}}elseif(iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar0 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_1)){
Var25.f_4={
Param0 
};
Var25.f_7=fParam3;
Var25.f_0=iVar8;
Var25.f_1=fVar0;
func_353(Var25, iVar24);
Global_2635559.f_2491.f_2=1;
return;
}}else{
if(!bVar35){
if(uParam4->f_15){
fVar1=3.5f;
}
else{
fVar1=1f;
}
fVar5=func_351(Param0, fVar1, 1, 1, 0, -1, 1);
fVar6=func_355(Param0, 1, 1, 1, 1, 0);
if(fVar5 > 15f && fVar6 > 5f){
fVar3=func_350(fVar5, 0f, 80f, 160f, 1f, 1.2f);
}
else{
fVar3=func_350(fVar6, 0f, 80f, 160f, 0f, 0.2f);
}
bVar35=true;
}
if(iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar3 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_3)){
Var25.f_4={
Param0 
};
Var25.f_7=fParam3;
Var25.f_0=iVar8;
Var25.f_3=fVar3;
func_353(Var25, iVar24);
Global_2635559.f_2491.f_2=1;
return;
}}}
iVar24++;
}}}


float func_350(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
float fVar0;
if(fParam1 >=fParam3){
fParam1=(fParam3 * 0.5f);
}
if(fParam0 < fParam1){
fParam0=fParam1;
}
if(fParam0 > fParam3){
fParam0=fParam3;
}
if(fParam2 < fParam3 && fParam2 > fParam1){
if(fParam0 < fParam2){
fVar0=(fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
}else{
fVar0=(fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
}}else{
fVar0=(fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
}
return fVar0;
}


float func_351(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
bool bVar2;
float fVar3;
float fVar4;
bVar2=false;
fVar3=1E+13f;
if(iParam4 && !bParam6){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam3)){
fVar4=SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_12(iVar1, 1, 1)){
if(!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam4==1 || (iParam4==0 && bVar1 !=PLAYER::PLAYER_ID())){
if(func_352(bVar1) || !bParam8){
if(!bParam6){
if((iParam5 || (iParam5==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3)){
fVar4=SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam7 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3)){
fVar4=SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}
}}}}}
iVar0++;
}
if(bVar2){
return SYSTEM::SQRT(fVar3);
}
return -1f;
}

int func_352(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


void func_353(struct<10> Param0, int iParam10){
struct<10> Var0;
Var0.f_2=1176256410;
Var0={
Global_2635559.f_2491.f_6[iParam10 /*10*/] 
};
Global_2635559.f_2491.f_6[iParam10 /*10*/]={
Param0 
};
if(iParam10 < 4){
func_353(Var0, iParam10 + 1);
}}


void func_354(struct<10> Param0){
int iVar0;
struct<10> Var1;
int iVar11;
float fVar12;
int iVar13;
Var1.f_2=1176256410;
iVar11=func_348();
if(Param0.f_0 > iVar11){
iVar11=Param0.f_0;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] < iVar11){
Global_2638502[iVar0 /*10*/]={
Var1 
};
}
iVar0++;
}
if(Param0.f_0 < iVar11){
return;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/]==0){
Global_2638502[iVar0 /*10*/]={
Param0 
};
return;
}
iVar0++;
}
fVar12=9999.9f;
iVar13=-1;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 < fVar12){
fVar12=Global_2638502[iVar0 /*10*/].f_1;
iVar13=iVar0;
}}
iVar0++;
}
if(iVar13 > -1){
Global_2638502[iVar13 /*10*/]={
Param0 
};
}}


float func_355(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
struct<3> Var5;
struct<3> Var8;
int iVar11;
fVar3=999999.9f;
bVar4=false;
iVar0=0;
while (iVar0 < 32){
iVar11=iVar0;
if(func_12(iVar11, 1, 1) || (iParam7==1 && func_12(iVar11, 0, 0))){
if(!iVar11==PLAYER::PLAYER_ID() || iParam5==1){
bVar4=false;
if(bParam3){
if(func_356(iVar11)){
bVar4=true;
}}
if(bParam4){
if(PLAYER::GET_PLAYER_TEAM(iVar11)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(!PLAYER::GET_PLAYER_TEAM(bVar11)==-1 || !func_333(PLAYER::PLAYER_ID(), 1)){
bVar4=true;
}}}
if(bVar4){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar11) || !bParam6){
if(func_352(bVar11)){
Var5={
func_152(bVar11) 
};
if(!bVar11==PLAYER::PLAYER_ID()){
Var8={
NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar11)) 
};
}else{
Var8={
Var5 
};
}
if(!bParam6){
if(Var5.f_2 < -100f){
Var5.f_2=Param0.f_2;
}
if(Var8.f_2 < -100f){
Var8.f_2=Param0.f_2;
}}
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, 1);
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, 1);
if(fVar1 < fVar3){
fVar3=fVar1;
}
if(fVar2 < fVar3){
fVar3=fVar2;
}
}}}}}
iVar0++;
}
return fVar3;
}

int func_356(bool bParam0){
if(func_12(iParam0, 0, 1)){
if(!func_82(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_203(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_6(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_203(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_357(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_357(int iParam0){
if(func_149(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764201={
func_44(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764201)){
return 1;
}
if(func_358(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_358(int iParam0, int iParam1){
int iVar0;
iVar0=func_65(iParam0);
if(!iVar0==func_68()){
if(iVar0==func_65(iParam1)){
return 1;
}}
return 0;
}


float func_359(struct<3> Param0){
var uVar0;
return func_360(Param0, &(Global_2635559.f_45), &uVar0);
}


float func_360(struct<3> Param0, var uParam3, var uParam4){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=-1;
fVar2=1E+07f;
iVar0=0;
while (iVar0 < *uParam3){
if((uParam3[iVar0 /*12*/])->f_9){
fVar1=0f;
switch ((uParam3[iVar0 /*12*/])->f_10){
case 0:
fVar1=SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), Param0);
fVar1=(fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635559.f_2735) * (uParam3[iVar0 /*12*/])->f_8)));
break;
case 1:
case 2:
if(Param0.f_0 < (*uParam3)[iVar0 /*12*/]){
fVar1=(fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
}elseif(Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3){
fVar1=(fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
}
if(Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1){
fVar1=(fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
}elseif(Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1){
fVar1=(fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
}
if(Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2){
fVar1=(fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
}elseif(Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2){
fVar1=(fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
}
break;
}
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}
iVar0++;
}
if(fVar2 < 0f){
fVar2=0f;
}
*uParam4=iVar3;
return fVar2;
}


float func_361(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
fVar1=1f;
if(iParam9 > 0){
fVar1=(SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
}
if(bParam6){
fVar0=func_350(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
}
*uParam10=1E+07f;
fVar4=func_355(Param0, 1, 0, 0, 1, 0);
fVar0=func_350(fVar4, 0f, func_369(), func_367(), 0f, 0.3f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam10){
fVar4=fVar4;
}
fVar4=func_365(Param0);
fVar0=func_350(fVar4, 0f, 0f, 60f, 0.5f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam10){
fVar4=fVar4;
}
fVar5=100f;
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !func_333(PLAYER::PLAYER_ID(), 1)){
fVar5=1f;
}
fVar4=func_363(Param0, PLAYER::PLAYER_ID(), 0);
fVar0=func_350(fVar4, 0f, 0f, fVar5, 0f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam10){
fVar4=fVar4;
}
if(bParam7){
if(func_362(Param0, &fVar2, &fVar3)){
if(fVar2 < 10f){
fVar2=10f;
}
if(fVar3 < 0.5f){
fVar3=0.5f;
}
fVar0=func_350(fVar2, 0f, 0f, 200f, 1f, 0.1f);
fVar0=(fVar0 + func_350(fVar3, 0f, 0f, 6f, 1f, 0.5f));
fVar0=(fVar0 * 0.5f);
fVar1=(fVar1 * (fVar0 * 0.85f));
}}
if(bParam8){
fVar0=func_350(SYSTEM::VDIST(Global_2635559.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.9f));
}
return fVar1;
}

int func_362(struct<3> Param0, var uParam3, var uParam4){
struct<3> Var0;
var uVar3;
var uVar4;
var uVar5;
uVar3=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar3)){
PATHFIND::GET_VEHICLE_NODE_POSITION(uVar3, &Var0);
*uParam3=SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
*uParam4=MISC::ABSF((Param0.f_2 - Var0.f_2));
return 1;
}
return 0;
}


float func_363(struct<3> Param0, bool bParam3, int iParam4){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=999999.9f;
if(func_12(iParam3, 0, 1)){
iVar2=0;
while (iVar2 < 32){
if(!iParam3==iVar2 || iParam4==1){
iVar3=iVar2;
if(func_12(iVar3, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar3) !=PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(bVar3)==-1 && PLAYER::GET_PLAYER_TEAM(bParam3)==-1)){
if(!func_364(bVar3, bParam3)){
if(Global_2648605.f_261[iVar2]){
fVar1=SYSTEM::VDIST(Global_2648605.f_131[iVar2 /*3*/], Param0);
if(fVar1 < fVar0){
fVar0=fVar1;
}}
}}}}
iVar2++;
}}
return fVar0;
}

int func_364(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=func_68() && iParam1 !=func_68()){
iVar0=func_65(iParam0);
if(iVar0 !=func_68()){
return iVar0==func_65(iParam1);
}}
return 0;
}


float func_365(struct<3> Param0){
float fVar0;
float fVar1;
int iVar2;
struct<3> Var3;
var uVar6[32];
int iVar39;
iVar39=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
fVar0=1E+07f;
iVar2=0;
while (iVar2 < iVar39){
if(ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0)){
if(func_366(uVar6[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}}}}
iVar2++;
}
if(Global_2635559.f_2934){
if(Global_1058070.f_267 > 0){
iVar2=0;
while (iVar2 < Global_1058070.f_267){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_152[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1058070.f_152[iVar2], 0)){
if(func_366(Global_1058070.f_152[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(Global_1058070.f_152[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}
}}}
iVar2++;
}}}
return fVar0;
}

int func_366(var uParam0){
var uVar0;
int iVar1;
uVar0=PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, joaat("player"))){
case 3:
case 5:
return 1;
break;
}
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837175[PLAYER::PLAYER_ID()])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1837175[PLAYER::PLAYER_ID()])){
case 3:
case 5:
return 1;
break;
}}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0){
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(iVar1 > -1 && iVar1 < 4){
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836885[iVar1])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1836885[iVar1])){
case 3:
case 5:
return 1;
break;
}}}}
return 0;
}


float func_367(){
if(func_368()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 640f;
}else{
return 320f;
}}
return 160f;
}

int func_368(){
if(Global_2635559.f_45.f_65 && !Global_2635559.f_45.f_304){
if(!func_82(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


float func_369(){
if(func_368()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 320f;
}else{
return 160f;
}}
return 80f;
}

int func_370(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9){
float fVar0;
fVar0=iParam6;
if(bParam5){
fVar0=fParam7;
}
if((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam4==1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam8, 0))) || ((iParam3==1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam9, 1))){
return 1;
}
return 0;
}

int func_371(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7){
switch (uParam0->f_10){
case 0:
if(func_375(*uParam0, uParam0->f_6, Param1, Param4, fParam7)){
return 1;
}
break;
case 1:
if(func_374(*uParam0, uParam0->f_3, Param1, Param4, fParam7)){
return 1;
}
break;
case 2:
if(func_372(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7)){
return 1;
}
break;
}
return 0;
}

int func_372(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13){
struct<3> Var0[8];
int iVar25;
func_373(Param0, Param3, fParam6, &Var0);
iVar25=0;
while (iVar25 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1)){
return 0;
}
iVar25++;
}
return 1;
}


void func_373(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7){
struct<3> Var0;
struct<3> Var3;
var uVar6;
var uVar7;
if(Param0.f_2==Param3.f_2){
Param3.f_2=(Param3.f_2 + 0.01f);
}
Var0={
Param0 - Param3 
};
Var3={
func_299(Var0, Var0.f_0, Var0.f_1, 0f) 
};
Var3={
Var3 / FtoV(SYSTEM::VMAG(Var3)) 
};
Var3={
Var3 * FtoV((fParam6 * 0.5f)) 
};
if(Param0.f_2 > Param3.f_2){
uVar6=Param3.f_2;
uVar7=Param0.f_2;
}else{
uVar6=Param0.f_2;
uVar7=Param3.f_2;
}
*(uParam7[0 /*3*/])={
Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 
};
*(uParam7[1 /*3*/])={
Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 
};
*(uParam7[2 /*3*/])={
Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 
};
*(uParam7[3 /*3*/])={
Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 
};
*(uParam7[4 /*3*/])={
Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 
};
*(uParam7[5 /*3*/])={
Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 
};
*(uParam7[6 /*3*/])={
Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 
};
*(uParam7[7 /*3*/])={
Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 
};
}

int func_374(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12){
struct<3> Var0[8];
int iVar25;
Var0[0 /*3*/]={
Param0.f_0, Param0.f_1, Param0.f_2 
};
Var0[1 /*3*/]={
Param0.f_0, Param0.f_1, Param3.f_2 
};
Var0[2 /*3*/]={
Param0.f_0, Param3.f_1, Param3.f_2 
};
Var0[3 /*3*/]={
Param0.f_0, Param3.f_1, Param0.f_2 
};
Var0[4 /*3*/]={
Param3.f_0, Param0.f_1, Param0.f_2 
};
Var0[5 /*3*/]={
Param3.f_0, Param0.f_1, Param3.f_2 
};
Var0[6 /*3*/]={
Param3.f_0, Param3.f_1, Param3.f_2 
};
Var0[7 /*3*/]={
Param3.f_0, Param3.f_1, Param0.f_2 
};
iVar25=0;
while (iVar25 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1)){
return 0;
}
iVar25++;
}
return 1;
}

int func_375(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10){
struct<3> Var0[4];
int iVar13;
Var0[0 /*3*/]={
Param0 + Vector(0f, fParam3, 0f) 
};
Var0[1 /*3*/]={
Param0 + Vector(0f, (-1f * fParam3), 0f) 
};
Var0[2 /*3*/]={
Param0 + Vector(0f, 0f, fParam3) 
};
Var0[3 /*3*/]={
Param0 + Vector(0f, 0f, (-1f * fParam3)) 
};
iVar13=0;
while (iVar13 < 4){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1)){
return 0;
}
iVar13++;
}
return 1;
}


void func_376(struct<3> Param0, var uParam3, var uParam4, var uParam5){
int iVar0;
struct<3> Var1;
int iVar4;
Var1={
Param0 
};
iVar4=func_312(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar4]){
if(func_311(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/]))){
*uParam3={
Global_2640710[iVar4 /*155*/][iVar0 /*7*/] 
};
*uParam4={
Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3 
};
*uParam5=Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_311(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
*uParam3={
Global_2640710[8 /*155*/][iVar0 /*7*/] 
};
*uParam4={
Global_2640710[8 /*155*/][iVar0 /*7*/].f_3 
};
*uParam5=Global_2640710[8 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}}

int func_377(struct<3> Param0){
var uVar0;
int iVar1;
if(Global_2635559.f_45.f_55){
if(INTERIOR::IS_VALID_INTERIOR(Global_2635559.f_45.f_56)){
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
uVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
iVar1=INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
if(!iVar1==Global_2635559.f_45.f_57){
return 0;
}}else{
return 0;
}}else{
return 0;
}}}
return 1;
}

int func_378(struct<3> Param0){
switch (Global_2635559.f_2487){
case 0:
return func_409(Param0, Global_2635559.f_2466, Global_2635559.f_2469, 0, 0);
break;
case 1:
return func_337(Param0, Global_2635559.f_2480, Global_2635559.f_2483, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635559.f_2480, Global_2635559.f_2483, Global_2635559.f_2486, 0, 1);
break;
}
return 0;
}

int func_379(struct<3> Param0, var uParam3, var uParam4, float fParam5){
float fVar0;
int iVar1;
struct<3> Var2;
struct<3> Var5;
float fVar8;
fVar0=0f;
iVar1=0;
iVar1=0;
while (iVar1 < *uParam3){
fVar0=((uParam3[iVar1 /*4*/])->f_3 + fParam5);
if(SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), Param0) < fVar0){
return 1;
}
iVar1++;
}
Var2={
0f, 0f, 0f 
};
Var5={
0f, 0f, 0f 
};
fVar8=0f;
iVar1=0;
while (iVar1 < *uParam4){
Var2={
*(uParam4[iVar1 /*10*/]) 
};
Var5={
(uParam4[iVar1 /*10*/])->f_3 
};
fVar8=(uParam4[iVar1 /*10*/])->f_6;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var5, fVar8, 0, 1)){
return 1;
}
iVar1++;
}
return 0;
}

int func_380(var uParam0, var uParam1, bool bParam2, float fParam3){
int iVar0;
struct<3> Var1;
iVar0=0;
iVar0=0;
while (iVar0 < *uParam1){
if(SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3)){
if(bParam2){
Var1={
*uParam0 
};
func_301(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}

int func_381(int iParam0){
switch (func_335()){
case 0:
if(!func_382(iParam0)){
if(Global_1853910[iParam0 /*862*/]==0){
return 1;
}}
break;
}
return 0;
}


bool func_382(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192 !=0;
}

int func_383(struct<3> Param0, float fParam3, int iParam4){
int iVar0;
iVar0=0;
while (iVar0 < iParam4){
if(SYSTEM::VDIST2(Global_2635559.f_2625[iVar0 /*3*/], Param0) < (fParam3 * fParam3)){
return 1;
}
iVar0++;
}
return 0;
}

int func_384(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar4;
if(func_325(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar4=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_301(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar4);
if(func_326(Var1, &uVar0) || func_325(Var1)){
Var1={
*uParam0 
};
func_301(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar4);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_385(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10){
int iVar0;
int iVar1;
float fVar2;
if(iParam4 && !bParam7){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam6;
if(fParam9 > 0f){
fVar2=fParam9;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_386(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam3)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam3)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_12(iVar1, 1, 1)){
if(!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam4==1 || (iParam4==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_352(bVar1) || !bParam10) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam6;
if(fParam9 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam9;
}}
}
if(!bParam7){
if((iParam5 || (iParam5==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_386(bVar1), Param0, 1) <=(fVar2 + fParam3)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_386(bVar1), Param0, 1) <=(fVar2 + fParam3)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__386(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_76() && Global_1853910[iVar0 /*862*/].f_832) && !func_387(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_152(iParam0);
}

int func_387(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_388(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6){
if(func_390(Param0, fParam3, iParam4, iParam5, 0) || func_389(Param0, iParam4, iParam6)){
return 1;
}
return 0;
}

int func_389(struct<3> Param0, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_314(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_12(iVar2, 0, 1) && func_12(iParam3, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_390(struct<3> Param0, float fParam3, bool bParam4, int iParam5, bool bParam6){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam4==iVar0 || iParam5==1){
iVar1=iVar0;
bVar2=false;
if(bParam6){
if(func_12(iVar1, 0, 1) && func_12(iParam4, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam4)){
bVar2=true;
}}}
if(!bVar2){
if(func_12(bVar1, 0, 1) && func_12(bParam4, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(SYSTEM::VDIST(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3){
return 1;
}}elseif(SYSTEM::VDIST(func_152(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(SYSTEM::VDIST(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3){
return 1;
}}elseif(func_12(bVar1, 0, 1)){
if(SYSTEM::VDIST(func_152(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_391(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15){
Global_2635559.f_3=0;
if(!func_388(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0)){
Global_2635559.f_3++;
if(bParam5){
if(func_439(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_394(Param0, fParam12)){
Global_2635559.f_3++;
if(!func_313(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(!bParam4){
if(func_439(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_394(Param0, fParam12)){
Global_2635559.f_3++;
if(!func_392(Param0, fParam3, fParam9, fParam10, 1084227584)){
Global_2635559.f_3++;
if(!func_313(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(func_439(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_394(Param0, fParam12)){
Global_2635559.f_3++;
if(!func_392(Param0, fParam3, fParam9, fParam10, fParam11)){
Global_2635559.f_3++;
if(!func_313(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}
return 0;
}

int func_392(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(!PLAYER::PLAYER_ID()==iVar1){
if((func_12(iVar1, 1, 1) && func_352(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!func_61(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(func_393(func_152(bVar1), Param0, fParam3, fParam4, fParam5, fParam6)){
return 1;
}}}}
iVar0++;
}
return 0;
}


bool func_393(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9){
struct<3> Var0;
struct<3> Var3;
fParam6=(fParam6 * -1f);
fParam6=(fParam6 + 360f);
Var0.f_0=SYSTEM::SIN(fParam6);
Var0.f_1=SYSTEM::COS(fParam6);
Var0.f_2=0f;
Var0={
Var0 / FtoV(SYSTEM::VMAG(Var0)) 
};
Var0={
Var0 * Vector(fParam7, fParam7, fParam7) 
};
Var3={
Param3 + Var0 
};
Var3.f_2=Param3.f_2;
Var3.f_2=(Var3.f_2 + fParam9);
Param3.f_2=(Param3.f_2 + fParam9);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param3, Var3, fParam8, 0, 1);
}

int func_394(struct<3> Param0, float fParam3){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((func_12(iVar1, 1, 1) && func_352(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && PLAYER::GET_PLAYER_TEAM(bVar1)==-1) && !func_333(PLAYER::PLAYER_ID(), 1)){
return 0;
}elseif((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !PLAYER::PLAYER_ID()==bVar1) || !func_61(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(SYSTEM::VDIST(Param0, func_152(bVar1)) < fParam3){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_395(int iParam0){
if((Global_2635559.f_489==9 || Global_2635559.f_489==9) || (Global_2635559.f_489==15 && iParam0==1)){
return 1;
}
return 0;
}

int func_396(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam8==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam8==0){
if(func_12(iVar1, bParam4, bParam5)){
if(iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_352(bVar1))){
if((!bParam6 || (bParam6==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam9) && bParam6) && func_357(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_152(bVar1), Param0, 1) < fParam3){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_397(struct<3> Param0, float fParam3, int iParam4, float fParam5){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
iVar3=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(!iVar3==-1){
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_12(iVar1, 1, 1)){
if((!func_9(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && bVar1 !=PLAYER::PLAYER_ID()){
fVar2=iParam4;
if(fParam5 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam5;
}
}}
if(PLAYER::GET_PLAYER_TEAM(bVar1)==iVar3){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_152(bVar1), Param0, 1) <=(fVar2 + fParam3)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3)){
return 1;
}
}}}}
iVar0++;
}}
return 0;
}

int func_398(int iParam0){
if(((func_333(iParam0, 1) || func_400(iParam0)) || func_162(iParam0, 0)) || func_399(iParam0)){
return 1;
}
return 0;
}

int func_399(int iParam0){
if(!func_12(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_400(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


void func_401(struct<3> Param0, var uParam3, var uParam4){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
struct<8> Var7;
struct<3> Var17;
struct<3> Var20;
iVar0=0;
while (iVar0 < *uParam3){
*(uParam3[iVar0 /*4*/])={
Var3 
};
iVar0++;
}
iVar0=0;
while (iVar0 < *uParam4){
*(uParam4[iVar0 /*10*/])={
Var7 
};
iVar0++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573885){
iVar0=0;
while (iVar0 < *uParam3){
if(!MISC::IS_BIT_SET(Global_4543624[iVar1 /*26*/].f_12, 11)){
if(SYSTEM::VMAG(*(uParam3[iVar0 /*4*/]))==0f || SYSTEM::VDIST(Global_4543624[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0)){
Var3={
Global_4543624[iVar1 /*26*/].f_3 
};
Var3.f_3=Global_4543624[iVar1 /*26*/].f_6.f_2;
func_403(&Var3, uParam3, iVar0);
iVar0=*uParam3;
}}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < 19){
iVar0=0;
while (iVar0 < *uParam3){
if(SYSTEM::VMAG(*(uParam3[iVar0 /*4*/]))==0f || SYSTEM::VDIST(Global_262145.f_6293[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6293[iVar1 /*3*/] 
};
Var3.f_3=3f;
func_403(&Var3, uParam3, iVar0);
iVar0=*uParam3;
}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar2=0;
iVar1=0;
while (iVar1 < 19){
iVar2=0;
while (iVar2 < 6){
iVar0=0;
while (iVar0 < *uParam3){
if(SYSTEM::VMAG(*(uParam3[iVar0 /*4*/]))==0f || SYSTEM::VDIST(Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/] 
};
Var3.f_3=3f;
func_403(&Var3, uParam3, iVar0);
iVar0=*uParam3;
}
iVar0++;
}
iVar2++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573850){
iVar0=0;
while (iVar0 < *uParam4){
Var17={
Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) 
};
Var20={
*(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) 
};
if(SYSTEM::VMAG(*(uParam4[iVar0 /*10*/]))==0f || SYSTEM::VDIST(Var17, Param0) < SYSTEM::VDIST(Var20, Param0)){
Var7={
Global_1573169[iVar1 /*8*/].f_1 
};
Var7.f_3={
Global_1573169[iVar1 /*8*/].f_4 
};
Var7.f_6=Global_1573169[iVar1 /*8*/].f_7;
Var7.f_7={
Global_4543300[iVar1 /*3*/] 
};
func_402(&Var7, uParam4, iVar0);
iVar0=*uParam4;
}
iVar0++;
}
iVar1++;
}}


void func_402(var uParam0, var uParam1, int iParam2){
Global_2643112={
*(uParam1[iParam2 /*10*/]) 
};
*(uParam1[iParam2 /*10*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_402(&Global_2643112, uParam1, iParam2 + 1);
}}


void func_403(var uParam0, var uParam1, int iParam2){
Global_2643108={
*(uParam1[iParam2 /*4*/]) 
};
*(uParam1[iParam2 /*4*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_403(&Global_2643108, uParam1, iParam2 + 1);
}}


void func_404(var uParam0, var uParam1){
int iVar0;
struct<3> Var1;
float fVar4;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
if(func_405(Global_2635559.f_2263[iVar0 /*4*/], uParam0)){
fVar4=Global_2635559.f_2263[iVar0 /*4*/].f_3;
if(SYSTEM::VMAG(*uParam1) > 0.01f){
Var1={
*uParam1 - Global_2635559.f_2263[iVar0 /*4*/] 
};
fVar4=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}
func_349(Global_2635559.f_2263[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
Global_2635559.f_2491++;
}
iVar0++;
}}
if(uParam0->f_5 && Global_2635559.f_2889){
func_343(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}}

int func_405(struct<3> Param0, var uParam3){
switch (uParam3->f_7){
case 0:
return func_305(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
case 1:
case 2:
return func_305(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
default:
}
return 0;
}


void func_406(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8){
float fVar0;
func_338(&Param0, &Param3);
fVar0=(Param3.f_0 - Param0.f_0);
*uParam6=(Param0.f_0 + (fVar0 * 0.5f));
uParam6->f_1=Param0.f_1;
uParam6->f_2=Param0.f_2;
*uParam7=*uParam6;
uParam7->f_1=Param3.f_1;
uParam7->f_2=Param3.f_2;
*uParam8=(fVar0 * 0.5f);
}


var func__407(){
return Global_1573131.f_4;
}


void func_408(var uParam0, var uParam1){
func_446();
func_438(uParam0, uParam1);
}


bool func_409(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8){
if(bParam7 && bParam8){
Param0.f_2=0f;
Param3.f_2=0f;
return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}elseif(bParam7){
if(Param0.f_2 > Param3.f_2){
Param0.f_2=Param3.f_2;
}
return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}elseif(bParam8){
if(Param0.f_2 < Param3.f_2){
Param0.f_2=Param3.f_2;
}
return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}
return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}


void func_410(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_432(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_411(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_411(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar4;
int iVar5;
var uVar6;
var uVar7;
int iVar8;
int iVar9;
int iVar10;
bool bVar11;
bool bVar12;
float fVar13;
float fVar14;
int iVar15;
int iVar16;
int iVar17;
bool bVar18;
int iVar19;
bool bVar20;
int iVar21;
float fVar22;
int iVar23;
int iVar24;
float fVar25;
int iVar26;
struct<3> Var27;
var uVar30;
struct<3> Var31;
float fVar34;
bool bVar35;
iVar0=0;
if(!SYSTEM::VMAG(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_322(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_431(uParam0, 1)){
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
iVar5=0;
iVar10=1;
if(uParam2->f_11){
iVar5 +=2;
iVar5++;
iVar10=0;
}elseif(uParam2->f_10==0 || (uParam2->f_33 > 0 && uParam2->f_16)){
iVar5++;
iVar10=0;
}
iVar5 +=4;
fVar13=3f;
fVar14=5f;
switch (uParam2->f_33){
case 0:
fVar13=3f;
fVar14=5f;
break;
case 1:
fVar13=2.75f;
fVar14=7.5f;
break;
default:
fVar13=2.5f;
fVar14=10f;
break;
}
iVar15=0;
Global_2643122.f_162=0;
Global_2643122.f_163=0;
Global_2643122.f_164=-99;
Global_2643122.f_165={
0f, 0f, 0f 
};
iVar16=0;
while (iVar16 < 40){
Global_2643122[iVar16 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar16]=0f;
iVar16++;
}
iVar17=1;
if(func_319(uParam2->f_34) !=0){
iVar17=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
iVar8=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8)){
PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
bVar12=false;
if(Global_2643122.f_164==iVar8){
bVar12=true;
}
Global_2643122.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
if(SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_384(&Var1, 0)){
if((uParam2->f_13 || uVar7 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar7 & 16==0){
if((uVar7 & 128==0 && uVar7 & 256==0) && uVar7 & 512==0){
if(!func_430(Var1)){
Var1={
func_426(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) 
};
if(SYSTEM::VMAG(Var1) > 0f){
if(!func_313(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_425(Var1, uParam2)){
if((uParam2->f_48 && !func_431(&Var1, 0)) || uParam2->f_48==0){
bVar18=true;
if(!bVar12){
if(bVar11){
iVar0=(iVar0 + -1);
bVar18=false;
}
}
if(SYSTEM::VMAG(Var1) > 0f){
if(((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_421(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_322(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar19=uParam2->f_31;
bVar20=true;
iVar21=1;
fVar22=uParam2->f_49;
if(!uParam2->f_55){
iVar19=0;
bVar20=false;
iVar21=0;
fVar22=1f;
}
elseif(uParam2->f_17){
iVar19=0;
bVar20=false;
iVar21=0;
if(uParam2->f_33==1){
fVar22=(fVar22 * 0.375f);
}
}
else{
bVar20=true;
iVar21=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar22=(fVar22 * 0.375f);
}
}
}
iVar23=0;
if(!func_420(Var1, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_439(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar23=1;
}
}
elseif(func_439(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_418(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar23=1;
}
}
if(iVar23 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar25=0f;
if(uParam2->f_52){
iVar24=func_417(Var1, uParam2->f_54, &fVar25);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar24 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar24 < uParam2->f_53){
iVar16=0;
while (iVar16 < Global_2643122.f_162){
Global_2643122[iVar16 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar16]=0f;
iVar16++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar24;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var1 
};
Global_2643122.f_121[0]=fVar4;
}
else{
iVar16=0;
while (iVar16 < Global_2643122.f_162 + 1){
if(iVar16 < 40){
if(SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643122[iVar16 /*3*/], uParam2->f_35)){
func_416(Var1, fVar4, iVar16);
iVar16=Global_2643122.f_162 + 1;
}
}
iVar16++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var1 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar4;
Global_2643122.f_162++;
if(func_425(Var1, uParam2)){
Global_2643122.f_163++;
}
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
iVar0=100;
}
}
}
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar4;
return 1;
}
}
elseif(bVar18){
iVar0++;
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar4;
return 1;
}
}
}
else{
iVar15++;
}
}
else{
iVar0=100;
}
}
}
else{
iVar0++;
}
}
elseif(!uParam2->f_32){
iVar0=100;
}
}
else{
iVar0++;
}}else{
iVar0++;
}}
}
}
else{
iVar0++;
}}}else{
iVar0++;
}
}
else{
iVar0++;
}}else{
iVar15++;
}}else{
iVar15++;
}}
iVar0++;
if(iVar0 >=(40 + iVar15) || iVar0 >=100){
if(Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_414(0, uParam2);
}
iVar26=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar26=0;
}
Var27={
Global_2643122[0 /*3*/] 
};
uVar30=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar26 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar26];
Global_2643122[iVar26 /*3*/]={
Var27 
};
Global_2643122.f_121[iVar26]=uVar30;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_413(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
Var31={
Var1 
};
fVar34=fVar4;
if(!uParam2->f_50){
bVar35=true;
}
else{
bVar35=false;
}
if(func_322(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_431(&Var31, bVar35)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
Var31 
};
*uParam1=fVar34;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
Var31 
};
*uParam1=fVar34;
return 1;
}
}
else{
*uParam0={
Var31 
};
*uParam1=fVar34;
return 1;
}}}}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_412(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar8;
}
return 0;
}


void func_412(var uParam0, var uParam1, var uParam2, struct<3> Param3){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=1E+09f;
iVar3=-1;
iVar2=0;
while (iVar2 < *uParam0){
fVar1=SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
if(fVar1 < fVar0){
if(!func_388(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
fVar0=fVar1;
iVar3=iVar2;
}}
iVar2++;
}
if(!iVar3==-1){
*uParam1={
*(uParam0[iVar3 /*4*/]) 
};
*uParam2=(uParam0[iVar3 /*4*/])->f_3;
}}


void func_413(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam4=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12)){
if(SYSTEM::VMAG(*uParam5) > 0f){
*uParam5={
func_426(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) 
};
if(!func_430(*uParam5)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_414(int iParam0, var uParam1){
if(!func_425(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_415(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_414(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_414(iParam0 + 1, uParam1);
}}


void func_415(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_416(struct<3> Param0, float fParam3, int iParam4){
struct<3> Var0;
var uVar3;
Var0={
Global_2643122[iParam4 /*3*/] 
};
uVar3=Global_2643122.f_121[iParam4];
Global_2643122[iParam4 /*3*/]={
Param0 
};
Global_2643122.f_121[iParam4]=fParam3;
if(iParam4 <=Global_2643122.f_162 && iParam4 < 39){
if(SYSTEM::VMAG(Var0) > 0f){
func_416(Var0, uVar3, iParam4 + 1);
}}}

int func_417(struct<3> Param0, float fParam3, float fParam4){
int iVar0;
struct<3> Var1;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
fVar6=99999.9f;
iVar0=0;
while (iVar0 < 32){
iVar5=iVar0;
if(func_356(iVar5)){
Var1={
func_152(iVar5) 
};
fVar7=SYSTEM::VDIST(Param0, Var1);
if(fVar7 < fParam3){
if(fVar7 < fVar6){
fVar6=fVar7;
}
iVar4++;
}}
iVar0++;
}
*fParam4=fVar6;
return iVar4;
}

int func_418(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
int iVar4;
struct<3> Var5;
float fVar8;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam9==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam9==0){
if(func_12(iVar1, bParam5, bParam6)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_352(bVar1))){
if((!bParam7 || (bParam7==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam10) && bParam7) && func_357(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), 0)){
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar8=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_419(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_314(func_152(bVar1), Param0, fParam3, iParam4, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_419(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10){
if(func_314(Param0, Param5, fParam8, iParam9, 1036831949)){
return 1;
}
func_315(Param0, fParam3, iParam4, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_315(Param5, fParam8, iParam9, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_420(struct<3> Param0, float fParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
struct<3> Var3;
float fVar6;
iVar0=1;
iVar0 +=2;
iVar0 +=4;
iVar0 +=8;
iVar0 +=16;
iVar0 +=32;
iVar0 +=64;
iVar0=(iVar0 + 131076);
uVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_419(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0)){
return 1;
}}
iVar0 +=4096;
iVar0 +=8192;
iVar0 +=16384;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_419(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0)){
return 1;
}}
return 0;
}

int func_421(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
if(func_424(Param0, fParam3, iParam4, iParam5, iParam6) || func_422(Param0, fParam3, iParam4, iParam5, iParam7)){
return 1;
}
return 0;
}

int func_422(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam5==iVar0 || iParam6==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_423(Param0, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_419(Param0, fParam3, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_12(iVar2, 0, 1) && func_12(iParam5, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_423(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_321(iParam3, 1008981770);
fVar1=func_321(iParam7, 1008981770);
fVar2=SYSTEM::VDIST(Param0, Param4);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_424(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam5==iVar0 || iParam6==1){
iVar1=iVar0;
if(func_12(iVar1, 0, 1) && func_12(iParam5, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_314(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949)){
return 1;
}}elseif(func_314(func_152(iVar1), Param0, fParam3, iParam4, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_314(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949)){
return 1;
}}elseif(func_12(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_314(func_152(bVar1), Param0, fParam3, iParam4, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_425(struct<3> Param0, var uParam3){
if(uParam3->f_18){
switch (uParam3->f_26){
case 0:
if(func_409(Param0, uParam3->f_19, uParam3->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_337(Param0, uParam3->f_19, uParam3->f_22, 0, 0)){
return 1;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1)){
return 1;
}
break;
}
return 0;
}
return 1;
}


Vector3 func__426(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16){
struct<3> Var0;
var uVar3;
var uVar4;
var uVar5;
int iVar8;
int iVar9;
float fVar10;
float fVar11;
bool bVar12;
bool bVar13;
float fVar14;
struct<3> Var15;
struct<3> Var18;
struct<3> Var21;
if(bParam15){
if(SYSTEM::VMAG(Param6) > 0f){
if(!func_429(Param0, *uParam3, Param6)){
*uParam3=(*uParam3 + 180f);
}}
return Param0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
if(uVar4 & 1024==0 && !bParam10){
PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
if(iVar8==iVar9){
*uParam12=1;
}
if(bParam14){
if(!uVar4 & 128==0){
return 0f, 0f, 0f;
}
if(!uVar4 & 256==0){
return 0f, 0f, 0f;
}
if(!uVar4 & 512==0){
return 0f, 0f, 0f;
}
if((iVar8 + iVar9) !=iParam4){
return 0f, 0f, 0f;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_428(Param0)){
return 0f, 0f, 0f;
}}
if(iParam13 && *uParam12){
*uParam3=(*uParam3 + 180f);
if(*uParam3 > 360f){
*uParam3=(*uParam3 + -360f);
}}
if(*uParam3 <=90f || *uParam3 > 270f){
bVar12=true;
}else{
bVar12=false;
}
bVar13=false;
if(bVar12){
if(iVar8==0){
if(bParam14){
return 0f, 0f, 0f;
}}elseif(iParam4==iVar8){
bVar13=true;
}}elseif(iVar9==0){
if(bParam14){
return 0f, 0f, 0f;
}}elseif(iParam4==iVar9){
bVar13=true;
}
if(fVar10 < 0f){
fVar11=0f;
}else{
if(bVar12){
if(bVar13){
fVar11=(4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
}else{
fVar11=(4.2f * SYSTEM::TO_FLOAT(iVar8));
}
if(bVar13){
if(iVar8 > 2){
fVar11=(fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
}}elseif(iVar8 > 1){
fVar11=(fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
}}else{
if(bVar13){
fVar11=(4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
}else{
fVar11=(4.2f * SYSTEM::TO_FLOAT(iVar9));
}
if(bVar13){
if(iVar9 > 2){
fVar11=(fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
}}elseif(iVar9 > 1){
fVar11=(fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
}}
if(!uVar4 & 64==0){
fVar11=(fVar11 + (0.95f * fVar10));
}
if(!uVar4 & 4==0 || !uVar4 & 8==0){
fVar11=(fVar11 + -0.5f);
}
if((!uVar4 & 32==0 && uVar4 & 4==0) && uVar4 & 8==0){
fVar11=(fVar11 + -1f);
}
if(!bParam5 || !uVar4 & 8==0){
fVar11=(fVar11 + (4.2f * -0.5f));
}
if(!iParam11==0){
if(uVar4 & 8 !=0){
fVar14=func_427(iParam11, 3.5f);
}else{
fVar14=func_427(iParam11, 1.5f);
}
if(fVar14 > 1.8f){
fVar11=(fVar11 + ((fVar14 - 1.8f) * -0.5f));
}}}}
if(SYSTEM::VMAG(Param6) > 0f){
if(!func_429(Param0, *uParam3, Param6)){
if((bParam5 || uParam16) || ((uVar4 & 1024 !=0 || Param0.f_2==0f) && bParam10)){
*uParam3=(*uParam3 + 180f);
}elseif(bParam14){
return 0f, 0f, 0f;
}}}
if(fVar11 < 0f){
fVar11=0f;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *uParam3, fVar11, 0f, 0f) 
};
if(bParam5){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *uParam3, &Var15)){
Var18={
Var15 - Param0 
};
if(!iParam11==0){
Var21={
Var18 / FtoV(SYSTEM::VMAG(Var18)) 
};
if(uVar4 & 8 !=0){
fVar14=func_427(iParam11, 3.5f);
}else{
fVar14=func_427(iParam11, 1.5f);
}
Var21={
Var21 * FtoV((fVar14 * 0.5f)) 
};
Var18={
Var18 - Var21 
};
Var15={
Param0 + Var18 
};
}
Var21={
Var0 - Var15 
};
Var0={
Var15 
};
}}
return Var0;
}


float func_427(int iParam0, float fParam1){
float fVar0;
float fVar3;
float fVar6;
func_316(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
fVar6=(fVar3 - fVar0);
if(fVar6 < fParam1){
return fParam1;
}
return fVar6;
}

int func_428(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_429(struct<3> Param0, float fParam3, struct<3> Param4){
struct<3> Var0;
struct<3> Var3;
Var0={
0f, 1f, 0f 
};
func_302(&Var0, 0f, 0f, fParam3);
Var3={
Param4 - Param0 
};
if(func_298(Var3, Var0) >=0f){
return 1;
}
return 0;
}

int func_430(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_312(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_311(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_311(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_431(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_409(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_337(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_303(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}

int func_432(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar6;
int iVar7;
int iVar8;
bool bVar9;
int iVar10;
float fVar11;
bool bVar12;
int iVar13;
float fVar14;
struct<3> Var15;
var uVar18;
if(Global_2635559.f_1754 > 0){
iVar1=0;
iVar2=0;
if(!SYSTEM::VMAG(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_322(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_431(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643122.f_162=0;
Global_2643122.f_163=0;
iVar7=0;
while (iVar7 < 40){
Global_2643122[iVar7 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar7]=0f;
iVar7++;
}
if(uParam2->f_30){
func_435(*uParam0);
}elseif(uParam2->f_29){
func_434();
}else{
func_433();
}
iVar1=0;
while (iVar1 < Global_2635559.f_1754){
iVar2=Global_2635559.f_2160[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635559.f_1755[iVar2 /*4*/] 
};
fVar6=Global_2635559.f_1755[iVar2 /*4*/].f_3;
if(SYSTEM::VMAG(Var3) > 0f){
if((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_421(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_322(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar8=uParam2->f_31;
bVar9=true;
iVar10=1;
fVar11=uParam2->f_49;
if(!uParam2->f_55){
iVar8=0;
bVar9=false;
iVar10=0;
fVar11=1f;
}
elseif(uParam2->f_17){
iVar8=0;
bVar9=false;
iVar10=0;
if(uParam2->f_33==1){
fVar11=(fVar11 * 0.375f);
}
}
else{
bVar9=true;
iVar10=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar11=(fVar11 * 0.375f);
}}
}
bVar12=false;
if(!func_420(Var3, fVar6, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_439(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar12=true;
}}elseif(func_439(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_418(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar12=true;
}
}
if(bVar12){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar14=0f;
if(uParam2->f_52){
iVar13=func_417(Var3, uParam2->f_54, &fVar14);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar13 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar13 < uParam2->f_53){
iVar7=0;
while (iVar7 < Global_2643122.f_162){
Global_2643122[iVar7 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar7]=0f;
iVar7++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar13;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var3 
};
Global_2643122.f_121[0]=fVar6;
}
else{
iVar7=0;
while (iVar7 < Global_2643122.f_162 + 1){
if(iVar7 < 40){
if(SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643122[iVar7 /*3*/], uParam2->f_35)){
func_416(Var3, fVar6, iVar7);
iVar7=Global_2643122.f_162 + 1;
}
}
iVar7++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var3 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar6;
Global_2643122.f_162++;
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
}
}
}}}else{
*uParam0={
Var3 
};
*uParam1=fVar6;
return 1;
}
}
}
else{
*uParam0={
Var3 
};
*uParam1=fVar6;
return 1;
}}}
}}}}
iVar1++;
}
if(Global_2643122.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_414(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
Var15={
Global_2643122[0 /*3*/] 
};
uVar18=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar0 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar0];
Global_2643122[iVar0 /*3*/]={
Var15 
};
Global_2643122.f_121[iVar0]=uVar18;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635559.f_1754 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
*uParam0={
Global_2635559.f_1755[iVar0 /*4*/] 
};
*uParam1=Global_2635559.f_1755[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_433(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_434(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
uVar3=Global_2635559.f_2160[iVar1];
Global_2635559.f_2160[iVar1]=Global_2635559.f_2160[iVar2];
Global_2635559.f_2160[iVar2]=uVar3;
iVar0++;
}}


void func_435(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_436(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_436(struct<3> Param0, float fParam3, float fParam4){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635559.f_1754){
fVar2=SYSTEM::VDIST2(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam3){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam4=fVar1;
return iVar0;
}


bool func_437(int iParam0){
return iParam0==50;
}


void func_438(var uParam0, var uParam1){
PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
Global_2635559.f_2474=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_2472=1;
Global_2635559.f_2475=NETWORK::GET_NETWORK_TIME();
}

int func_439(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18){
Global_2635559.f_2=0;
if(fParam3 > 0f){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3)){
return 0;
}}
if(fParam4 > 0f){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4)){
return 0;
}}
if(fParam5 > 0f){
if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, iParam18)){
return 0;
}}
Global_2635559.f_2++;
if(bParam13){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635559.f_2++;
if(fParam14 > 0f){
if(func_396(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam8){
if(fParam6 > 0f){
if(func_385(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}


void func_440(){
func_445();
func_444();
func_443();
func_442();
func_441();
}


void func_441(){
struct<10> Var0;
int iVar10;
Var0.f_2=1176256410;
iVar10=0;
while (iVar10 < 128){
Global_2638502[iVar10 /*10*/]={
Var0 
};
iVar10++;
}}


void func_442(){
struct<10> Var0;
int iVar10;
iVar10=0;
while (iVar10 < 4){
Global_2635559.f_2491.f_90[iVar10 /*10*/]={
Var0 
};
iVar10++;
}}


void func_443(){
struct<4> Var0;
int iVar4;
iVar4=0;
while (iVar4 < 8){
Global_2635559.f_2491.f_57[iVar4 /*4*/]={
Var0 
};
iVar4++;
}}


void func_444(){
struct<10> Var0;
int iVar10;
Var0.f_2=1176256410;
iVar10=0;
while (iVar10 < 5){
Global_2635559.f_2491.f_6[iVar10 /*10*/]={
Var0 
};
iVar10++;
}}


void func_445(){
struct<6> Var0;
Var0.f_3=-1;
Global_2635559.f_2491={
Var0 
};
}


void func_446(){
if(Global_2635559.f_2472){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_2474){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}else{
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
Global_2635559.f_2472=0;
}}

int func_447(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}

int func_448(){
struct<3> Var0;
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Local_89.f_7 - 25f), (Local_89.f_7.f_1 - 25f), (Local_89.f_7 + 25f), (Local_89.f_7.f_1 + 25f));
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Local_89.f_7 - 25f), (Local_89.f_7.f_1 - 25f), (Local_89.f_7 + 25f), (Local_89.f_7.f_1 + 25f))){
PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_89.f_7, &Var0, 1, 1077936128, 0);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_7, Var0, 0) <=25f){
Local_89.f_7={
Var0 
};
return 1;
}}
return 0;
}

int func_449(struct<3> Param0){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1836.619f, -1262.522f, -42.18043f, -1664.868f, -1060.219f, 119.5007f, 150f, 0, 1)){
return 1;
}
return 0;
}


void func_450(char* sParam0){
if(Global_23270.f_5162 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=5;
Global_23270.f_5159++;
StringCopy(&(Global_23270.f_5110[Global_23270.f_5162 /*16*/]), sParam0, 64);
Global_23270.f_5162++;
}


void func_451(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23270.f_5081), sParam0, 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=iParam1;
Global_23270.f_5164=MISC::GET_GAME_TIMER();
Global_23270.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}}


void func_452(bool bParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
bool bVar4;
bool bVar5;
func_465(0, 0);
if(bParam0){
func_464("R2P_MENU_S");
}else{
func_464("R2P_MENU");
}
func_463(1, 1, 0, 0, 0);
func_462(1, 2, 1, 1, 1);
HUD::GET_HUD_COLOUR(116, &uVar0, &uVar1, &uVar2, &uVar3);
func_461(uVar0, uVar1, uVar2, uVar3, 1);
bVar4=false;
bVar5=false;
iLocal_327=0;
StringCopy(&(Local_296.f_6), "R2P_MENU_DEST", 16);
StringCopy(&(Local_296.f_10), "R2P_MENU_DE", 16);
if(Local_89.f_15[2] <=0 || Local_89.f_15[2] > iLocal_87){
Local_89.f_15[2]=0;
if(!bParam0){
StringCopy(&(Local_296.f_6), "R2P_MENU_DE0", 16);
}elseif(HUD::IS_WAYPOINT_ACTIVE() || MISC::IS_BIT_SET(Local_89.f_1, 10)){
if((func_15(func_16(), 0f, 0f, -2000f, 0) || func_15(func_16(), 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f){
iLocal_327=1;
StringCopy(&(Local_296.f_10), "R2P_MENU_DE0S", 16);
}else{
StringCopy(&(Local_296.f_6), "R2P_MENU_DE0", 16);
}}else{
iLocal_327=1;
StringCopy(&(Local_296.f_10), "R2P_MENU_DE0S", 16);
}}else{
StringCopy(&(Local_296.f_6), "R2P_MENU_DE", 16);
StringIntConCat(&(Local_296.f_6), Local_89.f_15[2], 16);
StringConCat(&(Local_296.f_6), "F", 16);
if(Local_89.f_15[2]==2){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0 || MISC::IS_BIT_SET(Global_2793044.f_1824, 24)){
StringCopy(&(Local_296.f_6), "R2P_MENU_DE99F", 16);
}}}
Local_264={
Local_296.f_6 
};
if(bParam0){
if(iLocal_327==0){
bVar4=func_508(&uLocal_317, iLocal_319, 0);
}
bLocal_253=bVar4;
func_258(0, "R2P_MENU_IN", 0, bVar4, 0, 0, 0);
func_258(1, "R2P_MENU_IN2", 0, bVar4, 0, 0, 0);
}
bVar4=bParam0;
if(MISC::IS_BIT_SET(Local_89.f_1, 11)){
bVar4=false;
}
bVar5=bVar4;
func_258(2, "R2P_MENU_DEST", 0, 1, 0, 0, 0);
if(MISC::ARE_STRINGS_EQUAL(&(Local_296.f_10), "R2P_MENU_DE0S")){
func_258(2, &(Local_296.f_10), 0, bVar4, 0, 0, 0);
}else{
func_258(2, &(Local_296.f_10), 2, bVar4, 0, 0, 0);
func_460(&(Local_296.f_6), 0);
func_456(func_459(), 0);
}
func_258(3, "R2P_MENU_SCT", 0, 1, 0, 0, 0);
StringCopy(&(Local_296.f_6), "R2P_MENU_SC", 16);
func_258(3, &(Local_296.f_6), 1, 0, 0, 0, 0);
if(Local_89.f_3 >=50){
func_456(Local_89.f_3, 0);
}else{
func_456(50, 0);
}
if(bParam0){
bVar4=true;
if(Local_89.f_14 >=2){
if(((Local_89.f_15[2] <=0 || Local_89.f_15[2] > iLocal_87) && !HUD::IS_WAYPOINT_ACTIVE()) && !MISC::IS_BIT_SET(Local_89.f_1, 10)){
bVar4=false;
}elseif((func_15(func_16(), 0f, 0f, -2000f, 0) || func_15(func_16(), 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f){
bVar4=false;
}}else{
bVar4=false;
}
func_258(4, "R2P_MENU_STT", 0, bVar4, 0, 0, 0);
}
if(bParam0){
if(Local_296.f_14==4){
if(Local_89.f_14 >=2){
if(!MISC::IS_BIT_SET(Local_89.f_1, 7) || MISC::IS_BIT_SET(Local_89.f_1, 9)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(237, "R2P_MENU_LAU", -1, 0);
}else{
func_454(176, "R2P_MENU_LAU", -1);
}}}}elseif(Local_296.f_14==0){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(237, "R2P_CTRL_INV", -1, 0);
}else{
func_454(176, "R2P_CTRL_INV", -1);
}}elseif(Local_296.f_14==1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(237, "R2P_CTRL_SEL", -1, 0);
}else{
func_454(176, "R2P_CTRL_SEL", -1);
}}elseif(Local_296.f_14==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(237, "R2P_CTRL_NXT", -1, 0);
}else{
func_454(176, "R2P_CTRL_NXT", -1);
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(238, "R2P_MENU_EXI", -1, 0);
func_454(199, "SPEC_PAUSE", -1);
}else{
func_454(177, "R2P_MENU_EXI", -1);
}
if(Local_296.f_14==2 && bVar5==1){
func_453(0, 1, 0, 0, 0);
}else{
func_453(0, 0, 0, 0, 0);
}}elseif(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(238, "R2P_MENU_EXI", -1, 0);
}else{
func_454(177, "R2P_MENU_EXI", -1);
}
if(bParam0){
func_491(Local_296.f_14, 1, 1);
}else{
func_491(-1, 1, 1);
}
func_451("", 0, 0);
}


void func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5518[0]=iParam0;
Global_23270.f_5518[1]=iParam1;
Global_23270.f_5518[2]=iParam2;
Global_23270.f_5518[3]=iParam3;
Global_23270.f_5518[4]=iParam4;
}


void func_454(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_455(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_456(int iParam0, bool bParam1){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23270.f_5665 >=256){
return;
}
if(Global_23270.f_6186 >=4){
return;
}
if(Global_23270.f_6187 !=1){
return;
}
if(Global_23270.f_6186 >=Global_23270.f_6184){
return;
}
Global_23270.f_4309[Global_23270.f_5665]=iParam0;
Global_23270.f_5665++;
Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186]=2;
Global_23270.f_6186++;
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar0=func_458();
if(Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186==Global_23270.f_6184){
func_264(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)]){
Global_23270.f_5511[(Global_23270.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar3=func_457();
if(fVar3 > Global_23270.f_6188[Global_23270.f_5661]){
Global_23270.f_6188[Global_23270.f_5661]=fVar3;
}}}}


float func_457(){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
float fVar4;
iVar0=0;
while (iVar0 < Global_23270.f_6186){
if(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar0]==4){
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < iVar1){
if(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)] !=0){
if(func_264(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0)){
if(fVar4 > fVar2){
fVar2=fVar4;
}}}
iVar0++;
}
if(fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0)){
return fVar2;
}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_458(){
float fVar0;
float fVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
iVar7=0;
while (iVar7 < Global_23270.f_6186){
if(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==1){
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==8){
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==2){
iVar3++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==3){
iVar4++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==4){
iVar5++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==5){
iVar6++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==6){
iVar6++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==7){
iVar6++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==9){
iVar6++;
}
iVar7++;
}
func_243(0, 1, 0, 0, 0, iVar6 > 0, 0);
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[Global_23270.f_6185 /*6*/]));
}
iVar7=0;
while (iVar7 < Global_23270.f_6186){
if(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==1){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==8){
iVar8++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
}}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[((Global_23270.f_5665 - iVar3) + iVar9)]);
}
iVar9++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[((Global_23270.f_5666 - iVar4) + iVar10)], Global_23270.f_4695[((Global_23270.f_5666 - iVar4) + iVar10)]);
}
iVar10++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}elseif(Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
}
iVar11++;
}
iVar7++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) !=0){
fVar0=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
iVar7=0;
while (iVar7 < iVar5){
if(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)] !=0){
func_264(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + fVar1);
}
iVar7++;
}
return fVar0;
}

int func_459(){
if(func_15(func_16(), 0f, 0f, -2000f, 0) || func_15(func_16(), 0f, 0f, 0f, 0)){
return 0;
}
return SYSTEM::ROUND(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, Local_89.f_7, 1));
}


void func_460(char* sParam0, bool bParam1){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 >=4){
return;
}
if(Global_23270.f_6187 !=1){
return;
}
if(Global_23270.f_6186 >=Global_23270.f_6184){
return;
}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam0, 24);
Global_23270.f_5663++;
Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186]=1;
Global_23270.f_6186++;
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar0=func_458();
if(Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186==Global_23270.f_6184){
func_264(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)]){
Global_23270.f_5511[(Global_23270.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar3=func_457();
if(fVar3 > Global_23270.f_6188[Global_23270.f_5661]){
Global_23270.f_6188[Global_23270.f_5661]=fVar3;
}}}}


void func_461(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4){
Global_23270.f_8867=iParam4;
Global_23270.f_8863=uParam0;
Global_23270.f_8864=uParam1;
Global_23270.f_8865=uParam2;
Global_23270.f_8866=uParam3;
}


void func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5526[0]=iParam0;
Global_23270.f_5526[1]=iParam1;
Global_23270.f_5526[2]=iParam2;
Global_23270.f_5526[3]=iParam3;
Global_23270.f_5526[4]=iParam4;
}


void func_463(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23270.f_5499[0]=iParam0;
Global_23270.f_5499[1]=iParam1;
Global_23270.f_5499[2]=iParam2;
Global_23270.f_5499[3]=iParam3;
Global_23270.f_5499[4]=iParam4;
Global_23270.f_5669=0;
if(iParam0 !=0){
Global_23270.f_5669++;
}
if(iParam1 !=0){
Global_23270.f_5669++;
}
if(iParam2 !=0){
Global_23270.f_5669++;
}
if(iParam3 !=0){
Global_23270.f_5669++;
}
if(iParam4 !=0){
Global_23270.f_5669++;
}}


void func_464(char* sParam0){
int iVar0;
StringCopy(&(Global_23270.f_1), sParam0, 16);
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}}


void func_465(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23270.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695070[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_5532[iVar0]=0;
Global_23270.f_5670[iVar0]=0;
Global_23270.f_5799[iVar0]=0;
Global_23270.f_6322[iVar0]=0f;
Global_23270.f_5928[iVar0]=0;
Global_23270.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23270.f_5499[iVar0]=0;
Global_23270.f_5511[iVar0]=0f;
Global_23270.f_5505[iVar0]=-1f;
Global_23270.f_5518[iVar0]=0;
Global_23270.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
Global_23270.f_5450[iVar0]=-1;
Global_23270.f_5465[iVar0]=363;
Global_23270.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23270.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
Global_23270=0;
Global_23270.f_5661=0;
Global_23270.f_5662=0;
Global_23270.f_5663=0;
Global_23270.f_5665=0;
Global_23270.f_5666=0;
Global_23270.f_5667=0;
Global_23270.f_5664=0;
Global_23270.f_6317=0;
Global_23270.f_6457=0;
Global_23270.f_6182=0;
Global_23270.f_6181=0;
Global_23270.f_6183=0;
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=0;
Global_23270.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}
Global_23270.f_5165=0;
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_61=0;
Global_4540953.f_62=0;
Global_4540953.f_63=0;
Global_4540953.f_64=0;
Global_4540953.f_65=0;
Global_4540953.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540953.f_25[iVar0]=0;
iVar0++;
}
Global_4540953.f_67=0;
StringCopy(&(Global_23270.f_1), "", 16);
Global_23270.f_5517=0f;
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}
Global_23270.f_6187=0;
Global_23270.f_6186=0;
Global_23270.f_6184=0;
Global_23270.f_6185=0;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
Global_23270.f_5668=10;
Global_23270.f_5669=0;
Global_23270.f_6319=0f;
Global_23270.f_6320=0f;
Global_23270.f_6171=0;
Global_23270.f_6172=0;
Global_23270.f_6173=0f;
Global_23270.f_6174=0;
Global_23270.f_6176=0;
Global_23270.f_6175=0;
Global_23270.f_6177=0;
Global_23270.f_6178=0;
Global_23270.f_6179=0;
Global_23270.f_6180=0;
Global_23270.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23270.f_6451[iVar0]=-1;
Global_23270.f_6454[iVar0]=-1;
iVar0++;
}
Global_23270.f_5524=0f;
Global_23270.f_5495=0;
Global_23270.f_5525=0;
iVar0=0;
while (iVar0 < Global_23270.f_6458){
Global_23270.f_6458[iVar0]=0;
iVar0++;
}
Global_23270.f_8867=0;
Global_23270.f_8862=0;
Global_23270.f_8872=0;
Global_23270.f_8877=0;
Global_23270.f_8882=0;
Global_23270.f_8884=0;
Global_23270.f_8890=0;
Global_23267=0.05f;
Global_23268=0.05f;
Global_23269=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23269=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23269=(0.225f * (1.777778f / fVar2));
}else{
Global_23269=0.225f;
}}


void func_466(){
int iVar0;
int iVar1;
int iVar2;
int iVar3[32];
var uVar36[32];
var uVar69;
int iVar70;
float fVar71;
int iVar72;
func_465(0, 0);
func_453(0, 0, 0, 0, 0);
func_464("R2P_MENU_TINV");
func_463(1, 1, 0, 0, 0);
func_462(1, 2, 1, 1, 1);
iVar1=0;
iLocal_252=func_68();
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(func_470(iVar2)){
if(iVar1 < func_469()){
iVar1++;
bLocal_253=true;
uVar69=PLAYER::GET_PLAYER_PED(iVar2);
if(iVar1 > 1){
fVar71=func_468(PLAYER::PLAYER_PED_ID(), uVar69, 1);
iVar70=0;
while (iVar70 < iVar1){
if(fVar71 < uVar36[iVar70] || uVar36[iVar70]==0f){
iVar72=(iVar1 - 1);
while (iVar72 >=iVar70 + 1){
if(iVar72 > 0){
iVar3[iVar72]=iVar3[(iVar72 - 1)];
uVar36[iVar72]=uVar36[(iVar72 - 1)];
}
iVar72=(iVar72 + -1);
}
iVar3[iVar70]=bVar2;
uVar36[iVar70]=func_468(PLAYER::PLAYER_PED_ID(), uVar69, 1);
iVar70=iVar1;
}
iVar70++;
}}else{
iVar3[0]=bVar2;
uVar36[0]=func_468(PLAYER::PLAYER_PED_ID(), uVar69, 1);
}}}
iVar0++;
}
if(iVar1==0){
func_258(iVar1, "PIM_R2PNON", 1, 1, 0, 0, 0);
bLocal_253=false;
iVar1++;
}else{
iVar0=0;
while (iVar0 < iVar1){
func_258(iVar0, "PIM_PLNM", 1, 1, 0, 0, 0);
func_467(PLAYER::GET_PLAYER_NAME(iVar3[iVar0]), 0, 1, 1);
if(Local_296.f_14==iVar0){
iLocal_252=iVar3[iVar0];
}
iVar0++;
}}
iLocal_88=iVar1;
if(bLocal_253==1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(237, "R2P_CTRL_INV", -1, 0);
}else{
func_454(176, "R2P_CTRL_INV", -1);
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_455(238, "R2P_MENU_BAC", -1, 0);
}else{
func_454(177, "R2P_MENU_BAC", -1);
}
func_491(Local_296.f_14, 1, 1);
func_451("", 0, 0);
}


void func_467(char* sParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
var uVar2;
float fVar3;
if(Global_23270.f_5664 >=40){
return;
}
if(Global_23270.f_6186 >=4){
return;
}
if(Global_23270.f_6187 !=1){
return;
}
if(Global_23270.f_6186 >=Global_23270.f_6184){
return;
}
StringCopy(&(Global_2695070[Global_23270.f_5664 /*16*/]), sParam0, 64);
Global_23270.f_5664++;
Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186]=5;
Global_23270.f_6186++;
fVar0=0f;
if(bParam3){
fVar0=func_458();
}
if(bParam2){}
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar0=func_458();
if(Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186==Global_23270.f_6184){
func_264(26, 1, 0, &fVar1, &uVar2, 0);
fVar0=(fVar0 + (fVar1 * 2f));
}
if(fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)]){
Global_23270.f_5511[(Global_23270.f_5662 - 1)]=fVar0;
}}
if(bParam1){
if(Global_23270.f_6186 >=Global_23270.f_6184){
fVar3=func_457();
if(fVar3 > Global_23270.f_6188[Global_23270.f_5661]){
Global_23270.f_6188[Global_23270.f_5661]=fVar3;
}}}}


float func_468(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var3;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
Var3={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var3={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_469(){
if(Global_2691794){
return 32;
}
return (32 - Global_2691795);
}

int func_470(bool bParam0){
if(!func_12(iParam0, 0, 1)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return 0;
}
if(func_9(iParam0, 0)){
return 0;
}
if(func_473(iParam0, 0, -1)){
return 0;
}
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bParam0)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0){
return 0;
}elseif(!func_6(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1)){
return 0;
}}
if(func_12(bParam0, 1, 1) && func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(bParam0), 300f, 300f, 300f, 0, 1, 0)){
return 0;
}}else{
return 0;
}
if(func_471(bParam0)){
return 0;
}
return 1;
}

int func_471(int iParam0){
switch (Global_1894573[iParam0 /*608*/]){
case 131:
case 138:
case 139:
case 140:
case 141:
case 129:
case 144:
case 236:
case 150:
return 1;
default:
}
if(func_472(Global_1894573[iParam0 /*608*/])==1){
return 1;
}
return 0;
}

int func_472(int iParam0){
switch (iParam0){
case 150:
return 1;
case 24:
return 2;
case 26:
return 2;
case 256:
return 0;
case 258:
return 0;
case 259:
return 2;
case 271:
return 0;
case 273:
return 2;
case 276:
return 0;
case 277:
return 0;
case 262:
return 0;
case 263:
return 0;
case 264:
return 0;
case 269:
return 2;
case 270:
return 2;
case 275:
return 2;
case 268:
return 2;
case 286:
return 2;
case 267:
return 0;
case 266:
return 2;
case 287:
return 2;
case 289:
return 2;
case 147:
return 2;
case 291:
return 0;
case 292:
return 0;
case 293:
return 0;
case 294:
return 0;
case 295:
return 0;
case 296:
return 0;
case 297:
return 0;
case 298:
return 0;
case 299:
return 0;
case 300:
return 0;
case 301:
return 0;
case 288:
return 2;
case 290:
return 2;
case 304:
return 0;
case 305:
return 0;
case 306:
return 0;
case 307:
return 0;
case 308:
return 0;
case 309:
return 0;
case 310:
return 2;
case 311:
return 2;
default:
}
return -1;
}

int func_473(int iParam0, bool bParam1, int iParam2){
if(Global_1853910[iParam0 /*862*/].f_267.f_33 > 0){
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 0)){
return 1;
}}else{
return 1;
}}
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
if(iParam2==-1 || func_307(Global_2657589[iParam0 /*466*/].f_321.f_7) !=iParam2){
if(bParam1){
return func_474(iParam0)==iParam0;
}
return 1;
}}
return 0;
}

int func_474(int iParam0){
int iVar0;
if(iParam0==func_68()){
return iParam0;
}
if(func_475(iParam0) !=-1){
iVar0=func_307(func_475(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_66(iParam0, 0)){
return func_65(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_68();
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}
return func_68();
}

int func_475(int iParam0){
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}elseif(((Global_1575060 || Global_2635559.f_2680) && iParam0==PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}}
return -1;
}

int func_476(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return iLocal_87;
case 3:
return 0;
case 4:
return 0;
default:
}
return 0;
}


void func_477(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
Local_296[iVar0]=0;
iVar0++;
}}

int func_478(bool bParam0){
int iVar0;
if(func_19()){
return 0;
}
if(bParam0){
if(PAD::IS_CONTROL_PRESSED(2, 173) || func_481(0, 1, 0)){
if(func_508(&uLocal_256, iLocal_258, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_249=1;
Local_296.f_14++;
if(iLocal_251==1){
if(Local_296.f_14 > (iLocal_88 - 1)){
Local_296.f_14=0;
}}elseif(Local_296.f_14 > 4){
Local_296.f_14=0;
}
func_491(Local_296.f_14, 1, 1);
iLocal_249=1;
iLocal_258=250;
func_28(&uLocal_256);
return 1;
}}elseif(PAD::IS_CONTROL_PRESSED(2, 172) || func_480(0, 1, 0)){
if(func_508(&uLocal_256, iLocal_258, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_249=1;
Local_296.f_14=(Local_296.f_14 - 1);
if(iLocal_251==1){
if(Local_296.f_14 < 0){
Local_296.f_14=(iLocal_88 - 1);
}}elseif(Local_296.f_14 < 0){
Local_296.f_14=4;
}
func_491(Local_296.f_14, 1, 1);
iLocal_249=1;
iLocal_258=250;
func_28(&uLocal_256);
return 1;
}}elseif(iLocal_258 !=-1){
iLocal_258=-1;
}}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
if(((bParam0 && iLocal_251==0) && Local_296.f_14==2) && !MISC::IS_BIT_SET(Local_89.f_1, 11)){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 174) || PAD::IS_CONTROL_PRESSED(2, 174)) || iLocal_255==-1){
if(func_508(&uLocal_259, iLocal_261, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_89.f_15[Local_296.f_14]=(Local_89.f_15[Local_296.f_14] - 1);
if(Local_89.f_15[Local_296.f_14] < 0){
Local_89.f_15[Local_296.f_14]=func_476(Local_296.f_14);
}
iVar0=0;
while (iVar0 < iLocal_87){
if(Local_296.f_14==2){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f && Local_89.f_15[2] !=0){
Local_89.f_15[Local_296.f_14]=(Local_89.f_15[Local_296.f_14] - 1);
if(Local_89.f_15[Local_296.f_14] < 0){
Local_89.f_15[Local_296.f_14]=func_476(Local_296.f_14);
}
}
else{
iVar0=99;
}
Global_2793044.f_28.f_39=Local_89.f_15[Local_296.f_14];
}
iVar0++;
}
iLocal_261=250;
func_28(&uLocal_259);
iLocal_249=1;
iLocal_250=1;
Local_89.f_15.f_6++;
return 1;
}}elseif(((PAD::IS_CONTROL_JUST_PRESSED(2, 175) || PAD::IS_CONTROL_PRESSED(2, 175)) || (func_479() && Local_296.f_14==2)) || iLocal_255==1){
if(func_508(&uLocal_259, iLocal_261, 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Local_89.f_15[Local_296.f_14]++;
if(Local_89.f_15[Local_296.f_14] > func_476(Local_296.f_14)){
Local_89.f_15[Local_296.f_14]=0;
}
iVar0=0;
while (iVar0 < iLocal_87){
if(Local_296.f_14==2){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89.f_4, func_16(), 1) < 1000f && Local_89.f_15[2] !=0){
Local_89.f_15[Local_296.f_14]++;
if(Local_89.f_15[Local_296.f_14] > func_476(Local_296.f_14)){
Local_89.f_15[Local_296.f_14]=0;
}
}
else{
iVar0=99;
}
Global_2793044.f_28.f_39=Local_89.f_15[Local_296.f_14];
}
iVar0++;
}
iLocal_261=250;
func_28(&uLocal_259);
iLocal_249=1;
iLocal_250=1;
Local_89.f_15.f_6++;
return 1;
}}elseif(iLocal_261 !=-1){
iLocal_261=-1;
}}
return 1;
}

int func_479(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_PRESSED(2, 176)){
return 1;
}
return 0;
}

int func_480(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029==-2){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1)){
return 1;
}}}
return 0;
}

int func_481(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541029==-3){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1)){
return 1;
}}}
return 0;
}


void func_482(){
int iVar0;
if(MISC::IS_BIT_SET(Local_296.f_18, 2)){
if(func_508(&uLocal_317, iLocal_319, 0)){
iLocal_249=1;
MISC::CLEAR_BIT(&(Local_296.f_18), 2);
}}
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
if(func_19()){
return;
}
if(func_14() || iLocal_254){
switch (iLocal_251){
case 0:
if(bLocal_253==1){
if(func_508(&uLocal_317, iLocal_319, 0)){
if(Local_296.f_14==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_251=1;
Local_296.f_14=0;
iLocal_249=1;
return;
}
elseif(Local_296.f_14 !=0){
return;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_486(Local_89.f_4, Local_89.f_7, Local_264, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
iVar0=func_485();
if(iVar0 !=1){
func_484("R2P_TINVS", iVar0, 0);
}
else{
func_483("R2P_TINVS1", 0);
}
func_28(&uLocal_317);
func_26(&uLocal_317, 0, 0);
iLocal_319=5000;
iLocal_249=1;
MISC::SET_BIT(&(Local_296.f_18), 2);
MISC::SET_BIT(&(Local_89.f_1), 11);
}}
break;
case 1:
if(bLocal_253==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_38("R2P_TINVP", iLocal_252, 0, 0, 0, 1, 0);
func_486(Local_89.f_4, Local_89.f_7, Local_264, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_169(iLocal_252));
MISC::SET_BIT(&(Local_89.f_1), 11);
}
break;
}}}

int func_483(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_39(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}

int func_484(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_39(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_39(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}

int func_485(){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(func_470(iVar2)){
iVar0++;
}}
iVar1++;
}
return iVar0;
}


void func_486(struct<3> Param0, struct<3> Param3, struct<4> Param6, int iParam10, int iParam11){
struct<10> Var0;
Var0.f_0=181375724;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam10;
Var0.f_3={
Param0 
};
Var0.f_6={
Param3 
};
Var0.f_9={
Param6 
};
if(!iParam11==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 13, iParam11);
}
func_487(26, 1, -1);
}


void func_487(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_11();
}
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}


void func_488(){
if(func_19()){
return;
}
PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(func_490() || func_489()){
switch (iLocal_251){
case 0:
Global_2672505.f_946.f_11=1;
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=4;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Global_2672505.f_946.f_5=PLAYER::PLAYER_ID();
Global_2672505.f_946.f_6=0;
Global_2672505.f_946.f_13=1;
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
break;
case 1:
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
iLocal_251=0;
Local_296.f_14=1;
iLocal_249=1;
break;
}}}

int func_489(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}

int func_490(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 1;
}}elseif(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177)){
return 1;
}
return 0;
}


void func_491(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23270.f_6182=iParam0;
Global_23270.f_6317=iParam2;
if(Global_23270.f_6182 < Global_23270.f_6181){
Global_23270.f_6181=Global_23270.f_6182;
}elseif((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >=(Global_23270.f_6181 + Global_23270.f_5668))){
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128){
Global_23270.f_6181++;
iVar1=0;
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23270.f_6171=0;
Global_23270.f_6172=0;
if(bParam1){
StringCopy(&(Global_23270.f_5081), "", 24);
StringCopy(&(Global_4540953.f_21), "", 16);
}}

int func_492(float fParam0){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
fVar6=0.02f;
fVar0=0.05f;
fVar2=(fVar0 + Global_23269);
fVar1=(Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
fVar5=(fVar0 + fParam0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
fVar4=(fVar2 - fVar6);
if(fParam0 > 0f){
if(Global_4541023 >=fVar0 && Global_4541023 < fVar5){
return -999;
}}
if(Global_4541023 >=fVar0 && Global_4541023 < fVar4){
return -1;
}
if(Global_4541023 >=fVar4 && Global_4541023 <=fVar2){
return 1;
}
return 0;
}


void func_493(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
fVar6=(0.034722f / 2f);
iVar13=-1;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
Global_4541029=-1;
return;
}
PAD::SET_USE_ADJUSTED_MOUSE_COORDS(1);
fVar0=Global_23267;
fVar2=(fVar0 + Global_23269);
fVar3=Global_23270.f_6173;
fVar1=(Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
if(bParam2){
fVar3=(fVar3 + 0.034722f);
fVar1=(fVar1 + 0.034722f);
}
if(Global_23270.f_6175 < 1){
fVar1=(Global_23270.f_6173 - 0.034722f);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar4=fVar0;
fVar5=fVar1;
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_495();
if(Global_4541029==-6){
return;
}
Global_4541029=-1;
fVar7=Global_4541023;
fVar8=Global_4541024;
if(Global_23270.f_6176 > Global_23270.f_6175){
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=fVar3) && Global_4541024 < (fVar3 + fVar6)){
Global_4541029=-2;
if(bParam3){
func_494(0);
}
return;
}
if(((Global_4541023 >=fVar0 && Global_4541023 <=fVar2) && Global_4541024 >=(fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f)){
Global_4541029=-3;
if(bParam3){
func_494(0);
}
return;
}}
if(((fVar7 >=fVar0 && fVar7 <=fVar2) && fVar8 >=fVar1) && fVar8 <=fVar3){
fVar9=(fVar8 - fVar1);
iVar13=SYSTEM::FLOOR((fVar9 / 0.034722f));
if(Global_23270.f_6176==-1){
Global_4541029=0;
iVar13=0;
return;
}
iVar11=148;
iVar12=(iVar11 / Global_23270.f_6175);
iVar10=(32 + (iVar11 - (iVar12 * iVar13)));
if(bParam3){
if(!bParam1 || iVar13 !=0){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
func_254(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
Global_4541029=Global_23270.f_8513[iVar13];
return;
}
if(!bParam0){
if(fVar7 < fVar2){
Global_4541029=-4;
return;
}
if(fVar8 > 0.9f){
Global_4541029=-5;
return;
}}elseif(fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f)){
Global_4541029=-4;
return;
}
Global_4541029=-1;
}


void func_494(bool bParam0){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=(0.034722f / 2f);
if(bParam0){
iVar3=48;
}else{
iVar3=210;
}
fVar0=Global_23267;
fVar1=Global_23270.f_6173;
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
if(Global_4541029==-2){
func_254(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541029==-3){
func_254(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_495(){
Global_4541025=Global_4541023;
Global_4541026=Global_4541024;
Global_4541023=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541024=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541027=(Global_4541023 - Global_4541025);
Global_4541028=(Global_4541024 - Global_4541026);
}

int func_496(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541029==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541029=-1;
return 0;
}}
if(((Global_4541029 > -1 || Global_4541029==-3) || Global_4541029==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541029==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541029=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}

int func_497(struct<3> Param0, struct<3> Param3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
float fVar5;
int iVar6;
int iVar7;
iVar0=50;
iVar1=25;
iVar2=4;
fVar3=0.25f;
iVar4=func_498(PLAYER::PLAYER_ID());
if(iVar4 < 10){
iVar4=10;
}elseif(iVar4 > 40){
iVar4=40;
}
iVar4=(iVar4 * iVar2);
fVar5=SYSTEM::VDIST(Param3, Param0);
if(fVar5 > 1000f){
fVar5=(fVar5 / 1000f);
}
fVar5=(fVar5 * fVar3);
iVar6=SYSTEM::ROUND((IntToFloat(iVar4) * fVar5));
iVar7=SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar6) / SYSTEM::TO_FLOAT(iVar1)));
iVar6=(iVar7 * iVar1);
iVar6=SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_178));
if(iVar6 > Global_262145.f_179){
iVar6=Global_262145.f_179;
}
if(iVar6 >=SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_178))){
return iVar6;
}
return SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_178));
}


var func__498(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}


var func__499(int iParam0){
var uVar0;
uVar0=func_500(iParam0);
return uVar0;
}

int func_500(int iParam0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
}elseif(func_142(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_3;
}else{
return 0;
}}
return 0;
}


void func_501(){
struct<14> Var0;
if(!MISC::IS_BIT_SET(uLocal_245, 6)){
Var0.f_2=1717006433;
Var0.f_10=PLAYER::PLAYER_ID();
func_502(Var0, func_503(0));
MISC::SET_BIT(&uLocal_245, 6);
}}


void func_502(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14){
Param0.f_0=548471420;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam14==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam14);
}}

int func_503(int iParam0){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_12(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, iVar2);
}}}
iVar1++;
}
return uVar0;
}


void func_504(var uParam0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1);
}


void func_505(){
struct<3> Var0;
var uVar3;
var uVar4;
var uVar5;
var uVar6;
Var0={
Local_89.f_7 
};
if(!MISC::IS_BIT_SET(uLocal_245, 5)){
if(HUD::DOES_BLIP_EXIST(uLocal_246)){
if(!func_15(Var0, HUD::GET_BLIP_COORDS(uLocal_246), 0)){
HUD::REMOVE_BLIP(&uLocal_246);
GRAPHICS::DELETE_CHECKPOINT(uLocal_247);
MISC::CLEAR_BIT(&uLocal_245, 4);
}}
if(!HUD::DOES_BLIP_EXIST(uLocal_246)){
if((!func_15(Var0, 0f, 0f, 0f, 0) && !func_15(Var0, 0f, 0f, -2000f, 0)) && (!MISC::IS_BIT_SET(Local_89.f_1, 7) || MISC::IS_BIT_SET(Local_89.f_1, 9))){
HUD::GET_HUD_COLOUR(12, &uVar3, &uVar4, &uVar5, &uVar6);
uLocal_246=HUD::ADD_BLIP_FOR_COORD(Var0);
HUD::SET_BLIP_SPRITE(uLocal_246, 38);
HUD::SET_BLIP_SCALE(uLocal_246, 1.2f);
HUD::SET_BLIP_PRIORITY(uLocal_246, 5);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_246, "R2P_BLIP");
PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(1);
HUD::SET_BLIP_ROUTE(uLocal_246, 1);
uLocal_247=GRAPHICS::CREATE_CHECKPOINT(10, Var0 + Vector(4f, 0f, 0f), Var0, 10f, uVar3, uVar4, uVar5, 75, 0);
GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uLocal_247, 7.5f, 7.5f, 100f);
iLocal_249=1;
}}}elseif(HUD::DOES_BLIP_EXIST(uLocal_246)){
HUD::REMOVE_BLIP(&uLocal_246);
GRAPHICS::DELETE_CHECKPOINT(uLocal_247);
}}


void func_506(){
if(!HUD::DOES_BLIP_EXIST(uLocal_248)){
uLocal_248=HUD::ADD_BLIP_FOR_RADIUS(Local_89.f_4, 1000f);
HUD::SET_BLIP_COLOUR(uLocal_248, 1);
HUD::SET_BLIP_ALPHA(uLocal_248, 220);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_248, "R2P_BLIPR");
HUD::SET_BLIP_DISPLAY(uLocal_248, 3);
}}

int func_507(){
return Local_89.f_0;
}

int func_508(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_26(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


bool func_509(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_230(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_510(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_510(var uParam0){
switch (uParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
uParam0->f_9=1;
if(uParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}}}else{
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_9=0;
}
break;
}
return uParam0->f_9==2;
}


void func_511(int iParam0){
if(func_516()){
return;
}
if(!Global_20383.f_1==1){
if(func_20(0)){
func_512(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_512(int iParam0){
if(func_516()){
return;
}
if(Global_20584){
if(func_515()){
func_514(1, 1);
}else{
func_514(0, 0);
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
if(!func_513()){
Global_20383.f_1=3;
}}

int func_513(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_514(bool bParam0, bool bParam1){
if(bParam0){
if(func_20(0)){
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


bool func_515(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_516(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_517(int iParam0){
return Local_116[iParam0 /*4*/];
}

int func_518(bool bParam0){
if(func_528()){
if(bParam0){
if(!Global_1836591 && !func_527(PLAYER::PLAYER_ID(), 2)){
GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
func_519(0, 0);
}}
return 1;
}
return 0;
}


void func_519(bool bParam0, int iParam1){
if(bParam0){
func_524(1, 0, 1);
}else{
func_520(iParam1);
}}


void func_520(int iParam0){
func_523();
if(iParam0==0){
if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()){
return;
}}
if(func_522()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_521(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
}}


void func_521(int iParam0){
if(Global_1574632.f_20 !=iParam0){
Global_1574632.f_20=iParam0;
}}

int func_522(){
return Global_1574632.f_20;
}


void func_523(){
Global_2696215=1;
}


void func_524(int iParam0, bool bParam1, bool bParam2){
if(func_525()){
return;
}
if((func_522()==1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0){
func_521(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
if(!bParam1){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
if(bParam2){
GRAPHICS::RESET_PAUSED_RENDERPHASES();
}}}

int func_525(){
if(func_526()){
return Global_2694451;
}
return 0;
}

int func_526(){
if(Global_2694444){
return Global_2694443;
}
return 0;
}


bool func_527(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}


bool func_528(){
return Global_2672505.f_21;
}

int func_529(int iParam0, int iParam1, int iParam2){
if(func_562()){
return 0;
}
if(iParam0==1){
if(!func_551(32, 0, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return 0;
}
if((((((Global_1853910[PLAYER::PLAYER_ID() /*862*/]==14 || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==15) || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==13) || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==6) || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==5) || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148) || Global_1853910[PLAYER::PLAYER_ID() /*862*/]==285){
return 0;
}
if(func_527(PLAYER::PLAYER_ID(), 0)){
return 0;
}
if(func_527(PLAYER::PLAYER_ID(), 21)){
return 0;
}
if(func_527(PLAYER::PLAYER_ID(), 25)){
return 0;
}
if(func_550(PLAYER::PLAYER_ID())==136){
return 0;
}
if(func_545()){
return 0;
}
if(func_162(PLAYER::PLAYER_ID(), 1)){
return 0;
}
if(func_544()){
return 0;
}
if(((((((func_543(PLAYER::PLAYER_ID(), 1, 0) || func_542(PLAYER::PLAYER_ID())) || func_540(PLAYER::PLAYER_ID())) || func_536(4)) || func_536(5)) || func_535(PLAYER::PLAYER_ID())) || func_534(PLAYER::PLAYER_ID())) || func_533(PLAYER::PLAYER_ID())){
return 0;
}
if(func_31() !=0){
return 0;
}
if(iParam2==1){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0 && func_203(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}}
if((func_532(PLAYER::PLAYER_ID()) || func_531(PLAYER::PLAYER_ID())) || func_530(PLAYER::PLAYER_ID())){
return 0;
}
if(func_30()){
return 0;
}
if(iParam1==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mg_race_to_point")) > 0){
return 0;
}}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_530(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==4;
}


bool func_531(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==6;
}


bool func_532(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==5;
}

int func_533(int iParam0){
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_307(Global_2657589[iParam0 /*466*/].f_321.f_7)==7;
}}}
return 0;
}

int func_534(int iParam0){
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_535(int iParam0){
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_68()){
return func_307(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_536(int iParam0){
if(func_539()){
return func_537(func_538(), iParam0);
}
return 0;
}


bool func_537(int iParam0, int iParam1){
return func_307(iParam0)==iParam1;
}

int func_538(){
return Global_1950108.f_513;
}


bool func_539(){
return Global_1950108.f_513 !=-1;
}

int func_540(int iParam0){
if(func_541(Global_1853910[iParam0 /*862*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_541(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}

int func_542(int iParam0){
int iVar0;
if(iParam0 !=func_68()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_307(Global_2657589[iParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_543(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_68()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}


bool func_544(){
return MISC::IS_BIT_SET(Global_1836858.f_1, 15);
}

int func_545(){
switch (func_550(PLAYER::PLAYER_ID())){
case 131:
case 138:
case 139:
case 140:
case 141:
case 129:
case 144:
case 236:
case 150:
return 1;
default:
}
if(func_472(func_550(PLAYER::PLAYER_ID()))==1){
return 1;
}
if(func_546(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_546(int iParam0){
if(func_549(iParam0)){
return 1;
}
if(func_547(iParam0)){
return 1;
}
return 0;
}

int func_547(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_548(iParam0, 9);
}
return 0;
}


var func__548(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_549(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_550(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}

int func_551(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(Global_262145.f_8146==1){
if(iParam0==67){
return 1;
}
if(iParam0==74){
return 1;
}
if(func_555(PLAYER::PLAYER_ID(), 85)){
if(((((iParam0==64 || iParam0==77) || iParam0==61) || iParam0==81) || iParam0==63) || iParam0==62){
return 1;
}}
if((((((((((iParam0==66 || iParam0==116) || iParam0==103) || iParam0==104) || iParam0==105) || iParam0==119) || iParam0==88) || iParam0==75) || iParam0==95) || iParam0==65) || iParam0==98){
return 1;
}}
if(iParam0 < 0){
return 0;
}
if(iParam0==31){
if(Global_262145.f_4747==1){
return 1;
}}
if(func_554() || func_553()){
return 1;
}
iVar0=iParam0;
iVar1=(iVar0 / 32);
iVar0=(iVar0 % 32);
if(bParam1){
if(iParam0==3){
if(func_552()){
return 1;
}else{
return 0;
}}}
if(bParam2){
return 0;
}
return MISC::IS_BIT_SET(Global_1836844[iVar1], iVar0);
}

int func_552(){
var uVar0;
if(Global_1574612){
return 1;
}
if(MISC::IS_BIT_SET(Global_2793044.f_1824, 23)){
return 1;
}
if(func_554()){
return 1;
}
if(func_553()){
return 1;
}
uVar0=Global_1665626[func_108(-1)];
if(MISC::IS_BIT_SET(uVar0, 7)){
MISC::SET_BIT(&(Global_2793044.f_1824), 23);
return 1;
}
return 0;
}


bool func_553(){
return Global_1575048;
}


bool func_554(){
return Global_1575050;
}

int func_555(int iParam0, int iParam1){
if(!func_559()){
return 0;
}
if(func_558()){
return 0;
}
if(iParam1==86){
return 1;
}
return func_556(&(Global_1853910[iParam0 /*862*/].f_792), func_557(iParam1));
}


var func__556(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_557(int iParam0){
switch (iParam0){
case 86:
return 0;
case 19:
return 1;
case 12:
return 2;
case 31:
return 3;
case 20:
return 4;
case 18:
return 5;
case 2:
return 6;
case 76:
return 7;
case 22:
return 8;
case 53:
return 9;
case 34:
return 10;
case 152:
return 11;
case 85:
return 12;
case 84:
return 13;
case 0:
return 14;
case 1:
return 15;
case 153:
return 16;
case 151:
return 17;
case 14:
return 18;
case 15:
return 19;
case 24:
return 20;
case 30:
return 21;
case 46:
return 22;
case 47:
return 23;
case 54:
return 24;
case 51:
return 25;
case 60:
return 26;
case 62:
return 27;
case 66:
return 28;
case 69:
return 29;
case 154:
return 30;
case 82:
return 31;
case 157:
return 32;
case 167:
return 34;
case 169:
return 35;
case 171:
return 36;
case 172:
return 37;
case 173:
return 38;
case 177:
return 39;
case 182:
return 40;
case 188:
return 41;
default:
}
return 1;
}


bool func_558(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143, 3);
}

int func_559(){
if(!func_560()){
return 0;
}
return 1;
}

int func_560(){
if(Global_1574612){
return 1;
}
if(func_554()){
return 1;
}
if(func_553()){
return 1;
}
return func_561(120, -1);
}

int func_561(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848280[iParam0 /*3*/][func_108(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_562(){
return Global_2793044.f_28.f_43;
}

int func_563(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_569()){
return 1;
}
if(Global_2696915){
return 1;
}
if(func_568()){
return 1;
}
if(func_567(159)){
if(!func_566()){
return 1;
}}
if(func_567(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_564() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_564())==0){
return 1;
}}
return 0;
}

int func_564(){
switch (func_335()){
case 0:
return func_565();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_565(){
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_566(){
return Global_2683862.f_698;
}

int func_567(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_568(){
return Global_2694524;
}


bool func_569(){
return Global_2683862.f_693;
}


void func_570(){
SYSTEM::WAIT(0);
}


bool func_571(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}


void func_572(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_4(Local_89.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
}
Global_2793044.f_28.f_82=0;
}
if(HUD::DOES_BLIP_EXIST(uLocal_246)){
HUD::REMOVE_BLIP(&uLocal_246);
}
GRAPHICS::DELETE_CHECKPOINT(uLocal_247);
HUD::SET_MISSION_NAME(0, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3==0){
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
func_228(1, -1);
}}else{
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
}
if(func_578("R2P_WARNH")){
HUD::CLEAR_HELP(1);
}
func_18();
PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(0);
PED::SPAWNPOINTS_CANCEL_SEARCH();
HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!MISC::IS_BIT_SET(uLocal_245, 1)){
func_577();
}
if(MISC::IS_BIT_SET(uLocal_245, 3)){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=0){
Global_1853910[PLAYER::PLAYER_ID() /*862*/]=-1;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2=-1;
}
func_210(2, 0);
}
if(Local_89.f_22 >=3){
func_576();
}
func_211(0);
func_212(0);
}
func_575(&uLocal_294);
Global_2793044.f_28.f_80=0;
Global_2793044.f_28.f_41=0;
Global_2793044.f_28.f_81=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_1057408==1){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_206()){
func_574(6, 0, -1);
}}}
MISC::CLEAR_BIT(&(Global_2793044.f_4690), 16);
func_573();
}


void func_573(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_574(int iParam0, int iParam1, int iParam2){
if(!func_209() || iParam1){
Global_1574582=1;
func_207(1);
if(((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_206()) && !func_202(PLAYER::PLAYER_ID())) && !func_546(PLAYER::PLAYER_ID())){
Global_1057408=1;
}
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=1;
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(1, iParam0, iParam2, -1);
}}


void func_575(var uParam0){
if(*uParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}}


void func_576(){
if(Global_2672505.f_2513[0 /*80*/].f_2 !=0){
Global_2672505.f_2513[0 /*80*/].f_2=5;
}}


void func_577(){
struct<14> Var0;
if(MISC::IS_BIT_SET(uLocal_245, 7)){
Var0.f_2=1467941802;
}else{
Var0.f_2=-1632266006;
}
Var0.f_10=PLAYER::PLAYER_ID();
func_502(Var0, func_503(0));
}


bool func_578(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_579(struct<21> Param0){
int iVar0;
func_592(32, Param0);
func_590(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_89, 25, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_116, 129, 0);
func_509(0, -1, 0);
if(!func_589()){
return 0;
}
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_89.f_4={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
Local_89.f_10={
0f, 0f, -2000f 
};
MISC::SET_BIT(&(Local_296.f_15), false);
}
iLocal_326=NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
Global_2793044.f_28.f_41=1;
iLocal_258=-1;
func_26(&uLocal_256, 0, 0);
func_581(1, 1, 0, 0, 0);
Global_2793044.f_28.f_46=0;
iVar0=0;
while (iVar0 < func_469()){
Global_2793044.f_28.f_47[iVar0]=0;
iVar0++;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0){
iLocal_87=2;
}
func_509(0, -1, 0);
func_580(&uLocal_271);
Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=0;
return 1;
}


void func_580(var uParam0){
Global_23268=(((0.034722f * 3f) + 0.05f) + uParam0->f_13);
uParam0->f_14=(0f + (Global_23269 * 0.5f));
uParam0->f_14.f_1=((0.1f + 0.034722f) + uParam0->f_13);
uParam0->f_14.f_2=(Global_23269 + 0.0005f);
uParam0->f_14.f_3=0.09f;
uParam0->f_14.f_4=255;
uParam0->f_14.f_5=255;
uParam0->f_14.f_6=255;
uParam0->f_14.f_7=255;
*uParam0=4;
uParam0->f_1=0.5f;
uParam0->f_2=0.75f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=255;
uParam0->f_7=0;
uParam0->f_9=0f;
uParam0->f_8=0f;
uParam0->f_11=0.00390625f;
uParam0->f_11.f_1=(0.11f + uParam0->f_13);
}


void func_581(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672505.f_1684.f_703.f_16 !=func_68()){
if(MISC::IS_BIT_SET(Global_2657589[Global_2672505.f_1684.f_703.f_16 /*466*/].f_427, 0) && func_582()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643290=0;
}
Global_2635559.f_490=iParam0;
Global_2635559.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_490.f_2=iParam1;
Global_2635559.f_490.f_3=iParam2;
Global_2635559.f_490.f_4=iParam3;
Global_2635559.f_490.f_5=iParam4;
}

int func_582(){
if((((((func_161(PLAYER::PLAYER_ID())==229 || func_161(PLAYER::PLAYER_ID())==191) || func_588()) || func_587()) || func_586()) || Global_2764906.f_227==1) || (Global_2635559.f_1753 && func_583(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_583(int iParam0){
if(func_585(iParam0)){
return 1;
}
if(func_584(iParam0)){
return 1;
}
return 0;
}


bool func_584(int iParam0){
return func_548(iParam0, 20);
}

int func_585(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}


var func__586(){
return Global_2764905;
}


var func__587(){
return Global_1836591;
}

int func_588(){
if(Global_4718592==6){
return 1;
}
return 0;
}

int func_589(){
int iVar0;
iVar0=0;
while (true){
iVar0++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()){
return 1;
}
if(func_569()){
return 0;
}
if(func_567(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
SYSTEM::WAIT(0);
}
return 0;
}

int func_590(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_573();
}else{
return 0;
}}
if(!func_591(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_573();
}else{
return 0;
}}
if(func_569()){
if(!bParam2){
func_573();
}else{
return 0;
}}
if(func_567(157)){
if(!bParam2){
func_573();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_573();
}else{
return 0;
}}}
SYSTEM::WAIT(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_573();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_573();
}else{
return 0;
}}
return 1;
}


bool func_591(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_592(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_573();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}