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
var uLocal_19=0;
char* sLocal_20=NULL;
float fLocal_21=0f;
struct<3> Local_22={
0, 0, 0 
};
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
struct<4> Local_37[10];
bool bLocal_78=0;
int iLocal_79=0;
var uLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
struct<61> Local_85={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_146=0;
int iLocal_147=0;
int iLocal_148=0;
int iLocal_149[2]={
0, 0 
};
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
char* sLocal_156=NULL;
char* sLocal_157=NULL;
char* sLocal_158=NULL;
char* sLocal_159=NULL;
char* sLocal_160=NULL;
char* sLocal_161=NULL;
char* sLocal_162=NULL;
var uLocal_163=16;
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
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
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
var uLocal_284=0;
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
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
bool bLocal_328=0;
bool bLocal_329=0;
int iLocal_330=0;
int iLocal_331=0;
int iLocal_332=0;
struct<3> Local_333={
0, 0, 0 
};
struct<3> Local_336={
0, 0, 0 
};
int iLocal_339=0;
struct<3> Local_340={
0, 0, 0 
};
char* sLocal_343=NULL;
char* sLocal_344=NULL;
int iLocal_345=0;
char* sLocal_346=NULL;
struct<61> ScriptParam_0={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
fLocal_14=0,001f;
iLocal_17=-1;
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0,0375f;
fLocal_26=0,17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
uLocal_80=func_494(50);
iLocal_81=joaat("pcj");
iLocal_83=-2;
iLocal_152=joaat("prop_cs_dumpster_lidl");
iLocal_153=joaat("prop_cs_dumpster_lidr");
iLocal_154=joaat("prop_cs_dumpster_01a");
iLocal_155=joaat("prop_dumpster_02a");
sLocal_156="Dumpster_Lid_L";
sLocal_157="Dumpster_Lid_R";
sLocal_158="PAP_Dumpster";
sLocal_159="PAP_Dumpster_blue";
sLocal_160="Franklin";
sLocal_161="rcmpaparazzo_3leadinoutpap_3_rcm";
sLocal_162="Beverley";
Local_333={
-260,614f, 292,106f, 91,127f 
};
Local_336={
7,2E-05f, -2,500116f, 89,63998f 
};
Local_340={
0,07f, -0,13f, 0,07f 
};
sLocal_343="Distant_Camera_Flash";
sLocal_344="PAPARAZZO_01_SOUNDSET";
sLocal_346="DEFAULT";
Local_85={
ScriptParam_0 
};
func_492(&Local_85);
MISC::SET_MISSION_FLAG(true);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_491("Force cleanup [TERMINATING]");
func_472(1);
func_457();
}
if(func_456()){
iLocal_79=0;
Global_78564=1;
while (!func_450(&Local_85)){
SYSTEM::WAIT(0);
}
func_340(&iVar0, -257,08f, 285,27f, 90,43f, 12,52f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
func_339(&Local_85, 0, 1);
Global_78564=0;
}
while (true){
SYSTEM::WAIT(0);
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_PTP", 0);
func_323(Local_85.f_9, 0, 0, 0, 0, 0);
if(iLocal_83==2){
func_319();
}elseif(!func_317()){
switch (iLocal_83){
case -2:
func_307();
break;
case -1:
func_296();
break;
case 0:
func_254();
break;
case 1:
func_1();
break;
}}}}


void func_1(){
func_253();
if(!func_234(Local_85.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0)){
switch (iLocal_84){
case 0:
if(func_232(Local_85.f_28[0])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85.f_28[0], true);
}
iLocal_84=1;
break;
case 1:
if(!bLocal_329){
bLocal_329=func_217(&uLocal_163, "PAP3AU", "PAP3_RCM_LO", 8, 0, 0, 0);
}elseif(!func_216()){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_332)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_332) >=1f){
iLocal_84=2;
}}else{
iLocal_84=2;
}}
break;
case 2:
func_2();
break;
}}else{
iLocal_83=2;
iLocal_84=0;
sLocal_346="P3BEVSCARED";
}}


void func_2(){
func_207(50, 1, 0);
func_206(&(Local_85.f_28[0]));
func_3(322, 1);
func_457();
}


void func_3(int iParam0, bool bParam1){
int iVar0;
char* sVar1;
iVar0=func_204();
if(iVar0==-1){
return;
}
if(!Global_112473[iVar0 /*10*/].f_4){
return;
}
if(Global_112473[iVar0 /*10*/].f_5){
return;
}
if(Global_112473[iVar0 /*10*/].f_6){
return;
}
func_175(iVar0, 0);
MISC::SET_BIT(&Global_78567, true);
if(Global_112473[iVar0 /*10*/].f_9==-1){}else{
func_174(&(Global_112473[iVar0 /*10*/].f_9));
}
if(bParam1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
PLAYER::START_FIRING_AMNESTY(5000);
}}
func_160(iVar0, 1, 0, 0);
func_159(0, 0);
MemCopy(&sVar1,{
func_157(iVar0)
}
, 4);
func_154(&sVar1, func_155());
func_31();
if(MISC::IS_BIT_SET(Global_113386.f_10016.f_25, 3)){
func_30();
}
func_12();
if(iParam0==210 || iParam0==211){
func_6(iParam0, 406,38f, -1635,86f);
}elseif(iParam0==111){
func_6(iParam0, 1973,84f, 3814,89f);
}elseif(iParam0 !=322){
func_6(iParam0, 0, 0);
}
func_4();
}

int func_4(){
if(func_5(0)){
return 0;
}
if(Global_100480.f_8){
if(Global_100480.f_10 > 0){
return 0;
}}elseif(Global_100480.f_10 > 1){
return 0;
}
Global_100480.f_10++;
return 1;
}

int func_5(bool bParam0){
if(!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78567, 0);
}


void func_6(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_10((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113386.f_10194[iParam0 /*12*/].f_5==1){
if(Global_113386.f_10194[iParam0 /*12*/].f_6==11 || Global_113386.f_10194[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113386.f_10194[iParam0 /*12*/].f_5=1;
Global_113386.f_10194[iParam0 /*12*/].f_10=iParam1;
Global_113386.f_10194[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_7();
}}


void func_7(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113122=0;
Global_113123=0;
Global_113124=0;
Global_113125=0;
Global_113126=0;
Global_113127=0;
Global_113128=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113386.f_10194.f_3853;
Global_113386.f_10194.f_3853=0f;
while (iVar0 < 321){
if(Global_113386.f_10194[iVar0 /*12*/].f_5==1){
switch (Global_113386.f_10194[iVar0 /*12*/].f_6){
case 1:
Global_113122++;
fVar1=(fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 3:
Global_113123++;
fVar2=(fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 5:
Global_113124++;
fVar3=(fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 7:
Global_113125++;
fVar4=(fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 9:
Global_113126++;
fVar5=(fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113127++;
fVar6=(fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 13:
Global_113128++;
fVar7=(fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113105 > 0){
if(Global_113122==Global_113105){
fVar1=55f;
}}
if(Global_113106 > 0){
if(Global_113123==Global_113106){
fVar2=10f;
}}
if(Global_113107 > 0){
if(Global_113124==Global_113107){
fVar3=0f;
}}
if(Global_113108 > 0){
if(Global_113125==Global_113108){
fVar4=10f;
}}
if(Global_113109 > 0){
if(((Global_113126==Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126==Global_113112){
if(!MISC::IS_BIT_SET(Global_113386.f_10194.f_3856, 14)){
if(Global_113126==Global_113109){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113110 > 0){
if(Global_113127==Global_113110){
fVar6=15f;
}}
if(Global_113111 > 0){
if(Global_113128==Global_113111){
fVar7=5f;
}}
Global_113386.f_10194.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113126 > Global_113112 || Global_113126==Global_113112){
iVar9=Global_113112;
}else{
iVar9=Global_113126;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
Global_113129=(Global_113122 * 100 / Global_113105);
Global_113131=((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
Global_113130=((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
Global_113132=((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
if(fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853)){
func_9(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78319){
if(func_8()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113120=0;
}
if(!Global_63154){
func_4();
}}}}}

int func_8(){
return Global_31959;
}

int func_9(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}


void func_10(int iParam0, bool bParam1, int iParam2){
if(iParam2==-1){
iParam2=func_11();
}
STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_11(){
return Global_1574918;
}


void func_12(){
func_29();
func_21();
func_17();
func_16();
func_15();
func_14();
Global_100478=0;
Global_94616=-1;
MISC::CLEAR_BIT(&(Global_100441.f_20), 17);
Global_100476=0;
MISC::PAUSE_DEATH_ARREST_RESTART(false);
MISC::IGNORE_NEXT_RESTART(false);
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
MISC::SET_FADE_OUT_AFTER_ARREST(true);
MISC::SET_FADE_OUT_AFTER_DEATH(true);
func_13(0);
}


void func_13(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100441.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100441.f_20), 13);
}}


void func_14(){
Global_78559={
0f, 0f, 0f 
};
Global_78562=0f;
Global_100441.f_21=145;
}


void func_15(){
StringCopy(&Global_78551, "", 16);
StringCopy(&Global_78555, "", 16);
}


void func_16(){
int iVar0;
iVar0=0;
while (iVar0 <=6){
Global_100441.f_22[iVar0]=0;
iVar0++;
}}


void func_17(){
Global_100441=13;
Global_100441.f_1=-1;
Global_100441.f_2=0;
Global_100441.f_30=0f;
MISC::CLEAR_BIT(&(Global_100441.f_20), 25);
Global_100475=0;
func_20(0);
func_19();
func_18();
Global_100441.f_18=-1;
Global_100441.f_19=-1;
}


void func_18(){
MISC::CLEAR_BIT(&(Global_100441.f_20), 22);
MISC::CLEAR_BIT(&(Global_100441.f_20), 8);
}


void func_19(){
if(Global_100441.f_16 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100441.f_16));
Global_100441.f_16=0;
}
if(Global_100441.f_17 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100441.f_17));
Global_100441.f_17=0;
}}


void func_20(int iParam0){
if(iParam0==1){
Global_43601=1;
}else{
Global_43601=0;
}}


void func_21(){
func_22(&Global_106934);
}


void func_22(var uParam0){
int iVar0;
int iVar1;
*uParam0=145;
func_28(&(uParam0->f_1));
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=0f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=145;
iVar1=0;
while (iVar1 < 3){
uParam0->f_9[iVar1]=-1;
uParam0->f_13[iVar1]=0;
uParam0->f_17[iVar1]=0;
uParam0->f_21[iVar1]=0;
func_27(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
func_27(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_26[iVar0]=-1;
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=0;
uParam0->f_616[iVar1 /*65*/].f_60=-99;
uParam0->f_616[iVar1 /*65*/].f_61=2;
uParam0->f_616[iVar1 /*65*/].f_62=0;
uParam0->f_616[iVar1 /*65*/].f_63=-99;
uParam0->f_616[iVar1 /*65*/].f_64=1;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=-1;
iVar0++;
}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
uParam0->f_2244[iVar1 /*32*/][iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
uParam0->f_2244[iVar1 /*32*/].f_5[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
uParam0->f_2244[iVar1 /*32*/].f_16[iVar0]=0;
iVar0++;
}
uParam0->f_2341[iVar1]=0;
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=0;
iVar0++;
}
iVar1++;
}
func_26(&(uParam0->f_2884));
func_24(&(uParam0->f_2890));
func_23(&(uParam0->f_2980));
}


void func_23(var uParam0){
*uParam0=-1;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}


void func_24(var uParam0){
func_25(&(uParam0->f_12));
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3={
0f, 0f, 0f 
};
uParam0->f_6=0f;
uParam0->f_8=0;
uParam0->f_9=0;
}


void func_25(var uParam0){
int iVar0;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
iVar0=0;
while (iVar0 < 49){
uParam0->f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_59[iVar0]=0;
iVar0++;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
}


void func_26(var uParam0){
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
uParam0->f_5=-1;
}


void func_27(var uParam0){
int iVar0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
iVar0=0;
while (iVar0 <=11){
uParam0->f_11[iVar0]=0;
iVar0++;
}
uParam0->f_24=0;
uParam0->f_25=0;
StringCopy(&(uParam0->f_27), "", 16);
iVar0=0;
while (iVar0 <=48){
uParam0->f_31[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
uParam0->f_81[iVar0]=0;
iVar0++;
}
uParam0->f_84=0;
uParam0->f_85=0;
uParam0->f_86=0;
uParam0->f_87=0;
uParam0->f_88=0;
uParam0->f_89=0;
uParam0->f_90=0;
uParam0->f_91=0;
uParam0->f_93=0;
uParam0->f_94=0;
uParam0->f_95=0;
uParam0->f_92=0;
}


void func_28(var uParam0){
*uParam0=-15;
}


void func_29(){
StringCopy(&Global_103942, "", 32);
func_22(&Global_103950);
}


void func_30(){
if(Global_8941[0 /*2811*/][0 /*281*/].f_259==0){
Global_8941[0 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_8941[1 /*2811*/][0 /*281*/].f_259==0){
Global_8941[1 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_8941[2 /*2811*/][0 /*281*/].f_259==0){
Global_8941[2 /*2811*/][0 /*281*/].f_259=2;
}
MISC::SET_BIT(&Global_8136, 25);
MISC::SET_BIT(&Global_8137, 11);
}


void func_31(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 <=8){
iVar1=Global_97810[iVar0];
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)){
iVar3=func_150(iVar1);
iVar2=-99;
switch (iVar3){
case 0:
iVar2=112;
break;
case 1:
iVar2=158;
break;
case 2:
iVar2=154;
break;
}
if(iVar2 !=-99){
if(func_149(iVar1, 14, iVar2)){
func_32(iVar1, 14, iVar2);
}
if(Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2]==iVar2){
Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2]=-1;
}}}
iVar0++;
}}

int func_32(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar19;
int iVar20;
var uVar21;
var uVar31;
int iVar48;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78130[1 /*14*/]={
func_84(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0)){
return 0;
}
if(!func_149(iParam0, iParam1, iParam2)){
return 0;
}
if(iParam1==12){
uVar2={
func_80(iVar0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if(uVar2[iVar1] !=-99){
func_32(iParam0, iVar1, uVar2[iVar1]);
}
iVar1++;
}}elseif(iParam1==13){
uVar21={
func_77(iVar0, iParam2) 
};
iVar19=0;
while (iVar19 <=8){
if(!func_32(iParam0, 14, uVar21[iVar19])){
iVar20=0;
}
iVar19++;
}
return iVar20;
}elseif(iParam1==14){
PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
}else{
uVar31={
func_80(iVar0, 0) 
};
Global_78130[1 /*14*/]={
func_84(iVar0, iParam1, uVar31[iParam1], -1) 
};
if(PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, func_76(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, func_76(iParam1), Global_78130[1 /*14*/].f_3) > 0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_76(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
}}
if(func_75(iParam0, iVar0, &iVar48, 0)){
func_35(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_33(iParam0, iVar0, &iVar48)){
func_35(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
return 1;
}

int func_33(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_34(iParam1);
if(Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 !=-99){
if(!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63)){
*iParam2=Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_63=-99;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_64=1;
return 1;
}}
return 0;
}

int func_34(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 0;
break;
case joaat("player_one"):
return 1;
break;
case joaat("player_two"):
return 2;
break;
default:
break;
}
return 145;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
var uVar11;
var uVar28;
var uVar38;
struct<14> Var55;
var uVar69;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
Global_78128++;
iVar5=-99;
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam5==0){
Global_78130[1 /*14*/]={
func_84(iVar10, iParam1, iParam2, -1) 
};
if(!func_74(iParam3)){
Global_78128=(Global_78128 - 1);
return 0;
}
func_67(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(iVar10==joaat("player_one")){
iVar5=func_65(iParam0, 8);
if(iVar5 !=9){
iVar5=-99;
}}
iVar6=func_65(iParam0, 9);
if(iVar10==joaat("player_zero")){
if(iVar6 >=9 && iVar6 <=14){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_one")){
if(iVar6 >=5 && iVar6 <=10){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_two")){
if((iVar6 >=9 && iVar6 <=14) || (iVar6 >=15 && iVar6 <=16)){
}else{
iVar6=-99;
}}
iVar7=func_64(iParam0, 1);
if(!func_63(iVar10, 14, iVar7, -1)){
iVar7=-99;
}
iVar8=func_64(iParam0, 0);
if(!func_62(iVar10, 14, iVar8, -1) && !func_61(iVar10, 14, iVar8, -1)){
iVar8=-99;
}
if(iVar10==joaat("player_one")){
iVar9=func_64(iParam0, 2);
}}
PED::CLEAR_ALL_PED_PROPS(iParam0);
uVar11=15;
if(iParam5==1){
uVar11={
Global_78173 
};
}else{
uVar11={
func_80(iVar10, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar11[iVar0] !=-99){
Global_78130[1 /*14*/]={
func_84(iVar10, iVar0, uVar11[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0)){
if(iVar0==13){
uVar28=9;
if(iParam5==1){
uVar28={
Global_78190 
};
}
else{
uVar28={
func_77(iVar10, uVar11[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78130[1 /*14*/]={
func_84(iVar10, 14, uVar28[iVar1], -1) 
};
func_51(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
func_67(14);
if(Global_78128==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_43(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iVar0 !=14 && iVar0 !=12){
if((iVar10==joaat("player_one") && iVar0==2) && uVar11[iVar0]==20){
func_42(iVar10, 2, 20, &iVar4);
}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_76(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_76(iVar0)));
}
else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_76(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
}
func_67(iVar0);
if(Global_78128==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_43(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
if(iVar3 !=-99){
func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78130[1 /*14*/]={
func_84(iVar10, iVar0, func_41(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 3)){
if(iVar0==2){
if(iVar10==joaat("player_one")){
if(func_75(iParam0, iVar10, &iVar4, 1)){
func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}else{
uVar38={
func_80(iVar10, 0) 
};
func_35(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
iVar0++;
}
if(iParam7==1){
Var55={
func_84(iVar10, 8, iVar5, -1) 
};
if(iVar5 !=-99){
if(func_39(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)){
func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var55={
func_84(iVar10, 9, iVar6, -1) 
};
if(iVar6 !=-99){
if(func_39(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)){
func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var55={
func_84(iVar10, 14, iVar7, -1) 
};
if(iVar7 !=-99){
if(func_39(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)){
func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var55={
func_84(iVar10, 14, iVar8, -1) 
};
if(iVar8 !=-99){
if(func_39(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)){
func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var55={
func_84(iVar10, 14, iVar9, -1) 
};
if(iVar9 !=-99){
if(func_39(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)){
func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==13){
uVar69={
func_77(iVar10, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78130[1 /*14*/]={
func_84(iVar10, 14, uVar69[iVar1], -1) 
};
func_51(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
func_67(14);
if(Global_78128==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_43(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iParam1==14){
func_51(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
func_67(iParam1);
if(Global_78128==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}else{
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_76(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_76(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_76(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
}
if(Global_78128==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
if(iParam6==0){
func_36(iVar10, iParam1, iParam2);
}}
if(Global_78128==1){
if(func_75(iParam0, iVar10, &iVar4, 0)){
func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_33(iParam0, iVar10, &iVar4)){
func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
Global_78128=(Global_78128 - 1);
return 1;
}


void func_36(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam0==joaat("player_zero")){
iVar0=5;
}elseif(iParam0==joaat("player_one")){
iVar0=2;
}elseif(iParam0==joaat("player_two")){
iVar0=4;
}
if(func_38(iParam0, 12, iVar0)){
if(func_37(iParam0, iParam1, iParam2)){
iVar1=func_34(iParam0);
if(iParam1==3){
Global_113386.f_2363.f_539.f_196[iVar1]=iParam2;
}elseif(iParam1==4){
Global_113386.f_2363.f_539.f_200[iVar1]=iParam2;
}}}}

int func_37(int iParam0, int iParam1, int iParam2){
if(iParam0==joaat("player_zero")){
if(iParam1==4){
if(iParam2 >=47 && iParam2 <=54){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=77 && iParam2 <=84){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==4){
if(iParam2 >=14 && iParam2 <=21){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=41 && iParam2 <=56){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==4){
if(iParam2 >=18 && iParam2 <=29){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=54 && iParam2 <=69){
return 1;
}}}
return 0;
}


bool func_38(int iParam0, int iParam1, int iParam2){
Global_78130[1 /*14*/]={
func_84(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 2);
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
var uVar0;
int iVar10;
if((*uParam4)[iParam2]==iParam3){
return 1;
}
if(((*uParam4)[iParam2]==-99 && iParam2 !=14) && iParam2 !=13){
return 1;
}
if(iParam2==13 || (iParam2==14 && (*uParam4)[13]==31)){
if((((((((iParam3==0 || iParam3==1) || iParam3==2) || iParam3==3) || iParam3==4) || iParam3==5) || iParam3==6) || iParam3==7) || iParam3==8){
return 1;
}}
if(iParam3==-99 || uParam5->f_1==-1){
return 1;
}
if(iParam2==14){
uVar0={
func_77(iParam0, (*uParam4)[13]) 
};
iVar10=0;
while (iVar10 <=8){
if(uVar0[iVar10]==iParam3){
return 1;
}
iVar10++;
}}
if(func_40(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_63(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_62(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=0){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_61(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_63(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_62(iParam0, iParam2, iParam3, -1)){
if((((iParam1==3 || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
if(iParam2==8){
if(iParam3==9){
if(iParam1==8 || iParam1==21){
return 1;
}}else{
return 0;
}}else{
return 0;
}}
if(iParam2==8){
if((*uParam4)[8] !=26){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=5 && iParam3 <=10){
return 0;
}}}elseif(iParam2==14){
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=26 && iParam3 <=39){
return 0;
}}}
return 1;
}elseif(func_61(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==3 || iParam1==3) || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
return 0;
}
return 1;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==2){
if(iParam2==14 && iParam3==0){
return 1;
}}
if(func_63(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_62(iParam0, iParam2, iParam3, -1)){
if(((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==45) || iParam1==12){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=15){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_61(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_40(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==15){
return 1;
}
break;
case 9:
if(iParam2==6){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==4){
return 1;
}
break;
}
break;
}
return 0;
}

int func_41(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_149(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_149(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_64(iParam0, iParam2);
}}else{
return func_65(iParam0, iParam1);
}}
return -99;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==7 || iParam2==23){
*iParam3=1;
}
break;
case 9:
if(iParam2==8 || (iParam2 >=9 && iParam2 <=14)){
*iParam3=1;
}
break;
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=1;
}
break;
case 14:
if((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=40 && iParam2 <=41)) || iParam2==46){
*iParam3=1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 2:
if(iParam2==20){
*iParam3=20;
}
break;
case 8:
if(iParam2==4){
*iParam3=19;
}
break;
case 9:
if(iParam2 >=5 && iParam2 <=10){
*iParam3=19;
}
break;
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=19;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=19;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==7){
*iParam3=2;
}
break;
case 9:
if((iParam2 >=9 && iParam2 <=14) || (iParam2 >=15 && iParam2 <=16)){
*iParam3=2;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=2;
}
break;
case 14:
if((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=56 && iParam2 <=57)) || iParam2==62){
*iParam3=2;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_34(iParam0);
Global_113386.f_2363.f_539[iVar0 /*65*/].f_60=iParam2;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
iVar0=-99;
if(iParam4==0){
switch (iParam2){
case 2:
iVar1=func_65(iParam0, 1);
iVar0=func_50(iParam1, iParam3, iVar1);
break;
case 1:
iVar2=func_65(iParam0, 2);
iVar0=func_50(iParam1, iVar2, iParam3);
break;
}}elseif(iParam4==2){
func_42(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==1){
func_49(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==6){
if(iParam2==4){
if(func_48(iParam1, iParam3, &iVar0)){
}}}else{
switch (iParam1){
case joaat("player_zero"):
switch (iParam4){
case 3:
switch (iParam2){
case 10:
switch (iParam3){
case 36:
iVar0=17;
break;
case 37:
iVar0=17;
break;
case 38:
iVar0=18;
break;
case 39:
iVar0=18;
break;
case 40:
iVar0=19;
break;
case 41:
iVar0=19;
break;
case 42:
iVar0=20;
break;
case 43:
iVar0=20;
break;
}
break;
case 11:
if(iParam3 >=2 && iParam3 <=7){
if(!func_47(iParam0, 3, 44, 59)){
iVar0=44;
}}elseif(((iParam3 >=8 && iParam3 <=17) || (iParam3 >=18 && iParam3 <=27)) || (iParam3 >=28 && iParam3 <=43)){
if(!func_47(iParam0, 3, 135, 150)){
iVar0=func_46(iParam1, 3, 135, 150);
}}
break;
}
break;
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 63:
iVar0=4;
break;
case 61:
iVar0=3;
break;
case 16:
iVar0=1;
break;
case 114:
iVar0=15;
break;
case 115:
iVar0=17;
break;
case 116:
iVar0=16;
break;
case 117:
iVar0=18;
break;
case 118:
iVar0=20;
break;
case 119:
iVar0=19;
break;
case 125:
iVar0=21;
break;
case 120:
iVar0=22;
break;
case 124:
iVar0=23;
break;
case 126:
iVar0=24;
break;
case 121:
iVar0=25;
break;
case 127:
iVar0=26;
break;
case 128:
iVar0=27;
break;
case 85:
iVar0=6;
break;
case 77:
iVar0=7;
break;
case 78:
iVar0=8;
break;
case joaat("mpsv_lp0_31"):
iVar0=9;
break;
case 80:
iVar0=10;
break;
case 81:
iVar0=11;
break;
case 82:
iVar0=12;
break;
case 83:
iVar0=13;
break;
case 84:
iVar0=14;
break;
case 21:
iVar0=31;
break;
case 22:
iVar0=30;
break;
case 23:
iVar0=29;
break;
case 24:
iVar0=28;
break;
case 25:
iVar0=33;
break;
case 26:
iVar0=35;
break;
case 27:
iVar0=34;
break;
case 28:
iVar0=32;
break;
default:
if(iParam3 >=17 && iParam3 <=20){
}
else{
iVar0=0;
}
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 11:
if(iParam2==3){
if((iParam3 >=44 && iParam3 <=59) || (iParam3 >=135 && iParam3 <=150)){
}else{
iVar0=0;
}
}
elseif(iParam2==10){
if(iParam3 >=36 && iParam3 <=43){
iVar0=0;
}
}
break;
}
break;
case joaat("player_one"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 17:
iVar0=2;
break;
case 90:
iVar0=1;
break;
case 268:
iVar0=3;
break;
case 269:
iVar0=5;
break;
case 270:
iVar0=4;
break;
case 271:
iVar0=6;
break;
case 272:
iVar0=8;
break;
case 273:
iVar0=7;
break;
case 279:
iVar0=9;
break;
case 274:
iVar0=10;
break;
case 278:
iVar0=11;
break;
case 280:
iVar0=12;
break;
case 275:
iVar0=13;
break;
case 281:
iVar0=14;
break;
case 282:
iVar0=15;
break;
case 107:
iVar0=16;
break;
case 108:
iVar0=17;
break;
case 109:
iVar0=18;
break;
case 110:
iVar0=19;
break;
case 111:
iVar0=20;
break;
case 112:
iVar0=21;
break;
case 113:
iVar0=22;
break;
case 114:
iVar0=23;
break;
case 115:
iVar0=24;
break;
case 116:
iVar0=25;
break;
case 117:
iVar0=52;
break;
case 118:
iVar0=27;
break;
case 119:
iVar0=28;
break;
case 120:
iVar0=29;
break;
case 121:
iVar0=30;
break;
case 122:
iVar0=31;
break;
case 296:
iVar0=32;
break;
case 297:
iVar0=33;
break;
case 298:
iVar0=34;
break;
case 299:
iVar0=35;
break;
case 300:
iVar0=36;
break;
case 301:
iVar0=37;
break;
case 302:
iVar0=38;
break;
case 309:
iVar0=39;
break;
case 310:
iVar0=40;
break;
case 311:
iVar0=41;
break;
case 312:
iVar0=42;
break;
case 313:
iVar0=43;
break;
case 314:
iVar0=44;
break;
case 315:
iVar0=45;
break;
case 316:
iVar0=46;
break;
case 317:
iVar0=51;
break;
default:
iVar0=0;
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 3:
switch (iParam2){
case 11:
if(iParam3 >=47 && iParam3 <=62){
if(!func_47(iParam0, 3, 209, 222)){
iVar0=func_46(iParam1, 3, 209, 222);
}}elseif((iParam3 >=1 && iParam3 <=4) || (iParam3 >=5 && iParam3 <=8)){
if(!func_47(iParam0, 3, 243, 258)){
if(iParam3==1 || iParam3==5){
iVar0=func_46(iParam1, 3, 243, 246);
}
elseif(iParam3==2 || iParam3==6){
iVar0=func_46(iParam1, 3, 247, 250);
}
elseif(iParam3==3 || iParam3==7){
iVar0=func_46(iParam1, 3, 251, 254);
}
elseif(iParam3==4 || iParam3==8){
iVar0=func_46(iParam1, 3, 255, 258);
}
}}elseif(iParam3==41 || iParam3==42){
if(!func_47(iParam0, 3, 176, 191) && !func_47(iParam0, 3, 227, 242)){
iVar0=func_46(iParam1, 3, 176, 191);
}}
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
iVar5=iParam3;
iVar4=func_65(iParam0, 3);
}elseif(iParam2==3){
iVar4=iParam3;
iVar5=func_65(iParam0, 11);
iVar5=func_45(iParam1, iVar4, iVar5, 0);
}
iVar3=func_65(iParam0, 8);
if(((iVar5 >=5 && iVar5 <=8) || (iVar5 >=25 && iVar5 <=40)) || (iVar5 >=42 && iVar5 <=43)){
if(!func_44(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)){
if(iVar6 !=-99){
iVar0=iVar6;
}}}elseif(((iVar3 >=27 && iVar3 <=42) || (iVar3 >=43 && iVar3 <=58)) || (iVar3 >=59 && iVar3 <=74)){
iVar0=26;
}
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=209 && iParam3 <=222){
}elseif(((iParam3 >=176 && iParam3 <=191) || (iParam3 >=227 && iParam3 <=242)) || (iParam3 >=243 && iParam3 <=258)){
iVar7=func_65(iParam0, 8);
iVar8=func_65(iParam0, 11);
if(((iVar7 >=27 && iVar7 <=42) || (iVar7 >=43 && iVar7 <=58)) || (iVar7 >=59 && iVar7 <=74)){
iVar0=func_45(iParam1, iParam3, iVar8, 0);
}else{
iVar0=func_45(iParam1, iParam3, iVar8, 1);
}}elseif(iParam3 >=41 && iParam3 <=56){
iVar0=45;
}elseif(iParam3 >=223 && iParam3 <=226){
iVar0=44;
}else{
iVar0=0;
}
}
elseif(iParam2==8){
if(((iParam3 >=27 && iParam3 <=42) || (iParam3 >=43 && iParam3 <=58)) || (iParam3 >=59 && iParam3 <=74)){
iVar9=func_65(iParam0, 11);
iVar0=func_45(iParam1, -99, iVar9, 0);
}
}
break;
}
break;
case joaat("player_two"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 50:
iVar0=3;
break;
case 81:
iVar0=5;
break;
case 82:
iVar0=6;
break;
case 83:
iVar0=7;
break;
case 84:
iVar0=10;
break;
case 85:
iVar0=9;
break;
case 86:
iVar0=8;
break;
case 92:
iVar0=22;
break;
case 87:
iVar0=23;
break;
case 91:
iVar0=24;
break;
case 93:
iVar0=25;
break;
case 88:
iVar0=26;
break;
case 94:
iVar0=27;
break;
case 120:
iVar0=11;
break;
case 121:
iVar0=13;
break;
case 122:
iVar0=14;
break;
case 124:
iVar0=12;
break;
case 126:
iVar0=18;
break;
case 128:
iVar0=17;
break;
case 130:
iVar0=19;
break;
case 131:
iVar0=16;
break;
case 134:
iVar0=15;
break;
case 135:
iVar0=20;
break;
default:
iVar0=0;
break;
}
break;
}
break;
}
break;
}}
return iVar0;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4){
int iVar0;
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
*uParam4=0;
if(iParam1 >=27 && iParam1 <=42){
if(iParam2 !=-99){
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
}else{
if(iParam2 >=42 && iParam2 <=43){
if(iParam3 >=176 && iParam3 <=191){
iVar0=(iParam1 - 27);
*uParam4=(59 + iVar0);
}elseif(iParam3 >=227 && iParam3 <=242){
iVar0=(iParam1 - 27);
*uParam4=(43 + iVar0);
}
}
return 0;
}}
if(iParam3 !=-99){
if(((iParam3 >=227 && iParam3 <=242) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=243 && iParam3 <=258)){
}else{
return 0;
}}}elseif(iParam1 >=43 && iParam1 <=58){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 43);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242){
}else{
if(iParam3 >=176 && iParam3 <=191){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 43);
*uParam4=(59 + iVar0);
}
}
return 0;
}}}elseif(iParam1 >=59 && iParam1 <=74){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=176 && iParam3 <=191){
}else{
if(iParam3 >=227 && iParam3 <=242){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 59);
*uParam4=(43 + iVar0);
}
}
elseif((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}}
break;
case joaat("player_two"):
if(iParam1==12){
if(iParam3 !=241){
return 0;
}}
break;
}
return 1;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam1 >=243 && iParam1 <=246){
if(iParam3==1){
return 1;
}else{
return 5;
}}elseif(iParam1 >=247 && iParam1 <=250){
if(iParam3==1){
return 2;
}else{
return 6;
}}elseif(iParam1 >=251 && iParam1 <=254){
if(iParam3==1){
return 3;
}else{
return 7;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif((iParam1 >=176 && iParam1 <=191) || (iParam1 >=227 && iParam1 <=242)){
if(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
if(iParam3==1){
iParam2=func_46(iParam0, 11, 9, 24);
}else{
iParam2=func_46(iParam0, 11, 25, 40);
}
if(iParam2==-99){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
return iParam2;
}}}elseif(iParam2 >=1 && iParam2 <=4){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 1);
iParam2=(5 + iVar0);
return iParam2;
}}elseif(iParam2 >=5 && iParam2 <=8){
if(iParam3==1){
iVar0=(iParam2 - 5);
iParam2=(1 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}
return -99;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=iParam2;
while (iVar0 <=(iParam3 - 1)){
iVar1=iVar0;
if(func_38(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar0++;
}
return -99;
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_65(iParam0, iParam1);
if(iVar0 >=iParam2 && iVar0 <=iParam3){
return 1;
}
return 0;
}

int func_48(int iParam0, int iParam1, int iParam2){
*iParam2=-99;
switch (iParam0){
case joaat("player_zero"):
if((((((((((((((((((iParam1==16 || iParam1==17) || iParam1==21) || iParam1==22) || iParam1==32) || (iParam1 >=34 && iParam1 <=39)) || (iParam1 >=41 && iParam1 <=45)) || iParam1==46) || (iParam1 >=47 && iParam1 <=54)) || (iParam1 >=55 && iParam1 <=70)) || (iParam1 >=72 && iParam1 <=79)) || iParam1==80) || (iParam1 >=81 && iParam1 <=83)) || (iParam1 >=84 && iParam1 <=87)) || iParam1==88) || (iParam1 >=89 && iParam1 <=91)) || iParam1==95) || (iParam1 >=96 && iParam1 <=111)) || iParam1==112){
*iParam2=6;
return 1;
}
break;
case joaat("player_one"):
if((((((iParam1==12 || (iParam1 >=14 && iParam1 <=21)) || iParam1==32) || iParam1==52) || (iParam1 >=69 && iParam1 <=70)) || iParam1==71) || (iParam1 >=72 && iParam1 <=77)){
*iParam2=17;
return 1;
}
break;
case joaat("player_two"):
if(((((((((((((((iParam1==4 || iParam1==5) || iParam1==6) || iParam1==7) || iParam1==14) || (iParam1 >=18 && iParam1 <=29)) || iParam1==31) || iParam1==32) || iParam1==33) || iParam1==34) || (iParam1 >=35 && iParam1 <=42)) || (iParam1 >=43 && iParam1 <=53)) || (iParam1 >=54 && iParam1 <=61)) || (iParam1 >=71 && iParam1 <=80)) || (iParam1 >=81 && iParam1 <=90)) || (iParam1 >=94 && iParam1 <=103)){
*iParam2=8;
return 1;
}
break;
}
return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=38 && iParam2 <=39)) || (iParam2 >=40 && iParam2 <=41)) || (iParam2 >=42 && iParam2 <=44)){
*iParam3=0;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=0;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=0;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 9:
if(iParam2 >=15 && iParam2 <=16){
*iParam3=0;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=54 && iParam2 <=55)) || (iParam2 >=56 && iParam2 <=57)) || (iParam2 >=58 && iParam2 <=60)){
*iParam3=0;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_34(iParam0);
Global_113386.f_2363.f_539[iVar0 /*65*/].f_63=iParam2;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_50(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==1){
if(iParam2==0){
return 1;
}elseif(iParam2==4){
return 5;
}else{
return 3;
}}elseif(iParam2==0){
return 0;
}elseif(iParam2==4){
return 4;
}else{
return 2;
}
break;
case joaat("player_one"):
if(iParam1 >=0 && iParam1 <=15){
if(iParam2==0){
return 0;
}else{
return 3;
}}elseif(iParam1 >=16 && iParam1 <=17){
if(iParam2==0){
return 2;
}else{
return 5;
}}elseif(iParam1==18){
if(iParam2==0){
return 6;
}else{
return 7;
}}elseif(iParam1==19){
if(iParam2==0){
return 1;
}else{
return 4;
}}elseif(iParam2==0){
return 1;
}else{
return 4;
}
break;
case joaat("player_two"):
if(iParam1==2){
if(iParam2==0){
return 2;
}else{
return 3;
}}elseif(iParam1==3){
if(iParam2==0){
return 4;
}else{
return 6;
}}elseif(iParam1==8){
return 5;
}elseif(iParam2==0){
return 0;
}else{
return 1;
}
break;
}
return -99;
}


void func_51(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam2==-1){
PED::CLEAR_PED_PROP(iParam0, iParam1);
if(iParam1==0){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
}}else{
PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
if(iParam1==0){
iVar0=func_56(iParam0, iParam2, iParam3, iParam1);
if(func_52(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
}else{
PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
}}}}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 3);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1))){
return 1;
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 4);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1))){
return 1;
}
break;
}
break;
}
return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar17;
int iVar18;
struct<2> Var19;
int iVar36;
int iVar37;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar17=(iParam1 - func_55(iParam0));
if(iVar17 < 0){
return -1;
}
iVar18=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
if(iVar18 <=iVar17){
return -1;
}
FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
return Var0.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var19);
iVar36=(iParam1 - func_54(iParam0, func_76(iParam2)));
if(iVar36 < 0){
return -1;
}
if((iParam0==Global_78252.f_26[iParam2] && iParam1==Global_78252[iParam2]) && Global_78252.f_13[iParam2] !=0){
return Global_78252.f_13[iParam2];
}
iVar37=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_76(iParam2));
if(iVar37 <=iVar36){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
Global_78252.f_13[iParam2]=Var19.f_1;
Global_78252[iParam2]=iParam1;
Global_78252.f_26[iParam2]=iParam0;
return Var19.f_1;
}
return -1;
}

int func_54(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_55(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_60(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_58(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_58(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
}}
iVar2=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
iVar4=0;
while (iVar4 <=(iVar2 - 1)){
iVar6=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
if(iVar4 !=iParam1){
iVar3=(iVar3 + iVar6);
}else{
iVar5=0;
while (iVar5 <=(iVar6 - 1)){
if(iVar4==iParam1 && iVar5==iParam2){
iVar3=(iVar3 + func_57(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_60(iParam3);
}

int func_57(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 58;
break;
case 2:
return 112;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 82;
break;
case 2:
return 158;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 88;
break;
case 2:
return 154;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
}
return -99;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
if(iParam2==12){
iVar16=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
iVar15=0;
while (iVar15 < iVar16){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &Var0);
if(Var0.f_1==iParam1){
return (func_59(iParam0) + iVar15);
}
iVar15++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
iVar17=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar17 !=-1){
return (func_55(iParam0) + iVar17);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_76(iParam2));
iVar18=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar18 !=-1){
return (func_54(iParam0, func_76(iParam2)) + iVar18);
}}
return -99;
}

int func_59(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}

int func_60(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
}
return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 14:
if(iParam2==16){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 14:
if((iParam2==40 || (iParam2 >=41 && iParam2 <=56)) || (iParam2 >=64 && iParam2 <=79)){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 14:
if((iParam2 >=17 && iParam2 <=18) || (iParam2 >=71 && iParam2 <=86)){
return 1;
}
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_53(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_53(iParam0, iParam2, 1, 3), -1842686353, 0));
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_53(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_53(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam0==joaat("player_zero")){
if(iParam1==6){
if(iParam2==10){
return 1;
}}elseif(iParam1==8){
if((iParam2==9 || iParam2==7) || iParam2==23){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=9 && iParam2 <=14){
return 1;
}}elseif(iParam1==14){
if((((((((((((((((iParam2==12 || iParam2==59) || iParam2==60) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37) || iParam2==38) || iParam2==39) || iParam2==40) || iParam2==41) || (iParam2 >=42 && iParam2 <=44)) || iParam2==54) || iParam2==55){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==2){
if(iParam2==20){
return 1;
}}elseif(iParam1==8){
if((iParam2==3 || iParam2==5) || iParam2==9){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=5 && iParam2 <=10){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==82 || iParam2==10) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || (iParam2 >=37 && iParam2 <=39)){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==8){
if(iParam2==14 || iParam2==7){
return 1;
}}elseif(iParam1==9){
if(((iParam2==8 || (iParam2 >=9 && iParam2 <=14)) || iParam2==15) || iParam2==16){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==88 || iParam2==12) || iParam2==47) || iParam2==48) || iParam2==49) || iParam2==50) || iParam2==51) || iParam2==52) || iParam2==53) || iParam2==54) || iParam2==55) || iParam2==56) || iParam2==57) || (iParam2 >=58 && iParam2 <=60)){
return 1;
}}}elseif(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 1, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0)){
return 0;
}}
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==14){
if((((((((iParam2==58 || iParam2==61) || (iParam2 >=62 && iParam2 <=69)) || (iParam2 >=70 && iParam2 <=79)) || (iParam2 >=80 && iParam2 <=89)) || iParam2==90) || (iParam2 >=91 && iParam2 <=102)) || (iParam2 >=103 && iParam2 <=110)) || iParam2==111){
return 1;
}}
break;
case joaat("player_one"):
if(iParam1==14){
if(((((((((((iParam2 >=83 && iParam2 <=92) || iParam2==93) || iParam2==94) || (iParam2 >=95 && iParam2 <=101)) || (iParam2 >=102 && iParam2 <=111)) || (iParam2 >=112 && iParam2 <=121)) || (iParam2 >=122 && iParam2 <=131)) || (iParam2 >=132 && iParam2 <=139)) || (iParam2 >=140 && iParam2 <=149)) || (iParam2 >=150 && iParam2 <=156)) || iParam2==157){
return 1;
}}
break;
case joaat("player_two"):
if(iParam1==14){
if(((((((((iParam2==89 || (iParam2 >=90 && iParam2 <=99)) || (iParam2 >=100 && iParam2 <=109)) || iParam2==111) || iParam2==112) || (iParam2 >=113 && iParam2 <=122)) || (iParam2 >=123 && iParam2 <=132)) || (iParam2 >=133 && iParam2 <=142)) || (iParam2 >=143 && iParam2 <=152)) || iParam2==153){
return 1;
}}
break;
case joaat("mp_m_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 3);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_53(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
}}
break;
}
return 0;
}

int func_64(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1);
if(iVar0==-1){
return func_60(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_56(iParam0, iVar0, iVar1, iParam1);
}

int func_65(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_76(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_66(iParam0, iVar1, iVar2, iParam1);
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_76(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}


void func_67(int iParam0){
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 6)){
func_73(iParam0, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 1, 0);
}
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_68(Global_2883588, 2, 1, 1, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_68(Global_2883588, 2, 1, 1, -1);
}else{
func_68(Global_2883588, 2, 1, 1, -1);
}}}


void func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
iVar0=Global_78127;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_72(iParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3)){
iVar3=func_71(iVar2, iVar0, 0);
MISC::SET_BIT(&iVar3, bVar1);
func_69(iVar2, iVar3, iVar0, 1, 0);
}}


void func_69(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2826809[iParam0 /*3*/][func_70(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
}}

int func_70(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_11();
if(iVar1 > -1){
Global_2826521=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2826521=1;
}}
return iVar0;
}

int func_71(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=13122){
if(iParam2==0){
}
iVar0=Global_2826809[iParam0 /*3*/][func_70(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


bool func_72(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=13122;
if((bParam4 && Global_4538418) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4538418){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case joaat("mpsv_lp0_31"):
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
}
break;
case 2:
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case joaat("mpsv_lp0_31"):
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=9473;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=13122;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_74(int iParam0){
if(!MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam0==1){
if(!MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 2)){
return 0;
}}
return 1;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_34(iParam1);
if(Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 !=-99){
if(!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3==1){
*iParam2=Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_60=-99;
Global_113386.f_2363.f_539[iVar0 /*65*/].f_61=2;
return 1;
}}
return 0;
}

int func_76(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


struct<10> func_77(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_79(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_79(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_79(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_79(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_79(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_79(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_79(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_79(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_79(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_79(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_79(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_78(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_79(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_79(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_79(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_79(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_79(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_79(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_79(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_79(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_79(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_79(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_78(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_79(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_79(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_79(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_79(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_79(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_79(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_79(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_79(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_79(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_79(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_78(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_79(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_79(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_79(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_79(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_79(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_79(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_79(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_79(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_79(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_79(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_79(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_79(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_79(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_79(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_79(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_79(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_79(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_79(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_79(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_79(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_79(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_79(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_79(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_79(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_79(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_79(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_78(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_79(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_79(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_79(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_79(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_79(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_79(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_79(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_79(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_79(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_79(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_79(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_79(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_79(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_79(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_79(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_79(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_79(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_79(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_79(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_79(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_79(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_79(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_79(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_79(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_79(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_78(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_78(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var16;
int iVar19;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar19=0;
while (iVar19 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar19, &Var16) && Var16.f_2 !=-1){
if((Var16.f_0 !=0 && Var16.f_0 !=-1) && Var16.f_0 !=joaat("0")){
(*iParam0)[Var16.f_2]=func_58(iParam1, Var16.f_0, 14, iVar0);
}elseif(Var16.f_1 !=-1){
(*iParam0)[Var16.f_2]=Var16.f_1;
}}
iVar19++;
}}}}


void func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_80(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113386.f_9085.f_99.f_58[120]){
func_83(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_83(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_83(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_83(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_83(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_83(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_83(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[0], Global_113386.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_83(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_83(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_83(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_83(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_83(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_83(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_83(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_83(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_83(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_83(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_83(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_83(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_83(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_83(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_83(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_83(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_83(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_83(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_83(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_83(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_83(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_83(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_83(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_83(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_83(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_83(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_83(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_83(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_83(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_83(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_83(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_83(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_83(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_83(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_83(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_83(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_83(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_83(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_83(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_83(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_83(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_83(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_83(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_83(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_83(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_83(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_83(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_81(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_83(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_83(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_83(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[1], Global_113386.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_83(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_83(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_83(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_83(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_83(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_83(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_83(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_83(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_83(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_83(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_83(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_83(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_83(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_83(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_83(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_83(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_83(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_83(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_83(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_83(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_83(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_83(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_83(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_83(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_83(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_83(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_83(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_83(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_83(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_83(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_83(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_83(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_83(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_83(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_83(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_83(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_83(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_83(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_83(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_83(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_83(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_83(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_83(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_83(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_81(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_83(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_83(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_83(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_83(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_83(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[2], Global_113386.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_83(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_83(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_83(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_83(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_83(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_83(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_83(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_83(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_83(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_83(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_83(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_83(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_83(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_83(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_83(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_83(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_83(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_83(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_83(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_83(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_83(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_83(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_83(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_83(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_83(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_83(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_83(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_83(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_83(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_83(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_83(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_83(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_83(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_83(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_83(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_83(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_83(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_83(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_83(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_83(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_83(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_83(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_83(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_81(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_83(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_83(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_83(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_83(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_83(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_83(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_83(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_83(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_83(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_83(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_83(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_83(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_83(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_83(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_83(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_83(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_83(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_83(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_83(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_83(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_83(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_83(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_83(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_83(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_83(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_83(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_81(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_83(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_83(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_83(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_83(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_83(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_83(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_83(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_83(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_83(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_83(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_83(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_83(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_83(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_83(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_83(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_83(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_83(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_83(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_83(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_83(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_83(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_83(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_83(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_83(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_83(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_83(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_83(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_83(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_81(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_81(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var16;
struct<2> Var19;
int iVar36;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar36=0;
while (iVar36 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar36, &Var16)){
if((Var16.f_0 !=0 && Var16.f_0 !=-1) && Var16.f_0 !=joaat("0")){
if(Var16.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var19);
FILES::GET_SHOP_PED_COMPONENT(Var16.f_0, &Var19);
if(Var16.f_0 !=Var19.f_1){
uParam0->f_16=1;
}}
if(Var16.f_2==10 && uParam0->f_16){
(*uParam0)[func_82(Var16.f_2)]=Var16.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_82(Var16.f_2)]=func_58(iParam1, Var16.f_0, func_82(Var16.f_2), iVar0);
}}elseif(Var16.f_1 !=-1){
(*uParam0)[func_82(Var16.f_2)]=Var16.f_1;
}}
iVar36++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_82(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_83(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}
struct<14> func_84(int iParam0, int iParam1, int iParam2, int iParam3){
func_148();
if(iParam0==joaat("player_zero")){
func_130(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_111(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_85(iParam1, iParam2);
}
return Global_78130[0 /*14*/];
}


void func_85(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_110(iParam1);
break;
case 2:
func_109(iParam1);
break;
case 3:
func_106(iParam1);
break;
case 4:
func_105(iParam1);
break;
case 6:
func_104(iParam1);
break;
case 5:
func_103(iParam1);
break;
case 8:
func_102(iParam1);
break;
case 9:
func_101(iParam1);
break;
case 10:
func_100(iParam1);
break;
case 1:
func_99(iParam1);
break;
case 7:
func_98(iParam1);
break;
case 11:
func_97(iParam1);
break;
case 12:
func_96(iParam1);
break;
case 13:
func_95(iParam1);
break;
case 14:
func_86(iParam1);
break;
}}


void func_86(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 154:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
case 88:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P2_E1", 16);
iVar6=1;
iVar7=0;
iVar1=45;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P2_E2", 16);
iVar6=2;
iVar7=0;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P2_E2_1", 16);
iVar6=2;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P2_E2_2", 16);
iVar6=2;
iVar7=2;
iVar1=55;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P2_E2_3", 16);
iVar6=2;
iVar7=3;
iVar1=52;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P2_E2_4", 16);
iVar6=2;
iVar7=4;
iVar1=54;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P2_E2_5", 16);
iVar6=2;
iVar7=5;
iVar1=54;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P2_E2_6", 16);
iVar6=2;
iVar7=6;
iVar1=55;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P2_E2_7", 16);
iVar6=2;
iVar7=7;
iVar1=55;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P2_E2_8", 16);
iVar6=2;
iVar7=8;
iVar1=58;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P2_E2_9", 16);
iVar6=2;
iVar7=9;
iVar1=58;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P2_E3", 16);
iVar6=3;
iVar7=0;
iVar1=75;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P2_E3_1", 16);
iVar6=3;
iVar7=1;
iVar1=75;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P2_E3_2", 16);
iVar6=3;
iVar7=2;
iVar1=75;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P2_E3_3", 16);
iVar6=3;
iVar7=3;
iVar1=75;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P2_E3_4", 16);
iVar6=3;
iVar7=4;
iVar1=75;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P2_E3_5", 16);
iVar6=3;
iVar7=5;
iVar1=75;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P2_E3_6", 16);
iVar6=3;
iVar7=6;
iVar1=75;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P2_E3_7", 16);
iVar6=3;
iVar7=7;
iVar1=75;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P2_E3_8", 16);
iVar6=3;
iVar7=8;
iVar1=75;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P2_E3_9", 16);
iVar6=3;
iVar7=9;
iVar1=75;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
iVar8=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P2_E7_0", 16);
iVar6=7;
iVar7=0;
iVar1=60;
iVar8=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P2_E7_1", 16);
iVar6=7;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P2_E7_2", 16);
iVar6=7;
iVar7=2;
iVar1=50;
iVar8=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P2_E7_3", 16);
iVar6=7;
iVar7=3;
iVar1=59;
iVar8=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P2_E7_4", 16);
iVar6=7;
iVar7=4;
iVar1=55;
iVar8=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P2_E7_5", 16);
iVar6=7;
iVar7=5;
iVar1=55;
iVar8=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P2_E7_6", 16);
iVar6=7;
iVar7=6;
iVar1=65;
iVar8=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P2_E7_7", 16);
iVar6=7;
iVar7=7;
iVar1=59;
iVar8=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P2_E7_8", 16);
iVar6=7;
iVar7=8;
iVar1=79;
iVar8=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P2_E7_9", 16);
iVar6=7;
iVar7=9;
iVar1=79;
iVar8=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P2_E8_0", 16);
iVar6=8;
iVar7=0;
iVar1=150;
iVar8=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P2_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=150;
iVar8=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P2_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=170;
iVar8=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P2_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=175;
iVar8=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P2_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=180;
iVar8=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P2_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=185;
iVar8=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P2_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=189;
iVar8=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P2_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=195;
iVar8=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P2_E8_8", 16);
iVar6=8;
iVar7=8;
iVar1=210;
iVar8=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P2_E8_9", 16);
iVar6=8;
iVar7=9;
iVar1=215;
iVar8=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P2_E9_0", 16);
iVar6=9;
iVar7=0;
iVar1=165;
iVar8=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P2_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=165;
iVar8=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P2_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=169;
iVar8=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P2_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=169;
iVar8=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P2_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=175;
iVar8=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P2_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=175;
iVar8=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P2_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=175;
iVar8=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P2_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=189;
iVar8=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P2_E9_8", 16);
iVar6=9;
iVar7=8;
iVar1=195;
iVar8=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P2_E9_9", 16);
iVar6=9;
iVar7=9;
iVar1=195;
iVar8=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P2_E10_0", 16);
iVar6=10;
iVar7=0;
iVar1=49;
iVar8=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P2_E10_1", 16);
iVar6=10;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P2_E10_2", 16);
iVar6=10;
iVar7=2;
iVar1=52;
iVar8=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P2_E10_3", 16);
iVar6=10;
iVar7=3;
iVar1=55;
iVar8=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P2_E10_4", 16);
iVar6=10;
iVar7=4;
iVar1=60;
iVar8=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P2_E10_5", 16);
iVar6=10;
iVar7=5;
iVar1=58;
iVar8=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P2_E10_6", 16);
iVar6=10;
iVar7=6;
iVar1=60;
iVar8=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P2_E10_7", 16);
iVar6=10;
iVar7=7;
iVar1=63;
iVar8=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P2_E10_8", 16);
iVar6=10;
iVar7=8;
iVar1=65;
iVar8=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P2_E10_9", 16);
iVar6=10;
iVar7=9;
iVar1=68;
iVar8=10;
break;
case 153:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P2_H2_0", 16);
iVar6=2;
iVar7=0;
iVar1=320;
iVar8=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "PROPS_P2_H7_0", 16);
iVar6=7;
iVar7=0;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "PROPS_P2_H7_1", 16);
iVar6=7;
iVar7=1;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=4;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=5;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=6;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=7;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=8;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=9;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=10;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=11;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=12;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=13;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=14;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=15;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=6;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=7;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=14;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=14;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=15;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=16;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=16;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=17;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=18;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=18;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=19;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=19;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=20;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 59:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=20;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 60:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=20;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
iVar8=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
iVar8=0;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=1;
iVar8=0;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=2;
iVar8=0;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=3;
iVar8=0;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=4;
iVar8=0;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=5;
iVar8=0;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
iVar8=0;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
iVar8=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H26_0", 16);
iVar6=26;
iVar7=0;
iVar1=20;
iVar8=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H26_1", 16);
iVar6=26;
iVar7=1;
iVar1=25;
iVar8=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H26_2", 16);
iVar6=26;
iVar7=2;
iVar1=25;
iVar8=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H26_3", 16);
iVar6=26;
iVar7=3;
iVar1=22;
iVar8=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H26_4", 16);
iVar6=26;
iVar7=4;
iVar1=20;
iVar8=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H26_5", 16);
iVar6=26;
iVar7=5;
iVar1=25;
iVar8=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H26_6", 16);
iVar6=26;
iVar7=6;
iVar1=28;
iVar8=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H26_7", 16);
iVar6=26;
iVar7=7;
iVar1=24;
iVar8=0;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P1_H26_8", 16);
iVar6=26;
iVar7=8;
iVar1=25;
iVar8=0;
break;
case 80:
StringCopy(&Var2, "PROPS_P1_H26_9", 16);
iVar6=26;
iVar7=9;
iVar1=22;
iVar8=0;
break;
case 81:
StringCopy(&Var2, "PROPS_P1_H26_10", 16);
iVar6=26;
iVar7=10;
iVar1=18;
iVar8=0;
break;
case 82:
StringCopy(&Var2, "PROPS_P1_H26_11", 16);
iVar6=26;
iVar7=11;
iVar1=20;
iVar8=0;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_H26_12", 16);
iVar6=26;
iVar7=12;
iVar1=24;
iVar8=0;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_H26_13", 16);
iVar6=26;
iVar7=13;
iVar1=22;
iVar8=0;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_H26_14", 16);
iVar6=26;
iVar7=14;
iVar1=25;
iVar8=0;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_H26_15", 16);
iVar6=26;
iVar7=15;
iVar1=25;
iVar8=0;
break;
case 87:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
iVar8=0;
break;
default:
func_94(iVar10, iParam0, 155, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
var uVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_93(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_92(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_91(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_91(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_91(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_91(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_91(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_91(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_73(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_73(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_73(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_92(14)){
return;
}
uVar0=func_71(func_90(iParam1, uParam0->f_2), Global_78127, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_71(func_89(iParam1, uParam0->f_2), Global_78127, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_88(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_71(iVar1, Global_78127, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_88(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_89(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_90(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78127;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_72(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_71(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_92(int iParam0){
return Global_43052==iParam0;
}

int func_93(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_94(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
struct<8> Var2;
int iVar17;
int iVar18;
struct<10> Var19;
int iVar36;
int iVar37;
int iVar38;
struct<10> Var39;
int iVar56;
int iVar57;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
iVar1=Global_78130[0 /*14*/].f_5;
if(iParam0==12){
iVar17=(iParam1 - iParam2);
if(iVar17 >=0){
iVar18=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
if(iVar18 > iVar17){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_87(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_87(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var19);
iVar37=(iParam1 - iParam2);
if(iVar37 >=0){
iVar38=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
if(iVar38 > iVar37){
FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
if(Var19.f_6==0){
iVar36=9;
}elseif(Var19.f_6==1){
iVar36=10;
}elseif(Var19.f_6==2){
iVar36=2;
}elseif(Var19.f_6==3){
iVar36=3;
}elseif(Var19.f_6==4){
iVar36=4;
}elseif(Var19.f_6==5){
iVar36=5;
}elseif(Var19.f_6==6){
iVar36=6;
}elseif(Var19.f_6==7){
iVar36=7;
}elseif(Var19.f_6==8){
iVar36=8;
}else{
iVar36=-1;
}
Global_2883588=Var19.f_1;
Global_2883589=Var19.f_0;
func_87(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var39);
if(iParam3 !=-1 && Global_78300){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
Global_2883588=Var39.f_1;
Global_2883589=Var39.f_0;
func_87(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 !=0);
return;
}
iVar56=(iParam1 - iParam2);
if(iVar56 >=0){
iVar57=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_76(iParam0));
if(iVar57 > iVar56){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
Global_2883588=Var39.f_1;
Global_2883589=Var39.f_0;
func_87(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 !=0);
return;
}}}}


void func_95(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 9, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_96(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P2_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P2_5", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P2_6", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P2_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P2_8", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P2_9", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P2_10", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P2_13", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P2_14", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P2_15", 16);
iVar6=0;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P2_16", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P2_17", 16);
iVar6=0;
iVar7=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P2_18", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P2_19", 16);
iVar6=0;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P2_20", 16);
iVar6=0;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P2_21", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P2_22", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P2_23", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P2_24", 16);
iVar6=0;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P2_25", 16);
iVar6=0;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P2_26", 16);
iVar6=0;
iVar7=0;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P2_27", 16);
iVar6=0;
iVar7=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P2_28", 16);
iVar6=0;
iVar7=0;
iVar1=119;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P2_29", 16);
iVar6=0;
iVar7=0;
iVar1=99;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P2_30", 16);
iVar6=0;
iVar7=0;
iVar1=129;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P2_44", 16);
iVar6=0;
iVar7=0;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P2_45", 16);
iVar6=0;
iVar7=0;
iVar1=120;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P2_46", 16);
iVar6=0;
iVar7=0;
iVar1=139;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P2_47", 16);
iVar6=0;
iVar7=0;
iVar1=149;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P2_48", 16);
iVar6=0;
iVar7=0;
iVar1=145;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P2_49", 16);
iVar6=0;
iVar7=0;
iVar1=140;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P2_50", 16);
iVar6=0;
iVar7=0;
iVar1=135;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P2_31", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P2_32", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P2_33", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P2_34", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P2_35", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P2_36", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P2_37", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P2_38", 16);
iVar6=0;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P2_39", 16);
iVar6=0;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P2_40", 16);
iVar6=0;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P2_41", 16);
iVar6=0;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P2_42", 16);
iVar6=0;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P2_43", 16);
iVar6=0;
iVar7=0;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 48, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_97(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 1, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_98(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 1, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_99(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P2_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P2_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P2_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "BERD_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 6, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_100(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=7;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=8;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=9;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=4;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=5;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=6;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
break;
default:
func_94(iVar10, iParam0, 33, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_101(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=6;
iVar7=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=6;
iVar7=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=6;
iVar7=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=6;
iVar7=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=6;
iVar7=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=6;
iVar7=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=7;
iVar7=0;
iVar1=270;
break;
case 16:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=7;
iVar7=1;
iVar1=270;
break;
default:
func_94(iVar10, iParam0, 17, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_102(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "SPEC_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "SPEC_P2_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 18, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_103(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 7, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_104(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=22;
break;
case 2:
StringCopy(&Var2, "FEET_P2_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=45;
break;
case 3:
StringCopy(&Var2, "FEET_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=65;
break;
case 4:
StringCopy(&Var2, "FEET_P2_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=58;
break;
case 5:
StringCopy(&Var2, "FEET_P2_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=72;
break;
case 6:
StringCopy(&Var2, "FEET_P2_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=68;
break;
case 7:
StringCopy(&Var2, "FEET_P2_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=60;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "FEET_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "FEET_P2_8_0", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "FEET_P2_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "FEET_P2_9_1", 16);
iVar6=9;
iVar7=1;
iVar1=680;
break;
case 18:
StringCopy(&Var2, "FEET_P2_9_2", 16);
iVar6=9;
iVar7=2;
iVar1=650;
break;
case 19:
StringCopy(&Var2, "FEET_P2_9_3", 16);
iVar6=9;
iVar7=3;
iVar1=670;
break;
case 20:
StringCopy(&Var2, "FEET_P2_9_4", 16);
iVar6=9;
iVar7=4;
iVar1=700;
break;
case 21:
StringCopy(&Var2, "FEET_P2_9_5", 16);
iVar6=9;
iVar7=5;
iVar1=680;
break;
case 22:
StringCopy(&Var2, "FEET_P2_9_6", 16);
iVar6=9;
iVar7=6;
iVar1=720;
break;
case 23:
StringCopy(&Var2, "FEET_P2_9_7", 16);
iVar6=9;
iVar7=7;
iVar1=740;
break;
case 24:
StringCopy(&Var2, "FEET_P2_9_8", 16);
iVar6=9;
iVar7=8;
iVar1=760;
break;
case 25:
StringCopy(&Var2, "FEET_P2_9_9", 16);
iVar6=9;
iVar7=9;
iVar1=780;
break;
case 26:
StringCopy(&Var2, "FEET_P2_9_10", 16);
iVar6=9;
iVar7=10;
iVar1=750;
break;
case 27:
StringCopy(&Var2, "FEET_P2_9_11", 16);
iVar6=9;
iVar7=11;
iVar1=700;
break;
case 28:
StringCopy(&Var2, "FEET_P2_10_0", 16);
iVar6=10;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
break;
case 36:
StringCopy(&Var2, "FEET_P2_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=790;
break;
case 37:
StringCopy(&Var2, "FEET_P2_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=750;
break;
case 38:
StringCopy(&Var2, "FEET_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=860;
break;
case 39:
StringCopy(&Var2, "FEET_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=750;
break;
case 40:
StringCopy(&Var2, "FEET_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=790;
break;
case 41:
StringCopy(&Var2, "FEET_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 42:
StringCopy(&Var2, "FEET_P2_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=820;
break;
case 43:
StringCopy(&Var2, "FEET_P2_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=800;
break;
case 44:
StringCopy(&Var2, "FEET_P2_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=850;
break;
case 45:
StringCopy(&Var2, "FEET_P2_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=870;
break;
case 46:
StringCopy(&Var2, "FEET_P2_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=720;
break;
case 47:
StringCopy(&Var2, "FEET_P2_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=740;
break;
case 48:
StringCopy(&Var2, "FEET_P2_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=800;
break;
case 49:
StringCopy(&Var2, "FEET_P2_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=750;
break;
case 50:
StringCopy(&Var2, "FEET_P2_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=770;
break;
case 51:
StringCopy(&Var2, "FEET_P2_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=860;
break;
case 52:
StringCopy(&Var2, "FEET_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=850;
break;
case 53:
StringCopy(&Var2, "FEET_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=800;
break;
case 54:
StringCopy(&Var2, "FEET_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=780;
break;
case 55:
StringCopy(&Var2, "FEET_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=890;
break;
case 56:
StringCopy(&Var2, "FEET_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=820;
break;
case 57:
StringCopy(&Var2, "FEET_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=840;
break;
case 58:
StringCopy(&Var2, "FEET_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=870;
break;
case 59:
StringCopy(&Var2, "FEET_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=930;
break;
case 60:
StringCopy(&Var2, "FEET_P2_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=880;
break;
case 61:
StringCopy(&Var2, "FEET_P2_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=900;
break;
case 62:
StringCopy(&Var2, "FEET_P2_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=920;
break;
case 63:
StringCopy(&Var2, "FEET_P2_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=970;
break;
case 64:
StringCopy(&Var2, "FEET_P2_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=990;
break;
case 65:
StringCopy(&Var2, "FEET_P2_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=960;
break;
case 66:
StringCopy(&Var2, "FEET_P2_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=980;
break;
case 67:
StringCopy(&Var2, "FEET_P2_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=950;
break;
case 68:
StringCopy(&Var2, "FEET_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=110;
break;
case 69:
StringCopy(&Var2, "FEET_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 70:
StringCopy(&Var2, "FEET_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "FEET_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P2_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=125;
break;
case 73:
StringCopy(&Var2, "FEET_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=128;
break;
case 74:
StringCopy(&Var2, "FEET_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=135;
break;
case 75:
StringCopy(&Var2, "FEET_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=130;
break;
case 76:
StringCopy(&Var2, "FEET_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=145;
break;
case 77:
StringCopy(&Var2, "FEET_P2_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=110;
break;
case 78:
StringCopy(&Var2, "FEET_P2_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=120;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P2_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=150;
break;
case 80:
StringCopy(&Var2, "FEET_P2_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=125;
break;
case 81:
StringCopy(&Var2, "FEET_P2_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P2_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=130;
break;
case 83:
StringCopy(&Var2, "FEET_P2_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=110;
break;
default:
func_94(iVar10, iParam0, 84, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_105(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=95;
break;
case 2:
StringCopy(&Var2, "LEGS_P2_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=129;
break;
case 3:
StringCopy(&Var2, "LEGS_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=115;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "LEGS_P2_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "LEGS_P2_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=750;
break;
case 20:
StringCopy(&Var2, "LEGS_P2_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=650;
break;
case 21:
StringCopy(&Var2, "LEGS_P2_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=850;
break;
case 22:
StringCopy(&Var2, "LEGS_P2_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=850;
break;
case 23:
StringCopy(&Var2, "LEGS_P2_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=750;
break;
case 24:
StringCopy(&Var2, "LEGS_P2_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=690;
break;
case 25:
StringCopy(&Var2, "LEGS_P2_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=820;
break;
case 26:
StringCopy(&Var2, "LEGS_P2_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=650;
break;
case 27:
StringCopy(&Var2, "LEGS_P2_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=690;
break;
case 28:
StringCopy(&Var2, "LEGS_P2_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=690;
break;
case 29:
StringCopy(&Var2, "LEGS_P2_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=820;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "LEGS_P2_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "LEGS_P2_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 34:
StringCopy(&Var2, "LEGS_P2_16_0", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "LEGS_P2_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=58;
break;
case 36:
StringCopy(&Var2, "LEGS_P2_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=68;
break;
case 37:
StringCopy(&Var2, "LEGS_P2_17_2", 16);
iVar6=17;
iVar7=2;
iVar1=65;
break;
case 38:
StringCopy(&Var2, "LEGS_P2_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=60;
break;
case 39:
StringCopy(&Var2, "LEGS_P2_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=65;
break;
case 40:
StringCopy(&Var2, "LEGS_P2_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=63;
break;
case 41:
StringCopy(&Var2, "LEGS_P2_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=60;
break;
case 42:
StringCopy(&Var2, "LEGS_P2_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=58;
break;
case 43:
StringCopy(&Var2, "LEGS_P2_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "LEGS_P2_18_1", 16);
iVar6=18;
iVar7=1;
break;
case 45:
StringCopy(&Var2, "LEGS_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=99;
break;
case 46:
StringCopy(&Var2, "LEGS_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=105;
break;
case 47:
StringCopy(&Var2, "LEGS_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=110;
break;
case 48:
StringCopy(&Var2, "LEGS_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=110;
break;
case 49:
StringCopy(&Var2, "LEGS_P2_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=99;
break;
case 50:
StringCopy(&Var2, "LEGS_P2_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=110;
break;
case 51:
StringCopy(&Var2, "LEGS_P2_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=110;
break;
case 52:
StringCopy(&Var2, "LEGS_P2_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=105;
break;
case 53:
StringCopy(&Var2, "LEGS_P2_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=105;
break;
case 54:
StringCopy(&Var2, "LEGS_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=15;
break;
case 55:
StringCopy(&Var2, "LEGS_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=15;
break;
case 56:
StringCopy(&Var2, "LEGS_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=15;
break;
case 57:
StringCopy(&Var2, "LEGS_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=15;
break;
case 58:
StringCopy(&Var2, "LEGS_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=15;
break;
case 59:
StringCopy(&Var2, "LEGS_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=15;
break;
case 60:
StringCopy(&Var2, "LEGS_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=15;
break;
case 61:
StringCopy(&Var2, "LEGS_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=15;
break;
case 62:
StringCopy(&Var2, "LEGS_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=600;
break;
case 63:
StringCopy(&Var2, "LEGS_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=600;
break;
case 64:
StringCopy(&Var2, "LEGS_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=600;
break;
case 65:
StringCopy(&Var2, "LEGS_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=600;
break;
case 66:
StringCopy(&Var2, "LEGS_P2_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=600;
break;
case 67:
StringCopy(&Var2, "LEGS_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=600;
break;
case 68:
StringCopy(&Var2, "LEGS_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=600;
break;
case 69:
StringCopy(&Var2, "LEGS_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=600;
break;
case 70:
StringCopy(&Var2, "LEGS_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=600;
break;
case 71:
StringCopy(&Var2, "LEGS_P2_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=80;
break;
case 72:
StringCopy(&Var2, "LEGS_P2_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=80;
break;
case 73:
StringCopy(&Var2, "LEGS_P2_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=80;
break;
case 74:
StringCopy(&Var2, "LEGS_P2_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=80;
break;
case 75:
StringCopy(&Var2, "LEGS_P2_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=80;
break;
case 76:
StringCopy(&Var2, "LEGS_P2_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=80;
break;
case 77:
StringCopy(&Var2, "LEGS_P2_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=80;
break;
case 78:
StringCopy(&Var2, "LEGS_P2_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=80;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P2_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=80;
break;
case 80:
StringCopy(&Var2, "LEGS_P2_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=80;
break;
case 81:
StringCopy(&Var2, "LEGS_P2_22_0", 16);
iVar6=22;
iVar7=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P2_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=12;
break;
case 83:
StringCopy(&Var2, "LEGS_P2_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=12;
break;
case 84:
StringCopy(&Var2, "LEGS_P2_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=22;
break;
case 85:
StringCopy(&Var2, "LEGS_P2_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=18;
break;
case 86:
StringCopy(&Var2, "LEGS_P2_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=20;
break;
case 87:
StringCopy(&Var2, "LEGS_P2_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=30;
break;
case 88:
StringCopy(&Var2, "LEGS_P2_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=30;
break;
case 89:
StringCopy(&Var2, "LEGS_P2_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=30;
break;
case 90:
StringCopy(&Var2, "LEGS_P2_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=30;
break;
case 91:
StringCopy(&Var2, "LEGS_P2_23_0", 16);
iVar6=23;
iVar7=0;
break;
case 92:
StringCopy(&Var2, "LEGS_P2_24_0", 16);
iVar6=24;
iVar7=0;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
break;
case 95:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=1;
break;
case 96:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=2;
break;
case 97:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=3;
break;
case 98:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=4;
break;
case 99:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=5;
break;
case 100:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=6;
break;
case 101:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=7;
break;
case 102:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=8;
break;
case 103:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=9;
break;
default:
func_94(iVar10, iParam0, 104, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_106(int iParam0){
if(iParam0 < 136){
func_108(iParam0);
}else{
func_107(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_94(3, iParam0, 242, -1);
}}


void func_107(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
StringCopy(&Var2, "TORSO_P2_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=32;
break;
case 137:
StringCopy(&Var2, "TORSO_P2_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=39;
break;
case 138:
StringCopy(&Var2, "TORSO_P2_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=40;
break;
case 139:
StringCopy(&Var2, "TORSO_P2_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=42;
break;
case 140:
StringCopy(&Var2, "TORSO_P2_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=45;
break;
case 141:
StringCopy(&Var2, "TORSO_P2_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=48;
break;
case 142:
StringCopy(&Var2, "TORSO_P2_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=52;
break;
case 143:
StringCopy(&Var2, "TORSO_P2_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=55;
break;
case 144:
StringCopy(&Var2, "TORSO_P2_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=390;
break;
case 145:
StringCopy(&Var2, "TORSO_P2_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=390;
break;
case 146:
StringCopy(&Var2, "TORSO_P2_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=560;
break;
case 147:
StringCopy(&Var2, "TORSO_P2_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=390;
break;
case 148:
StringCopy(&Var2, "TORSO_P2_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=390;
break;
case 149:
StringCopy(&Var2, "TORSO_P2_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=390;
break;
case 150:
StringCopy(&Var2, "TORSO_P2_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=560;
break;
case 151:
StringCopy(&Var2, "TORSO_P2_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=390;
break;
case 152:
StringCopy(&Var2, "TORSO_P2_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=390;
break;
case 153:
StringCopy(&Var2, "TORSO_P2_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=390;
break;
case 154:
StringCopy(&Var2, "TORSO_P2_22_10", 16);
iVar6=22;
iVar7=10;
iVar1=390;
break;
case 155:
StringCopy(&Var2, "TORSO_P2_22_11", 16);
iVar6=22;
iVar7=11;
iVar1=3950;
break;
case 156:
StringCopy(&Var2, "TORSO_P2_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=150;
break;
case 157:
StringCopy(&Var2, "TORSO_P2_23_1", 16);
iVar6=23;
iVar7=1;
break;
case 158:
StringCopy(&Var2, "TORSO_P2_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=150;
break;
case 159:
StringCopy(&Var2, "TORSO_P2_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=150;
break;
case 160:
StringCopy(&Var2, "TORSO_P2_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=160;
break;
case 161:
StringCopy(&Var2, "TORSO_P2_23_5", 16);
iVar6=23;
iVar7=5;
break;
case 162:
StringCopy(&Var2, "TORSO_P2_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=19;
break;
case 163:
StringCopy(&Var2, "TORSO_P2_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=20;
break;
case 164:
StringCopy(&Var2, "TORSO_P2_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=19;
break;
case 165:
StringCopy(&Var2, "TORSO_P2_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=22;
break;
case 166:
StringCopy(&Var2, "TORSO_P2_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=20;
break;
case 167:
StringCopy(&Var2, "TORSO_P2_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=28;
break;
case 168:
StringCopy(&Var2, "TORSO_P2_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=28;
break;
case 169:
StringCopy(&Var2, "TORSO_P2_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=25;
break;
case 170:
StringCopy(&Var2, "TORSO_P2_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=22;
break;
case 171:
StringCopy(&Var2, "TORSO_P2_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=19;
break;
case 172:
StringCopy(&Var2, "TORSO_P2_24_10", 16);
iVar6=24;
iVar7=10;
iVar1=22;
break;
case 173:
StringCopy(&Var2, "TORSO_P2_24_11", 16);
iVar6=24;
iVar7=11;
iVar1=19;
break;
case 174:
StringCopy(&Var2, "TORSO_P2_24_12", 16);
iVar6=24;
iVar7=12;
iVar1=20;
break;
case 175:
StringCopy(&Var2, "TORSO_P2_24_13", 16);
iVar6=24;
iVar7=13;
iVar1=25;
break;
case 176:
StringCopy(&Var2, "TORSO_P2_24_14", 16);
iVar6=24;
iVar7=14;
iVar1=20;
break;
case 177:
StringCopy(&Var2, "TORSO_P2_24_15", 16);
iVar6=24;
iVar7=15;
iVar1=28;
break;
case 178:
StringCopy(&Var2, "TORSO_P2_25_0", 16);
iVar6=25;
iVar7=0;
iVar1=35;
break;
case 179:
StringCopy(&Var2, "TORSO_P2_25_1", 16);
iVar6=25;
iVar7=1;
iVar1=40;
break;
case 180:
StringCopy(&Var2, "TORSO_P2_25_2", 16);
iVar6=25;
iVar7=2;
iVar1=45;
break;
case 181:
StringCopy(&Var2, "TORSO_P2_25_3", 16);
iVar6=25;
iVar7=3;
iVar1=45;
break;
case 182:
StringCopy(&Var2, "TORSO_P2_25_4", 16);
iVar6=25;
iVar7=4;
iVar1=49;
break;
case 183:
StringCopy(&Var2, "TORSO_P2_25_5", 16);
iVar6=25;
iVar7=5;
iVar1=820;
break;
case 184:
StringCopy(&Var2, "TORSO_P2_25_6", 16);
iVar6=25;
iVar7=6;
iVar1=790;
break;
case 185:
StringCopy(&Var2, "TORSO_P2_25_7", 16);
iVar6=25;
iVar7=7;
iVar1=820;
break;
case 186:
StringCopy(&Var2, "TORSO_P2_25_8", 16);
iVar6=25;
iVar7=8;
iVar1=929;
break;
case 187:
StringCopy(&Var2, "TORSO_P2_25_9", 16);
iVar6=25;
iVar7=9;
iVar1=40;
break;
case 188:
StringCopy(&Var2, "TORSO_P2_25_10", 16);
iVar6=25;
iVar7=10;
iVar1=850;
break;
case 189:
StringCopy(&Var2, "TORSO_P2_25_11", 16);
iVar6=25;
iVar7=11;
iVar1=790;
break;
case 190:
StringCopy(&Var2, "TORSO_P2_26_0", 16);
iVar6=26;
iVar7=0;
break;
case 191:
StringCopy(&Var2, "TORSO_P2_26_1", 16);
iVar6=26;
iVar7=1;
break;
case 192:
StringCopy(&Var2, "TORSO_P2_26_2", 16);
iVar6=26;
iVar7=2;
break;
case 193:
StringCopy(&Var2, "TORSO_P2_26_3", 16);
iVar6=26;
iVar7=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P2_26_4", 16);
iVar6=26;
iVar7=4;
break;
case 195:
StringCopy(&Var2, "TORSO_P2_26_5", 16);
iVar6=26;
iVar7=5;
break;
case 196:
StringCopy(&Var2, "TORSO_P2_26_6", 16);
iVar6=26;
iVar7=6;
break;
case 197:
StringCopy(&Var2, "TORSO_P2_26_7", 16);
iVar6=26;
iVar7=7;
break;
case 198:
StringCopy(&Var2, "TORSO_P2_26_8", 16);
iVar6=26;
iVar7=8;
break;
case 199:
StringCopy(&Var2, "TORSO_P2_26_9", 16);
iVar6=26;
iVar7=9;
break;
case 200:
StringCopy(&Var2, "TORSO_P2_27_0", 16);
iVar6=27;
iVar7=0;
iVar1=2200;
break;
case 201:
StringCopy(&Var2, "TORSO_P2_27_1", 16);
iVar6=27;
iVar7=1;
iVar1=2500;
break;
case 202:
StringCopy(&Var2, "TORSO_P2_27_2", 16);
iVar6=27;
iVar7=2;
iVar1=2500;
break;
case 203:
StringCopy(&Var2, "TORSO_P2_27_3", 16);
iVar6=27;
iVar7=3;
iVar1=2200;
break;
case 204:
StringCopy(&Var2, "TORSO_P2_27_4", 16);
iVar6=27;
iVar7=4;
iVar1=2500;
break;
case 205:
StringCopy(&Var2, "TORSO_P2_27_5", 16);
iVar6=27;
iVar7=5;
iVar1=2500;
break;
case 206:
StringCopy(&Var2, "TORSO_P2_27_6", 16);
iVar6=27;
iVar7=6;
iVar1=2200;
break;
case 207:
StringCopy(&Var2, "TORSO_P2_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=1100;
break;
case 208:
StringCopy(&Var2, "TORSO_P2_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=1200;
break;
case 209:
StringCopy(&Var2, "TORSO_P2_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=1220;
break;
case 210:
StringCopy(&Var2, "TORSO_P2_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=1250;
break;
case 211:
StringCopy(&Var2, "TORSO_P2_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=1300;
break;
case 212:
StringCopy(&Var2, "TORSO_P2_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=1360;
break;
case 213:
StringCopy(&Var2, "TORSO_P2_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=35;
break;
case 214:
StringCopy(&Var2, "TORSO_P2_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=38;
break;
case 215:
StringCopy(&Var2, "TORSO_P2_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=40;
break;
case 216:
StringCopy(&Var2, "TORSO_P2_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=42;
break;
case 217:
StringCopy(&Var2, "TORSO_P2_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=50;
break;
case 218:
StringCopy(&Var2, "TORSO_P2_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=45;
break;
case 219:
StringCopy(&Var2, "TORSO_P2_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=45;
break;
case 220:
StringCopy(&Var2, "TORSO_P2_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=44;
break;
case 221:
StringCopy(&Var2, "TORSO_P2_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=46;
break;
case 222:
StringCopy(&Var2, "TORSO_P2_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=52;
break;
case 223:
StringCopy(&Var2, "TORSO_P2_29_0", 16);
iVar6=29;
iVar7=0;
iVar1=3200;
break;
case 224:
StringCopy(&Var2, "TORSO_P2_29_1", 16);
iVar6=29;
iVar7=1;
iVar1=3200;
break;
case 225:
StringCopy(&Var2, "TORSO_P2_29_2", 16);
iVar6=29;
iVar7=2;
iVar1=2550;
break;
case 226:
StringCopy(&Var2, "TORSO_P2_29_3", 16);
iVar6=29;
iVar7=3;
iVar1=2750;
break;
case 227:
StringCopy(&Var2, "TORSO_P2_29_4", 16);
iVar6=29;
iVar7=4;
iVar1=2590;
break;
case 228:
StringCopy(&Var2, "TORSO_P2_29_5", 16);
iVar6=29;
iVar7=5;
iVar1=2750;
break;
case 229:
StringCopy(&Var2, "TORSO_P2_29_6", 16);
iVar6=29;
iVar7=6;
iVar1=2550;
break;
case 230:
StringCopy(&Var2, "TORSO_P2_29_7", 16);
iVar6=29;
iVar7=7;
iVar1=2590;
break;
case 231:
StringCopy(&Var2, "TORSO_P2_29_8", 16);
iVar6=29;
iVar7=8;
iVar1=2720;
break;
case 232:
StringCopy(&Var2, "TORSO_P2_29_9", 16);
iVar6=29;
iVar7=9;
iVar1=2750;
break;
case 233:
StringCopy(&Var2, "TORSO_P2_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=3250;
break;
case 234:
StringCopy(&Var2, "TORSO_P2_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=2950;
break;
case 235:
StringCopy(&Var2, "TORSO_P2_30_2", 16);
iVar6=30;
iVar7=2;
iVar1=3100;
break;
case 236:
StringCopy(&Var2, "TORSO_P2_30_3", 16);
iVar6=30;
iVar7=3;
iVar1=3150;
break;
case 237:
StringCopy(&Var2, "TORSO_P2_30_4", 16);
iVar6=30;
iVar7=4;
iVar1=3240;
break;
case 238:
StringCopy(&Var2, "TORSO_P2_30_5", 16);
iVar6=30;
iVar7=5;
iVar1=3350;
break;
case 239:
StringCopy(&Var2, "TORSO_P2_30_6", 16);
iVar6=30;
iVar7=6;
iVar1=3400;
break;
case 240:
StringCopy(&Var2, "TORSO_P2_30_7", 16);
iVar6=30;
iVar7=7;
iVar1=3280;
break;
case 241:
StringCopy(&Var2, "TORSO_P2_31_0", 16);
iVar6=31;
iVar7=0;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_108(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=25;
break;
case 2:
StringCopy(&Var2, "TORSO_P2_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "TORSO_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=15;
break;
case 4:
StringCopy(&Var2, "TORSO_P2_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=25;
break;
case 5:
StringCopy(&Var2, "TORSO_P2_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=25;
break;
case 6:
StringCopy(&Var2, "TORSO_P2_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=22;
break;
case 7:
StringCopy(&Var2, "TORSO_P2_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P2_0_8", 16);
iVar6=0;
iVar7=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P2_0_9", 16);
iVar6=0;
iVar7=9;
iVar1=20;
break;
case 10:
StringCopy(&Var2, "TORSO_P2_0_10", 16);
iVar6=0;
iVar7=10;
iVar1=24;
break;
case 11:
StringCopy(&Var2, "TORSO_P2_0_11", 16);
iVar6=0;
iVar7=11;
iVar1=26;
break;
case 12:
StringCopy(&Var2, "TORSO_P2_0_12", 16);
iVar6=0;
iVar7=12;
iVar1=28;
break;
case 13:
StringCopy(&Var2, "TORSO_P2_0_13", 16);
iVar6=0;
iVar7=13;
iVar1=29;
break;
case 14:
StringCopy(&Var2, "TORSO_P2_0_14", 16);
iVar6=0;
iVar7=14;
iVar1=22;
break;
case 15:
StringCopy(&Var2, "TORSO_P2_0_15", 16);
iVar6=0;
iVar7=15;
iVar1=20;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "TORSO_P2_3_0", 16);
iVar6=3;
iVar7=0;
iVar1=35;
break;
case 19:
StringCopy(&Var2, "TORSO_P2_3_1", 16);
iVar6=3;
iVar7=1;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "TORSO_P2_3_2", 16);
iVar6=3;
iVar7=2;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P2_3_3", 16);
iVar6=3;
iVar7=3;
iVar1=38;
break;
case 22:
StringCopy(&Var2, "TORSO_P2_3_4", 16);
iVar6=3;
iVar7=4;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "TORSO_P2_3_5", 16);
iVar6=3;
iVar7=5;
iVar1=40;
break;
case 24:
StringCopy(&Var2, "TORSO_P2_3_6", 16);
iVar6=3;
iVar7=6;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "TORSO_P2_3_7", 16);
iVar6=3;
iVar7=7;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "TORSO_P2_3_8", 16);
iVar6=3;
iVar7=8;
iVar1=40;
break;
case 27:
StringCopy(&Var2, "TORSO_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "TORSO_P2_4_1", 16);
iVar6=4;
iVar7=1;
iVar1=500;
break;
case 29:
StringCopy(&Var2, "TORSO_P2_4_2", 16);
iVar6=4;
iVar7=2;
iVar1=560;
break;
case 30:
StringCopy(&Var2, "TORSO_P2_4_3", 16);
iVar6=4;
iVar7=3;
iVar1=600;
break;
case 31:
StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
iVar6=4;
iVar7=4;
iVar1=650;
break;
case 32:
StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
iVar6=4;
iVar7=5;
iVar1=500;
break;
case 33:
StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
iVar6=4;
iVar7=6;
iVar1=560;
break;
case 34:
StringCopy(&Var2, "TORSO_P2_4_7", 16);
iVar6=4;
iVar7=7;
iVar1=500;
break;
case 35:
StringCopy(&Var2, "TORSO_P2_4_8", 16);
iVar6=4;
iVar7=8;
iVar1=650;
break;
case 36:
StringCopy(&Var2, "TORSO_P2_4_9", 16);
iVar6=4;
iVar7=9;
iVar1=540;
break;
case 37:
StringCopy(&Var2, "TORSO_P2_4_10", 16);
iVar6=4;
iVar7=10;
iVar1=690;
break;
case 38:
StringCopy(&Var2, "TORSO_P2_4_11", 16);
iVar6=4;
iVar7=11;
iVar1=560;
break;
case 39:
StringCopy(&Var2, "TORSO_P2_4_12", 16);
iVar6=4;
iVar7=12;
iVar1=590;
break;
case 40:
StringCopy(&Var2, "TORSO_P2_4_13", 16);
iVar6=4;
iVar7=13;
iVar1=690;
break;
case 41:
StringCopy(&Var2, "TORSO_P2_4_14", 16);
iVar6=4;
iVar7=14;
iVar1=540;
break;
case 42:
StringCopy(&Var2, "TORSO_P2_4_15", 16);
iVar6=4;
iVar7=15;
iVar1=500;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "TORSO_P2_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 55:
StringCopy(&Var2, "TORSO_P2_11_1", 16);
iVar6=11;
iVar7=1;
break;
case 56:
StringCopy(&Var2, "TORSO_P2_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "TORSO_P2_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "TORSO_P2_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=22;
break;
case 59:
StringCopy(&Var2, "TORSO_P2_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=350;
break;
case 60:
StringCopy(&Var2, "TORSO_P2_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=27;
break;
case 61:
StringCopy(&Var2, "TORSO_P2_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=370;
break;
case 62:
StringCopy(&Var2, "TORSO_P2_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=25;
break;
case 63:
StringCopy(&Var2, "TORSO_P2_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=22;
break;
case 64:
StringCopy(&Var2, "TORSO_P2_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=25;
break;
case 65:
StringCopy(&Var2, "TORSO_P2_11_11", 16);
iVar6=11;
iVar7=11;
break;
case 66:
StringCopy(&Var2, "TORSO_P2_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=22;
break;
case 67:
StringCopy(&Var2, "TORSO_P2_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=27;
break;
case 68:
StringCopy(&Var2, "TORSO_P2_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=25;
break;
case 69:
StringCopy(&Var2, "TORSO_P2_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=27;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
iVar9=1;
break;
case 71:
StringCopy(&Var2, "TORSO_P2_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 72:
StringCopy(&Var2, "TORSO_P2_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=39;
break;
case 73:
StringCopy(&Var2, "TORSO_P2_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=42;
break;
case 74:
StringCopy(&Var2, "TORSO_P2_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=49;
break;
case 75:
StringCopy(&Var2, "TORSO_P2_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=35;
break;
case 76:
StringCopy(&Var2, "TORSO_P2_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=50;
break;
case 77:
StringCopy(&Var2, "TORSO_P2_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=50;
break;
case 78:
StringCopy(&Var2, "TORSO_P2_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=50;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P2_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 80:
StringCopy(&Var2, "TORSO_P2_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=88;
break;
case 81:
StringCopy(&Var2, "TORSO_P2_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=60;
break;
case 82:
StringCopy(&Var2, "TORSO_P2_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=80;
break;
case 83:
StringCopy(&Var2, "TORSO_P2_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=70;
break;
case 84:
StringCopy(&Var2, "TORSO_P2_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=80;
break;
case 85:
StringCopy(&Var2, "TORSO_P2_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=70;
break;
case 86:
StringCopy(&Var2, "TORSO_P2_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=90;
break;
case 87:
StringCopy(&Var2, "TORSO_P2_14_8", 16);
iVar6=14;
iVar7=8;
iVar1=95;
break;
case 88:
StringCopy(&Var2, "TORSO_P2_14_9", 16);
iVar6=14;
iVar7=9;
iVar1=105;
break;
case 89:
StringCopy(&Var2, "TORSO_P2_14_10", 16);
iVar6=14;
iVar7=10;
iVar1=95;
break;
case 90:
StringCopy(&Var2, "TORSO_P2_14_11", 16);
iVar6=14;
iVar7=11;
iVar1=110;
break;
case 91:
StringCopy(&Var2, "TORSO_P2_14_12", 16);
iVar6=14;
iVar7=12;
iVar1=98;
break;
case 92:
StringCopy(&Var2, "TORSO_P2_14_13", 16);
iVar6=14;
iVar7=13;
iVar1=88;
break;
case 93:
StringCopy(&Var2, "TORSO_P2_14_14", 16);
iVar6=14;
iVar7=14;
iVar1=98;
break;
case 94:
StringCopy(&Var2, "TORSO_P2_14_15", 16);
iVar6=14;
iVar7=15;
iVar1=110;
break;
case 95:
StringCopy(&Var2, "TORSO_P2_15_0", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "TORSO_P2_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 97:
StringCopy(&Var2, "TORSO_P2_17_0", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "TORSO_P2_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 99:
StringCopy(&Var2, "TORSO_P2_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=520;
break;
case 100:
StringCopy(&Var2, "TORSO_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=490;
break;
case 101:
StringCopy(&Var2, "TORSO_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=450;
break;
case 102:
StringCopy(&Var2, "TORSO_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=420;
break;
case 103:
StringCopy(&Var2, "TORSO_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=420;
break;
case 104:
StringCopy(&Var2, "TORSO_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=85;
break;
case 105:
StringCopy(&Var2, "TORSO_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=85;
break;
case 106:
StringCopy(&Var2, "TORSO_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "TORSO_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=68;
break;
case 108:
StringCopy(&Var2, "TORSO_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=68;
break;
case 109:
StringCopy(&Var2, "TORSO_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=78;
break;
case 110:
StringCopy(&Var2, "TORSO_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=85;
break;
case 111:
StringCopy(&Var2, "TORSO_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=68;
break;
case 112:
StringCopy(&Var2, "TORSO_P2_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=75;
break;
case 113:
StringCopy(&Var2, "TORSO_P2_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=75;
break;
case 114:
StringCopy(&Var2, "TORSO_P2_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=78;
break;
case 115:
StringCopy(&Var2, "TORSO_P2_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=75;
break;
case 116:
StringCopy(&Var2, "TORSO_P2_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=75;
break;
case 117:
StringCopy(&Var2, "TORSO_P2_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=75;
break;
case 118:
StringCopy(&Var2, "TORSO_P2_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=78;
break;
case 119:
StringCopy(&Var2, "TORSO_P2_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=78;
break;
case 120:
StringCopy(&Var2, "TORSO_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=40;
break;
case 121:
StringCopy(&Var2, "TORSO_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=32;
break;
case 122:
StringCopy(&Var2, "TORSO_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=32;
break;
case 123:
StringCopy(&Var2, "TORSO_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=32;
break;
case 124:
StringCopy(&Var2, "TORSO_P2_20_4", 16);
iVar6=20;
iVar7=4;
break;
case 125:
StringCopy(&Var2, "TORSO_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=38;
break;
case 126:
StringCopy(&Var2, "TORSO_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=35;
break;
case 127:
StringCopy(&Var2, "TORSO_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=38;
break;
case 128:
StringCopy(&Var2, "TORSO_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=29;
break;
case 129:
StringCopy(&Var2, "TORSO_P2_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=32;
break;
case 130:
StringCopy(&Var2, "TORSO_P2_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=29;
break;
case 131:
StringCopy(&Var2, "TORSO_P2_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=35;
break;
case 132:
StringCopy(&Var2, "TORSO_P2_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=32;
break;
case 133:
StringCopy(&Var2, "TORSO_P2_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=35;
break;
case 134:
StringCopy(&Var2, "TORSO_P2_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=32;
break;
case 135:
StringCopy(&Var2, "TORSO_P2_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=40;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_109(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P2_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P2_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P2_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P2_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "HAIR_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "HAIR_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "HAIR_P2_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "HAIR_P2_7_0", 16);
iVar6=7;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 9, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_110(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
default:
func_94(iVar10, iParam0, 7, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_111(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_129(iParam1);
break;
case 2:
func_128(iParam1);
break;
case 3:
func_124(iParam1);
break;
case 4:
func_123(iParam1);
break;
case 6:
func_122(iParam1);
break;
case 5:
func_121(iParam1);
break;
case 8:
func_120(iParam1);
break;
case 9:
func_119(iParam1);
break;
case 10:
func_118(iParam1);
break;
case 1:
func_117(iParam1);
break;
case 7:
func_116(iParam1);
break;
case 11:
func_115(iParam1);
break;
case 12:
func_114(iParam1);
break;
case 13:
func_113(iParam1);
break;
case 14:
func_112(iParam1);
break;
}}


void func_112(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 158:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
case 159:
StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
iVar6=1;
iVar7=0;
iVar1=4590;
iVar8=2;
break;
case 160:
StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
iVar6=1;
iVar7=1;
iVar1=4100;
iVar8=2;
break;
case 161:
StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
iVar6=1;
iVar7=2;
iVar1=3850;
iVar8=2;
break;
case 162:
StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
iVar6=1;
iVar7=3;
iVar1=1850;
iVar8=2;
break;
case 163:
StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
iVar6=1;
iVar7=4;
iVar1=5250;
iVar8=2;
break;
case 164:
StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
iVar6=1;
iVar7=5;
iVar1=2700;
iVar8=2;
break;
case 165:
StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
iVar6=1;
iVar7=6;
iVar1=3100;
iVar8=2;
break;
case 166:
StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
iVar6=1;
iVar7=7;
iVar1=5050;
iVar8=2;
break;
case 167:
StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
iVar6=2;
iVar7=0;
iVar1=2500;
iVar8=2;
break;
case 168:
StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
iVar6=2;
iVar7=1;
iVar1=1950;
iVar8=2;
break;
case 169:
StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
iVar6=2;
iVar7=2;
iVar1=3900;
iVar8=2;
break;
case 170:
StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
iVar6=2;
iVar7=3;
iVar1=3550;
iVar8=2;
break;
case 171:
StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
iVar6=2;
iVar7=4;
iVar1=4500;
iVar8=2;
break;
case 172:
StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
iVar6=2;
iVar7=5;
iVar1=2700;
iVar8=2;
break;
case 173:
StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
iVar6=2;
iVar7=6;
iVar1=3100;
iVar8=2;
break;
case 174:
StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
iVar6=2;
iVar7=7;
iVar1=2950;
iVar8=2;
break;
case 82:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_E1_0", 16);
iVar6=1;
iVar7=0;
iVar1=75;
iVar8=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_E1_1", 16);
iVar6=1;
iVar7=1;
iVar1=75;
iVar8=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_E1_2", 16);
iVar6=1;
iVar7=2;
iVar1=75;
iVar8=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_E1_3", 16);
iVar6=1;
iVar7=3;
iVar1=75;
iVar8=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P1_E1_4", 16);
iVar6=1;
iVar7=4;
iVar1=75;
iVar8=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P1_E1_5", 16);
iVar6=1;
iVar7=5;
iVar1=75;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P1_E1_6", 16);
iVar6=1;
iVar7=6;
iVar1=75;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P1_E1_7", 16);
iVar6=1;
iVar7=7;
iVar1=75;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P1_E1_8", 16);
iVar6=1;
iVar7=8;
iVar1=75;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P1_E1_9", 16);
iVar6=1;
iVar7=9;
iVar1=75;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P1_E2", 16);
iVar6=2;
iVar7=0;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P1_E3", 16);
iVar6=3;
iVar7=0;
iVar1=110;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P1_E4_0", 16);
iVar6=4;
iVar7=0;
iVar1=120;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P1_E4_1", 16);
iVar6=4;
iVar7=1;
iVar1=128;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P1_E4_2", 16);
iVar6=4;
iVar7=2;
iVar1=130;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P1_E4_3", 16);
iVar6=4;
iVar7=3;
iVar1=140;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P1_E4_4", 16);
iVar6=4;
iVar7=4;
iVar1=145;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P1_E4_5", 16);
iVar6=4;
iVar7=5;
iVar1=135;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P1_E4_6", 16);
iVar6=4;
iVar7=6;
iVar1=138;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P1_E5_0", 16);
iVar6=5;
iVar7=0;
iVar1=110;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P1_E5_1", 16);
iVar6=5;
iVar7=1;
iVar1=112;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P1_E5_2", 16);
iVar6=5;
iVar7=2;
iVar1=115;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P1_E5_3", 16);
iVar6=5;
iVar7=3;
iVar1=118;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P1_E5_4", 16);
iVar6=5;
iVar7=4;
iVar1=120;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P1_E5_5", 16);
iVar6=5;
iVar7=5;
iVar1=125;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P1_E5_6", 16);
iVar6=5;
iVar7=6;
iVar1=128;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P1_E5_7", 16);
iVar6=5;
iVar7=7;
iVar1=138;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P1_E5_8", 16);
iVar6=5;
iVar7=8;
iVar1=140;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "PROPS_P1_E5_9", 16);
iVar6=5;
iVar7=9;
iVar1=155;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "PROPS_P1_E6_0", 16);
iVar6=6;
iVar7=0;
iVar1=55;
iVar8=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P1_E6_1", 16);
iVar6=6;
iVar7=1;
iVar1=55;
iVar8=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P1_E6_2", 16);
iVar6=6;
iVar7=2;
iVar1=58;
iVar8=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P1_E6_3", 16);
iVar6=6;
iVar7=3;
iVar1=58;
iVar8=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P1_E6_4", 16);
iVar6=6;
iVar7=4;
iVar1=60;
iVar8=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P1_E6_5", 16);
iVar6=6;
iVar7=5;
iVar1=62;
iVar8=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P1_E6_6", 16);
iVar6=6;
iVar7=6;
iVar1=65;
iVar8=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P1_E6_7", 16);
iVar6=6;
iVar7=7;
iVar1=68;
iVar8=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P1_E6_8", 16);
iVar6=6;
iVar7=8;
iVar1=68;
iVar8=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P1_E6_9", 16);
iVar6=6;
iVar7=9;
iVar1=72;
iVar8=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P1_E7_0", 16);
iVar6=7;
iVar7=0;
iVar1=145;
iVar8=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P1_E7_1", 16);
iVar6=7;
iVar7=1;
iVar1=149;
iVar8=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P1_E7_2", 16);
iVar6=7;
iVar7=2;
iVar1=139;
iVar8=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P1_E7_3", 16);
iVar6=7;
iVar7=3;
iVar1=149;
iVar8=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P1_E7_4", 16);
iVar6=7;
iVar7=4;
iVar1=135;
iVar8=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P1_E7_5", 16);
iVar6=7;
iVar7=5;
iVar1=138;
iVar8=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P1_E7_6", 16);
iVar6=7;
iVar7=6;
iVar1=140;
iVar8=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P1_E7_7", 16);
iVar6=7;
iVar7=7;
iVar1=145;
iVar8=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P1_E7_8", 16);
iVar6=7;
iVar7=8;
iVar1=159;
iVar8=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P1_E7_9", 16);
iVar6=7;
iVar7=9;
iVar1=155;
iVar8=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P1_E8_0", 16);
iVar6=8;
iVar7=0;
iVar1=198;
iVar8=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P1_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=210;
iVar8=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P1_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=185;
iVar8=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P1_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=220;
iVar8=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P1_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=190;
iVar8=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P1_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=200;
iVar8=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P1_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=208;
iVar8=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P1_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=210;
iVar8=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P1_E9_0", 16);
iVar6=9;
iVar7=0;
iVar1=165;
iVar8=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P1_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=185;
iVar8=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P1_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=190;
iVar8=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P1_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=178;
iVar8=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P1_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=180;
iVar8=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P1_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=168;
iVar8=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P1_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=170;
iVar8=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P1_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=175;
iVar8=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P1_E9_8", 16);
iVar6=9;
iVar7=8;
iVar1=170;
iVar8=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P1_E9_9", 16);
iVar6=9;
iVar7=9;
iVar1=178;
iVar8=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P1_E10_0", 16);
iVar6=10;
iVar7=0;
iVar1=140;
iVar8=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P1_E10_1", 16);
iVar6=10;
iVar7=1;
iVar1=145;
iVar8=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P1_E10_2", 16);
iVar6=10;
iVar7=2;
iVar1=150;
iVar8=10;
break;
case 153:
StringCopy(&Var2, "PROPS_P1_E10_3", 16);
iVar6=10;
iVar7=3;
iVar1=165;
iVar8=10;
break;
case 154:
StringCopy(&Var2, "PROPS_P1_E10_4", 16);
iVar6=10;
iVar7=4;
iVar1=168;
iVar8=10;
break;
case 155:
StringCopy(&Var2, "PROPS_P1_E10_5", 16);
iVar6=10;
iVar7=5;
iVar1=178;
iVar8=10;
break;
case 156:
StringCopy(&Var2, "PROPS_P1_E10_6", 16);
iVar6=10;
iVar7=6;
iVar1=160;
iVar8=10;
break;
case 157:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 10:
StringCopy(&Var2, "PROPS_P1_H0_0", 16);
iVar6=0;
iVar7=0;
iVar1=320;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 13:
StringCopy(&Var2, "PROPS_P1_H3_0", 16);
iVar6=3;
iVar7=0;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=7;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=8;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=8;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=8;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=9;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=9;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=10;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=10;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=11;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=12;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=12;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=13;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=13;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=14;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=14;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=14;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar6=16;
iVar7=0;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar6=16;
iVar7=1;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar6=16;
iVar7=2;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar6=16;
iVar7=3;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar6=16;
iVar7=4;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar6=16;
iVar7=5;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar6=16;
iVar7=6;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar6=16;
iVar7=7;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar6=16;
iVar7=8;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar6=16;
iVar7=9;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar6=16;
iVar7=10;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar6=16;
iVar7=11;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar6=16;
iVar7=12;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar6=16;
iVar7=13;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar6=16;
iVar7=14;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar6=16;
iVar7=15;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=1;
iVar8=0;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=2;
iVar8=0;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=3;
iVar8=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=4;
iVar8=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=5;
iVar8=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
iVar8=0;
break;
case 64:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar6=19;
iVar7=0;
iVar1=30;
iVar8=0;
break;
case 65:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar6=19;
iVar7=1;
iVar1=30;
iVar8=0;
break;
case 66:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar6=19;
iVar7=2;
iVar1=32;
iVar8=0;
break;
case 67:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar6=19;
iVar7=3;
iVar1=35;
iVar8=0;
break;
case 68:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar6=19;
iVar7=4;
iVar1=38;
iVar8=0;
break;
case 69:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar6=19;
iVar7=5;
iVar1=42;
iVar8=0;
break;
case 70:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar6=19;
iVar7=6;
iVar1=42;
iVar8=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar6=19;
iVar7=7;
iVar1=40;
iVar8=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar6=19;
iVar7=8;
iVar1=45;
iVar8=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar6=19;
iVar7=9;
iVar1=48;
iVar8=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar6=19;
iVar7=10;
iVar1=25;
iVar8=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar6=19;
iVar7=11;
iVar1=25;
iVar8=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar6=19;
iVar7=12;
iVar1=28;
iVar8=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar6=19;
iVar7=13;
iVar1=28;
iVar8=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar6=19;
iVar7=14;
iVar1=30;
iVar8=0;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar6=19;
iVar7=15;
iVar1=35;
iVar8=0;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
iVar8=0;
break;
case 81:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
default:
func_94(iVar10, iParam0, 175, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_113(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 9, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_114(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P1_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P1_2", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P1_4", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P1_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P1_11", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P1_12", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P1_13", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P1_15", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P1_16", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P1_17", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P1_18", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P1_19", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P1_20", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P1_21", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P1_22", 16);
iVar6=0;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P1_23", 16);
iVar6=0;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P1_24", 16);
iVar6=0;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P1_25", 16);
iVar6=0;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P1_26", 16);
iVar6=0;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P1_27", 16);
iVar6=0;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P1_28", 16);
iVar6=0;
iVar7=0;
iVar1=4000;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P1_29", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P1_30", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P1_31", 16);
iVar6=0;
iVar7=0;
iVar1=4650;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P1_32", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P1_33", 16);
iVar6=0;
iVar7=0;
iVar1=5000;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P1_34", 16);
iVar6=0;
iVar7=0;
iVar1=4750;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P1_35", 16);
iVar6=0;
iVar7=0;
iVar1=4750;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P1_36", 16);
iVar6=0;
iVar7=0;
iVar1=5200;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P1_37", 16);
iVar6=0;
iVar7=0;
iVar1=5200;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P1_38", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P1_39", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P1_40", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P1_41", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P1_42", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P1_43", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P1_47", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P1_48", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P1_49", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar6=0;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P1_50", 16);
iVar6=0;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P1_51", 16);
iVar6=0;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P1_52", 16);
iVar6=0;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P1_53", 16);
iVar6=0;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P1_54", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 47, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_115(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
break;
case 5:
StringCopy(&Var2, "JBIB_P1_1_0", 16);
iVar6=2;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "JBIB_P1_1_1", 16);
iVar6=2;
iVar7=1;
break;
case 7:
StringCopy(&Var2, "JBIB_P1_1_2", 16);
iVar6=2;
iVar7=2;
break;
case 8:
StringCopy(&Var2, "JBIB_P1_1_3", 16);
iVar6=2;
iVar7=3;
break;
case 9:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar6=3;
iVar7=1;
break;
case 11:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar6=3;
iVar7=2;
break;
case 12:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar6=3;
iVar7=3;
break;
case 13:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar6=3;
iVar7=4;
break;
case 14:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar6=3;
iVar7=5;
break;
case 15:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar6=3;
iVar7=6;
break;
case 16:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar6=3;
iVar7=7;
break;
case 17:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar6=3;
iVar7=8;
break;
case 18:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar6=3;
iVar7=9;
break;
case 19:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar6=3;
iVar7=10;
break;
case 20:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar6=3;
iVar7=11;
break;
case 21:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar6=3;
iVar7=12;
break;
case 22:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar6=3;
iVar7=13;
break;
case 23:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar6=3;
iVar7=14;
break;
case 24:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar6=3;
iVar7=15;
break;
case 25:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar6=4;
iVar7=0;
break;
case 26:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar6=4;
iVar7=1;
break;
case 27:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar6=4;
iVar7=2;
break;
case 28:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar6=4;
iVar7=3;
break;
case 29:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar6=4;
iVar7=4;
break;
case 30:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar6=4;
iVar7=5;
break;
case 31:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar6=4;
iVar7=6;
break;
case 32:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar6=4;
iVar7=7;
break;
case 33:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar6=4;
iVar7=8;
break;
case 34:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar6=4;
iVar7=9;
break;
case 35:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar6=4;
iVar7=10;
break;
case 36:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar6=4;
iVar7=11;
break;
case 37:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar6=4;
iVar7=12;
break;
case 38:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar6=4;
iVar7=13;
break;
case 39:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar6=4;
iVar7=14;
break;
case 40:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar6=4;
iVar7=15;
break;
case 41:
StringCopy(&Var2, "JBIB_P1_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "JBIB_P1_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "JBIB_P1_6_1", 16);
iVar6=6;
iVar7=1;
break;
case 44:
StringCopy(&Var2, "JBIB_P1_7_0", 16);
iVar6=7;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "JBIB_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "JBIB_P1_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 47:
StringCopy(&Var2, "JBIB_P1_10_0", 16);
iVar6=10;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "JBIB_P1_10_1", 16);
iVar6=10;
iVar7=1;
iVar1=48;
break;
case 49:
StringCopy(&Var2, "JBIB_P1_10_2", 16);
iVar6=10;
iVar7=2;
iVar1=35;
break;
case 50:
StringCopy(&Var2, "JBIB_P1_10_3", 16);
iVar6=10;
iVar7=3;
iVar1=32;
break;
case 51:
StringCopy(&Var2, "JBIB_P1_10_4", 16);
iVar6=10;
iVar7=4;
iVar1=35;
break;
case 52:
StringCopy(&Var2, "JBIB_P1_10_5", 16);
iVar6=10;
iVar7=5;
iVar1=48;
break;
case 53:
StringCopy(&Var2, "JBIB_P1_10_6", 16);
iVar6=10;
iVar7=6;
iVar1=52;
break;
case 54:
StringCopy(&Var2, "JBIB_P1_10_7", 16);
iVar6=10;
iVar7=7;
iVar1=38;
break;
case 55:
StringCopy(&Var2, "JBIB_P1_10_8", 16);
iVar6=10;
iVar7=8;
iVar1=42;
break;
case 56:
StringCopy(&Var2, "JBIB_P1_10_9", 16);
iVar6=10;
iVar7=9;
iVar1=38;
break;
case 57:
StringCopy(&Var2, "JBIB_P1_10_10", 16);
iVar6=10;
iVar7=10;
iVar1=35;
break;
case 58:
StringCopy(&Var2, "JBIB_P1_10_11", 16);
iVar6=10;
iVar7=11;
iVar1=48;
break;
case 59:
StringCopy(&Var2, "JBIB_P1_10_12", 16);
iVar6=10;
iVar7=12;
iVar1=42;
break;
case 60:
StringCopy(&Var2, "JBIB_P1_10_13", 16);
iVar6=10;
iVar7=13;
iVar1=45;
break;
case 61:
StringCopy(&Var2, "JBIB_P1_10_14", 16);
iVar6=10;
iVar7=14;
iVar1=45;
break;
case 62:
StringCopy(&Var2, "JBIB_P1_10_15", 16);
iVar6=10;
iVar7=15;
iVar1=49;
break;
default:
func_94(iVar10, iParam0, 63, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_116(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 1, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_117(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P1_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P1_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P1_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P1_4_0", 16);
iVar6=4;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 5, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_118(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=2;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=3;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=4;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=5;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=1;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=2;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=3;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=4;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=5;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=6;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=6;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=7;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=8;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=9;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=10;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=11;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=12;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=13;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=14;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=15;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=2;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=3;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=4;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=5;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=6;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=7;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 53, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_119(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=5;
iVar7=0;
iVar1=125;
break;
case 6:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=5;
iVar7=1;
iVar1=150;
break;
case 7:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=5;
iVar7=2;
iVar1=175;
break;
case 8:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=5;
iVar7=3;
iVar1=85;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=5;
iVar7=4;
iVar1=150;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=5;
iVar7=5;
iVar1=175;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 12, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_120(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC_P1_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "SPEC_P1_11_0", 16);
iVar6=11;
iVar7=0;
iVar1=195;
break;
case 12:
StringCopy(&Var2, "SPEC_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=195;
break;
case 13:
StringCopy(&Var2, "SPEC_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=195;
break;
case 14:
StringCopy(&Var2, "SPEC_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=250;
break;
case 15:
StringCopy(&Var2, "SPEC_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=250;
break;
case 16:
StringCopy(&Var2, "SPEC_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "SPEC_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=195;
break;
case 18:
StringCopy(&Var2, "SPEC_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=250;
break;
case 19:
StringCopy(&Var2, "SPEC_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=250;
break;
case 20:
StringCopy(&Var2, "SPEC_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=250;
break;
case 21:
StringCopy(&Var2, "SPEC_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=250;
break;
case 22:
StringCopy(&Var2, "SPEC_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=195;
break;
case 23:
StringCopy(&Var2, "SPEC_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=250;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
break;
case 27:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=15;
iVar7=1;
break;
case 29:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=15;
iVar7=2;
break;
case 30:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=15;
iVar7=3;
break;
case 31:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 32:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=15;
iVar7=5;
break;
case 33:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=15;
iVar7=6;
break;
case 34:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=15;
iVar7=7;
break;
case 35:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=15;
iVar7=8;
break;
case 36:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=15;
iVar7=9;
break;
case 37:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=15;
iVar7=10;
break;
case 38:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=15;
iVar7=11;
break;
case 39:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=15;
iVar7=12;
break;
case 40:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=15;
iVar7=13;
break;
case 41:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=15;
iVar7=14;
break;
case 42:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=15;
iVar7=15;
break;
case 43:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=16;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=16;
iVar7=1;
break;
case 45:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=16;
iVar7=2;
break;
case 46:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=16;
iVar7=3;
break;
case 47:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=16;
iVar7=4;
break;
case 48:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=16;
iVar7=5;
break;
case 49:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=16;
iVar7=6;
break;
case 50:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=16;
iVar7=7;
break;
case 51:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=16;
iVar7=8;
break;
case 52:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=16;
iVar7=9;
break;
case 53:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=16;
iVar7=10;
break;
case 54:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=16;
iVar7=11;
break;
case 55:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=16;
iVar7=12;
break;
case 56:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=16;
iVar7=13;
break;
case 57:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=16;
iVar7=14;
break;
case 58:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=16;
iVar7=15;
break;
case 59:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=17;
iVar7=0;
break;
case 60:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=17;
iVar7=1;
break;
case 61:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=17;
iVar7=2;
break;
case 62:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=17;
iVar7=3;
break;
case 63:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=17;
iVar7=4;
break;
case 64:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=17;
iVar7=5;
break;
case 65:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=17;
iVar7=6;
break;
case 66:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=17;
iVar7=7;
break;
case 67:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=17;
iVar7=8;
break;
case 68:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=17;
iVar7=9;
break;
case 69:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=17;
iVar7=10;
break;
case 70:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=17;
iVar7=11;
break;
case 71:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=17;
iVar7=12;
break;
case 72:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=17;
iVar7=13;
break;
case 73:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=17;
iVar7=14;
break;
case 74:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=17;
iVar7=15;
break;
case 75:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 77, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_121(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=1;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 7, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_122(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P1_00_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P1_00_1", 16);
iVar6=0;
iVar7=1;
iVar1=80;
break;
case 2:
StringCopy(&Var2, "FEET_P1_00_2", 16);
iVar6=0;
iVar7=2;
iVar1=80;
break;
case 3:
StringCopy(&Var2, "FEET_P1_00_3", 16);
iVar6=0;
iVar7=3;
iVar1=89;
break;
case 4:
StringCopy(&Var2, "FEET_P1_00_4", 16);
iVar6=0;
iVar7=4;
iVar1=45;
break;
case 5:
StringCopy(&Var2, "FEET_P1_00_5", 16);
iVar6=0;
iVar7=5;
iVar1=35;
break;
case 6:
StringCopy(&Var2, "FEET_P1_00_6", 16);
iVar6=0;
iVar7=6;
iVar1=89;
break;
case 7:
StringCopy(&Var2, "FEET_P1_00_7", 16);
iVar6=0;
iVar7=7;
iVar1=95;
break;
case 8:
StringCopy(&Var2, "FEET_P1_00_8", 16);
iVar6=0;
iVar7=8;
iVar1=115;
break;
case 9:
StringCopy(&Var2, "FEET_P1_00_9", 16);
iVar6=0;
iVar7=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "FEET_P1_00_10", 16);
iVar6=0;
iVar7=10;
iVar1=145;
break;
case 11:
StringCopy(&Var2, "FEET_P1_00_11", 16);
iVar6=0;
iVar7=11;
iVar1=145;
break;
case 12:
StringCopy(&Var2, "FEET_P1_01_0", 16);
iVar6=1;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=1;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "FEET_P1_06_0", 16);
iVar6=6;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "FEET_P1_06_1", 16);
iVar6=6;
iVar7=1;
iVar1=180;
break;
case 20:
StringCopy(&Var2, "FEET_P1_06_2", 16);
iVar6=6;
iVar7=2;
iVar1=80;
break;
case 21:
StringCopy(&Var2, "FEET_P1_06_3", 16);
iVar6=6;
iVar7=3;
iVar1=200;
break;
case 22:
StringCopy(&Var2, "FEET_P1_06_4", 16);
iVar6=6;
iVar7=4;
iVar1=220;
break;
case 23:
StringCopy(&Var2, "FEET_P1_06_5", 16);
iVar6=6;
iVar7=5;
iVar1=235;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "FEET_P1_08_0", 16);
iVar6=8;
iVar7=0;
iVar1=870;
break;
case 26:
StringCopy(&Var2, "FEET_P1_08_1", 16);
iVar6=8;
iVar7=1;
iVar1=870;
break;
case 27:
StringCopy(&Var2, "FEET_P1_08_2", 16);
iVar6=8;
iVar7=2;
iVar1=870;
break;
case 28:
StringCopy(&Var2, "FEET_P1_08_3", 16);
iVar6=8;
iVar7=3;
iVar1=1275;
break;
case 29:
StringCopy(&Var2, "FEET_P1_08_4", 16);
iVar6=8;
iVar7=4;
iVar1=1275;
break;
case 30:
StringCopy(&Var2, "FEET_P1_08_5", 16);
iVar6=8;
iVar7=5;
iVar1=1275;
break;
case 31:
StringCopy(&Var2, "FEET_P1_08_6", 16);
iVar6=8;
iVar7=6;
iVar1=1275;
break;
case 32:
StringCopy(&Var2, "FEET_P1_08_7", 16);
iVar6=8;
iVar7=7;
iVar1=1275;
break;
case 33:
StringCopy(&Var2, "FEET_P1_08_8", 16);
iVar6=8;
iVar7=8;
iVar1=1275;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "FEET_P1_10_0", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "FEET_P1_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 37:
StringCopy(&Var2, "FEET_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=50;
break;
case 38:
StringCopy(&Var2, "FEET_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=50;
break;
case 39:
StringCopy(&Var2, "FEET_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=50;
break;
case 40:
StringCopy(&Var2, "FEET_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=50;
break;
case 41:
StringCopy(&Var2, "FEET_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=50;
break;
case 42:
StringCopy(&Var2, "FEET_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=50;
break;
case 43:
StringCopy(&Var2, "FEET_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=50;
break;
case 44:
StringCopy(&Var2, "FEET_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=50;
break;
case 45:
StringCopy(&Var2, "FEET_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=50;
break;
case 46:
StringCopy(&Var2, "FEET_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=50;
break;
case 47:
StringCopy(&Var2, "FEET_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=50;
break;
case 48:
StringCopy(&Var2, "FEET_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=50;
break;
case 49:
StringCopy(&Var2, "FEET_P1_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=50;
break;
case 50:
StringCopy(&Var2, "FEET_P1_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=50;
break;
case 51:
StringCopy(&Var2, "FEET_P1_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=50;
break;
case 52:
StringCopy(&Var2, "FEET_P1_12_0", 16);
iVar6=12;
iVar7=0;
break;
case 53:
StringCopy(&Var2, "FEET_P1_12_1", 16);
iVar6=12;
iVar7=1;
iVar1=25;
break;
case 54:
StringCopy(&Var2, "FEET_P1_12_2", 16);
iVar6=12;
iVar7=2;
iVar1=20;
break;
case 55:
StringCopy(&Var2, "FEET_P1_12_3", 16);
iVar6=12;
iVar7=3;
iVar1=24;
break;
case 56:
StringCopy(&Var2, "FEET_P1_12_4", 16);
iVar6=12;
iVar7=4;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "FEET_P1_12_5", 16);
iVar6=12;
iVar7=5;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "FEET_P1_12_6", 16);
iVar6=12;
iVar7=6;
iVar1=29;
break;
case 59:
StringCopy(&Var2, "FEET_P1_12_7", 16);
iVar6=12;
iVar7=7;
iVar1=27;
break;
case 60:
StringCopy(&Var2, "FEET_P1_12_8", 16);
iVar6=12;
iVar7=8;
iVar1=25;
break;
case 61:
StringCopy(&Var2, "FEET_P1_12_9", 16);
iVar6=12;
iVar7=9;
iVar1=30;
break;
case 62:
StringCopy(&Var2, "FEET_P1_12_10", 16);
iVar6=12;
iVar7=10;
iVar1=28;
break;
case 63:
StringCopy(&Var2, "FEET_P1_12_11", 16);
iVar6=12;
iVar7=11;
iVar1=30;
break;
case 64:
StringCopy(&Var2, "FEET_P1_13_0", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "FEET_P1_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=155;
break;
case 66:
StringCopy(&Var2, "FEET_P1_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=155;
break;
case 67:
StringCopy(&Var2, "FEET_P1_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=165;
break;
case 68:
StringCopy(&Var2, "FEET_P1_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=170;
break;
case 69:
StringCopy(&Var2, "FEET_P1_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=160;
break;
case 70:
StringCopy(&Var2, "FEET_P1_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=165;
break;
case 71:
StringCopy(&Var2, "FEET_P1_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=170;
break;
case 72:
StringCopy(&Var2, "FEET_P1_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=160;
break;
case 73:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
break;
case 74:
StringCopy(&Var2, "FEET_P1_16_0", 16);
iVar6=16;
iVar7=0;
iVar1=720;
break;
case 75:
StringCopy(&Var2, "FEET_P1_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=680;
break;
case 76:
StringCopy(&Var2, "FEET_P1_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=650;
break;
case 77:
StringCopy(&Var2, "FEET_P1_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=670;
break;
case 78:
StringCopy(&Var2, "FEET_P1_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=700;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P1_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=680;
break;
case 80:
StringCopy(&Var2, "FEET_P1_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=720;
break;
case 81:
StringCopy(&Var2, "FEET_P1_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=740;
break;
case 82:
StringCopy(&Var2, "FEET_P1_16_8", 16);
iVar6=16;
iVar7=8;
iVar1=760;
break;
case 83:
StringCopy(&Var2, "FEET_P1_16_9", 16);
iVar6=16;
iVar7=9;
iVar1=780;
break;
case 84:
StringCopy(&Var2, "FEET_P1_16_10", 16);
iVar6=16;
iVar7=10;
iVar1=750;
break;
case 85:
StringCopy(&Var2, "FEET_P1_16_11", 16);
iVar6=16;
iVar7=11;
iVar1=700;
break;
case 86:
StringCopy(&Var2, "FEET_P1_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=790;
break;
case 87:
StringCopy(&Var2, "FEET_P1_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=750;
break;
case 88:
StringCopy(&Var2, "FEET_P1_17_2", 16);
iVar6=17;
iVar7=2;
iVar1=860;
break;
case 89:
StringCopy(&Var2, "FEET_P1_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=750;
break;
case 90:
StringCopy(&Var2, "FEET_P1_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=790;
break;
case 91:
StringCopy(&Var2, "FEET_P1_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=840;
break;
case 92:
StringCopy(&Var2, "FEET_P1_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=820;
break;
case 93:
StringCopy(&Var2, "FEET_P1_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=800;
break;
case 94:
StringCopy(&Var2, "FEET_P1_17_8", 16);
iVar6=17;
iVar7=8;
iVar1=850;
break;
case 95:
StringCopy(&Var2, "FEET_P1_17_9", 16);
iVar6=17;
iVar7=9;
iVar1=870;
break;
case 96:
StringCopy(&Var2, "FEET_P1_17_10", 16);
iVar6=17;
iVar7=10;
iVar1=720;
break;
case 97:
StringCopy(&Var2, "FEET_P1_17_11", 16);
iVar6=17;
iVar7=11;
iVar1=740;
break;
case 98:
StringCopy(&Var2, "FEET_P1_17_12", 16);
iVar6=17;
iVar7=12;
iVar1=800;
break;
case 99:
StringCopy(&Var2, "FEET_P1_17_13", 16);
iVar6=17;
iVar7=13;
iVar1=750;
break;
case 100:
StringCopy(&Var2, "FEET_P1_17_14", 16);
iVar6=17;
iVar7=14;
iVar1=770;
break;
case 101:
StringCopy(&Var2, "FEET_P1_17_15", 16);
iVar6=17;
iVar7=15;
iVar1=860;
break;
case 102:
StringCopy(&Var2, "FEET_P1_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=850;
break;
case 103:
StringCopy(&Var2, "FEET_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=800;
break;
case 104:
StringCopy(&Var2, "FEET_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=780;
break;
case 105:
StringCopy(&Var2, "FEET_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=890;
break;
case 106:
StringCopy(&Var2, "FEET_P1_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=820;
break;
case 107:
StringCopy(&Var2, "FEET_P1_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 108:
StringCopy(&Var2, "FEET_P1_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=870;
break;
case 109:
StringCopy(&Var2, "FEET_P1_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=930;
break;
case 110:
StringCopy(&Var2, "FEET_P1_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=880;
break;
case 111:
StringCopy(&Var2, "FEET_P1_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=900;
break;
case 112:
StringCopy(&Var2, "FEET_P1_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=920;
break;
case 113:
StringCopy(&Var2, "FEET_P1_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=970;
break;
case 114:
StringCopy(&Var2, "FEET_P1_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=990;
break;
case 115:
StringCopy(&Var2, "FEET_P1_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=960;
break;
case 116:
StringCopy(&Var2, "FEET_P1_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=980;
break;
case 117:
StringCopy(&Var2, "FEET_P1_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=950;
break;
case 118:
StringCopy(&Var2, "FEET_P1_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=110;
break;
case 119:
StringCopy(&Var2, "FEET_P1_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=115;
break;
case 120:
StringCopy(&Var2, "FEET_P1_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=120;
break;
case 121:
StringCopy(&Var2, "FEET_P1_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=110;
break;
case 122:
StringCopy(&Var2, "FEET_P1_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=125;
break;
case 123:
StringCopy(&Var2, "FEET_P1_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=128;
break;
case 124:
StringCopy(&Var2, "FEET_P1_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=135;
break;
case 125:
StringCopy(&Var2, "FEET_P1_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=130;
break;
case 126:
StringCopy(&Var2, "FEET_P1_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=145;
break;
case 127:
StringCopy(&Var2, "FEET_P1_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "FEET_P1_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=120;
break;
case 129:
StringCopy(&Var2, "FEET_P1_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=150;
break;
case 130:
StringCopy(&Var2, "FEET_P1_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=125;
break;
case 131:
StringCopy(&Var2, "FEET_P1_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=120;
break;
case 132:
StringCopy(&Var2, "FEET_P1_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=130;
break;
case 133:
StringCopy(&Var2, "FEET_P1_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=110;
break;
default:
func_94(iVar10, iParam0, 134, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_123(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P1_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=32;
break;
case 2:
StringCopy(&Var2, "LEGS_P1_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=38;
break;
case 3:
StringCopy(&Var2, "LEGS_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=44;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=4;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=5;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "LEGS_P1_2_0", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "LEGS_P1_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 15:
StringCopy(&Var2, "LEGS_P1_6_1", 16);
iVar6=6;
iVar7=1;
iVar1=690;
break;
case 16:
StringCopy(&Var2, "LEGS_P1_6_2", 16);
iVar6=6;
iVar7=2;
iVar1=720;
break;
case 17:
StringCopy(&Var2, "LEGS_P1_6_3", 16);
iVar6=6;
iVar7=3;
iVar1=850;
break;
case 18:
StringCopy(&Var2, "LEGS_P1_6_4", 16);
iVar6=6;
iVar7=4;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "LEGS_P1_6_5", 16);
iVar6=6;
iVar7=5;
iVar1=740;
break;
case 20:
StringCopy(&Var2, "LEGS_P1_6_6", 16);
iVar6=6;
iVar7=6;
iVar1=750;
break;
case 21:
StringCopy(&Var2, "LEGS_P1_6_7", 16);
iVar6=6;
iVar7=7;
iVar1=790;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "LEGS_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 25:
StringCopy(&Var2, "LEGS_P1_8_1", 16);
iVar6=8;
iVar7=1;
iVar1=145;
break;
case 26:
StringCopy(&Var2, "LEGS_P1_8_2", 16);
iVar6=8;
iVar7=2;
iVar1=140;
break;
case 27:
StringCopy(&Var2, "LEGS_P1_8_3", 16);
iVar6=8;
iVar7=3;
iVar1=148;
break;
case 28:
StringCopy(&Var2, "LEGS_P1_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=150;
break;
case 29:
StringCopy(&Var2, "LEGS_P1_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=154;
break;
case 30:
StringCopy(&Var2, "LEGS_P1_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=158;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "LEGS_P1_11_0", 16);
iVar6=11;
iVar7=0;
iVar1=820;
break;
case 34:
StringCopy(&Var2, "LEGS_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=820;
break;
case 35:
StringCopy(&Var2, "LEGS_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=850;
break;
case 36:
StringCopy(&Var2, "LEGS_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=850;
break;
case 37:
StringCopy(&Var2, "LEGS_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=920;
break;
case 38:
StringCopy(&Var2, "LEGS_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=950;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
break;
case 40:
StringCopy(&Var2, "LEGS_P1_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 41:
StringCopy(&Var2, "LEGS_P1_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=45;
break;
case 42:
StringCopy(&Var2, "LEGS_P1_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=48;
break;
case 43:
StringCopy(&Var2, "LEGS_P1_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=45;
break;
case 44:
StringCopy(&Var2, "LEGS_P1_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=48;
break;
case 45:
StringCopy(&Var2, "LEGS_P1_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "LEGS_P1_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=55;
break;
case 47:
StringCopy(&Var2, "LEGS_P1_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=58;
break;
case 48:
StringCopy(&Var2, "LEGS_P1_13_8", 16);
iVar6=13;
iVar7=8;
iVar1=60;
break;
case 49:
StringCopy(&Var2, "LEGS_P1_13_9", 16);
iVar6=13;
iVar7=9;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "LEGS_P1_13_10", 16);
iVar6=13;
iVar7=10;
iVar1=62;
break;
case 51:
StringCopy(&Var2, "LEGS_P1_13_11", 16);
iVar6=13;
iVar7=11;
iVar1=65;
break;
case 52:
StringCopy(&Var2, "LEGS_P1_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 53:
StringCopy(&Var2, "LEGS_P1_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 54:
StringCopy(&Var2, "LEGS_P1_15_1", 16);
iVar6=15;
iVar7=1;
break;
case 55:
StringCopy(&Var2, "LEGS_P1_15_2", 16);
iVar6=15;
iVar7=2;
break;
case 56:
StringCopy(&Var2, "LEGS_P1_15_3", 16);
iVar6=15;
iVar7=3;
break;
case 57:
StringCopy(&Var2, "LEGS_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 58:
StringCopy(&Var2, "LEGS_P1_15_5", 16);
iVar6=15;
iVar7=5;
break;
case 59:
StringCopy(&Var2, "LEGS_P1_15_6", 16);
iVar6=15;
iVar7=6;
break;
case 60:
StringCopy(&Var2, "LEGS_P1_15_7", 16);
iVar6=15;
iVar7=7;
break;
case 61:
StringCopy(&Var2, "LEGS_P1_15_8", 16);
iVar6=15;
iVar7=8;
break;
case 62:
StringCopy(&Var2, "LEGS_P1_15_9", 16);
iVar6=15;
iVar7=9;
break;
case 63:
StringCopy(&Var2, "LEGS_P1_15_10", 16);
iVar6=15;
iVar7=10;
break;
case 64:
StringCopy(&Var2, "LEGS_P1_15_11", 16);
iVar6=15;
iVar7=11;
break;
case 65:
StringCopy(&Var2, "LEGS_P1_15_12", 16);
iVar6=15;
iVar7=12;
break;
case 66:
StringCopy(&Var2, "LEGS_P1_15_13", 16);
iVar6=15;
iVar7=13;
break;
case 67:
StringCopy(&Var2, "LEGS_P1_15_14", 16);
iVar6=15;
iVar7=14;
break;
case 68:
StringCopy(&Var2, "LEGS_P1_15_15", 16);
iVar6=15;
iVar7=15;
break;
case 69:
StringCopy(&Var2, "LEGS_P1_16_0", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P1_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=160;
break;
case 74:
StringCopy(&Var2, "LEGS_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=180;
break;
case 75:
StringCopy(&Var2, "LEGS_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=180;
break;
case 76:
StringCopy(&Var2, "LEGS_P1_18_4", 16);
iVar6=18;
iVar7=4;
break;
case 77:
StringCopy(&Var2, "LEGS_P1_18_5", 16);
iVar6=18;
iVar7=5;
break;
case 78:
StringCopy(&Var2, "LEGS_P1_19_0", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P1_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=118;
break;
case 80:
StringCopy(&Var2, "LEGS_P1_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=120;
break;
case 81:
StringCopy(&Var2, "LEGS_P1_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=128;
break;
case 82:
StringCopy(&Var2, "LEGS_P1_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=128;
break;
case 83:
StringCopy(&Var2, "LEGS_P1_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=130;
break;
case 84:
StringCopy(&Var2, "LEGS_P1_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=145;
break;
case 85:
StringCopy(&Var2, "LEGS_P1_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=138;
break;
case 86:
StringCopy(&Var2, "LEGS_P1_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=132;
break;
case 87:
StringCopy(&Var2, "LEGS_P1_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=148;
break;
case 88:
StringCopy(&Var2, "LEGS_P1_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=118;
break;
case 89:
StringCopy(&Var2, "LEGS_P1_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=118;
break;
case 90:
StringCopy(&Var2, "LEGS_P1_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=118;
break;
case 91:
StringCopy(&Var2, "LEGS_P1_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=129;
break;
case 92:
StringCopy(&Var2, "LEGS_P1_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=135;
break;
case 93:
StringCopy(&Var2, "LEGS_P1_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=135;
break;
case 94:
StringCopy(&Var2, "LEGS_P1_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=118;
break;
case 95:
StringCopy(&Var2, "LEGS_P1_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=118;
break;
case 96:
StringCopy(&Var2, "LEGS_P1_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=118;
break;
case 97:
StringCopy(&Var2, "LEGS_P1_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=55;
break;
case 98:
StringCopy(&Var2, "LEGS_P1_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=55;
break;
case 99:
StringCopy(&Var2, "LEGS_P1_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=59;
break;
case 100:
StringCopy(&Var2, "LEGS_P1_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=59;
break;
case 101:
StringCopy(&Var2, "LEGS_P1_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=65;
break;
case 102:
StringCopy(&Var2, "LEGS_P1_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=65;
break;
case 103:
StringCopy(&Var2, "LEGS_P1_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=69;
break;
case 104:
StringCopy(&Var2, "LEGS_P1_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=69;
break;
case 105:
StringCopy(&Var2, "LEGS_P1_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=75;
break;
case 106:
StringCopy(&Var2, "LEGS_P1_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "LEGS_P1_22_10", 16);
iVar6=22;
iVar7=10;
iVar1=65;
break;
case 108:
StringCopy(&Var2, "LEGS_P1_22_11", 16);
iVar6=22;
iVar7=11;
iVar1=65;
break;
case 109:
StringCopy(&Var2, "LEGS_P1_22_12", 16);
iVar6=22;
iVar7=12;
iVar1=65;
break;
case 110:
StringCopy(&Var2, "LEGS_P1_22_13", 16);
iVar6=22;
iVar7=13;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P1_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=38;
break;
case 112:
StringCopy(&Var2, "LEGS_P1_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=38;
break;
case 113:
StringCopy(&Var2, "LEGS_P1_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=28;
break;
case 114:
StringCopy(&Var2, "LEGS_P1_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=34;
break;
case 115:
StringCopy(&Var2, "LEGS_P1_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=36;
break;
case 116:
StringCopy(&Var2, "LEGS_P1_23_5", 16);
iVar6=23;
iVar7=5;
iVar1=32;
break;
default:
func_94(iVar10, iParam0, 117, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_124(int iParam0){
if(iParam0 < 107){
func_127(iParam0);
}elseif(iParam0 < 227){
func_126(iParam0);
}else{
func_125(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_94(3, iParam0, 318, -1);
}}


void func_125(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar6=23;
iVar7=0;
iVar9=3;
break;
case 228:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar6=23;
iVar7=1;
iVar9=3;
break;
case 229:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar6=23;
iVar7=2;
iVar9=3;
break;
case 230:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar6=23;
iVar7=3;
iVar9=3;
break;
case 231:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar6=23;
iVar7=4;
iVar9=3;
break;
case 232:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar6=23;
iVar7=5;
iVar9=3;
break;
case 233:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar6=23;
iVar7=6;
iVar9=3;
break;
case 234:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar6=23;
iVar7=7;
iVar9=3;
break;
case 235:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar6=23;
iVar7=8;
iVar9=3;
break;
case 236:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar6=23;
iVar7=9;
iVar9=3;
break;
case 237:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar6=23;
iVar7=10;
iVar9=3;
break;
case 238:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar6=23;
iVar7=11;
iVar9=3;
break;
case 239:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar6=23;
iVar7=12;
iVar9=3;
break;
case 240:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar6=23;
iVar7=13;
iVar9=3;
break;
case 241:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar6=23;
iVar7=14;
iVar9=3;
break;
case 242:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar6=23;
iVar7=15;
iVar9=3;
break;
case 243:
StringCopy(&Var2, "TORSO_P1_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=2200;
iVar9=3;
break;
case 244:
StringCopy(&Var2, "TORSO_P1_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=2200;
iVar9=3;
break;
case 245:
StringCopy(&Var2, "TORSO_P1_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=2200;
iVar9=3;
break;
case 246:
StringCopy(&Var2, "TORSO_P1_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=2200;
iVar9=3;
break;
case 247:
StringCopy(&Var2, "TORSO_P1_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=2200;
iVar9=3;
break;
case 248:
StringCopy(&Var2, "TORSO_P1_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=2200;
iVar9=3;
break;
case 249:
StringCopy(&Var2, "TORSO_P1_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=2200;
iVar9=3;
break;
case 250:
StringCopy(&Var2, "TORSO_P1_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=2200;
iVar9=3;
break;
case 251:
StringCopy(&Var2, "TORSO_P1_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=2200;
iVar9=3;
break;
case 252:
StringCopy(&Var2, "TORSO_P1_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=2200;
iVar9=3;
break;
case 253:
StringCopy(&Var2, "TORSO_P1_24_10", 16);
iVar6=24;
iVar7=10;
iVar1=2200;
iVar9=3;
break;
case 254:
StringCopy(&Var2, "TORSO_P1_24_11", 16);
iVar6=24;
iVar7=11;
iVar1=2200;
iVar9=3;
break;
case 255:
StringCopy(&Var2, "TORSO_P1_24_12", 16);
iVar6=24;
iVar7=12;
iVar1=2200;
iVar9=3;
break;
case 256:
StringCopy(&Var2, "TORSO_P1_24_13", 16);
iVar6=24;
iVar7=13;
iVar1=2200;
iVar9=3;
break;
case 257:
StringCopy(&Var2, "TORSO_P1_24_14", 16);
iVar6=24;
iVar7=14;
iVar1=2200;
iVar9=3;
break;
case 258:
StringCopy(&Var2, "TORSO_P1_24_15", 16);
iVar6=24;
iVar7=15;
iVar1=2200;
iVar9=3;
break;
case 259:
StringCopy(&Var2, "TORSO_P1_25_0", 16);
iVar6=25;
iVar7=0;
bVar0=true;
iVar9=3;
break;
case 260:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
iVar9=1;
break;
case 261:
StringCopy(&Var2, "TORSO_P1_27_0", 16);
iVar6=27;
iVar7=0;
iVar1=150;
break;
case 262:
StringCopy(&Var2, "TORSO_P1_27_1", 16);
iVar6=27;
iVar7=1;
iVar1=160;
break;
case 263:
StringCopy(&Var2, "TORSO_P1_27_2", 16);
iVar6=27;
iVar7=2;
iVar1=150;
break;
case 264:
StringCopy(&Var2, "TORSO_P1_27_3", 16);
iVar6=27;
iVar7=3;
iVar1=150;
break;
case 265:
StringCopy(&Var2, "TORSO_P1_27_4", 16);
iVar6=27;
iVar7=4;
iVar1=160;
break;
case 266:
StringCopy(&Var2, "TORSO_P1_27_5", 16);
iVar6=27;
iVar7=5;
iVar1=160;
break;
case 267:
StringCopy(&Var2, "TORSO_P1_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=88;
break;
case 268:
StringCopy(&Var2, "TORSO_P1_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=60;
break;
case 269:
StringCopy(&Var2, "TORSO_P1_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=70;
break;
case 270:
StringCopy(&Var2, "TORSO_P1_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=80;
break;
case 271:
StringCopy(&Var2, "TORSO_P1_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=90;
break;
case 272:
StringCopy(&Var2, "TORSO_P1_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=80;
break;
case 273:
StringCopy(&Var2, "TORSO_P1_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=70;
break;
case 274:
StringCopy(&Var2, "TORSO_P1_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=95;
break;
case 275:
StringCopy(&Var2, "TORSO_P1_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=105;
break;
case 276:
StringCopy(&Var2, "TORSO_P1_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=95;
break;
case 277:
StringCopy(&Var2, "TORSO_P1_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=110;
break;
case 278:
StringCopy(&Var2, "TORSO_P1_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=98;
break;
case 279:
StringCopy(&Var2, "TORSO_P1_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=88;
break;
case 280:
StringCopy(&Var2, "TORSO_P1_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=98;
break;
case 281:
StringCopy(&Var2, "TORSO_P1_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=110;
break;
case 282:
StringCopy(&Var2, "TORSO_P1_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=98;
break;
case 283:
StringCopy(&Var2, "TORSO_P1_29_0", 16);
iVar6=29;
iVar7=0;
iVar1=250;
break;
case 284:
StringCopy(&Var2, "TORSO_P1_29_1", 16);
iVar6=29;
iVar7=1;
iVar1=270;
break;
case 285:
StringCopy(&Var2, "TORSO_P1_29_2", 16);
iVar6=29;
iVar7=2;
iVar1=280;
break;
case 286:
StringCopy(&Var2, "TORSO_P1_29_3", 16);
iVar6=29;
iVar7=3;
iVar1=275;
break;
case 287:
StringCopy(&Var2, "TORSO_P1_29_4", 16);
iVar6=29;
iVar7=4;
iVar1=290;
break;
case 288:
StringCopy(&Var2, "TORSO_P1_29_5", 16);
iVar6=29;
iVar7=5;
iVar1=35;
break;
case 289:
StringCopy(&Var2, "TORSO_P1_29_6", 16);
iVar6=29;
iVar7=6;
iVar1=35;
break;
case 290:
StringCopy(&Var2, "TORSO_P1_29_7", 16);
iVar6=29;
iVar7=7;
iVar1=35;
break;
case 291:
StringCopy(&Var2, "TORSO_P1_29_8", 16);
iVar6=29;
iVar7=8;
iVar1=295;
break;
case 292:
StringCopy(&Var2, "TORSO_P1_29_9", 16);
iVar6=29;
iVar7=9;
iVar1=35;
break;
case 293:
StringCopy(&Var2, "TORSO_P1_29_10", 16);
iVar6=29;
iVar7=10;
iVar1=35;
break;
case 294:
StringCopy(&Var2, "TORSO_P1_29_11", 16);
iVar6=29;
iVar7=11;
iVar1=35;
break;
case 295:
StringCopy(&Var2, "TORSO_P1_29_12", 16);
iVar6=29;
iVar7=12;
break;
case 296:
StringCopy(&Var2, "TORSO_P1_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=1750;
break;
case 297:
StringCopy(&Var2, "TORSO_P1_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=1920;
break;
case 298:
StringCopy(&Var2, "TORSO_P1_30_2", 16);
iVar6=30;
iVar7=2;
iVar1=1890;
break;
case 299:
StringCopy(&Var2, "TORSO_P1_30_3", 16);
iVar6=30;
iVar7=3;
iVar1=1850;
break;
case 300:
StringCopy(&Var2, "TORSO_P1_30_4", 16);
iVar6=30;
iVar7=4;
iVar1=1750;
break;
case 301:
StringCopy(&Var2, "TORSO_P1_30_5", 16);
iVar6=30;
iVar7=5;
iVar1=1990;
break;
case 302:
StringCopy(&Var2, "TORSO_P1_30_6", 16);
iVar6=30;
iVar7=6;
iVar1=1820;
break;
case 303:
StringCopy(&Var2, "TORSO_P1_30_7", 16);
iVar6=30;
iVar7=7;
iVar1=1990;
break;
case 304:
StringCopy(&Var2, "TORSO_P1_30_8", 16);
iVar6=30;
iVar7=8;
iVar1=1920;
break;
case 305:
StringCopy(&Var2, "TORSO_P1_30_9", 16);
iVar6=30;
iVar7=9;
iVar1=1850;
break;
case 306:
StringCopy(&Var2, "TORSO_P1_30_10", 16);
iVar6=30;
iVar7=10;
iVar1=1990;
break;
case 307:
StringCopy(&Var2, "TORSO_P1_30_11", 16);
iVar6=30;
iVar7=11;
iVar1=1790;
break;
case 308:
StringCopy(&Var2, "TORSO_P1_30_12", 16);
iVar6=30;
iVar7=12;
iVar1=1790;
break;
case 309:
StringCopy(&Var2, "TORSO_P1_31_0", 16);
iVar6=31;
iVar7=0;
iVar1=69;
break;
case 310:
StringCopy(&Var2, "TORSO_P1_31_1", 16);
iVar6=31;
iVar7=1;
iVar1=75;
break;
case 311:
StringCopy(&Var2, "TORSO_P1_31_2", 16);
iVar6=31;
iVar7=2;
iVar1=75;
break;
case 312:
StringCopy(&Var2, "TORSO_P1_31_3", 16);
iVar6=31;
iVar7=3;
iVar1=79;
break;
case 313:
StringCopy(&Var2, "TORSO_P1_31_4", 16);
iVar6=31;
iVar7=4;
iVar1=79;
break;
case 314:
StringCopy(&Var2, "TORSO_P1_31_5", 16);
iVar6=31;
iVar7=5;
iVar1=89;
break;
case 315:
StringCopy(&Var2, "TORSO_P1_31_6", 16);
iVar6=31;
iVar7=6;
iVar1=85;
break;
case 316:
StringCopy(&Var2, "TORSO_P1_31_7", 16);
iVar6=31;
iVar7=7;
iVar1=85;
break;
case 317:
StringCopy(&Var2, "TORSO_P1_31_8", 16);
iVar6=31;
iVar7=8;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_126(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
StringCopy(&Var2, "TORSO_P1_12_0", 16);
iVar6=12;
iVar7=0;
iVar1=195;
break;
case 108:
StringCopy(&Var2, "TORSO_P1_12_1", 16);
iVar6=12;
iVar7=1;
iVar1=420;
break;
case 109:
StringCopy(&Var2, "TORSO_P1_12_2", 16);
iVar6=12;
iVar7=2;
iVar1=390;
break;
case 110:
StringCopy(&Var2, "TORSO_P1_12_3", 16);
iVar6=12;
iVar7=3;
iVar1=450;
break;
case 111:
StringCopy(&Var2, "TORSO_P1_12_4", 16);
iVar6=12;
iVar7=4;
iVar1=400;
break;
case 112:
StringCopy(&Var2, "TORSO_P1_12_5", 16);
iVar6=12;
iVar7=5;
iVar1=390;
break;
case 113:
StringCopy(&Var2, "TORSO_P1_12_6", 16);
iVar6=12;
iVar7=6;
iVar1=570;
break;
case 114:
StringCopy(&Var2, "TORSO_P1_12_7", 16);
iVar6=12;
iVar7=7;
iVar1=390;
break;
case 115:
StringCopy(&Var2, "TORSO_P1_12_8", 16);
iVar6=12;
iVar7=8;
iVar1=470;
break;
case 116:
StringCopy(&Var2, "TORSO_P1_12_9", 16);
iVar6=12;
iVar7=9;
iVar1=390;
break;
case 117:
StringCopy(&Var2, "TORSO_P1_12_10", 16);
iVar6=12;
iVar7=10;
iVar1=520;
break;
case 118:
StringCopy(&Var2, "TORSO_P1_12_11", 16);
iVar6=12;
iVar7=11;
iVar1=490;
break;
case 119:
StringCopy(&Var2, "TORSO_P1_12_12", 16);
iVar6=12;
iVar7=12;
iVar1=490;
break;
case 120:
StringCopy(&Var2, "TORSO_P1_12_13", 16);
iVar6=12;
iVar7=13;
iVar1=590;
break;
case 121:
StringCopy(&Var2, "TORSO_P1_12_14", 16);
iVar6=12;
iVar7=14;
iVar1=560;
break;
case 122:
StringCopy(&Var2, "TORSO_P1_12_15", 16);
iVar6=12;
iVar7=15;
iVar1=520;
break;
case 123:
StringCopy(&Var2, "TORSO_P1_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 124:
StringCopy(&Var2, "TORSO_P1_13_1", 16);
iVar6=13;
iVar7=1;
break;
case 125:
StringCopy(&Var2, "TORSO_P1_13_2", 16);
iVar6=13;
iVar7=2;
break;
case 126:
StringCopy(&Var2, "TORSO_P1_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=90;
break;
case 127:
StringCopy(&Var2, "TORSO_P1_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=85;
break;
case 128:
StringCopy(&Var2, "TORSO_P1_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "TORSO_P1_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=90;
break;
case 130:
StringCopy(&Var2, "TORSO_P1_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=47;
break;
case 131:
StringCopy(&Var2, "TORSO_P1_13_8", 16);
iVar6=13;
iVar7=8;
iVar1=45;
break;
case 132:
StringCopy(&Var2, "TORSO_P1_13_9", 16);
iVar6=13;
iVar7=9;
iVar1=48;
break;
case 133:
StringCopy(&Var2, "TORSO_P1_13_10", 16);
iVar6=13;
iVar7=10;
iVar1=45;
break;
case 134:
StringCopy(&Var2, "TORSO_P1_13_11", 16);
iVar6=13;
iVar7=11;
iVar1=85;
break;
case 135:
StringCopy(&Var2, "TORSO_P1_13_12", 16);
iVar6=13;
iVar7=12;
iVar1=45;
break;
case 136:
StringCopy(&Var2, "TORSO_P1_13_13", 16);
iVar6=13;
iVar7=13;
iVar1=47;
break;
case 137:
StringCopy(&Var2, "TORSO_P1_13_14", 16);
iVar6=13;
iVar7=14;
iVar1=45;
break;
case 138:
StringCopy(&Var2, "TORSO_P1_13_15", 16);
iVar6=13;
iVar7=15;
iVar1=48;
break;
case 139:
StringCopy(&Var2, "TORSO_P1_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=290;
break;
case 140:
StringCopy(&Var2, "TORSO_P1_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=290;
break;
case 141:
StringCopy(&Var2, "TORSO_P1_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=290;
break;
case 142:
StringCopy(&Var2, "TORSO_P1_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=290;
break;
case 143:
StringCopy(&Var2, "TORSO_P1_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=290;
break;
case 144:
StringCopy(&Var2, "TORSO_P1_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=290;
break;
case 145:
StringCopy(&Var2, "TORSO_P1_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=65;
break;
case 146:
StringCopy(&Var2, "TORSO_P1_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=65;
break;
case 147:
StringCopy(&Var2, "TORSO_P1_15_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
break;
case 148:
StringCopy(&Var2, "TORSO_P1_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=220;
break;
case 149:
StringCopy(&Var2, "TORSO_P1_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=220;
break;
case 150:
StringCopy(&Var2, "TORSO_P1_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=240;
break;
case 151:
StringCopy(&Var2, "TORSO_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 152:
StringCopy(&Var2, "TORSO_P1_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=250;
break;
case 153:
StringCopy(&Var2, "TORSO_P1_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=260;
break;
case 154:
StringCopy(&Var2, "TORSO_P1_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=40;
break;
case 155:
StringCopy(&Var2, "TORSO_P1_15_8", 16);
iVar6=15;
iVar7=8;
iVar1=50;
break;
case 156:
StringCopy(&Var2, "TORSO_P1_15_9", 16);
iVar6=15;
iVar7=9;
iVar1=45;
break;
case 157:
StringCopy(&Var2, "TORSO_P1_15_10", 16);
iVar6=15;
iVar7=10;
iVar1=40;
break;
case 158:
StringCopy(&Var2, "TORSO_P1_15_11", 16);
iVar6=15;
iVar7=11;
iVar1=55;
break;
case 159:
StringCopy(&Var2, "TORSO_P1_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 160:
StringCopy(&Var2, "TORSO_P1_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=40;
break;
case 161:
StringCopy(&Var2, "TORSO_P1_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=50;
break;
case 162:
StringCopy(&Var2, "TORSO_P1_17_2", 16);
iVar6=17;
iVar7=2;
break;
case 163:
StringCopy(&Var2, "TORSO_P1_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=50;
break;
case 164:
StringCopy(&Var2, "TORSO_P1_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=50;
break;
case 165:
StringCopy(&Var2, "TORSO_P1_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=50;
break;
case 166:
StringCopy(&Var2, "TORSO_P1_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=50;
break;
case 167:
StringCopy(&Var2, "TORSO_P1_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=50;
break;
case 168:
StringCopy(&Var2, "TORSO_P1_17_8", 16);
iVar6=17;
iVar7=8;
iVar1=50;
break;
case 169:
StringCopy(&Var2, "TORSO_P1_17_9", 16);
iVar6=17;
iVar7=9;
iVar1=50;
break;
case 170:
StringCopy(&Var2, "TORSO_P1_17_10", 16);
iVar6=17;
iVar7=10;
iVar1=50;
break;
case 171:
StringCopy(&Var2, "TORSO_P1_17_11", 16);
iVar6=17;
iVar7=11;
iVar1=50;
break;
case 172:
StringCopy(&Var2, "TORSO_P1_17_12", 16);
iVar6=17;
iVar7=12;
iVar1=50;
break;
case 173:
StringCopy(&Var2, "TORSO_P1_17_13", 16);
iVar6=17;
iVar7=13;
iVar1=50;
break;
case 174:
StringCopy(&Var2, "TORSO_P1_17_14", 16);
iVar6=17;
iVar7=14;
iVar1=50;
break;
case 175:
StringCopy(&Var2, "TORSO_P1_17_15", 16);
iVar6=17;
iVar7=15;
iVar1=50;
break;
case 176:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar6=18;
iVar7=0;
iVar9=3;
break;
case 177:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar9=3;
break;
case 178:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar9=3;
break;
case 179:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar9=3;
break;
case 180:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar6=18;
iVar7=4;
iVar9=3;
break;
case 181:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar6=18;
iVar7=5;
iVar9=3;
break;
case 182:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar6=18;
iVar7=6;
iVar9=3;
break;
case 183:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar6=18;
iVar7=7;
iVar9=3;
break;
case 184:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar6=18;
iVar7=8;
iVar9=3;
break;
case 185:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar6=18;
iVar7=9;
iVar9=3;
break;
case 186:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar6=18;
iVar7=10;
iVar9=3;
break;
case 187:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar6=18;
iVar7=11;
iVar9=3;
break;
case 188:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar6=18;
iVar7=12;
iVar9=3;
break;
case 189:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar6=18;
iVar7=13;
iVar9=3;
break;
case 190:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar6=18;
iVar7=14;
iVar9=3;
break;
case 191:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar6=18;
iVar7=15;
iVar9=3;
break;
case 192:
StringCopy(&Var2, "TORSO_P1_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=480;
iVar9=3;
break;
case 193:
StringCopy(&Var2, "TORSO_P1_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=440;
iVar9=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P1_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=440;
iVar9=3;
break;
case 195:
StringCopy(&Var2, "TORSO_P1_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=520;
iVar9=3;
break;
case 196:
StringCopy(&Var2, "TORSO_P1_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=440;
iVar9=3;
break;
case 197:
StringCopy(&Var2, "TORSO_P1_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=440;
iVar9=3;
break;
case 198:
StringCopy(&Var2, "TORSO_P1_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=480;
iVar9=3;
break;
case 199:
StringCopy(&Var2, "TORSO_P1_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=480;
iVar9=3;
break;
case 200:
StringCopy(&Var2, "TORSO_P1_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=480;
iVar9=3;
break;
case 201:
StringCopy(&Var2, "TORSO_P1_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=480;
iVar9=3;
break;
case 202:
StringCopy(&Var2, "TORSO_P1_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=480;
iVar9=3;
break;
case 203:
StringCopy(&Var2, "TORSO_P1_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=480;
iVar9=3;
break;
case 204:
StringCopy(&Var2, "TORSO_P1_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=520;
iVar9=3;
break;
case 205:
StringCopy(&Var2, "TORSO_P1_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=520;
iVar9=3;
break;
case 206:
StringCopy(&Var2, "TORSO_P1_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=520;
iVar9=3;
break;
case 207:
StringCopy(&Var2, "TORSO_P1_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=440;
iVar9=3;
break;
case 208:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 209:
StringCopy(&Var2, "TORSO_P1_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=220;
break;
case 210:
StringCopy(&Var2, "TORSO_P1_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=200;
break;
case 211:
StringCopy(&Var2, "TORSO_P1_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=240;
break;
case 212:
StringCopy(&Var2, "TORSO_P1_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=240;
break;
case 213:
StringCopy(&Var2, "TORSO_P1_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=260;
break;
case 214:
StringCopy(&Var2, "TORSO_P1_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=275;
break;
case 215:
StringCopy(&Var2, "TORSO_P1_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=275;
break;
case 216:
StringCopy(&Var2, "TORSO_P1_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=280;
break;
case 217:
StringCopy(&Var2, "TORSO_P1_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=280;
break;
case 218:
StringCopy(&Var2, "TORSO_P1_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=280;
break;
case 219:
StringCopy(&Var2, "TORSO_P1_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=280;
break;
case 220:
StringCopy(&Var2, "TORSO_P1_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=280;
break;
case 221:
StringCopy(&Var2, "TORSO_P1_21_12", 16);
iVar6=21;
iVar7=12;
iVar1=280;
break;
case 222:
StringCopy(&Var2, "TORSO_P1_21_13", 16);
iVar6=21;
iVar7=13;
iVar1=280;
break;
case 223:
StringCopy(&Var2, "TORSO_P1_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=3100;
iVar9=3;
break;
case 224:
StringCopy(&Var2, "TORSO_P1_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=2800;
iVar9=3;
break;
case 225:
StringCopy(&Var2, "TORSO_P1_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=2500;
iVar9=3;
break;
case 226:
StringCopy(&Var2, "TORSO_P1_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=3000;
iVar9=3;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_127(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P1_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P1_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=180;
break;
case 3:
StringCopy(&Var2, "TORSO_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=22;
break;
case 4:
StringCopy(&Var2, "TORSO_P1_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=20;
break;
case 5:
StringCopy(&Var2, "TORSO_P1_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=18;
break;
case 6:
StringCopy(&Var2, "TORSO_P1_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=19;
break;
case 7:
StringCopy(&Var2, "TORSO_P1_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P1_0_8", 16);
iVar6=0;
iVar7=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P1_0_9", 16);
iVar6=0;
iVar7=9;
iVar1=19;
break;
case 10:
StringCopy(&Var2, "TORSO_P1_0_10", 16);
iVar6=0;
iVar7=10;
iVar1=19;
break;
case 11:
StringCopy(&Var2, "TORSO_P1_0_11", 16);
iVar6=0;
iVar7=11;
iVar1=18;
break;
case 12:
StringCopy(&Var2, "TORSO_P1_0_12", 16);
iVar6=0;
iVar7=12;
iVar1=20;
break;
case 13:
StringCopy(&Var2, "TORSO_P1_0_13", 16);
iVar6=0;
iVar7=13;
iVar1=22;
break;
case 14:
StringCopy(&Var2, "TORSO_P1_0_14", 16);
iVar6=0;
iVar7=14;
iVar1=19;
break;
case 15:
StringCopy(&Var2, "TORSO_P1_0_15", 16);
iVar6=0;
iVar7=15;
iVar1=22;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
bVar0=true;
iVar9=4;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
bVar0=true;
iVar9=4;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
bVar0=true;
iVar9=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=4;
bVar0=true;
iVar9=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=5;
bVar0=true;
iVar9=4;
break;
case 22:
StringCopy(&Var2, "TORSO_P1_2_0", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar9=3;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar9=1;
break;
case 24:
StringCopy(&Var2, "TORSO_P1_4_0", 16);
iVar6=4;
iVar7=0;
iVar1=20;
iVar9=2;
break;
case 25:
StringCopy(&Var2, "TORSO_P1_4_1", 16);
iVar6=4;
iVar7=1;
iVar1=22;
iVar9=2;
break;
case 26:
StringCopy(&Var2, "TORSO_P1_4_2", 16);
iVar6=4;
iVar7=2;
iVar1=20;
iVar9=2;
break;
case 27:
StringCopy(&Var2, "TORSO_P1_4_3", 16);
iVar6=4;
iVar7=3;
iVar1=25;
iVar9=2;
break;
case 28:
StringCopy(&Var2, "TORSO_P1_4_4", 16);
iVar6=4;
iVar7=4;
iVar1=23;
iVar9=2;
break;
case 29:
StringCopy(&Var2, "TORSO_P1_4_5", 16);
iVar6=4;
iVar7=5;
iVar1=25;
iVar9=2;
break;
case 30:
StringCopy(&Var2, "TORSO_P1_4_6", 16);
iVar6=4;
iVar7=6;
iVar1=28;
iVar9=2;
break;
case 31:
StringCopy(&Var2, "TORSO_P1_4_7", 16);
iVar6=4;
iVar7=7;
iVar1=26;
iVar9=2;
break;
case 32:
StringCopy(&Var2, "TORSO_P1_4_8", 16);
iVar6=4;
iVar7=8;
iVar1=24;
iVar9=2;
break;
case 33:
StringCopy(&Var2, "TORSO_P1_4_9", 16);
iVar6=4;
iVar7=9;
iVar1=27;
iVar9=2;
break;
case 34:
StringCopy(&Var2, "TORSO_P1_4_10", 16);
iVar6=4;
iVar7=10;
iVar1=29;
iVar9=2;
break;
case 35:
StringCopy(&Var2, "TORSO_P1_4_11", 16);
iVar6=4;
iVar7=11;
iVar1=28;
iVar9=2;
break;
case 36:
StringCopy(&Var2, "TORSO_P1_4_12", 16);
iVar6=4;
iVar7=12;
iVar1=25;
iVar9=2;
break;
case 37:
StringCopy(&Var2, "TORSO_P1_4_13", 16);
iVar6=4;
iVar7=13;
iVar1=22;
iVar9=2;
break;
case 38:
StringCopy(&Var2, "TORSO_P1_4_14", 16);
iVar6=4;
iVar7=14;
iVar1=27;
iVar9=2;
break;
case 39:
StringCopy(&Var2, "TORSO_P1_4_15", 16);
iVar6=4;
iVar7=15;
iVar1=29;
iVar9=2;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 41:
StringCopy(&Var2, "TORSO_P1_6_0", 16);
iVar6=6;
iVar7=0;
iVar9=3;
break;
case 42:
StringCopy(&Var2, "TORSO_P1_6_1", 16);
iVar6=6;
iVar7=1;
iVar1=1270;
iVar9=3;
break;
case 43:
StringCopy(&Var2, "TORSO_P1_6_2", 16);
iVar6=6;
iVar7=2;
iVar1=1270;
iVar9=3;
break;
case 44:
StringCopy(&Var2, "TORSO_P1_6_3", 16);
iVar6=6;
iVar7=3;
iVar1=1270;
iVar9=3;
break;
case 45:
StringCopy(&Var2, "TORSO_P1_6_4", 16);
iVar6=6;
iVar7=4;
iVar1=1090;
iVar9=3;
break;
case 46:
StringCopy(&Var2, "TORSO_P1_6_5", 16);
iVar6=6;
iVar7=5;
iVar1=1090;
iVar9=3;
break;
case 47:
StringCopy(&Var2, "TORSO_P1_6_6", 16);
iVar6=6;
iVar7=6;
iVar1=1120;
iVar9=3;
break;
case 48:
StringCopy(&Var2, "TORSO_P1_6_7", 16);
iVar6=6;
iVar7=7;
iVar1=1120;
iVar9=3;
break;
case 49:
StringCopy(&Var2, "TORSO_P1_6_8", 16);
iVar6=6;
iVar7=8;
iVar1=1290;
iVar9=3;
break;
case 50:
StringCopy(&Var2, "TORSO_P1_6_9", 16);
iVar6=6;
iVar7=9;
iVar1=1290;
iVar9=3;
break;
case 51:
StringCopy(&Var2, "TORSO_P1_6_10", 16);
iVar6=6;
iVar7=10;
iVar1=1320;
iVar9=3;
break;
case 52:
StringCopy(&Var2, "TORSO_P1_6_11", 16);
iVar6=6;
iVar7=11;
iVar1=1320;
iVar9=3;
break;
case 53:
StringCopy(&Var2, "TORSO_P1_6_12", 16);
iVar6=6;
iVar7=12;
iVar1=1590;
iVar9=3;
break;
case 54:
StringCopy(&Var2, "TORSO_P1_6_13", 16);
iVar6=6;
iVar7=13;
iVar1=1590;
iVar9=3;
break;
case 55:
StringCopy(&Var2, "TORSO_P1_6_14", 16);
iVar6=6;
iVar7=14;
iVar1=1590;
iVar9=3;
break;
case 56:
StringCopy(&Var2, "TORSO_P1_6_15", 16);
iVar6=6;
iVar7=15;
iVar1=1320;
iVar9=3;
break;
case 57:
StringCopy(&Var2, "TORSO_P1_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=98;
break;
case 58:
StringCopy(&Var2, "TORSO_P1_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=98;
break;
case 59:
StringCopy(&Var2, "TORSO_P1_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=110;
break;
case 60:
StringCopy(&Var2, "TORSO_P1_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=110;
break;
case 61:
StringCopy(&Var2, "TORSO_P1_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=118;
break;
case 62:
StringCopy(&Var2, "TORSO_P1_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=120;
break;
case 63:
StringCopy(&Var2, "TORSO_P1_7_6", 16);
iVar6=7;
iVar7=6;
iVar1=120;
break;
case 64:
StringCopy(&Var2, "TORSO_P1_7_7", 16);
iVar6=7;
iVar7=7;
iVar1=129;
break;
case 65:
StringCopy(&Var2, "TORSO_P1_7_8", 16);
iVar6=7;
iVar7=8;
iVar1=125;
break;
case 66:
StringCopy(&Var2, "TORSO_P1_7_9", 16);
iVar6=7;
iVar7=9;
iVar1=125;
break;
case 67:
StringCopy(&Var2, "TORSO_P1_7_10", 16);
iVar6=7;
iVar7=10;
iVar1=129;
break;
case 68:
StringCopy(&Var2, "TORSO_P1_7_11", 16);
iVar6=7;
iVar7=11;
iVar1=129;
break;
case 69:
StringCopy(&Var2, "TORSO_P1_7_12", 16);
iVar6=7;
iVar7=12;
iVar1=135;
break;
case 70:
StringCopy(&Var2, "TORSO_P1_7_13", 16);
iVar6=7;
iVar7=13;
iVar1=139;
break;
case 71:
StringCopy(&Var2, "TORSO_P1_7_14", 16);
iVar6=7;
iVar7=14;
iVar1=145;
break;
case 72:
StringCopy(&Var2, "TORSO_P1_7_15", 16);
iVar6=7;
iVar7=15;
iVar1=145;
break;
case 73:
StringCopy(&Var2, "TORSO_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 74:
StringCopy(&Var2, "TORSO_P1_8_1", 16);
iVar6=8;
iVar7=1;
break;
case 75:
StringCopy(&Var2, "TORSO_P1_8_2", 16);
iVar6=8;
iVar7=2;
break;
case 76:
StringCopy(&Var2, "TORSO_P1_8_3", 16);
iVar6=8;
iVar7=3;
break;
case 77:
StringCopy(&Var2, "TORSO_P1_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=30;
break;
case 78:
StringCopy(&Var2, "TORSO_P1_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=38;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P1_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=32;
break;
case 80:
StringCopy(&Var2, "TORSO_P1_8_7", 16);
iVar6=8;
iVar7=7;
iVar1=30;
break;
case 81:
StringCopy(&Var2, "TORSO_P1_8_8", 16);
iVar6=8;
iVar7=8;
iVar1=33;
break;
case 82:
StringCopy(&Var2, "TORSO_P1_8_9", 16);
iVar6=8;
iVar7=9;
iVar1=35;
break;
case 83:
StringCopy(&Var2, "TORSO_P1_8_10", 16);
iVar6=8;
iVar7=10;
iVar1=35;
break;
case 84:
StringCopy(&Var2, "TORSO_P1_8_11", 16);
iVar6=8;
iVar7=11;
iVar1=38;
break;
case 85:
StringCopy(&Var2, "TORSO_P1_8_12", 16);
iVar6=8;
iVar7=12;
iVar1=33;
break;
case 86:
StringCopy(&Var2, "TORSO_P1_8_13", 16);
iVar6=8;
iVar7=13;
iVar1=35;
break;
case 87:
StringCopy(&Var2, "TORSO_P1_8_14", 16);
iVar6=8;
iVar7=14;
iVar1=38;
break;
case 88:
StringCopy(&Var2, "TORSO_P1_8_15", 16);
iVar6=8;
iVar7=15;
iVar1=32;
break;
case 89:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "TORSO_P1_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 92:
StringCopy(&Var2, "TORSO_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=59;
break;
case 93:
StringCopy(&Var2, "TORSO_P1_11_2", 16);
iVar6=11;
iVar7=2;
break;
case 94:
StringCopy(&Var2, "TORSO_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=25;
break;
case 95:
StringCopy(&Var2, "TORSO_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=29;
break;
case 96:
StringCopy(&Var2, "TORSO_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=27;
break;
case 97:
StringCopy(&Var2, "TORSO_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=25;
break;
case 98:
StringCopy(&Var2, "TORSO_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=27;
break;
case 99:
StringCopy(&Var2, "TORSO_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=28;
break;
case 100:
StringCopy(&Var2, "TORSO_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=30;
break;
case 101:
StringCopy(&Var2, "TORSO_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=29;
break;
case 102:
StringCopy(&Var2, "TORSO_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=27;
break;
case 103:
StringCopy(&Var2, "TORSO_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=29;
break;
case 104:
StringCopy(&Var2, "TORSO_P1_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=32;
break;
case 105:
StringCopy(&Var2, "TORSO_P1_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=30;
break;
case 106:
StringCopy(&Var2, "TORSO_P1_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=28;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_128(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P1_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P1_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "HAIR_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar9=3;
break;
case 4:
StringCopy(&Var2, "HAIR_P1_0_4", 16);
iVar6=0;
iVar7=4;
iVar9=3;
break;
case 5:
StringCopy(&Var2, "HAIR_P1_0_5", 16);
iVar6=0;
iVar7=5;
iVar9=3;
break;
case 6:
StringCopy(&Var2, "HAIR_P1_0_6", 16);
iVar6=0;
iVar7=6;
iVar9=3;
break;
case 7:
StringCopy(&Var2, "HAIR_P1_0_7", 16);
iVar6=0;
iVar7=7;
iVar9=3;
break;
case 8:
StringCopy(&Var2, "HAIR_P1_0_8", 16);
iVar6=0;
iVar7=8;
iVar9=3;
break;
case 9:
StringCopy(&Var2, "HAIR_P1_0_9", 16);
iVar6=0;
iVar7=9;
iVar9=3;
break;
case 10:
StringCopy(&Var2, "HAIR_P1_0_10", 16);
iVar6=0;
iVar7=10;
iVar9=3;
break;
case 11:
StringCopy(&Var2, "HAIR_P1_0_11", 16);
iVar6=0;
iVar7=11;
iVar9=3;
break;
case 12:
StringCopy(&Var2, "HAIR_P1_0_12", 16);
iVar6=0;
iVar7=12;
iVar9=3;
break;
case 13:
StringCopy(&Var2, "HAIR_P1_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "HAIR_P1_0_14", 16);
iVar6=0;
iVar7=14;
iVar9=3;
break;
case 15:
StringCopy(&Var2, "HAIR_P1_0_15", 16);
iVar6=0;
iVar7=15;
iVar9=3;
break;
case 16:
StringCopy(&Var2, "HAIR_P1_1_0", 16);
iVar6=1;
iVar7=0;
iVar9=3;
break;
case 17:
StringCopy(&Var2, "HAIR_P1_2_0", 16);
iVar6=2;
iVar7=0;
iVar9=3;
break;
case 18:
StringCopy(&Var2, "HAIR_P1_3_0", 16);
iVar6=3;
iVar7=0;
iVar9=3;
break;
case 19:
StringCopy(&Var2, "HAIR_P1_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 21, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_129(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=9;
break;
default:
func_94(iVar10, iParam0, 10, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_130(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_147(iParam1);
break;
case 2:
func_146(iParam1);
break;
case 3:
func_143(iParam1);
break;
case 4:
func_142(iParam1);
break;
case 6:
func_141(iParam1);
break;
case 5:
func_140(iParam1);
break;
case 8:
func_139(iParam1);
break;
case 9:
func_138(iParam1);
break;
case 10:
func_137(iParam1);
break;
case 1:
func_136(iParam1);
break;
case 7:
func_135(iParam1);
break;
case 11:
func_134(iParam1);
break;
case 12:
func_133(iParam1);
break;
case 13:
func_132(iParam1);
break;
case 14:
func_131(iParam1);
break;
}}


void func_131(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "PROPS_P0_H1", 16);
iVar6=1;
iVar7=0;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P0_H2", 16);
iVar6=2;
iVar7=0;
iVar1=320;
iVar8=11;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=6;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=7;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P0_H12", 16);
iVar6=12;
iVar7=0;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=14;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=14;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=15;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=16;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=16;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=17;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=18;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=18;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=19;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=19;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=20;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=20;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=20;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=1;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=2;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=3;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=4;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=5;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=28;
iVar7=0;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P0_E0", 16);
iVar6=0;
iVar7=0;
iVar1=45;
iVar8=10;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 61:
StringCopy(&Var2, "PROPS_P0_E3", 16);
iVar6=3;
iVar7=0;
iVar1=55;
iVar8=10;
break;
case 62:
StringCopy(&Var2, "PROPS_P0_E4", 16);
iVar6=4;
iVar7=0;
iVar1=58;
iVar8=10;
break;
case 63:
StringCopy(&Var2, "PROPS_P0_E4_1", 16);
iVar6=4;
iVar7=1;
iVar1=56;
iVar8=10;
break;
case 64:
StringCopy(&Var2, "PROPS_P0_E4_2", 16);
iVar6=4;
iVar7=2;
iVar1=60;
iVar8=10;
break;
case 65:
StringCopy(&Var2, "PROPS_P0_E4_3", 16);
iVar6=4;
iVar7=3;
iVar1=65;
iVar8=10;
break;
case 66:
StringCopy(&Var2, "PROPS_P0_E4_4", 16);
iVar6=4;
iVar7=4;
iVar1=62;
iVar8=10;
break;
case 67:
StringCopy(&Var2, "PROPS_P0_E4_5", 16);
iVar6=4;
iVar7=5;
iVar1=65;
iVar8=10;
break;
case 68:
StringCopy(&Var2, "PROPS_P0_E4_6", 16);
iVar6=4;
iVar7=6;
iVar1=68;
iVar8=10;
break;
case 69:
StringCopy(&Var2, "PROPS_P0_E4_7", 16);
iVar6=4;
iVar7=7;
iVar1=68;
iVar8=10;
break;
case 70:
StringCopy(&Var2, "PROPS_P0_E5", 16);
iVar6=5;
iVar7=0;
iVar1=65;
iVar8=10;
break;
case 71:
StringCopy(&Var2, "PROPS_P0_E5_1", 16);
iVar6=5;
iVar7=1;
iVar1=69;
iVar8=10;
break;
case 72:
StringCopy(&Var2, "PROPS_P0_E5_2", 16);
iVar6=5;
iVar7=2;
iVar1=72;
iVar8=10;
break;
case 73:
StringCopy(&Var2, "PROPS_P0_E5_3", 16);
iVar6=5;
iVar7=3;
iVar1=70;
iVar8=10;
break;
case 74:
StringCopy(&Var2, "PROPS_P0_E5_4", 16);
iVar6=5;
iVar7=4;
iVar1=74;
iVar8=10;
break;
case 75:
StringCopy(&Var2, "PROPS_P0_E5_5", 16);
iVar6=5;
iVar7=5;
iVar1=78;
iVar8=10;
break;
case 76:
StringCopy(&Var2, "PROPS_P0_E5_6", 16);
iVar6=5;
iVar7=6;
iVar1=82;
iVar8=10;
break;
case 77:
StringCopy(&Var2, "PROPS_P0_E5_7", 16);
iVar6=5;
iVar7=7;
iVar1=85;
iVar8=10;
break;
case 78:
StringCopy(&Var2, "PROPS_P0_E5_8", 16);
iVar6=5;
iVar7=8;
iVar1=85;
iVar8=10;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P0_E5_9", 16);
iVar6=5;
iVar7=9;
iVar8=10;
break;
case 80:
StringCopy(&Var2, "PROPS_P0_E6", 16);
iVar6=6;
iVar7=0;
iVar1=69;
iVar8=10;
break;
case 81:
StringCopy(&Var2, "PROPS_P0_E6_1", 16);
iVar6=6;
iVar7=1;
iVar1=69;
iVar8=10;
break;
case 82:
StringCopy(&Var2, "PROPS_P0_E6_2", 16);
iVar6=6;
iVar7=2;
iVar1=69;
iVar8=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P0_E6_3", 16);
iVar6=6;
iVar7=3;
iVar1=69;
iVar8=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P0_E6_4", 16);
iVar6=6;
iVar7=4;
iVar1=69;
iVar8=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P0_E6_5", 16);
iVar6=6;
iVar7=5;
iVar1=69;
iVar8=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P0_E6_6", 16);
iVar6=6;
iVar7=6;
iVar1=69;
iVar8=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P0_E6_7", 16);
iVar6=6;
iVar7=7;
iVar1=69;
iVar8=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P0_E6_8", 16);
iVar6=6;
iVar7=8;
iVar1=69;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P0_E6_9", 16);
iVar6=6;
iVar7=9;
iVar1=69;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P0_E7", 16);
iVar6=7;
iVar7=0;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P0_E8", 16);
iVar6=8;
iVar7=0;
iVar1=170;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P0_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=175;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P0_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=180;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P0_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=185;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P0_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=189;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P0_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=195;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P0_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=235;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P0_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=245;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P0_E8_8", 16);
iVar6=8;
iVar7=8;
iVar1=250;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P0_E8_9", 16);
iVar6=8;
iVar7=9;
iVar1=275;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P0_E8_10", 16);
iVar6=8;
iVar7=10;
iVar1=280;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P0_E8_11", 16);
iVar6=8;
iVar7=11;
iVar1=295;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P0_E9", 16);
iVar6=9;
iVar7=0;
iVar1=179;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P0_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=159;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P0_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=165;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P0_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=155;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P0_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=175;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P0_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=185;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P0_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=189;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P0_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=225;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
default:
func_94(iVar10, iParam0, 113, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_132(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 10, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_133(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P0_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P0_1", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P0_4", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P0_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P0_8", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P0_9", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P0_12", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P0_14", 16);
iVar6=0;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P0_18", 16);
iVar6=0;
iVar7=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P0_19", 16);
iVar6=0;
iVar7=0;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P0_20", 16);
iVar6=0;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P0_22", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P0_23", 16);
iVar6=0;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P0_24", 16);
iVar6=0;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P0_26", 16);
iVar6=0;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P0_28", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P0_29", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P0_30", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P0_31", 16);
iVar6=0;
iVar7=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P0_32", 16);
iVar6=0;
iVar7=0;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P0_33", 16);
iVar6=0;
iVar7=0;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P0_34", 16);
iVar6=0;
iVar7=0;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P0_35", 16);
iVar6=0;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar6=0;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P0_36", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P0_37", 16);
iVar6=0;
iVar7=0;
iVar1=840;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P0_38", 16);
iVar6=0;
iVar7=0;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P0_39", 16);
iVar6=0;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P0_40", 16);
iVar6=0;
iVar7=0;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P0_41", 16);
iVar6=0;
iVar7=0;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P0_42", 16);
iVar6=0;
iVar7=0;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P0_43", 16);
iVar6=0;
iVar7=0;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P0_44", 16);
iVar6=0;
iVar7=0;
iVar1=3900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P0_45", 16);
iVar6=0;
iVar7=0;
iVar1=4000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P0_46", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P0_47", 16);
iVar6=0;
iVar7=0;
iVar1=4600;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P0_48", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P0_49", 16);
iVar6=0;
iVar7=0;
iVar1=4400;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P0_50", 16);
iVar6=0;
iVar7=0;
iVar1=4400;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P0_51", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P0_52", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P0_53", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P0_54", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 48:
StringCopy(&Var2, "OUTFIT_P0_55", 16);
iVar6=0;
iVar7=0;
break;
case 49:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar6=0;
iVar7=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 53, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_134(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "JBIB_P0_02_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "JBIB_P0_02_1", 16);
iVar6=2;
iVar7=1;
break;
case 4:
StringCopy(&Var2, "JBIB_P0_02_2", 16);
iVar6=2;
iVar7=2;
break;
case 5:
StringCopy(&Var2, "JBIB_P0_02_3", 16);
iVar6=2;
iVar7=3;
break;
case 6:
StringCopy(&Var2, "JBIB_P0_02_4", 16);
iVar6=2;
iVar7=4;
break;
case 7:
StringCopy(&Var2, "JBIB_P0_02_5", 16);
iVar6=2;
iVar7=5;
break;
case 8:
StringCopy(&Var2, "JBIB_P0_03_0", 16);
iVar6=3;
iVar7=0;
iVar1=390;
break;
case 9:
StringCopy(&Var2, "JBIB_P0_03_1", 16);
iVar6=3;
iVar7=1;
iVar1=390;
break;
case 10:
StringCopy(&Var2, "JBIB_P0_03_2", 16);
iVar6=3;
iVar7=2;
iVar1=420;
break;
case 11:
StringCopy(&Var2, "JBIB_P0_03_3", 16);
iVar6=3;
iVar7=3;
iVar1=420;
break;
case 12:
StringCopy(&Var2, "JBIB_P0_03_4", 16);
iVar6=3;
iVar7=4;
iVar1=490;
break;
case 13:
StringCopy(&Var2, "JBIB_P0_03_5", 16);
iVar6=3;
iVar7=5;
iVar1=490;
break;
case 14:
StringCopy(&Var2, "JBIB_P0_03_6", 16);
iVar6=3;
iVar7=6;
iVar1=540;
break;
case 15:
StringCopy(&Var2, "JBIB_P0_03_7", 16);
iVar6=3;
iVar7=7;
iVar1=540;
break;
case 16:
StringCopy(&Var2, "JBIB_P0_03_8", 16);
iVar6=3;
iVar7=8;
iVar1=550;
break;
case 17:
StringCopy(&Var2, "JBIB_P0_03_9", 16);
iVar6=3;
iVar7=9;
iVar1=540;
break;
case 18:
StringCopy(&Var2, "JBIB_P0_04_0", 16);
iVar6=4;
iVar7=0;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "JBIB_P0_04_1", 16);
iVar6=4;
iVar7=1;
iVar1=850;
break;
case 20:
StringCopy(&Var2, "JBIB_P0_04_2", 16);
iVar6=4;
iVar7=2;
iVar1=890;
break;
case 21:
StringCopy(&Var2, "JBIB_P0_04_3", 16);
iVar6=4;
iVar7=3;
iVar1=890;
break;
case 22:
StringCopy(&Var2, "JBIB_P0_04_4", 16);
iVar6=4;
iVar7=4;
iVar1=920;
break;
case 23:
StringCopy(&Var2, "JBIB_P0_04_5", 16);
iVar6=4;
iVar7=5;
iVar1=920;
break;
case 24:
StringCopy(&Var2, "JBIB_P0_04_6", 16);
iVar6=4;
iVar7=6;
iVar1=950;
break;
case 25:
StringCopy(&Var2, "JBIB_P0_04_7", 16);
iVar6=4;
iVar7=7;
iVar1=980;
break;
case 26:
StringCopy(&Var2, "JBIB_P0_04_8", 16);
iVar6=4;
iVar7=8;
iVar1=1050;
break;
case 27:
StringCopy(&Var2, "JBIB_P0_04_9", 16);
iVar6=4;
iVar7=9;
iVar1=1100;
break;
case 28:
StringCopy(&Var2, "JBIB_P0_05_0", 16);
iVar6=5;
iVar7=0;
iVar1=1890;
break;
case 29:
StringCopy(&Var2, "JBIB_P0_05_1", 16);
iVar6=5;
iVar7=1;
iVar1=1820;
break;
case 30:
StringCopy(&Var2, "JBIB_P0_05_2", 16);
iVar6=5;
iVar7=2;
iVar1=1820;
break;
case 31:
StringCopy(&Var2, "JBIB_P0_05_3", 16);
iVar6=5;
iVar7=3;
iVar1=1850;
break;
case 32:
StringCopy(&Var2, "JBIB_P0_05_4", 16);
iVar6=5;
iVar7=4;
iVar1=1850;
break;
case 33:
StringCopy(&Var2, "JBIB_P0_05_5", 16);
iVar6=5;
iVar7=5;
iVar1=1900;
break;
case 34:
StringCopy(&Var2, "JBIB_P0_05_6", 16);
iVar6=5;
iVar7=6;
iVar1=1920;
break;
case 35:
StringCopy(&Var2, "JBIB_P0_05_7", 16);
iVar6=5;
iVar7=7;
iVar1=1980;
break;
case 36:
StringCopy(&Var2, "JBIB_P0_05_8", 16);
iVar6=5;
iVar7=8;
iVar1=2100;
break;
case 37:
StringCopy(&Var2, "JBIB_P0_05_9", 16);
iVar6=5;
iVar7=9;
iVar1=2120;
break;
case 38:
StringCopy(&Var2, "JBIB_P0_05_10", 16);
iVar6=5;
iVar7=10;
iVar1=2000;
break;
case 39:
StringCopy(&Var2, "JBIB_P0_05_11", 16);
iVar6=5;
iVar7=11;
iVar1=2200;
break;
case 40:
StringCopy(&Var2, "JBIB_P0_05_12", 16);
iVar6=5;
iVar7=12;
iVar1=2280;
break;
case 41:
StringCopy(&Var2, "JBIB_P0_05_13", 16);
iVar6=5;
iVar7=13;
iVar1=2300;
break;
case 42:
StringCopy(&Var2, "JBIB_P0_05_14", 16);
iVar6=5;
iVar7=14;
iVar1=2350;
break;
case 43:
StringCopy(&Var2, "JBIB_P0_05_15", 16);
iVar6=5;
iVar7=15;
iVar1=2280;
break;
case 44:
StringCopy(&Var2, "JBIB_P0_06_0", 16);
iVar6=6;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 45, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_135(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 1, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_136(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P0_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P0_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P0_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P0_4_0", 16);
iVar6=4;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 5, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_137(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=2;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=3;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=4;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=5;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=6;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=7;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=5;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=4;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=5;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=6;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=1;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=2;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=3;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=4;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=5;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=6;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=7;
break;
case 36:
StringCopy(&Var2, "DECL_P0_10_8", 16);
iVar6=10;
iVar7=8;
break;
case 37:
StringCopy(&Var2, "DECL_P0_10_9", 16);
iVar6=10;
iVar7=9;
break;
case 38:
StringCopy(&Var2, "DECL_P0_10_10", 16);
iVar6=10;
iVar7=10;
break;
case 39:
StringCopy(&Var2, "DECL_P0_10_11", 16);
iVar6=10;
iVar7=11;
break;
case 40:
StringCopy(&Var2, "DECL_P0_10_12", 16);
iVar6=10;
iVar7=12;
break;
case 41:
StringCopy(&Var2, "DECL_P0_10_13", 16);
iVar6=10;
iVar7=13;
break;
case 42:
StringCopy(&Var2, "DECL_P0_10_14", 16);
iVar6=10;
iVar7=14;
break;
case 43:
StringCopy(&Var2, "DECL_P0_10_15", 16);
iVar6=10;
iVar7=15;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
break;
default:
func_94(iVar10, iParam0, 48, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_138(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=8;
iVar7=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=8;
iVar7=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=8;
iVar7=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=8;
iVar7=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=8;
iVar7=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=8;
iVar7=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=1;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 20, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_139(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "SPEC_P0_10", 16);
iVar6=10;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "SPEC_P0_16", 16);
iVar6=16;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 24, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_140(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=2;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=3;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=4;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
default:
func_94(iVar10, iParam0, 14, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_141(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P0_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=665;
break;
case 2:
StringCopy(&Var2, "FEET_P0_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=620;
break;
case 3:
StringCopy(&Var2, "FEET_P0_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=540;
break;
case 4:
StringCopy(&Var2, "FEET_P0_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=580;
break;
case 5:
StringCopy(&Var2, "FEET_P0_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=650;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "FEET_P0_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "FEET_P0_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "FEET_P0_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=64;
break;
case 22:
StringCopy(&Var2, "FEET_P0_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=56;
break;
case 23:
StringCopy(&Var2, "FEET_P0_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=69;
break;
case 24:
StringCopy(&Var2, "FEET_P0_15_4", 16);
iVar6=15;
iVar7=4;
iVar1=59;
break;
case 25:
StringCopy(&Var2, "FEET_P0_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=62;
break;
case 26:
StringCopy(&Var2, "FEET_P0_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=74;
break;
case 27:
StringCopy(&Var2, "FEET_P0_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=68;
break;
case 28:
StringCopy(&Var2, "FEET_P0_15_8", 16);
iVar6=15;
iVar7=8;
iVar1=72;
break;
case 29:
StringCopy(&Var2, "FEET_P0_15_9", 16);
iVar6=15;
iVar7=9;
iVar1=70;
break;
case 30:
StringCopy(&Var2, "FEET_P0_16_0", 16);
iVar6=16;
iVar7=0;
iVar1=48;
break;
case 31:
StringCopy(&Var2, "FEET_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=48;
break;
case 32:
StringCopy(&Var2, "FEET_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=55;
break;
case 33:
StringCopy(&Var2, "FEET_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=75;
break;
case 34:
StringCopy(&Var2, "FEET_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=65;
break;
case 35:
StringCopy(&Var2, "FEET_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=68;
break;
case 36:
StringCopy(&Var2, "FEET_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=58;
break;
case 37:
StringCopy(&Var2, "FEET_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=68;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "FEET_P0_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=790;
break;
case 40:
StringCopy(&Var2, "FEET_P0_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=750;
break;
case 41:
StringCopy(&Var2, "FEET_P0_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=860;
break;
case 42:
StringCopy(&Var2, "FEET_P0_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=750;
break;
case 43:
StringCopy(&Var2, "FEET_P0_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=790;
break;
case 44:
StringCopy(&Var2, "FEET_P0_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 45:
StringCopy(&Var2, "FEET_P0_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=820;
break;
case 46:
StringCopy(&Var2, "FEET_P0_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=800;
break;
case 47:
StringCopy(&Var2, "FEET_P0_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=850;
break;
case 48:
StringCopy(&Var2, "FEET_P0_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=870;
break;
case 49:
StringCopy(&Var2, "FEET_P0_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=720;
break;
case 50:
StringCopy(&Var2, "FEET_P0_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=740;
break;
case 51:
StringCopy(&Var2, "FEET_P0_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=800;
break;
case 52:
StringCopy(&Var2, "FEET_P0_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=750;
break;
case 53:
StringCopy(&Var2, "FEET_P0_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=770;
break;
case 54:
StringCopy(&Var2, "FEET_P0_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=860;
break;
case 55:
StringCopy(&Var2, "FEET_P0_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=850;
break;
case 56:
StringCopy(&Var2, "FEET_P0_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=800;
break;
case 57:
StringCopy(&Var2, "FEET_P0_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=780;
break;
case 58:
StringCopy(&Var2, "FEET_P0_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=890;
break;
case 59:
StringCopy(&Var2, "FEET_P0_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=820;
break;
case 60:
StringCopy(&Var2, "FEET_P0_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=840;
break;
case 61:
StringCopy(&Var2, "FEET_P0_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=870;
break;
case 62:
StringCopy(&Var2, "FEET_P0_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=930;
break;
case 63:
StringCopy(&Var2, "FEET_P0_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=880;
break;
case 64:
StringCopy(&Var2, "FEET_P0_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=900;
break;
case 65:
StringCopy(&Var2, "FEET_P0_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=920;
break;
case 66:
StringCopy(&Var2, "FEET_P0_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=970;
break;
case 67:
StringCopy(&Var2, "FEET_P0_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=990;
break;
case 68:
StringCopy(&Var2, "FEET_P0_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=960;
break;
case 69:
StringCopy(&Var2, "FEET_P0_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=980;
break;
case 70:
StringCopy(&Var2, "FEET_P0_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=950;
break;
case 71:
StringCopy(&Var2, "FEET_P0_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 73:
StringCopy(&Var2, "FEET_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "FEET_P0_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 75:
StringCopy(&Var2, "FEET_P0_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=125;
break;
case 76:
StringCopy(&Var2, "FEET_P0_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=128;
break;
case 77:
StringCopy(&Var2, "FEET_P0_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=135;
break;
case 78:
StringCopy(&Var2, "FEET_P0_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=130;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P0_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=145;
break;
case 80:
StringCopy(&Var2, "FEET_P0_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=110;
break;
case 81:
StringCopy(&Var2, "FEET_P0_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P0_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=150;
break;
case 83:
StringCopy(&Var2, "FEET_P0_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=125;
break;
case 84:
StringCopy(&Var2, "FEET_P0_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=120;
break;
case 85:
StringCopy(&Var2, "FEET_P0_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=130;
break;
case 86:
StringCopy(&Var2, "FEET_P0_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=110;
break;
case 87:
StringCopy(&Var2, "FEET_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=720;
break;
case 88:
StringCopy(&Var2, "FEET_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=680;
break;
case 89:
StringCopy(&Var2, "FEET_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=650;
break;
case 90:
StringCopy(&Var2, "FEET_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=670;
break;
case 91:
StringCopy(&Var2, "FEET_P0_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=700;
break;
case 92:
StringCopy(&Var2, "FEET_P0_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=680;
break;
case 93:
StringCopy(&Var2, "FEET_P0_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=720;
break;
case 94:
StringCopy(&Var2, "FEET_P0_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=740;
break;
case 95:
StringCopy(&Var2, "FEET_P0_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=760;
break;
case 96:
StringCopy(&Var2, "FEET_P0_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=780;
break;
case 97:
StringCopy(&Var2, "FEET_P0_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=750;
break;
case 98:
StringCopy(&Var2, "FEET_P0_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=700;
break;
default:
func_94(iVar10, iParam0, 99, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_142(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "LEGS_P0_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "LEGS_P0_0_3", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "LEGS_P0_0_4", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "LEGS_P0_0_5", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "LEGS_P0_0_6", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "LEGS_P0_0_7", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "LEGS_P0_0_8", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "LEGS_P0_0_9", 16);
iVar6=0;
iVar7=9;
break;
case 10:
StringCopy(&Var2, "LEGS_P0_0_10", 16);
iVar6=0;
iVar7=10;
break;
case 11:
StringCopy(&Var2, "LEGS_P0_0_11", 16);
iVar6=0;
iVar7=11;
break;
case 12:
StringCopy(&Var2, "LEGS_P0_0_12", 16);
iVar6=0;
iVar7=12;
break;
case 13:
StringCopy(&Var2, "LEGS_P0_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "LEGS_P0_0_14", 16);
iVar6=0;
iVar7=14;
break;
case 15:
StringCopy(&Var2, "LEGS_P0_0_15", 16);
iVar6=0;
iVar7=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "LEGS_P0_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=115;
break;
case 24:
StringCopy(&Var2, "LEGS_P0_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=115;
break;
case 25:
StringCopy(&Var2, "LEGS_P0_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=128;
break;
case 26:
StringCopy(&Var2, "LEGS_P0_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=118;
break;
case 27:
StringCopy(&Var2, "LEGS_P0_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "LEGS_P0_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=128;
break;
case 29:
StringCopy(&Var2, "LEGS_P0_7_6", 16);
iVar6=7;
iVar7=6;
iVar1=128;
break;
case 30:
StringCopy(&Var2, "LEGS_P0_7_7", 16);
iVar6=7;
iVar7=7;
iVar1=125;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "LEGS_P0_13_0", 16);
iVar6=13;
iVar7=0;
iVar1=68;
break;
case 42:
StringCopy(&Var2, "LEGS_P0_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=68;
break;
case 43:
StringCopy(&Var2, "LEGS_P0_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=68;
break;
case 44:
StringCopy(&Var2, "LEGS_P0_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=68;
break;
case 45:
StringCopy(&Var2, "LEGS_P0_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=68;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "LEGS_P0_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "LEGS_P0_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=550;
break;
case 49:
StringCopy(&Var2, "LEGS_P0_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=650;
break;
case 50:
StringCopy(&Var2, "LEGS_P0_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=875;
break;
case 51:
StringCopy(&Var2, "LEGS_P0_15_4", 16);
iVar6=15;
iVar7=4;
iVar1=820;
break;
case 52:
StringCopy(&Var2, "LEGS_P0_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=720;
break;
case 53:
StringCopy(&Var2, "LEGS_P0_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=750;
break;
case 54:
StringCopy(&Var2, "LEGS_P0_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=850;
break;
case 55:
StringCopy(&Var2, "LEGS_P0_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 56:
StringCopy(&Var2, "LEGS_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=48;
break;
case 57:
StringCopy(&Var2, "LEGS_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=48;
break;
case 58:
StringCopy(&Var2, "LEGS_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=38;
break;
case 59:
StringCopy(&Var2, "LEGS_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=38;
break;
case 60:
StringCopy(&Var2, "LEGS_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=42;
break;
case 61:
StringCopy(&Var2, "LEGS_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=58;
break;
case 62:
StringCopy(&Var2, "LEGS_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=46;
break;
case 63:
StringCopy(&Var2, "LEGS_P0_16_8", 16);
iVar6=16;
iVar7=8;
iVar1=46;
break;
case 64:
StringCopy(&Var2, "LEGS_P0_16_9", 16);
iVar6=16;
iVar7=9;
iVar1=46;
break;
case 65:
StringCopy(&Var2, "LEGS_P0_16_10", 16);
iVar6=16;
iVar7=10;
iVar1=68;
break;
case 66:
StringCopy(&Var2, "LEGS_P0_16_11", 16);
iVar6=16;
iVar7=11;
iVar1=58;
break;
case 67:
StringCopy(&Var2, "LEGS_P0_16_12", 16);
iVar6=16;
iVar7=12;
iVar1=50;
break;
case 68:
StringCopy(&Var2, "LEGS_P0_16_13", 16);
iVar6=16;
iVar7=13;
iVar1=68;
break;
case 69:
StringCopy(&Var2, "LEGS_P0_16_14", 16);
iVar6=16;
iVar7=14;
iVar1=68;
break;
case 70:
StringCopy(&Var2, "LEGS_P0_16_15", 16);
iVar6=16;
iVar7=15;
iVar1=42;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P0_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P0_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=250;
break;
case 74:
StringCopy(&Var2, "LEGS_P0_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=250;
break;
case 75:
StringCopy(&Var2, "LEGS_P0_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=290;
break;
case 76:
StringCopy(&Var2, "LEGS_P0_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=270;
break;
case 77:
StringCopy(&Var2, "LEGS_P0_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=270;
break;
case 78:
StringCopy(&Var2, "LEGS_P0_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=15;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P0_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=12;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "LEGS_P0_20_0", 16);
iVar6=20;
iVar7=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=118;
break;
case 83:
StringCopy(&Var2, "LEGS_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=110;
break;
case 84:
StringCopy(&Var2, "LEGS_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=88;
break;
case 85:
StringCopy(&Var2, "LEGS_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=95;
break;
case 86:
StringCopy(&Var2, "LEGS_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=95;
break;
case 87:
StringCopy(&Var2, "LEGS_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=98;
break;
case 88:
StringCopy(&Var2, "LEGS_P0_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=140;
break;
case 89:
StringCopy(&Var2, "LEGS_P0_23_0", 16);
iVar6=23;
iVar7=0;
break;
case 90:
StringCopy(&Var2, "LEGS_P0_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=150;
break;
case 91:
StringCopy(&Var2, "LEGS_P0_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=130;
break;
case 92:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "LEGS_P0_27_0", 16);
iVar6=27;
iVar7=0;
break;
case 96:
StringCopy(&Var2, "LEGS_P0_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=45;
break;
case 97:
StringCopy(&Var2, "LEGS_P0_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=48;
break;
case 98:
StringCopy(&Var2, "LEGS_P0_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=48;
break;
case 99:
StringCopy(&Var2, "LEGS_P0_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=52;
break;
case 100:
StringCopy(&Var2, "LEGS_P0_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=52;
break;
case 101:
StringCopy(&Var2, "LEGS_P0_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=55;
break;
case 102:
StringCopy(&Var2, "LEGS_P0_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=55;
break;
case 103:
StringCopy(&Var2, "LEGS_P0_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=55;
break;
case 104:
StringCopy(&Var2, "LEGS_P0_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=58;
break;
case 105:
StringCopy(&Var2, "LEGS_P0_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=58;
break;
case 106:
StringCopy(&Var2, "LEGS_P0_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=60;
break;
case 107:
StringCopy(&Var2, "LEGS_P0_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=60;
break;
case 108:
StringCopy(&Var2, "LEGS_P0_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=62;
break;
case 109:
StringCopy(&Var2, "LEGS_P0_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=62;
break;
case 110:
StringCopy(&Var2, "LEGS_P0_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P0_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=65;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=29;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 113, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_143(int iParam0){
if(iParam0 < 60){
func_145(iParam0);
}else{
func_144(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_94(3, iParam0, 181, -1);
}}


void func_144(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=1;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=2;
bVar0=true;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=3;
bVar0=true;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=4;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=5;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "TORSO_P0_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "TORSO_P0_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=120;
break;
case 72:
StringCopy(&Var2, "TORSO_P0_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=120;
break;
case 73:
StringCopy(&Var2, "TORSO_P0_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "TORSO_P0_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=120;
break;
case 75:
StringCopy(&Var2, "TORSO_P0_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=120;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "TORSO_P0_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 78:
StringCopy(&Var2, "TORSO_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=20;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=24;
break;
case 80:
StringCopy(&Var2, "TORSO_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=22;
break;
case 81:
StringCopy(&Var2, "TORSO_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=25;
break;
case 82:
StringCopy(&Var2, "TORSO_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=25;
break;
case 83:
StringCopy(&Var2, "TORSO_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=22;
break;
case 84:
StringCopy(&Var2, "TORSO_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=27;
break;
case 85:
StringCopy(&Var2, "TORSO_P0_17_0", 16);
iVar6=17;
iVar7=0;
break;
case 86:
StringCopy(&Var2, "TORSO_P0_17_1", 16);
iVar6=17;
iVar7=1;
break;
case 87:
StringCopy(&Var2, "TORSO_P0_17_2", 16);
iVar6=17;
iVar7=2;
break;
case 88:
StringCopy(&Var2, "TORSO_P0_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=48;
break;
case 89:
StringCopy(&Var2, "TORSO_P0_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=40;
break;
case 90:
StringCopy(&Var2, "TORSO_P0_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=45;
break;
case 91:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "TORSO_P0_19_0", 16);
iVar6=19;
iVar7=0;
break;
case 93:
StringCopy(&Var2, "TORSO_P0_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=190;
break;
case 94:
StringCopy(&Var2, "TORSO_P0_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=190;
break;
case 95:
StringCopy(&Var2, "TORSO_P0_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=190;
break;
case 96:
StringCopy(&Var2, "TORSO_P0_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=210;
break;
case 97:
StringCopy(&Var2, "TORSO_P0_20_0", 16);
iVar6=20;
iVar7=0;
break;
case 98:
StringCopy(&Var2, "TORSO_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 99:
StringCopy(&Var2, "TORSO_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=55;
break;
case 100:
StringCopy(&Var2, "TORSO_P0_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 101:
StringCopy(&Var2, "TORSO_P0_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=99;
break;
case 102:
StringCopy(&Var2, "TORSO_P0_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=49;
break;
case 103:
StringCopy(&Var2, "TORSO_P0_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=120;
break;
case 104:
StringCopy(&Var2, "TORSO_P0_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=45;
break;
case 105:
StringCopy(&Var2, "TORSO_P0_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=115;
break;
case 106:
StringCopy(&Var2, "TORSO_P0_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=105;
break;
case 107:
StringCopy(&Var2, "TORSO_P0_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=90;
break;
case 108:
StringCopy(&Var2, "TORSO_P0_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=95;
break;
case 109:
StringCopy(&Var2, "TORSO_P0_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=39;
break;
case 110:
StringCopy(&Var2, "TORSO_P0_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=95;
break;
case 111:
StringCopy(&Var2, "TORSO_P0_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=35;
break;
case 112:
StringCopy(&Var2, "TORSO_P0_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=95;
break;
case 113:
StringCopy(&Var2, "TORSO_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=88;
break;
case 114:
StringCopy(&Var2, "TORSO_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=60;
break;
case 115:
StringCopy(&Var2, "TORSO_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=70;
break;
case 116:
StringCopy(&Var2, "TORSO_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=80;
break;
case 117:
StringCopy(&Var2, "TORSO_P0_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=90;
break;
case 118:
StringCopy(&Var2, "TORSO_P0_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=80;
break;
case 119:
StringCopy(&Var2, "TORSO_P0_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=70;
break;
case 120:
StringCopy(&Var2, "TORSO_P0_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=95;
break;
case 121:
StringCopy(&Var2, "TORSO_P0_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=105;
break;
case 122:
StringCopy(&Var2, "TORSO_P0_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=95;
break;
case 123:
StringCopy(&Var2, "TORSO_P0_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=110;
break;
case 124:
StringCopy(&Var2, "TORSO_P0_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=98;
break;
case 125:
StringCopy(&Var2, "TORSO_P0_21_12", 16);
iVar6=21;
iVar7=12;
iVar1=88;
break;
case 126:
StringCopy(&Var2, "TORSO_P0_21_13", 16);
iVar6=21;
iVar7=13;
iVar1=98;
break;
case 127:
StringCopy(&Var2, "TORSO_P0_21_14", 16);
iVar6=21;
iVar7=14;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "TORSO_P0_21_15", 16);
iVar6=21;
iVar7=15;
iVar1=98;
break;
case 129:
StringCopy(&Var2, "TORSO_P0_22_0", 16);
iVar6=22;
iVar7=0;
break;
case 130:
StringCopy(&Var2, "TORSO_P0_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=4950;
break;
case 131:
StringCopy(&Var2, "TORSO_P0_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=4195;
break;
case 132:
StringCopy(&Var2, "TORSO_P0_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=3195;
break;
case 133:
StringCopy(&Var2, "TORSO_P0_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=2950;
break;
case 134:
StringCopy(&Var2, "TORSO_P0_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=3950;
break;
case 135:
StringCopy(&Var2, "TORSO_P0_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=3200;
break;
case 136:
StringCopy(&Var2, "TORSO_P0_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=3200;
break;
case 137:
StringCopy(&Var2, "TORSO_P0_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=3200;
break;
case 138:
StringCopy(&Var2, "TORSO_P0_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=3200;
break;
case 139:
StringCopy(&Var2, "TORSO_P0_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=3200;
break;
case 140:
StringCopy(&Var2, "TORSO_P0_23_5", 16);
iVar6=23;
iVar7=5;
iVar1=3200;
break;
case 141:
StringCopy(&Var2, "TORSO_P0_23_6", 16);
iVar6=23;
iVar7=6;
iVar1=3200;
break;
case 142:
StringCopy(&Var2, "TORSO_P0_23_7", 16);
iVar6=23;
iVar7=7;
iVar1=3200;
break;
case 143:
StringCopy(&Var2, "TORSO_P0_23_8", 16);
iVar6=23;
iVar7=8;
iVar1=3200;
break;
case 144:
StringCopy(&Var2, "TORSO_P0_23_9", 16);
iVar6=23;
iVar7=9;
iVar1=3200;
break;
case 145:
StringCopy(&Var2, "TORSO_P0_23_10", 16);
iVar6=23;
iVar7=10;
iVar1=3200;
break;
case 146:
StringCopy(&Var2, "TORSO_P0_23_11", 16);
iVar6=23;
iVar7=11;
iVar1=3200;
break;
case 147:
StringCopy(&Var2, "TORSO_P0_23_12", 16);
iVar6=23;
iVar7=12;
iVar1=3200;
break;
case 148:
StringCopy(&Var2, "TORSO_P0_23_13", 16);
iVar6=23;
iVar7=13;
iVar1=3200;
break;
case 149:
StringCopy(&Var2, "TORSO_P0_23_14", 16);
iVar6=23;
iVar7=14;
iVar1=3200;
break;
case 150:
StringCopy(&Var2, "TORSO_P0_23_15", 16);
iVar6=23;
iVar7=15;
iVar1=3200;
break;
case 151:
StringCopy(&Var2, "TORSO_P0_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=1350;
break;
case 152:
StringCopy(&Var2, "TORSO_P0_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=1400;
break;
case 153:
StringCopy(&Var2, "TORSO_P0_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=1200;
break;
case 154:
StringCopy(&Var2, "TORSO_P0_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=1250;
break;
case 155:
StringCopy(&Var2, "TORSO_P0_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=1350;
break;
case 156:
StringCopy(&Var2, "TORSO_P0_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=1300;
break;
case 157:
StringCopy(&Var2, "TORSO_P0_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=1380;
break;
case 158:
StringCopy(&Var2, "TORSO_P0_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=1340;
break;
case 159:
StringCopy(&Var2, "TORSO_P0_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=1380;
break;
case 160:
StringCopy(&Var2, "TORSO_P0_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=1250;
break;
case 161:
StringCopy(&Var2, "TORSO_P0_25_0", 16);
iVar6=25;
iVar7=0;
iVar1=840;
break;
case 162:
StringCopy(&Var2, "TORSO_P0_25_1", 16);
iVar6=25;
iVar7=1;
iVar1=840;
break;
case 163:
StringCopy(&Var2, "TORSO_P0_25_2", 16);
iVar6=25;
iVar7=2;
iVar1=840;
break;
case 164:
StringCopy(&Var2, "TORSO_P0_25_3", 16);
iVar6=25;
iVar7=3;
iVar1=840;
break;
case 165:
StringCopy(&Var2, "TORSO_P0_25_4", 16);
iVar6=25;
iVar7=4;
iVar1=840;
break;
case 166:
StringCopy(&Var2, "TORSO_P0_25_5", 16);
iVar6=25;
iVar7=5;
iVar1=840;
break;
case 167:
StringCopy(&Var2, "TORSO_P0_25_6", 16);
iVar6=25;
iVar7=6;
iVar1=840;
break;
case 168:
StringCopy(&Var2, "TORSO_P0_25_7", 16);
iVar6=25;
iVar7=7;
iVar1=840;
break;
case 169:
StringCopy(&Var2, "TORSO_P0_26_0", 16);
iVar6=26;
iVar7=0;
break;
case 170:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "TORSO_P0_28_0", 16);
iVar6=28;
iVar7=0;
break;
case 172:
StringCopy(&Var2, "TORSO_P0_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=130;
break;
case 173:
StringCopy(&Var2, "TORSO_P0_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=110;
break;
case 174:
StringCopy(&Var2, "TORSO_P0_29_0", 16);
iVar6=29;
iVar7=0;
bVar0=true;
break;
case 175:
StringCopy(&Var2, "TORSO_P0_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=290;
break;
case 176:
StringCopy(&Var2, "TORSO_P0_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=320;
break;
case 177:
StringCopy(&Var2, "TORSO_P0_31_0", 16);
iVar6=31;
iVar7=0;
iVar1=59;
break;
case 178:
StringCopy(&Var2, "TORSO_P0_31_1", 16);
iVar6=31;
iVar7=1;
iVar1=55;
break;
case 179:
StringCopy(&Var2, "TORSO_P0_31_2", 16);
iVar6=31;
iVar7=2;
iVar1=59;
break;
case 180:
StringCopy(&Var2, "TORSO_P0_31_3", 16);
iVar6=31;
iVar7=3;
iVar1=49;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_145(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P0_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=3500;
break;
case 3:
StringCopy(&Var2, "TORSO_P0_0_3", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "TORSO_P0_0_4", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "TORSO_P0_0_5", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "TORSO_P0_0_6", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "TORSO_P0_0_7", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "TORSO_P0_0_8", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "TORSO_P0_0_9", 16);
iVar6=0;
iVar7=9;
break;
case 10:
StringCopy(&Var2, "TORSO_P0_0_10", 16);
iVar6=0;
iVar7=10;
break;
case 11:
StringCopy(&Var2, "TORSO_P0_0_11", 16);
iVar6=0;
iVar7=11;
break;
case 12:
StringCopy(&Var2, "TORSO_P0_0_12", 16);
iVar6=0;
iVar7=12;
break;
case 13:
StringCopy(&Var2, "TORSO_P0_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "TORSO_P0_0_14", 16);
iVar6=0;
iVar7=14;
break;
case 15:
StringCopy(&Var2, "TORSO_P0_0_15", 16);
iVar6=0;
iVar7=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
iVar1=20;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=1;
iVar1=18;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=2;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=3;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P0_2_4", 16);
iVar6=2;
iVar7=4;
iVar1=19;
break;
case 22:
StringCopy(&Var2, "TORSO_P0_2_5", 16);
iVar6=2;
iVar7=5;
iVar1=20;
break;
case 23:
StringCopy(&Var2, "TORSO_P0_2_6", 16);
iVar6=2;
iVar7=6;
iVar1=22;
break;
case 24:
StringCopy(&Var2, "TORSO_P0_2_7", 16);
iVar6=2;
iVar7=7;
iVar1=18;
break;
case 25:
StringCopy(&Var2, "TORSO_P0_2_8", 16);
iVar6=2;
iVar7=8;
iVar1=39;
break;
case 26:
StringCopy(&Var2, "TORSO_P0_2_9", 16);
iVar6=2;
iVar7=9;
iVar1=32;
break;
case 27:
StringCopy(&Var2, "TORSO_P0_2_10", 16);
iVar6=2;
iVar7=10;
iVar1=35;
break;
case 28:
StringCopy(&Var2, "TORSO_P0_2_11", 16);
iVar6=2;
iVar7=11;
iVar1=35;
break;
case 29:
StringCopy(&Var2, "TORSO_P0_2_12", 16);
iVar6=2;
iVar7=12;
iVar1=210;
break;
case 30:
StringCopy(&Var2, "TORSO_P0_2_13", 16);
iVar6=2;
iVar7=13;
iVar1=250;
break;
case 31:
StringCopy(&Var2, "TORSO_P0_2_14", 16);
iVar6=2;
iVar7=14;
iVar1=290;
break;
case 32:
StringCopy(&Var2, "TORSO_P0_2_15", 16);
iVar6=2;
iVar7=15;
iVar1=310;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "TORSO_P0_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=150;
break;
case 39:
StringCopy(&Var2, "TORSO_P0_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=160;
break;
case 40:
StringCopy(&Var2, "TORSO_P0_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=150;
break;
case 41:
StringCopy(&Var2, "TORSO_P0_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=150;
break;
case 42:
StringCopy(&Var2, "TORSO_P0_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=160;
break;
case 43:
StringCopy(&Var2, "TORSO_P0_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=160;
break;
case 44:
StringCopy(&Var2, "TORSO_P0_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "TORSO_P0_8_1", 16);
iVar6=8;
iVar7=1;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "TORSO_P0_8_2", 16);
iVar6=8;
iVar7=2;
iVar1=52;
break;
case 47:
StringCopy(&Var2, "TORSO_P0_8_3", 16);
iVar6=8;
iVar7=3;
iVar1=55;
break;
case 48:
StringCopy(&Var2, "TORSO_P0_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=55;
break;
case 49:
StringCopy(&Var2, "TORSO_P0_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "TORSO_P0_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=58;
break;
case 51:
StringCopy(&Var2, "TORSO_P0_8_7", 16);
iVar6=8;
iVar7=7;
iVar1=62;
break;
case 52:
StringCopy(&Var2, "TORSO_P0_8_8", 16);
iVar6=8;
iVar7=8;
iVar1=65;
break;
case 53:
StringCopy(&Var2, "TORSO_P0_8_9", 16);
iVar6=8;
iVar7=9;
iVar1=65;
break;
case 54:
StringCopy(&Var2, "TORSO_P0_8_10", 16);
iVar6=8;
iVar7=10;
iVar1=68;
break;
case 55:
StringCopy(&Var2, "TORSO_P0_8_11", 16);
iVar6=8;
iVar7=11;
iVar1=68;
break;
case 56:
StringCopy(&Var2, "TORSO_P0_8_12", 16);
iVar6=8;
iVar7=12;
iVar1=55;
break;
case 57:
StringCopy(&Var2, "TORSO_P0_8_13", 16);
iVar6=8;
iVar7=13;
iVar1=62;
break;
case 58:
StringCopy(&Var2, "TORSO_P0_8_14", 16);
iVar6=8;
iVar7=14;
iVar1=58;
break;
case 59:
StringCopy(&Var2, "TORSO_P0_8_15", 16);
iVar6=8;
iVar7=15;
iVar1=58;
break;
default:
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_146(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P0_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "HAIR_P0_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P0_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P0_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
default:
func_94(iVar10, iParam0, 6, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_147(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
default:
func_94(iVar10, iParam0, 7, -1);
return;
break;
}
func_87(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_148(){
Global_78130[0 /*14*/].f_1=-1;
Global_78130[0 /*14*/].f_2=-1;
Global_78130[0 /*14*/].f_5=-1;
Global_78130[0 /*14*/].f_3=-1;
Global_78130[0 /*14*/].f_4=-1;
Global_78130[0 /*14*/].f_7=0;
Global_78130[0 /*14*/].f_6=0;
Global_78130[0 /*14*/].f_13=-1;
Global_78130[0 /*14*/].f_12=0;
Global_78130[0 /*14*/]=0;
StringCopy(&(Global_78130[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_149(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar22;
int iVar32;
var uVar33;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78130[1 /*14*/]={
func_84(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_80(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_149(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar22={
func_77(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_149(iParam0, 14, uVar22[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78130[2 /*14*/]={
func_84(iVar0, 14, iVar4, -1) 
};
if(Global_78130[2 /*14*/].f_12==iVar3){
if(func_149(iParam0, 14, iVar4)){
if(!func_39(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_65(iParam0, iVar2);
Global_78130[2 /*14*/]={
func_84(iVar0, iVar2, iVar1, -1) 
};
if(!func_39(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar33={
func_77(iVar0, iParam2) 
};
iVar32=0;
while (iVar32 <=8){
if(!func_149(iParam0, 14, uVar33[iVar32])){
return 0;
}
iVar32++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12)==Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12)==Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78130[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_76(iParam1)) && Global_78130[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_76(iParam1))){
return 1;
}
return 0;
}

int func_150(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_151(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_151(int iParam0){
if(func_153(iParam0)){
return func_152(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__152(int iParam0){
return Global_1998[iParam0 /*29*/];
}


bool func_153(int iParam0){
return iParam0 < 3;
}


void func_154(char* sParam0, var uParam1){
STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, true);
if(MISC::IS_BIT_SET(uParam1, 0)){
STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, true);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, true);
}
if(MISC::IS_BIT_SET(uParam1, 2)){
STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, true);
}}

int func_155(){
func_156();
switch (Global_113386.f_2363.f_539.f_4321){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 4;
break;
}
return 0;
}


void func_156(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_151(Global_113386.f_2363.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_150(PLAYER::PLAYER_PED_ID());
if(func_153(iVar0) && (!func_92(14) || Global_112337)){
if(Global_113386.f_2363.f_539.f_4321 !=iVar0 && func_153(Global_113386.f_2363.f_539.f_4321)){
Global_113386.f_2363.f_539.f_4322=Global_113386.f_2363.f_539.f_4321;
}
Global_113386.f_2363.f_539.f_4323=iVar0;
Global_113386.f_2363.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113386.f_2363.f_539.f_4321 !=145){
Global_113386.f_2363.f_539.f_4323=Global_113386.f_2363.f_539.f_4321;
}
return;
}}
Global_113386.f_2363.f_539.f_4321=145;
}


struct<2> func_157(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
cVar2={
func_158(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_158(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}


void func_159(int iParam0, int iParam1){
Global_78587=iParam1;
if(Global_63148){
return;
}
if(Global_63175){
Global_63175=0;
return;
}
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0){
if(Global_63148){
}
Global_63174=iParam0;
Global_63148=1;
Global_63159=1;
}}


void func_160(int iParam0, int iParam1, bool bParam2, bool bParam3){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
HUD::DISPLAY_HUD(true);
HUD::DISPLAY_RADAR(true);
CAM::SET_WIDESCREEN_BORDERS(false, 0);
MISC::SET_TIME_SCALE(1f);
func_173();
func_172(1, 1);
func_169();
func_167();
func_166(30000);
if(iParam1==1){
func_161(iParam0, bParam2, bParam3);
}
HUD::SET_MISSION_NAME(false, 0);
}


void func_161(int iParam0, bool bParam1, bool bParam2){
struct<4> Var0;
char* sVar32;
if(iParam0 !=-1){
func_163(iParam0, &Var0);
MemCopy(&sVar32,{
func_158(iParam0)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar32, 0, Global_100478, 0);
func_162(&sVar32, Var0.f_3, Global_100478, bParam1, bParam2);
}}


void func_162(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97511)){
return;
}
if(MISC::COMPARE_STRINGS(sParam0, &Global_97511, false, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_94618);
StringCopy(&Global_97511, "", 64);
}


void func_163(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_164(uParam1, "Abigail1", func_157(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 1:
func_164(uParam1, "Abigail2", func_157(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 2:
func_164(uParam1, "Barry1", func_157(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 3:
func_164(uParam1, "Barry2", func_157(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 4:
func_164(uParam1, "Barry3", func_157(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 5:
func_164(uParam1, "Barry3A", func_157(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 6:
func_164(uParam1, "Barry3C", func_157(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 7:
func_164(uParam1, "Barry4", func_157(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_165(iParam0), 0, 0);
break;
case 8:
func_164(uParam1, "Dreyfuss1", func_157(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 9:
func_164(uParam1, "Epsilon1", func_157(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
break;
case 10:
func_164(uParam1, "Epsilon2", func_157(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 11:
func_164(uParam1, "Epsilon3", func_157(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
break;
case 12:
func_164(uParam1, "Epsilon4", func_157(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
break;
case 13:
func_164(uParam1, "Epsilon5", func_157(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 14:
func_164(uParam1, "Epsilon6", func_157(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_165(iParam0), 0, 1);
break;
case 15:
func_164(uParam1, "Epsilon7", func_157(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
break;
case 16:
func_164(uParam1, "Epsilon8", func_157(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
break;
case 17:
func_164(uParam1, "Extreme1", func_157(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 18:
func_164(uParam1, "Extreme2", func_157(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 19:
func_164(uParam1, "Extreme3", func_157(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 20:
func_164(uParam1, "Extreme4", func_157(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 21:
func_164(uParam1, "Fanatic1", func_157(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_165(iParam0), 1, 0);
break;
case 22:
func_164(uParam1, "Fanatic2", func_157(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_165(iParam0), 1, 0);
break;
case 23:
func_164(uParam1, "Fanatic3", func_157(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_165(iParam0), 0, 1);
break;
case 24:
func_164(uParam1, "Hao1", func_157(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_165(iParam0), 0, 1);
break;
case 25:
func_164(uParam1, "Hunting1", func_157(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 26:
func_164(uParam1, "Hunting2", func_157(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 27:
func_164(uParam1, "Josh1", func_157(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 28:
func_164(uParam1, "Josh2", func_157(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 29:
func_164(uParam1, "Josh3", func_157(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 30:
func_164(uParam1, "Josh4", func_157(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 31:
func_164(uParam1, "Maude1", func_157(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 32:
func_164(uParam1, "Minute1", func_157(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 33:
func_164(uParam1, "Minute2", func_157(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 34:
func_164(uParam1, "Minute3", func_157(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
break;
case 35:
func_164(uParam1, "MrsPhilips1", func_157(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
break;
case 36:
func_164(uParam1, "MrsPhilips2", func_157(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
break;
case 37:
func_164(uParam1, "Nigel1", func_157(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 38:
func_164(uParam1, "Nigel1A", func_157(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 39:
func_164(uParam1, "Nigel1B", func_157(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
break;
case 40:
func_164(uParam1, "Nigel1C", func_157(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
break;
case 41:
func_164(uParam1, "Nigel1D", func_157(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
break;
case 42:
func_164(uParam1, "Nigel2", func_157(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 43:
func_164(uParam1, "Nigel3", func_157(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
break;
case 44:
func_164(uParam1, "Omega1", func_157(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 45:
func_164(uParam1, "Omega2", func_157(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 46:
func_164(uParam1, "Paparazzo1", func_157(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 47:
func_164(uParam1, "Paparazzo2", func_157(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 48:
func_164(uParam1, "Paparazzo3", func_157(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 49:
func_164(uParam1, "Paparazzo3A", func_157(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 50:
func_164(uParam1, "Paparazzo3B", func_157(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 51:
func_164(uParam1, "Paparazzo4", func_157(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
break;
case 52:
func_164(uParam1, "Rampage1", func_157(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
break;
case 54:
func_164(uParam1, "Rampage3", func_157(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 55:
func_164(uParam1, "Rampage4", func_157(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 56:
func_164(uParam1, "Rampage5", func_157(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
break;
case 53:
func_164(uParam1, "Rampage2", func_157(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
break;
case 57:
func_164(uParam1, "TheLastOne", func_157(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 58:
func_164(uParam1, "Tonya1", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 59:
func_164(uParam1, "Tonya2", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 60:
func_164(uParam1, "Tonya3", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 61:
func_164(uParam1, "Tonya4", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
case 62:
func_164(uParam1, "Tonya5", func_157(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
break;
default:
break;
}}


void func_164(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24){
uParam0->f_4=iParam5;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam4;
uParam0->f_5=iParam6;
uParam0->f_6={
Param7 
};
uParam0->f_9=iParam10;
StringCopy(&(uParam0->f_10), sParam11, 16);
uParam0->f_14=iParam12;
uParam0->f_15=iParam13;
StringCopy(&(uParam0->f_16), sParam14, 24);
uParam0->f_22=iParam15;
uParam0->f_23=iParam16;
uParam0->f_24=iParam17;
uParam0->f_25=iParam18;
uParam0->f_26=iParam19;
uParam0->f_27=iParam20;
uParam0->f_28=iParam21;
uParam0->f_29=uParam22;
uParam0->f_30=iParam23;
uParam0->f_31=iParam24;
}

int func_165(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}


void func_166(int iParam0){
Global_43603=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_167(){
if(Global_97753){
func_156();
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_168(Global_113386.f_2363.f_539.f_4321));
}else{
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
}}


char* func_168(var uParam0){
uParam0=uParam0;
return "";
}


void func_169(){
char cVar0[24];
if(MISC::IS_XBOX360_VERSION() || func_171()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_170()){
StringCopy(&cVar0, "PRESENCE_0_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
}}


bool func_170(){
return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}


bool func_171(){
return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}


void func_172(int iParam0, int iParam1){
Global_97748=iParam0;
Global_97749=iParam1;
}


void func_173(){
if(Global_78573 !=6){}
if(Global_78578){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_78578=0;
Global_23150.f_8808=0;
}
Global_78573=6;
Global_78575=-1;
Global_78574=-1;
}


void func_174(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43014){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43013=0;
Global_43015=0;
Global_43052=15;
Global_63151=0;
Global_63152=0;
}


void func_175(int iParam0, bool bParam1){
struct<26> Var0;
int iVar32;
bool bVar33;
int iVar34;
struct<6> Var35;
int iVar67;
int iVar68;
struct<6> Var69;
int iVar101;
int iVar102;
func_163(iParam0, &Var0);
if(!MISC::ARE_STRINGS_EQUAL(&(Var0.f_16), "")){
while (!func_203(&(Var0.f_16))){
SYSTEM::WAIT(0);
}}
if(Var0.f_22 !=0){
func_202(Var0.f_22, 0);
}
func_193(iParam0, Global_78588);
if(!bParam1){
iVar32=func_192(iParam0);
if(iVar32 !=0){
if(!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar32)){
AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar32);
}}}
if(Var0.f_24 !=-1){
bVar33=true;
if(Var0.f_5 !=4){
iVar34=0;
while (iVar34 < 63){
iVar67=iVar34;
if(iVar67 !=iParam0){
func_163(iVar67, &Var35);
if(Var35.f_5==Var0.f_5){
if(!MISC::IS_BIT_SET(Global_113386.f_18574[iVar67 /*6*/], 3)){
bVar33=false;
}
if(!MISC::IS_BIT_SET(Global_113386.f_18574[iVar67 /*6*/], 0)){
func_180(iVar67);
}}}
iVar34++;
}}
if(bVar33){
func_180(Var0.f_24);
}}elseif(Var0.f_25 !=4){
iVar68=0;
while (iVar68 < 63){
iVar101=iVar68;
if(iVar101 !=iParam0){
func_163(iVar101, &Var69);
if(Var69.f_5==Var0.f_25){
func_180(iVar101);
}}
iVar68++;
}}
if(!MISC::IS_BIT_SET(Global_113386.f_18574[iParam0 /*6*/], 3)){
MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 3);
Global_112473[iParam0 /*10*/].f_5=1;
func_177(iParam0);
iVar102=func_176(iParam0);
if(iVar102 !=322){
func_6(iVar102, 0, 0);
}}}

int func_176(int iParam0){
switch (iParam0){
case 0:
return 109;
break;
case 1:
return 322;
break;
case 2:
return 69;
break;
case 3:
return 70;
break;
case 4:
return 322;
break;
case 5:
return 71;
break;
case 6:
return 71;
break;
case 7:
return 72;
break;
case 8:
return 68;
break;
case 9:
return 73;
break;
case 10:
return 74;
break;
case 11:
return 75;
break;
case 12:
return 76;
break;
case 13:
return 77;
break;
case 14:
return 78;
break;
case 15:
return 79;
break;
case 16:
return 80;
break;
case 17:
return 81;
break;
case 18:
return 82;
break;
case 19:
return 83;
break;
case 20:
return 84;
break;
case 21:
return 85;
break;
case 22:
return 86;
break;
case 23:
return 87;
break;
case 24:
return 106;
break;
case 25:
return 178;
break;
case 26:
return 179;
break;
case 27:
return 88;
break;
case 28:
return 89;
break;
case 29:
return 90;
break;
case 30:
return 91;
break;
case 31:
return 107;
break;
case 32:
return 92;
break;
case 33:
return 93;
break;
case 34:
return 94;
break;
case 35:
return 110;
break;
case 36:
return 111;
break;
case 37:
return 95;
break;
case 38:
return 96;
break;
case 39:
return 97;
break;
case 40:
return 98;
break;
case 41:
return 99;
break;
case 42:
return 100;
break;
case 43:
return 101;
break;
case 44:
return 66;
break;
case 45:
return 67;
break;
case 46:
return 102;
break;
case 47:
return 103;
break;
case 48:
return 322;
break;
case 49:
return 104;
break;
case 50:
return 104;
break;
case 51:
return 105;
break;
case 52:
return 194;
break;
case 53:
return 195;
break;
case 54:
return 196;
break;
case 55:
return 197;
break;
case 56:
return 198;
break;
case 57:
return 108;
break;
case 58:
return 208;
break;
case 59:
return 209;
break;
case 60:
return 210;
break;
case 61:
return 211;
break;
case 62:
return 212;
break;
}
return 322;
}


void func_177(int iParam0){
func_179(iParam0, 1);
Global_113386.f_18574[iParam0 /*6*/].f_3=func_178();
Global_113386.f_18574.f_380++;
}

int func_178(){
return (Global_113386.f_10016.f_21 + Global_113386.f_18574.f_380);
}


void func_179(var uParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=55;
if(bParam1){
iVar1=uParam0;
if(iVar1==46){
iVar0=35;
}elseif(iVar1==49){
iVar0=36;
}elseif(iVar1==50){
iVar0=37;
}elseif(iVar1==8){
iVar0=38;
}elseif(iVar1==16){
iVar0=39;
}elseif(iVar1==38){
iVar0=40;
}elseif(iVar1==39){
iVar0=41;
}elseif(iVar1==40){
iVar0=42;
}elseif(iVar1==41){
iVar0=43;
}elseif(iVar1==42){
iVar0=44;
}elseif(iVar1==43){
iVar0=45;
}elseif(iVar1==20){
iVar0=46;
}}else{
iVar2=uParam0;
if(iVar2==53){
iVar0=0;
}elseif(iVar2==1){
iVar0=1;
}elseif(iVar2==2){
iVar0=2;
}elseif(iVar2==17){
iVar0=3;
}elseif(iVar2==19){
iVar0=4;
}elseif(iVar2==43){
iVar0=5;
}elseif(iVar2==44){
iVar0=6;
}elseif(iVar2==63){
iVar0=8;
}elseif(iVar2==12){
iVar0=9;
}elseif(iVar2==13){
iVar0=10;
}elseif(iVar2==64){
iVar0=11;
}elseif(iVar2==20){
iVar0=12;
}elseif(iVar2==30){
iVar0=13;
}elseif(iVar2==31){
iVar0=14;
}elseif(iVar2==41){
iVar0=15;
}elseif(iVar2==38){
iVar0=16;
}elseif(iVar2==9){
iVar0=18;
}elseif(iVar2==59){
iVar0=19;
}elseif(iVar2==45){
iVar0=20;
}elseif(iVar2==10){
iVar0=21;
}elseif(iVar2==14){
iVar0=22;
}elseif(iVar2==16){
iVar0=24;
}elseif(iVar2==39){
iVar0=25;
}elseif(iVar2==46){
iVar0=26;
}elseif(iVar2==60){
iVar0=27;
}elseif(iVar2==22){
iVar0=28;
}elseif(iVar2==48){
iVar0=30;
}elseif(iVar2==61){
iVar0=31;
}elseif(iVar2==49){
iVar0=32;
}elseif(iVar2==27){
iVar0=34;
}elseif(iVar2==3){
iVar0=47;
}elseif(iVar2==4){
iVar0=48;
}elseif(iVar2==5){
iVar0=49;
}elseif(iVar2==6){
iVar0=50;
}elseif(iVar2==7){
iVar0=51;
}elseif(iVar2==58){
iVar0=53;
}elseif(iVar2==90){
iVar0=7;
}elseif(iVar2==74 || iVar2==75){
iVar0=17;
}elseif(iVar2==93){
iVar0=23;
}elseif(iVar2==69 || iVar2==70){
iVar0=29;
}elseif(iVar2==84 || iVar2==85){
iVar0=33;
}}
if(iVar0 !=55){
Global_113386.f_20564.f_472=iVar0;
}}


void func_180(int iParam0){
if(iParam0==63 || iParam0==-1){
return;
}
func_181(iParam0);
MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), false);
}


void func_181(int iParam0){
switch (iParam0){
case 30:
func_185(22, 1, 0, 1, 0);
break;
case 15:
func_182(37, 0);
break;
default:
break;
}}


void func_182(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_184(iParam0, 0)){
func_183(iParam0, 1, 0);
func_183(iParam0, 2, 0);
func_183(iParam0, 3, 0);
func_183(iParam0, 4, 0);
func_183(iParam0, 0, 1);
Global_77137[iParam0]=1;
}}else{
func_183(iParam0, 0, 0);
}}


void func_183(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), bParam1);
}}

int func_184(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113386.f_32749[iParam0], iParam1);
}


void func_185(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
if(iParam0 !=198){
if(Global_78319){
Global_42586.f_227[iParam0]=iParam1;
}else{
Global_113386.f_7261.f_227[iParam0]=iParam1;
}
Global_39592[iParam0]=iParam2;
Global_39791[iParam0]=1;
func_188(iParam0, bParam3, iParam4, 0);
func_186(iParam0, iParam1);
}}


void func_186(int iParam0, int iParam1){
switch (iParam0){
case 12:
if(iParam1==0){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
}
break;
case 71:
if(iParam1 !=1){
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
}else{
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
}
break;
case 65:
if(iParam1==1){
func_187(0, 0);
}else{
func_187(0, 1);
}
break;
case 6:
if(iParam1==1){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
}
break;
case 174:
if(iParam1==2){
AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
}
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
}
break;
}}


void func_187(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_112024, bParam0);
}else{
MISC::CLEAR_BIT(&Global_112024, bParam0);
}
Global_112023=1;
}


bool func_188(int iParam0, bool bParam1, int iParam2, bool bParam3){
bool bVar0;
int iVar1;
int iVar2;
struct<5> Var3;
int iVar98;
bool bVar99;
int iVar100;
Global_1922024=1;
bVar0=false;
Var3.f_4=3;
Var3.f_8=3;
Var3.f_64=3;
Var3.f_75=3;
Var3.f_91=3;
func_191(&Var3, iParam0);
if(func_189()){
iVar1=Global_113386.f_7261.f_227[iParam0];
}else{
iVar1=Global_42586.f_227[iParam0];
}
iVar2=Global_39990[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1922024=1;
}else{
bVar99=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39592[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f){
bVar99=false;
Global_1922024=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar99=false;
Global_1922024=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5)){
bVar99=false;
Global_1922024=1;
}
if(bVar99){
switch (Var3.f_3){
case 0:
if(iVar1==2){
}else{
if(Var3.f_4[iVar1] !=0){
ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
}
if(Var3.f_4[iVar2] !=0){
ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
}
Global_41186[iParam0]=1;
}
bVar0=true;
break;
case 1:
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
Global_1922024=1;
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
Global_1922024=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
Global_1922024=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REQUEST_IPL(&(Var3.f_34));
Global_1922024=1;
}
}}elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
}
}}elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
}
}}
Global_40987[iParam0]=1;
Global_41186[iParam0]=1;
bVar0=true;
break;
case 2:
iVar100=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
if(iVar100 !=0){
if(MISC::GET_HASH_KEY(&(Var3.f_50)) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
}
}
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
}
elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
}
elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
}
if(bParam1){
INTERIOR::REFRESH_INTERIOR(iVar100);
}}
Global_41186[iParam0]=1;
Global_40987[iParam0]=1;
bVar0=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f){
iVar98=OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar98)){
if(iVar1==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 3);
Global_41186[iParam0]=1;
bVar0=true;
}elseif(iVar1==1){
if((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 10);
Global_41186[iParam0]=1;
bVar0=true;
}}elseif(iVar1==2){
bVar0=true;
}
}}
break;
case 4:
if(iVar1==0){
ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
MISC::CLEAR_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
}elseif(iVar1==1){
ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
MISC::SET_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
}
bVar0=true;
break;
}
if(bVar0){
Global_39791[iParam0]=0;
Global_39990[iParam0]=iVar1;
if(!func_189()){
if(!Global_40587[iParam0]){
Global_40587[iParam0]=1;
Global_40786++;
}}}}}
return bVar0;
}

int func_189(){
if((func_8()==-1 || func_8()==999) && !func_190()==0){
return 1;
}
return 0;
}

int func_190(){
return Global_31960;
}

int func_191(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 3){
uParam0->f_4[iVar0]=0;
StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
uParam0->f_64[iVar0]=0;
uParam0->f_75[iVar0]=0;
uParam0->f_91[iVar0]=0;
iVar0++;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
StringCopy(&(uParam0->f_34), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
StringCopy(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24,685f, 3032,92f, 40,331f 
};
break;
case 4:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
*uParam0={
-24,685f, 3032,92f, 40,331f 
};
break;
case 0:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
*uParam0={
-93,4f, 6410,9f, 36,8f 
};
break;
case 1:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
*uParam0={
890,3647f, -2367,289f, 28,10582f 
};
break;
case 2:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020,5f, 663,41f, 154,75f 
};
uParam0->f_58={
-1018,913f, 603,2904f, 105,6611f 
};
uParam0->f_61={
-1038,913f, 639,2904f, 135,6611f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 8:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 9:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 10:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 11:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
uParam0->f_68={
-162,8918f, -2365,769f, 0f 
};
uParam0->f_71={
190,75f, 31,25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
break;
case 15:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
*uParam0={
-95,2f, 6411,3f, 31,5f 
};
break;
case 16:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 17:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 18:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 19:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 20:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
801,7f, -1810,8f, 23,3f 
};
break;
case 21:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787,3967f, -1808,858f, 29,8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
*uParam0={
163,4f, -745,7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 28:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=-112041596;
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178,534f, -668,835f, 37,2113f 
};
break;
case 32:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 33:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 34:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 35:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
*uParam0={
105,4557f, -745,4835f, 44,7548f 
};
break;
case 36:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670,3f, 41,9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50,2f, 3743,9f, 40,9f 
};
uParam0->f_79={
16,9757f, 3614,307f, 30,0677f 
};
uParam0->f_82={
145,2451f, 3748,912f, 49,6958f 
};
uParam0->f_85={
16,9757f, 3614,307f, 30,0677f 
};
uParam0->f_88={
145,2451f, 3748,912f, 49,6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
*uParam0={
50,2f, 3743,9f, 40,9f 
};
break;
case 39:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
50,2f, 3743,9f, 40,9f 
};
break;
case 40:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
*uParam0={
106,7f, 3732,1f, 40,8f 
};
break;
case 41:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
106,7f, 3732,1f, 40,8f 
};
break;
case 42:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
*uParam0={
72,7f, 3695,4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
72,7f, 3695,4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
*uParam0={
43,8f, 3699,7f, 41,3f 
};
break;
case 45:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
43,8f, 3699,7f, 41,3f 
};
break;
case 46:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
*uParam0={
28,5f, 3668f, 40,4f 
};
break;
case 47:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
28,5f, 3668f, 40,4f 
};
break;
case 48:
uParam0->f_3=1;
StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29,4838f, 3735,593f, 38,688f 
};
uParam0->f_68={
31,134f, 3738,783f, 39,062f 
};
uParam0->f_71={
13,6f, 20f, 8,9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
29,4838f, 3735,593f, 38,688f 
};
break;
case 50:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450,595f, 4959,929f, 44,2575f 
};
uParam0->f_79={
2383,756f, 4929,988f, 39,52461f 
};
uParam0->f_82={
2505,756f, 5023,988f, 67,52461f 
};
break;
case 55:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2450,595f, 4959,929f, 44,2575f 
};
break;
case 51:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444,8f, 4976,4f, 50,5f 
};
break;
case 52:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 53:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 54:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 56:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 57:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 58:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 59:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 60:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
*uParam0={
889,3f, -2910,9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
*uParam0={
-1600,619f, 4443,457f, 0,725f 
};
break;
case 62:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
*uParam0={
966,1f, -114,8f, 75,2f 
};
break;
case 63:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
*uParam0={
-3086,428f, 339,2523f, 6,3717f 
};
break;
case 64:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1675,178f, -1143,605f, 12,0175f 
};
break;
case 65:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
*uParam0={
-532,1309f, 4526,187f, 88,7955f 
};
break;
case 66:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
*uParam0={
-532,1309f, 4526,187f, 88,7955f 
};
break;
case 67:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
*uParam0={
131,29f, -631,22f, 261,85f 
};
break;
case 68:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
*uParam0={
233,9f, -1355f, 30,3f 
};
break;
case 69:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
*uParam0={
234,4f, -1355,6f, 40,5f 
};
break;
case 70:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 71:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 72:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 73:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 74:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 75:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 76:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 105:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 106:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861,28f, 2402,11f, 58,53f 
};
break;
case 107:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
*uParam0={
-1327,46f, -274,82f, 54,25f 
};
break;
case 108:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697,32f, 3162,18f, 58,1f 
};
break;
case 109:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119,12f, 3058,21f, 53,25f 
};
break;
case 110:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
*uParam0={
-804,25f, -2276,88f, 23,59f 
};
break;
case 111:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
*uParam0={
296,5f, 173,3f, 100,4f 
};
break;
case 112:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
*uParam0={
296,5f, 173,3f, 100,4f 
};
break;
case 77:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
480,9554f, -1321,21f, 28,2037f 
};
uParam0->f_85={
508,3f, -1299,3f, 39,4f 
};
uParam0->f_88={
459,9f, -1363,2f, 21,4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case joaat("mpsv_lp0_31"):
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
*uParam0={
-1088,6f, -1650,6f, 6,4f 
};
break;
case 80:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
*uParam0={
-13,83f, -1455,45f, 31,81f 
};
break;
case 113:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
*uParam0={
-1277,629f, -2030,913f, 1,2823f 
};
break;
case 114:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
*uParam0={
2384,969f, 4277,583f, 30,379f 
};
break;
case 115:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
*uParam0={
1577,881f, 3836,107f, 30,7717f 
};
break;
case 87:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-180,5771f, -1016,928f, 28,2893f 
};
break;
case 88:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
*uParam0={
-630,4205f, -236,7843f, 37,057f 
};
uParam0->f_79={
(-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) 
};
uParam0->f_82={
(-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) 
};
break;
case 89:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
*uParam0={
-583,1606f, -282,3967f, 35,394f 
};
break;
case 90:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
*uParam0={
-14,651f, -604,3639f, 25,1823f 
};
break;
case 91:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2773,61f, 2835,327f, 35,1903f 
};
break;
case 94:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
1743,682f, 3286,251f, 40,0875f 
};
break;
case 95:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222,9f, 1877,9f, 79,9f 
};
uParam0->f_58={
1206,8f, 1803f, 43,9f 
};
uParam0->f_61={
1329f, 2060,4f, 143,9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44,02f 
};
break;
case 103:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
*uParam0={
391,81f, -962,71f, 41,97f 
};
break;
case 102:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
*uParam0={
424,2f, -1944,31f, 33,09f 
};
break;
case 92:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626,374f, 2949,869f, 39,1409f 
};
break;
case 93:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626,374f, 2949,869f, 39,1409f 
};
break;
case 118:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811,2679f, 179,3344f, 75,7408f 
};
break;
case 116:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802,0311f, 172,9131f, 75,7408f 
};
break;
case 117:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 119:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 120:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 122:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802,0311f, 172,9131f, 75,7408f 
};
break;
case 121:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 123:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 124:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 170:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 171:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810,5301f, 187,7868f, 71,4786f 
};
break;
case 125:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811,2679f, 179,3344f, 75,7408f 
};
break;
case 164:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 165:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 166:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 167:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 168:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 169:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 126:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 127:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 128:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 129:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 130:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 131:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 132:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 133:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 134:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 179:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30,8793f, -1088,336f, 25,4221f 
};
uParam0->f_68={
-29,3f, -1086,35f, 25,57f 
};
uParam0->f_71={
5,5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
StringCopy(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 175:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49,21f, -1090,28f, 25,42f 
};
uParam0->f_68={
-49,21f, -1090,28f, 25,42f 
};
uParam0->f_71={
2,5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49,28f, -1092,66f, 25,42f 
};
uParam0->f_68={
-49,28f, -1092,66f, 25,42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53,07f, -1096,73f, 25,5f 
};
uParam0->f_68={
-53,07f, -1096,73f, 25,5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 173:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 180:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
*uParam0={
23,9346f, -669,7552f, 30,8853f 
};
break;
case 181:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
StringCopy(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300,9423f, -586,1784f, 42,2919f 
};
break;
case 135:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 136:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 137:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 138:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 139:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 140:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 141:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 142:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 143:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 144:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 145:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 146:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 147:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150,039f, -1521,761f, 9,6331f 
};
break;
case 148:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150,039f, -1521,761f, 9,6331f 
};
break;
case 149:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
1856,029f, 3682,998f, 33,2675f 
};
break;
case 150:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-440,5073f, 6018,766f, 30,49f 
};
break;
case 151:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
uParam0->f_33=0;
*uParam0={
487,31f, 5588,386f, 793,0532f 
};
break;
case 152:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487,31f, 5588,386f, 793,0532f 
};
break;
case 153:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 154:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 155:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 172:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
StringCopy(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96,4811f, -1291,294f, 28,2688f 
};
break;
case 182:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
139,5795f, -3092,962f, 8,64631f 
};
uParam0->f_79={
Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_82={
Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_85={
Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_88={
Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
203,7784f, -3131,767f, 7,041344f 
};
uParam0->f_79={
Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) 
};
uParam0->f_82={
Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) 
};
break;
case 184:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
144,7706f, -2982,659f, 7,952507f 
};
uParam0->f_79={
Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) 
};
uParam0->f_82={
Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) 
};
break;
case 185:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1154,965f, -1520,983f, 9,132731f 
};
uParam0->f_79={
-1154,965f, -1520,983f, 9,132731f 
};
uParam0->f_82={
-1158,965f, -1524,983f, 11,63273f 
};
break;
case 187:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1052,204f, 371,9537f, 67,914f 
};
uParam0->f_79={
-1052,204f, 371,9537f, 67,914f 
};
uParam0->f_82={
-1048,064f, 368,0221f, 70,9128f 
};
break;
case 186:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
1954,984f, 3792,991f, 30,3086f 
};
uParam0->f_79={
1954,984f, 3792,991f, 30,3086f 
};
uParam0->f_82={
1983,45f, 3830,78f, 36,2726f 
};
break;
case 188:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1122,202f, 48,5724f, 51,4652f 
};
uParam0->f_79={
-1122,202f, 48,5724f, 51,4652f 
};
uParam0->f_82={
-1076,233f, 92,1041f, 60,0617f 
};
break;
case 81:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2199,138f, 223,4648f, 181,1118f 
};
break;
case 82:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2242,785f, 263,4779f, 173,6154f 
};
break;
case 83:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
3832,9f, 3665,5f, -23,4f 
};
break;
case 84:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
2814,7f, 4758,5f, 47,9f 
};
break;
case 85:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1096,505f, 4,5754f, 49,8103f 
};
break;
case 86:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-781,6566f, 186,8937f, 71,8352f 
};
break;
case 189:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55,7f, -1391,3f, 30,5f 
};
break;
case 190:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700,091f, -933,641f, 20,308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096,381f, -836,17f, 36,6755f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449,6558f, -980,1375f, 42,6918f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363,0175f, -1598,079f, 35,9502f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
-1601,424f, 2808,213f, 16,2598f 
};
break;
case 97:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
23,7318f, -647,2123f, 37,9549f 
};
break;
case 98:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
*uParam0={
12,9689f, -648,4698f, 9,7693f 
};
break;
case 99:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
*uParam0={
-1459,127f, 486,1281f, 115,2016f 
};
break;
case 100:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
*uParam0={
-248,4916f, -2010,509f, 34,5743f 
};
break;
case 101:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
*uParam0={
-1081,347f, -263,1502f, 38,7152f 
};
break;
case 195:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
*uParam0={
136,1795f, -750,701f, 262,0516f 
};
break;
case 197:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
*uParam0={
2096f, 3168,7f, 42,9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 157:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 158:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 163:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 159:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 161:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 162:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 160:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 96:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
*uParam0={
19,0568f, 536,4818f, 169,6277f 
};
break;
}
return 1;
}

int func_192(int iParam0){
switch (iParam0){
case 46:
return 42;
break;
case 47:
return 43;
break;
case 49:
return 44;
break;
case 50:
return 45;
break;
case 8:
if(MISC::IS_BIT_SET(Global_113386.f_18574.f_382, 0)){
return 46;
}
break;
case 16:
return 47;
break;
case 38:
return 48;
break;
case 39:
return 49;
break;
case 40:
return 50;
break;
case 41:
return 51;
break;
case 42:
return 52;
break;
case 43:
if(Global_113386.f_9085.f_99.f_58[101]){
return 53;
}else{
return 54;
}
break;
case 20:
return 55;
break;
}
return 0;
}


void func_193(int iParam0, bool bParam1){
switch (iParam0){
case 46:
func_194(4, bParam1);
break;
case 16:
func_194(6, bParam1);
break;
case 37:
func_194(17, bParam1);
break;
case 31:
func_194(16, bParam1);
break;
}}


void func_194(int iParam0, bool bParam1){
bool bVar0;
bVar0=iParam0;
if(bVar0 >=0 && bVar0 <=31){
if(!func_201(iParam0)){
MISC::SET_BIT(&(Global_113386.f_26434), bVar0);
if(!bParam1){
func_199(func_200(iParam0));
if(!func_198(68)){
func_195("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
}}}}}


void func_195(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_196(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_196(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113386.f_20410.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113386.f_20410.f_145 < 9){
StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9=iParam5;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11=iParam6;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12=uParam2;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13=iParam7;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14=iParam8;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10=-1;
}
Global_113386.f_20410.f_145++;
func_197();
}}


void func_197(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113386.f_20410.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_20410.f_145){
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 0)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0]){
Global_113386.f_20410.f_146[0]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 1)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1]){
Global_113386.f_20410.f_146[1]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 2)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2]){
Global_113386.f_20410.f_146[2]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_198(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113386.f_20410.f_150[iVar1], iVar0);
}
return 0;
}


void func_199(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR", sParam0);
}


char* func_200(int iParam0){
switch (iParam0){
case 0:
return "CM_STOMIC";
break;
case 1:
return "CM_STOFRA";
break;
case 2:
return "CM_STOTRE";
break;
case 3:
return "CM_STOAMA";
break;
case 4:
return "CM_STOBEV";
break;
case 5:
return "CM_STOBRA";
break;
case 6:
return "CM_STOCHR";
break;
case 7:
return "CM_STODAV";
break;
case 8:
return "CM_STODEV";
break;
case 9:
return "CM_STODRF";
break;
case 10:
return "CM_STOFAB";
break;
case 11:
return "CM_STOFLO";
break;
case 12:
return "CM_STOJIM";
break;
case 13:
return "CM_STOLAM";
break;
case 14:
return "CM_STOLAZ";
break;
case 15:
return "CM_STOLES";
break;
case 16:
return "CM_STOMAU";
break;
case 17:
return "CM_STOTHO";
break;
case 18:
return "CM_STONER";
break;
case 19:
return "CM_STOPAT";
break;
case 20:
return "CM_STOSIM";
break;
case 21:
return "CM_STOSOL";
break;
case 22:
return "CM_STOSTE";
break;
case 23:
return "CM_STOSTR";
break;
case 24:
return "CM_STOTAN";
break;
case 25:
return "CM_STOTAO";
break;
case 26:
return "CM_STOTRA";
break;
case 27:
return "CM_STOWAD";
break;
}
return "ERROR!";
}

int func_201(int iParam0){
if(iParam0 !=-1 && iParam0 !=28){
return MISC::IS_BIT_SET(Global_113386.f_26434, iParam0);
}
return 0;
}


void func_202(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113386.f_8613[iParam0]=1;
Global_113386.f_8613.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}

int func_203(char* sParam0){
int iVar0;
iVar0=1424;
if(!SCRIPT::DOES_SCRIPT_EXIST(sParam0)){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races")){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("controller_races")) > 0){
return 1;
}
iVar0=128;
}
SCRIPT::REQUEST_SCRIPT(sParam0);
if(SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
return 1;
}
return 0;
}

int func_204(){
return func_205(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_205(char* sParam0, int iParam1){
int iVar0;
char* sVar1;
int iVar33;
int iVar34;
iVar33=MISC::GET_HASH_KEY(sParam0);
iVar34=0;
iVar34=0;
while (iVar34 < 63){
iVar0=iVar34;
func_163(iVar0, &sVar1);
if(MISC::GET_HASH_KEY(sVar1)==iVar33){
return iVar0;
}
iVar34++;
}
if(iParam1==0){}
return -1;
}


void func_206(int* iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*iParam0, false)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
}
PED::DELETE_PED(iParam0);
}}


void func_207(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8822=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=166){
func_214();
if(iParam1==4){
func_213(iParam0, 0, 1);
func_213(iParam0, 1, 1);
func_213(iParam0, 2, 1);
func_212(iParam0, 0, 1);
func_212(iParam0, 1, 1);
func_212(iParam0, 2, 1);
}else{
if(func_211(iParam0, iParam1)==1 && func_210(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_213(iParam0, iVar0, 1);
func_212(iParam0, iVar0, 1);
if(iParam0==172 && !Global_2815059.f_6768){
bParam2=false;
}
if(iParam0==171 && !Global_2815059.f_6767){
bParam2=false;
}
if(iParam0==173 && !Global_2815059.f_6767){
bParam2=false;
}}
if(bParam2){
if(!Global_78319){
if(iParam1 !=4){
if(Global_20266 !=iParam1){
Global_8795[iParam1 /*4*/]={
func_209(iParam0) 
};
Global_8812[iParam1]=1;
Global_8817[iParam1]=iParam0;
}elseif(iParam0==Global_20266){
}else{
Global_8746[1 /*6*/]={
func_209(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_208();
}}else{
Global_8746[1 /*6*/]={
func_209(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_208();
}}else{
Global_8746[1 /*6*/]={
func_209(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_208();
}}}}


void func_208(){
char cVar0[64];
char cVar16[64];
char* sVar32;
StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
if(Global_8841==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
sVar32=HUD::_GET_LABEL_TEXT("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8136, false);
}


struct<4> func_209(int iParam0){
return Global_1998[iParam0 /*29*/].f_3;
}

int func_210(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_211(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_1998[iParam0 /*29*/].f_12[iParam1];
}


void func_212(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_1998[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_213(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_1998[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}


void func_214(){
if(func_92(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[0 /*29*/]){
Global_20266=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[1 /*29*/]){
Global_20266=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[2 /*29*/]){
Global_20266=2;
}else{
Global_20266=0;
}}}else{
Global_20266=func_215();
if(Global_20266==145){
Global_20266=3;
}
if(Global_78319){
Global_20266=3;
}
if(Global_20266 > 3){
Global_20266=3;
}}}

int func_215(){
func_156();
return Global_113386.f_2363.f_539.f_4321;
}

int func_216(){
if(Global_21605 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_217(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_231(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21612=0;
Global_21614=0;
Global_21619=0;
Global_22596=0;
Global_22598=0;
Global_22602=0;
Global_2883585=0;
return func_218(sParam2, iParam3, 0);
}

int func_218(char* sParam0, int iParam1, bool bParam2){
Global_21606=0;
if(Global_21605==0 || Global_21607==2){
if(Global_21605 !=0){
if(iParam1 > Global_21607){
if(Global_21612==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_20266.f_1=3;
Global_21605=0;
Global_21606=1;
Global_21658=0;
Global_21601=0;
Global_21602=0;
Global_21616=0;
Global_21615=0;
Global_20265=0;
}else{
func_230();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_229(8, -1)){
return 0;
}
Global_21681={
Global_21675 
};
func_228();
Global_20894={
Global_21059 
};
Global_21611=Global_21612;
Global_21618=Global_21619;
Global_2883586=Global_2883585;
Global_21620={
Global_21636 
};
Global_21613=Global_21614;
Global_22595=Global_22596;
Global_22603={
Global_22609 
};
Global_22597=Global_22598;
Global_22599=Global_22600;
Global_22601=Global_22602;
Global_21224.f_370=Global_22594;
Global_21224.f_368=Global_22592;
Global_21224.f_369=Global_22593;
Global_21601=Global_21602;
if(Global_21611){
MISC::CLEAR_BIT(&Global_8136, 20);
MISC::CLEAR_BIT(&Global_8137, 17);
MISC::CLEAR_BIT(&Global_8138, false);
if(bParam2){
func_214();
if(Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20266.f_1 > 3){
return 0;
}}
if(Global_20232==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_227()){
return 0;
}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"))){
return 0;
}
if(!Global_78319){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 0;
}
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
return 0;
}}}
if(func_226()){
return 0;
}else{
switch (Global_20266.f_1){
case 7:
return 0;
break;
case 8:
return 0;
break;
case 9:
break;
case 10:
break;
default:
break;
}
if(MISC::IS_BIT_SET(Global_8136, 9)){
return 0;
}}
func_225();
Global_21615=bParam2;
}
Global_21607=iParam1;
StringCopy(&Global_21224, sParam0, 24);
Global_20471=0;
func_224();
func_219();
return 1;
}
if(Global_21605==5){
return 0;
}
if(iParam1 < Global_21607 || iParam1==Global_21607){
return 0;
}
if(iParam1==2){}else{
func_230();
}
return 0;
}


void func_219(){
if(!func_220()){
return;
}
if(Global_21611){
MemCopy(&(Global_1973149.f_1),{
Global_21224
}
, 4);
Global_1973149=Global_7451;
Global_1973149.f_6=Global_21615;
}}

int func_220(){
if(!Global_262145.f_28866){
return 0;
}
if(!Global_78319){
return 0;
}
if(PLAYER::PLAYER_ID()==func_223()){
return 0;
}
if(func_221(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_221(int iParam0){
return func_222(iParam0, 20);
}


var func__222(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_223(){
return -1;
}


void func_224(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21605=1;
}


void func_225(){
Global_21658=Global_21657;
Global_21652=Global_21653;
Global_21699={
Global_21687 
};
Global_21705={
Global_21693 
};
Global_21660=Global_21659;
Global_21729={
Global_21711 
};
Global_21735={
Global_21717 
};
Global_21741={
Global_21723 
};
Global_21747={
Global_21753 
};
Global_7451=Global_7452;
Global_7453=Global_7454;
Global_21616=Global_21617;
Global_21618=Global_21619;
Global_21620={
Global_21636 
};
Global_21609=Global_21610;
Global_22621=0;
Global_21654=0;
Global_21655=0;
MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_226(){
if(Global_20266.f_1==1 || Global_20266.f_1==0){
return 1;
}
return 0;
}

int func_227(){
int iVar0;
int iVar1;
if(Global_78319){
iVar0=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((iVar1==joaat("weapon_sniperrifle") || iVar1==joaat("weapon_heavysniper")) || iVar1==joaat("weapon_remotesniper")){
iVar0=1;
}}
if(CAM::IS_AIM_CAM_ACTIVE() && iVar0==1){
return 1;
}else{
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)){
return 1;
}else{
return 0;
}}
return 1;
}


void func_228(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_20894[iVar0 /*10*/]=0;
StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
Global_20894[iVar0 /*10*/].f_7=0;
Global_20894[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_20894.f_161=-99;
Global_20894.f_162={
0f, 0f, 0f 
};
}


bool func_229(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1648034.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1648034.f_1048, iParam0);
}


void func_230(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22616=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1==9) || Global_20265==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21605=6;
Global_20266.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21605=6;
return;
}}


void func_231(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21059={
*uParam0 
};
Global_7452=iParam1;
StringCopy(&Global_21675, sParam2, 24);
Global_22594=uParam5;
if(iParam3==0){
Global_22592=1;
Global_22590=0;
}else{
Global_22592=0;
Global_22590=1;
}
if(iParam4==0){
Global_22593=1;
Global_22591=0;
}else{
Global_22593=0;
Global_22591=1;
}}

int func_232(int iParam0){
if(func_233(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_233(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, false)){
return 1;
}}
return 0;
}

int func_234(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
struct<3> Var0;
if(func_233(PLAYER::PLAYER_PED_ID()) && func_233(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true)){
return 1;
}
if(func_248(iParam0, bParam1, bParam5, bParam6, bParam7)){
return 1;
}
if(!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) 
};
if((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <=5f){
return func_247(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
}}}
if(bParam4){
return 0;
}elseif(func_235(iParam0, fParam3)){
return 1;
}}
return 0;
}

int func_235(int iParam0, float fParam1){
float fVar0;
if(func_233(PLAYER::PLAYER_PED_ID()) && func_233(iParam0)){
if(func_246(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0)){
if(func_236(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_236(int iParam0, float fParam1){
return func_237(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_237(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar4;
iVar4=func_245(iParam0, iParam1);
if(!func_233(iParam0) || !func_233(iParam1)){
if(iVar4 !=-1){
func_244(&(Local_37[iVar4 /*4*/]));
}
return 0;
}
if(!func_241(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar4==-1){
iVar4=func_240();
if(iVar4==-1){
return 0;
}
Local_37[iVar4 /*4*/].f_1=iParam0;
Local_37[iVar4 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_238(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_238(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7){
var uVar0;
struct<3> Var1;
var uVar4;
int iVar7;
int iVar8;
iVar7=0;
if(!func_233(iParam4)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_239(iParam4, iParam7) 
};
*uParam0=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam6, 7);
return 0;
}
iVar8=SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
if(iVar8==0){
*uParam0=0;
return 0;
}elseif(iVar8==1){
return 0;
}
*uParam0=0;
if(ENTITY::IS_ENTITY_A_PED(iVar7)){
func_233(iVar7);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7)==iParam4){
if(bLocal_78){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam5=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar7)){
func_233(iVar7);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam4, false)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)==PED::GET_VEHICLE_PED_IS_IN(iParam4, false)){
if(bLocal_78){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam5=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__239(int iParam0, int iParam1){
int iVar0;
if(iParam1==7){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
iParam1=iVar0;
}
if(iParam1==0){
return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}elseif(iParam1==1){
return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
}elseif(iParam1==2){
return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
}elseif(iParam1==3){
return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
}elseif(iParam1==4){
return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
}elseif(iParam1==5){
return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
}elseif(iParam1==6){
return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
}
return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

int func_240(){
int iVar0;
iVar0=0;
while (iVar0 < Local_37.f_0){
if((Local_37[iVar0 /*4*/]==0 && Local_37[iVar0 /*4*/].f_1==0) && Local_37[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_241(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var3;
float fVar6;
Var0={
func_243(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) 
};
if(fParam2 < 0,1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var3={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var3={
func_243(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar6=func_242(Var3, Var0);
if(fVar6 <=SYSTEM::COS((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_242(struct<3> Param0, struct<3> Param3){
return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}


Vector3 func__243(struct<3> Param0){
float fVar0;
float fVar1;
fVar0=SYSTEM::VMAG(Param0);
if(fVar0 !=0f){
fVar1=(1f / fVar0);
Param0={
Param0 * Vector(fVar1, fVar1, fVar1) 
};
}else{
Param0.f_0=0f;
Param0.f_1=0f;
Param0.f_2=0f;
}
return Param0;
}


void func_244(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_245(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_37.f_0){
if(Local_37[iVar0 /*4*/].f_1==iParam0 && Local_37[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_246(int iParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}


bool func_247(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var3;
Var0={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
Var3={
ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) 
};
return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_248(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
float fVar0;
float fVar1;
int iVar2;
fVar0=8f;
fVar1=15f;
if(bParam1==0){
fVar0=1,86f;
fVar1=1,86f;
}
if(bParam2){
fVar0=2f;
}
if(func_233(PLAYER::PLAYER_PED_ID()) && func_233(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_252(iParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_249(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}else{
if(WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fVar0, true)){
return 1;
}}}else{
if(bParam1){
fVar0=1,86f;
fVar1=1,86f;
}
if(func_252(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_249(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_249(int iParam0, float fParam1, bool bParam2, bool bParam3){
struct<3> Var0;
struct<3> Var3;
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, true) 
};
Var3={
Var0 
};
Var0.f_0=(Var0.f_0 - fParam1);
Var0.f_1=(Var0.f_1 - fParam1);
Var0.f_2=(Var0.f_2 - fParam1);
Var3.f_0=(Var3.f_0 + fParam1);
Var3.f_1=(Var3.f_1 + fParam1);
Var3.f_2=(Var3.f_2 + fParam1);
if(bParam2){
if(((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_grenade"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_molotov"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_stickybomb"), 5f, true)){
if(bParam3){
if(func_250(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_250(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, true)){
return 1;
}}
return 0;
}

int func_250(int iParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false)){
if(func_251(iParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_251(int iParam0, struct<3> Param1, float fParam4, int iParam5){
struct<3> Var0;
struct<3> Var3;
float fVar6;
Var0={
func_243(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) 
};
if(fParam4 < 0,1f || fParam4 > 360f){
return 1;
}
if(iParam5==0){
Var3={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var3={
func_243(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar6=func_242(Var3, Var0);
if(fVar6 <=SYSTEM::COS((fParam4 / 2f))){
return 0;
}
return 1;
}

int func_252(int iParam0, bool bParam1, float fParam2, float fParam3){
if(bParam1){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, false, true, 0)){
return 1;
}}}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, true)){
return 1;
}
return 0;
}


void func_253(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && func_233(Local_85.f_28[0])){
PED::SET_IK_TARGET(Local_85.f_28[0], 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_85.f_28[0], 31086, 0f, 0f, 0f, 0, -1, -1);
}}


void func_254(){
switch (iLocal_84){
case 0:
func_295();
if(func_233(PLAYER::PLAYER_PED_ID())){
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){
func_289(sLocal_160, PLAYER::PLAYER_PED_ID(), 0, 2);
}}
if(func_282(1, 1093140480, 0)){
if(func_233(Local_85.f_28[0])){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_85.f_28[0], sLocal_162, 0, 0, 0);
}
if(func_233(PLAYER::PLAYER_PED_ID())){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_160, 0, 0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_149[0], sLocal_156, 0, iLocal_152, 0);
}else{
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_149[0], sLocal_156, 2, iLocal_152, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_149[1], sLocal_157, 0, iLocal_153, 0);
}else{
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_149[1], sLocal_157, 2, iLocal_153, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_147)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_147, sLocal_159, 0, iLocal_155, 0);
}else{
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_147, sLocal_159, 2, iLocal_155, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148, sLocal_158, 0, iLocal_154, 0);
}else{
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148, sLocal_158, 2, iLocal_154, 0);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 0);
RECORDING::REPLAY_START_EVENT(1);
func_281();
CUTSCENE::START_CUTSCENE(0);
SYSTEM::WAIT(0);
if(func_279()){
func_271(-262,0816f, 292,33f, 90f, -254,652f, 292,335f, 93,5f, 5f, -257,08f, 285,27f, 90,43f, 12,52f, 1, 1, 1, 0, 0);
}else{
func_271(-254,8715f, 316,4631f, 88,6055f, -255,2926f, 270,6087f, 103,2327f, 30f, -239,7607f, 267,4757f, 91,0999f, 86,5f, 1, 1, 1, 0, 0);
}
func_267(-259,3334f, 291,8268f, 90,5229f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
func_266(&(Local_85.f_41[3]));
iLocal_84=1;
}
break;
case 1:
if(func_265()){
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(true);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_162, 0)){
iLocal_332=PED::CREATE_SYNCHRONIZED_SCENE(Local_333, Local_336, 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_85.f_28[0], iLocal_332, sLocal_161, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1000f, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85.f_28[0], false, false);
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_160, 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -258,8661f, 292,7882f, 90,5764f, true, false, false, true);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153,0417f);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_158, iLocal_154))){
iLocal_148=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_158, iLocal_154));
}}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_332) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_158, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_148, Local_333, false, false, false, true);
ENTITY::SET_ENTITY_ROTATION(iLocal_148, Local_336, 2, false);
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148, iLocal_332, "leadout_pap_3_rcm_dumpster", sLocal_161, 1000f, -8f, 0, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, 0))){
iLocal_149[0]=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, iLocal_152));
}}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_332) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_156, 0)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[0], iLocal_332, "leadout_pap_3_rcm_lid_l", sLocal_161, 1000f, -8f, 1, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_149[0]);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_157, 0))){
iLocal_149[1]=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_157, iLocal_153));
}}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_332) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_157, 0)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[1], iLocal_332, "leadout_pap_3_rcm_lid_r", sLocal_161, 1000f, -8f, 1, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_149[1]);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_147)){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_159, 0))){
iLocal_147=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_159, iLocal_155));
}}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_332) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_159, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_147, -261,1132f, 294,1956f, 90,68612f, false, false, false, true);
ENTITY::SET_ENTITY_ROTATION(iLocal_147, -0,604164f, -2,332095f, 89,8831f, 2, false);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_147);
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false)){
RECORDING::REPLAY_STOP_EVENT();
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
HUD::DISPLAY_RADAR(true);
}
if(CUTSCENE::HAS_CUTSCENE_FINISHED()){
iLocal_84=2;
}
break;
}
if(iLocal_84==2){
func_256(1, 1, 1, 1);
func_339(&Local_85, 0, 1);
func_255(1);
}}


void func_255(int iParam0){
iLocal_83=iParam0;
iLocal_84=0;
}


void func_256(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
iVar0=PLAYER::GET_PLAYER_INDEX();
PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
func_257(0, 1, 0, 0, 0, 0, 0);
if(iParam2==1){
HUD::DISPLAY_RADAR(true);
HUD::DISPLAY_HUD(true);
}
HUD::CLEAR_HELP(true);
if(iParam0==1){
CAM::SET_WIDESCREEN_BORDERS(false, 0);
}
if(iParam1==1){
if((iLocal_36 !=0 && iLocal_36 !=joaat("object")) && iLocal_36 !=joaat("gadget_parachute")){
if(func_233(PLAYER::PLAYER_PED_ID())){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, false)){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, false);
}}}}
if(func_232(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
}}


void func_257(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_264(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20266.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}
if(!func_226()){
Global_20266.f_1=3;
}
Global_21605=5;
}
func_263(1, bParam3, iParam2, 0);
Global_63160=1;
Global_75488=1;
Global_78317=1;
}else{
func_264(0);
HUD::THEFEED_RESUME();
Global_63160=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_263(0, bParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_261(PLAYER::PLAYER_ID())) && !func_259(PLAYER::PLAYER_ID(), 0)) && !func_258()) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_261(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
}
Global_78317=0;
}}


bool func_258(){
return MISC::IS_BIT_SET(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}


bool func_259(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_260(-1, 0)==8;
}else{
bVar0=Global_1853348[iParam0 /*834*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_260(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_11();
}
if(Global_1575038[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_261(int iParam0){
if(func_259(iParam0, 0)){
return 1;
}
if(func_262()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2689235[iParam0 /*453*/].f_197, 2)){
return 1;
}
return 0;
}


bool func_262(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_263(bool bParam0, bool bParam1, var uParam2, bool bParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
iVar0=1;
}}
return iVar0;
}


void func_264(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8136, 13);
}else{
MISC::CLEAR_BIT(&Global_8136, 13);
}}

int func_265(){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
return 1;
}
return 0;
}


void func_266(int* iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)){
ENTITY::DETACH_ENTITY(*iParam0, true, true);
}
OBJECT::DELETE_OBJECT(iParam0);
}}


void func_267(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12){
int iVar0;
iVar0=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(iVar0)){
func_270(0);
if(bParam9){
PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
}
if(bParam8){
switch (func_215()){
case 0:
if(func_149(PLAYER::PLAYER_PED_ID(), 8, 15)){
func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_149(PLAYER::PLAYER_PED_ID(), 9, 6)){
func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 1:
if(func_149(PLAYER::PLAYER_PED_ID(), 8, 1) || func_149(PLAYER::PLAYER_PED_ID(), 8, 10)){
func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 2:
if(func_149(PLAYER::PLAYER_PED_ID(), 8, 4)){
func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
}}
if(iParam6==1){
MISC::CLEAR_AREA_OF_PEDS(func_269(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
}
if(iParam7==1){
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
}
if(bParam10){
FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
}
MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
if(bParam12){
HUD::DISPLAY_RADAR(false);
HUD::DISPLAY_HUD(false);
}
HUD::CLEAR_PRINTS();
if(iParam11==1){
HUD::CLEAR_HELP(true);
}
if(iParam3==1){
CAM::SET_WIDESCREEN_BORDERS(true, 0);
}
if(iParam4==1){
iLocal_36=0;
if(func_233(PLAYER::PLAYER_PED_ID())){
iLocal_36=WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
}}
if(iParam5==1){
func_268(500, 0);
}}}


void func_268(int iParam0, bool bParam1){
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(iParam0);
}}
if(bParam1){
while (!CAM::IS_SCREEN_FADED_IN()){
SYSTEM::WAIT(0);
}}}


Vector3 func__269(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}


void func_270(bool bParam0){
int iVar0;
iVar0=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(iVar0)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
}
func_257(1, 1, 0, 0, 0, 0, 0);
}


void func_271(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15){
func_272(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}


void func_272(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18){
int iVar0;
bool bVar1;
bool bVar2;
int iVar3;
struct<3> Var4;
struct<3> Var7;
struct<3> Var10;
int iVar13;
int iVar14;
int iVar15;
if(bParam15){
bParam15=false;
}
bVar2=true;
iVar3=0;
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
iVar3=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)){
if(bParam18){
func_278(iVar0);
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, false, true, 0)){
bVar1=true;
}else{
Var10={
ENTITY::GET_ENTITY_COORDS(iVar0, true) 
};
if((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2)){
if(func_276(iVar0, Param0, Param3, fParam6)){
bVar1=true;
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) !=PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) !=0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f){
bVar1=true;
bVar2=false;
}}}}
if(bParam16){
if(func_274(iVar0, func_215(), 1)){
bVar1=false;
}}
if(bVar1){
if(!func_273(Param11)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)){
iVar13=ENTITY::GET_ENTITY_MODEL(iVar0);
VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar13)){
Param11.f_0=(Param11.f_0 + 3f);
Param11.f_1=(Param11.f_1 + 3f);
}
if(((iVar13==joaat("zentorno") || iVar13==joaat("btype")) || iVar13==joaat("dubsta3")) || iVar13==joaat("monster")){
Param11={
Param11 * Vector(1,1f, 1,1f, 1,1f) 
};
}
elseif(iVar13==joaat("t20") || iVar13==joaat("virgo")){
Param11={
Param11 * Vector(1,2f, 1,2f, 1,2f) 
};
}
if((Var7.f_0 - Var4.f_0) > Param11.f_0){
bVar2=false;
}
elseif((Var7.f_1 - Var4.f_1) > Param11.f_1){
bVar2=false;
}
elseif((Var7.f_2 - Var4.f_2) > Param11.f_2){
bVar2=false;
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)){
if(bVar2){
MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, false, false, false, false, false, false, 0);
ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
ENTITY::SET_ENTITY_COORDS(iVar0, Param7, true, false, false, true);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
if(bParam17){
VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
}}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
}
VEHICLE::DELETE_VEHICLE(&iVar0);
}}}
if(bParam14){
MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, false, false, false, false, false, 0, 0);
}
if(iVar3==1){
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
}}}}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
}
iVar14=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
if(ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14)){
ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
}
iVar15=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar15 <=2){
iVar14=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
if(ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14)){
ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
}}
if(iVar15 <=4){
iVar14=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
if(ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14)){
ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
}
iVar14=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
if(ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14)){
ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
}}
VEHICLE::DELETE_VEHICLE(&iVar0);
}}}

int func_273(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_274(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar9;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
return 0;
}
iVar0=0;
while (func_275(iParam1, iVar0, &sVar1, &iVar9)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113386.f_7229[iVar9], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_275(int iParam0, int iParam1, char* sParam2, var uParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*uParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return 1;
}
break;
}
return 0;
}

int func_276(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7){
struct<3> Var0;
struct<3> Var3;
struct<3> Var6;
struct<3> Var9;
struct<3> Var12;
struct<3> Var15;
struct<3> Var18[4];
struct<2> Var31;
struct<2> Var34;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
Param1.f_2=Param4.f_2;
Var0={
func_243(Param1 - Param4) 
};
Var3={
Var0 
};
Var0.f_0=-Var3.f_1;
Var0.f_1=Var3.f_0;
Var0.f_2=0f;
Var6={
Param1 - Var0 * FtoV((fParam7 / 2f)) 
};
Var9={
Param1 + Var0 * FtoV((fParam7 / 2f)) 
};
Var12={
Param4 - Var0 * FtoV((fParam7 / 2f)) 
};
Var15={
Param4 + Var0 * FtoV((fParam7 / 2f)) 
};
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
Var18[0 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var31.f_1, 0f) 
};
Var18[1 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var34.f_1, 0f) 
};
Var18[2 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var31.f_1, 0f) 
};
Var18[3 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var34.f_1, 0f) 
};
if(((((((((((((((func_277(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_277(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_277(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_277(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_277(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_277(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_277(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_277(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_277(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_277(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_277(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_277(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_277(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_277(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_277(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_277(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12)){
return 1;
}}
return 0;
}

int func_277(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11){
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
float fVar10;
float fVar11;
float fVar12;
float fVar13;
fVar0=Param0.f_0;
fVar1=Param0.f_1;
fVar2=Param3.f_0;
fVar3=Param3.f_1;
fVar4=Param6.f_0;
fVar5=Param6.f_1;
fVar6=Param9.f_0;
fVar7=Param9.f_1;
fVar8=(fVar2 - fVar0);
fVar9=(fVar3 - fVar1);
fVar10=(fVar6 - fVar4);
fVar11=(fVar7 - fVar5);
fVar12=(((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
fVar13=(((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
if(((fVar12 >=0f && fVar12 <=1f) && fVar13 >=0f) && fVar13 <=1f){
return 1;
}
return 0;
}


void func_278(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
if(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <=200f){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
}
if(VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <=700f){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
}
if(ENTITY::GET_ENTITY_HEALTH(iParam0) < 200){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
}}}}

int func_279(){
struct<3> Var0[2];
struct<3> Var7;
int iVar10;
iVar10=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(iVar10)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar10), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
Var7={
func_280() 
};
if((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var7.f_0){
return 0;
}
if((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var7.f_1){
return 0;
}
if((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var7.f_2){
return 0;
}}
return 1;
}


Vector3 func__280(){
return 2,55f, 5,665f, 2,55f;
}


void func_281(){
int iVar0;
iVar0=func_204();
if(iVar0==-1){
return;
}
Global_112473[iVar0 /*10*/]=1;
}

int func_282(int iParam0, float fParam1, int iParam2){
int iVar0;
iVar0=1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(!func_287(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fParam1, 1, 1056964608, 0, 1, 0)){
iVar0=0;
}elseif(iParam2==1){
iVar0=0;
if(!func_286(PLAYER::PLAYER_PED_ID(), -828834893)){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}
if(ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))){
iVar0=0;
}}}
func_285();
if(func_216()){
func_284();
iVar0=0;
}
if(iVar0==0){
return 0;
}
if(iParam0==1){
if(!func_283()){
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}
return 1;
}


bool func_283(){
bool bVar0;
bVar0=CUTSCENE::HAS_CUTSCENE_LOADED();
if(!Global_78318){
if(!bVar0){
Global_78318=1;
}}
return bVar0;
}


void func_284(){
Global_20471=0;
func_230();
}


void func_285(){
PAD::DISABLE_CONTROL_ACTION(0, 21, true);
PAD::DISABLE_CONTROL_ACTION(0, 37, true);
PAD::DISABLE_CONTROL_ACTION(0, 25, true);
PAD::DISABLE_CONTROL_ACTION(0, 141, true);
PAD::DISABLE_CONTROL_ACTION(0, 140, true);
PAD::DISABLE_CONTROL_ACTION(0, 24, true);
PAD::DISABLE_CONTROL_ACTION(0, 257, true);
PAD::DISABLE_CONTROL_ACTION(0, 22, true);
PAD::DISABLE_CONTROL_ACTION(0, 23, true);
}

int func_286(int iParam0, int iParam1){
if(func_232(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_287(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 71, true);
PAD::DISABLE_CONTROL_ACTION(0, 72, true);
PAD::DISABLE_CONTROL_ACTION(0, 76, true);
PAD::DISABLE_CONTROL_ACTION(0, 73, true);
PAD::DISABLE_CONTROL_ACTION(0, 59, true);
PAD::DISABLE_CONTROL_ACTION(0, 60, true);
if(bParam5){
PAD::DISABLE_CONTROL_ACTION(0, 75, true);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, true);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 69, true);
PAD::DISABLE_CONTROL_ACTION(0, 70, true);
PAD::DISABLE_CONTROL_ACTION(0, 68, true);
}
PAD::DISABLE_CONTROL_ACTION(0, 74, true);
PAD::DISABLE_CONTROL_ACTION(0, 86, true);
PAD::DISABLE_CONTROL_ACTION(0, 81, true);
PAD::DISABLE_CONTROL_ACTION(0, 82, true);
PAD::DISABLE_CONTROL_ACTION(0, 138, true);
PAD::DISABLE_CONTROL_ACTION(0, 136, true);
PAD::DISABLE_CONTROL_ACTION(0, 114, true);
PAD::DISABLE_CONTROL_ACTION(0, 107, true);
PAD::DISABLE_CONTROL_ACTION(0, 110, true);
PAD::DISABLE_CONTROL_ACTION(0, 89, true);
PAD::DISABLE_CONTROL_ACTION(0, 89, true);
PAD::DISABLE_CONTROL_ACTION(0, 87, true);
PAD::DISABLE_CONTROL_ACTION(0, 88, true);
PAD::DISABLE_CONTROL_ACTION(0, 113, true);
PAD::DISABLE_CONTROL_ACTION(0, 115, true);
PAD::DISABLE_CONTROL_ACTION(0, 116, true);
PAD::DISABLE_CONTROL_ACTION(0, 117, true);
PAD::DISABLE_CONTROL_ACTION(0, 118, true);
PAD::DISABLE_CONTROL_ACTION(0, 119, true);
PAD::DISABLE_CONTROL_ACTION(0, 352, true);
PAD::DISABLE_CONTROL_ACTION(0, 131, true);
PAD::DISABLE_CONTROL_ACTION(0, 132, true);
PAD::DISABLE_CONTROL_ACTION(0, 123, true);
PAD::DISABLE_CONTROL_ACTION(0, 126, true);
PAD::DISABLE_CONTROL_ACTION(0, 129, true);
PAD::DISABLE_CONTROL_ACTION(0, 130, true);
PAD::DISABLE_CONTROL_ACTION(0, 133, true);
PAD::DISABLE_CONTROL_ACTION(0, 134, true);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_288(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, false)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_288(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, false)){
if(VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
}}}}


void func_289(char* sParam0, int iParam1, int iParam2, int iParam3){
struct<50> Var0;
int iVar65;
Var0=12;
Var0.f_13=12;
Var0.f_26=12;
Var0.f_39=9;
Var0.f_49=9;
func_290(iParam1, &Var0, iParam3);
iVar65=0;
while (iVar65 < 12){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
iVar65++;
}
iVar65=0;
while (iVar65 < 9){
if(Var0.f_39[iVar65]==-1 || Var0.f_39[iVar65]==255){
CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
}else{
CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
}
iVar65++;
}}


void func_290(int iParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
struct<50> Var2;
struct<14> Var67;
int iVar81;
int iVar82;
int iVar83;
int iVar84;
int iVar85;
int iVar86;
Var2=12;
Var2.f_13=12;
Var2.f_26=12;
Var2.f_39=9;
Var2.f_49=9;
iVar81=ENTITY::GET_ENTITY_MODEL(iParam0);
func_291(iParam0, &Var2, 0, -1);
func_291(iParam0, uParam1, iParam2, -1);
iVar82=0;
iVar83=0;
iVar0=0;
while (iVar0 < 12){
if(uParam1->f_13[iVar0] !=Var2.f_13[iVar0] || (*uParam1)[iVar0] !=Var2[iVar0]){
if(func_42(iVar81, func_82(iVar0), func_66(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_82(iVar0)), &iVar1)){
Var67={
func_84(iVar81, 2, uParam1->f_59, -1) 
};
uParam1->f_13[2]=Var67.f_3;
(*uParam1)[2]=Var67.f_4;
iVar82=1;
}
if(func_49(iVar81, func_82(iVar0), func_66(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_82(iVar0)), &iVar1)){
Var67={
func_84(iVar81, 1, uParam1->f_62, -1) 
};
uParam1->f_13[1]=Var67.f_3;
(*uParam1)[1]=Var67.f_4;
iVar83=1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
if(uParam1->f_39[iVar0] !=Var2.f_39[iVar0] || uParam1->f_49[iVar0] !=Var2.f_49[iVar0]){
if(func_42(iVar81, 14, func_56(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1)){
Var67={
func_84(iVar81, 2, uParam1->f_59, -1) 
};
uParam1->f_13[2]=Var67.f_3;
(*uParam1)[2]=Var67.f_4;
iVar82=1;
}
if(func_49(iVar81, 14, func_56(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1)){
Var67={
func_84(iVar81, 1, uParam1->f_62, -1) 
};
uParam1->f_13[1]=Var67.f_3;
(*uParam1)[1]=Var67.f_4;
iVar83=1;
}}
iVar0++;
}
if(iVar83 || iVar82){
iVar84=func_66(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
iVar85=func_66(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
iVar86=func_50(iVar81, iVar85, iVar84);
if(iVar86 !=-99){
Var67={
func_84(iVar81, 0, iVar86, -1) 
};
uParam1->f_13[0]=Var67.f_3;
(*uParam1)[0]=Var67.f_4;
}}}


void func_291(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=func_150(iParam0);
iVar1=0;
while (iVar1 < 12){
func_294(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_293(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_153(iVar0)){
uParam1->f_59=Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
uParam1->f_60=Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
uParam1->f_61=Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
uParam1->f_62=Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
uParam1->f_63=Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
uParam1->f_64=Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_292(161, iParam3)){
uParam1->f_59=func_71(2053, iParam3, 0);
}else{
uParam1->f_59=func_71(753, iParam3, 0);
}
uParam1->f_60=func_71(754, iParam3, 0);
uParam1->f_61=func_71(755, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_292(161, iParam3)){
uParam1->f_59=func_71(2053, iParam3, 0);
}else{
uParam1->f_59=func_71(753, iParam3, 0);
}}}}

int func_292(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2866852[iParam0 /*3*/][func_70(iParam1)];
if(STATS::STAT_GET_BOOL(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_293(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_150(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(iParam0, iParam1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
}else{
iVar0=iParam5;
}
if(iParam4==0){
return;
}
if(iParam1==0){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
if(iParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
}}}}
switch (iVar0){
case 0:
if(iParam1==0){
if(*uParam2==7){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(iParam1==1){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 1:
if(iParam1==0){
if(*uParam2==2){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 2:
if(iParam1==0){
if(*uParam2==9){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif((*uParam2 >=14 && *uParam2 <=20) || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}}


void func_294(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_150(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
}else{
iVar0=iParam6;
}
if(iParam5==0){
return;
}
switch (iVar0){
case 0:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(iParam1==9){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case 1:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case 2:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}}


void func_295(){
if(func_265()){
CAM::SET_GAMEPLAY_ENTITY_HINT(Local_85.f_28[0], 0f, 0f, 0f, true, -1, 1500, 2000, 0);
}}


void func_296(){
func_299();
func_253();
switch (iLocal_84){
case 0:
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE")){
AUDIO::START_AUDIO_SCENE("PAPARAZZO_03_SCENE");
}
iLocal_345=0;
func_298("PAP_3_RCM", 0);
if(func_232(Local_85.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
iLocal_330=PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_148, true), ENTITY::GET_ENTITY_ROTATION(iLocal_148, 2), 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_85.f_28[0], iLocal_330, sLocal_161, "leadin_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148, iLocal_330, "leadin_pap_3_rcm_dumpster", sLocal_161, 1000f, -8f, 0, 1000f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[0], iLocal_330, "leadin_pap_3_rcm_lid_l", sLocal_161, 1000f, -8f, 0, 1000f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[1], iLocal_330, "leadin_pap_3_rcm_lid_r", sLocal_161, 1000f, -8f, 0, 1000f);
}
func_256(1, 1, 1, 1);
iLocal_84=1;
}
break;
case 1:
if(func_232(Local_85.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_330)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_330) > 0,99f){
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_331)){
iLocal_331=PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_148, true), ENTITY::GET_ENTITY_ROTATION(iLocal_148, 2), 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_85.f_28[0], iLocal_331, sLocal_161, "idle_01_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85.f_28[0], false, false);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148, iLocal_331, "idle_01_pap_3_rcm_dumpster", sLocal_161, 1000f, -8f, 0, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[0], iLocal_331, "idle_01_pap_3_rcm_lid_l", sLocal_161, 1000f, -8f, 0, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_149[0]);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[1], iLocal_331, "idle_01_pap_3_rcm_lid_r", sLocal_161, 1000f, -8f, 0, 1000f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_149[1]);
}
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_330) > 0,3f){
if(!bLocal_328){
bLocal_328=func_217(&uLocal_163, "PAP3AU", "PAP3_RCM_LI", 8, 0, 0, 0);
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_330) > 0,3f){
func_297();
}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_330) > 0,05f){
func_295();
}}else{
func_295();
iLocal_84=2;
}
if(bLocal_328){
if(!func_216()){
iLocal_84=2;
}}}
break;
case 2:
func_295();
func_255(0);
break;
}}


void func_297(){
if(ENTITY::DOES_ENTITY_EXIST(Local_85.f_41[3]) && !iLocal_345){
GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_rcpap1_camera", PED::GET_PED_BONE_COORDS(Local_85.f_28[0], 28422, Local_340), ENTITY::GET_ENTITY_ROTATION(Local_85.f_41[3], 2), 1f, false, false, false);
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_339)){
AUDIO::STOP_SOUND(iLocal_339);
}
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_343, false, -1)){
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_339, "CAMERA", PED::GET_PED_BONE_COORDS(Local_85.f_28[0], 28422, Local_340), sLocal_344, false, 0, false);
iLocal_345=1;
}}}


void func_298(char* sParam0, bool bParam1){
func_270(bParam1);
CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}


void func_299(){
func_301(0);
func_285();
func_300();
}


void func_300(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if(func_287(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10,5f, 1, 1056964608, 0, 1, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) !=1){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}}}}


void func_301(int iParam0){
if(func_306()){
return;
}
if(!Global_20266.f_1==1){
if(func_305(0)){
func_302(iParam0);
}
MISC::SET_BIT(&Global_8137, 2);
}}


void func_302(int iParam0){
if(func_306()){
return;
}
if(Global_20464){
if(func_304()){
func_303(1, 1);
}else{
func_303(0, 0);
}}
if(Global_20266.f_1==10 || Global_20266.f_1==9){
MISC::SET_BIT(&Global_8137, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}
Global_21605=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8136, 30);
}else{
MISC::CLEAR_BIT(&Global_8136, 30);
}
if(!func_226()){
Global_20266.f_1=3;
}}


void func_303(bool bParam0, bool bParam1){
if(bParam0){
if(func_305(0)){
Global_20464=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
}
Global_20194={
Global_20212[Global_20211 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
}}elseif(Global_20464==1){
Global_20464=0;
Global_20194={
Global_20219[Global_20211 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
}}}


bool func_304(){
return MISC::IS_BIT_SET(Global_1958711, 5);
}

int func_305(int iParam0){
if(iParam0==1){
if(Global_20266.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8136, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20266.f_1 > 3){
return 1;
}
return 0;
}


bool func_306(){
return MISC::IS_BIT_SET(Global_1958711, 19);
}


void func_307(){
bLocal_328=false;
if(func_232(PLAYER::PLAYER_PED_ID())){
iLocal_146=PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}
if(func_232(Local_85.f_28[0])){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_85.f_28[0], iLocal_146);
PED::SET_PED_CONFIG_FLAG(Local_85.f_28[0], 132, true);
PED::SET_PED_KEEP_TASK(Local_85.f_28[0], true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85.f_28[0], true);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_147)){
iLocal_147=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261,19f, 292,22f, 90,79f, 10f, iLocal_155, true, false, true);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_147, false);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
func_316(&iLocal_148, &(Local_85.f_41[0]));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
func_316(&(iLocal_149[0]), &(Local_85.f_41[1]));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
func_316(&(iLocal_149[1]), &(Local_85.f_41[2]));
}
func_315(&uLocal_163, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
func_315(&uLocal_163, 3, Local_85.f_28[0], "BEVERLY", 0, 1);
HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
STREAMING::REQUEST_ANIM_DICT(sLocal_161);
STREAMING::REQUEST_PTFX_ASSET();
while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_161) || !STREAMING::HAS_PTFX_ASSET_LOADED()){
func_299();
SYSTEM::WAIT(0);
}
iLocal_339=AUDIO::GET_SOUND_ID();
if(func_456()){
switch (func_314()){
case 0:
func_308();
break;
default:
break;
}}else{
if(func_233(PLAYER::PLAYER_PED_ID())){
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){
func_289(sLocal_160, PLAYER::PLAYER_PED_ID(), 0, 2);
}}
func_255(-1);
}}


void func_308(){
func_312(1, 1);
func_311();
func_255(1);
func_310(PLAYER::PLAYER_PED_ID(), -258,8661f, 292,7882f, 90,5764f, 153,0393f, 0, 1);
func_309(1, 1, 1);
}


void func_309(int iParam0, int iParam1, int iParam2){
func_256(0, 0, iParam2, 1);
if(iParam0==1){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(iParam1==1){
func_268(500, 0);
}}

int func_310(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6){
bool bVar0;
float fVar1;
bVar0=false;
if(func_233(iParam0)){
if(bParam5==1){
fVar1=0f;
bVar0=MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
if(bVar0){
Param1.f_2=fVar1;
}}
ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam6);
ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
if(bParam5){
return bVar0;
}
return 1;
}
return 0;
}


void func_311(){
if(func_233(Local_85.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
iLocal_332=PED::CREATE_SYNCHRONIZED_SCENE(Local_333, Local_336, 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_85.f_28[0], iLocal_332, sLocal_161, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1000f, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_148)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148, iLocal_332, "leadout_pap_3_rcm_dumpster", sLocal_161, 1000f, -8f, 0, 1000f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[0], iLocal_332, "leadout_pap_3_rcm_lid_l", sLocal_161, 1000f, -8f, 1, 1000f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_149[1], iLocal_332, "leadout_pap_3_rcm_lid_r", sLocal_161, 1000f, -8f, 1, 1000f);
}
PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_332, 0,02f);
}
bLocal_329=false;
}


void func_312(bool bParam0, bool bParam1){
if(bParam0){
func_313(0, 1, 1);
}
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
func_267(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}


void func_313(bool bParam0, int iParam1, int iParam2){
bool bVar0;
bVar0=true;
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
while (bVar0){
bVar0=CUTSCENE::IS_CUTSCENE_ACTIVE();
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
CUTSCENE::STOP_CUTSCENE(false);
}
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
CUTSCENE::REMOVE_CUTSCENE();
}
if(CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING()){
bVar0=false;
}
SYSTEM::WAIT(0);
}
if(bParam0){
func_256(iParam1, iParam2, 1, 1);
}}}

int func_314(){
if(!Global_100441==10 && !Global_100441==9){
return 0;
}
return Global_100441.f_2;
}


void func_315(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78319){
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
}}
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
}}}}


void func_316(int* iParam0, var uParam1){
*iParam0=*uParam1;
*uParam1=0;
}

int func_317(){
if(!func_233(PLAYER::PLAYER_PED_ID())){
return 1;
}elseif(ENTITY::DOES_ENTITY_EXIST(Local_85.f_28[0])){
if(ENTITY::IS_ENTITY_DEAD(Local_85.f_28[0], false)){
func_318("P3BEVDEAD");
return 1;
}elseif(PED::GET_PED_MAX_HEALTH(Local_85.f_28[0]) > ENTITY::GET_ENTITY_HEALTH(Local_85.f_28[0])){
func_318("P3BEVHURT");
return 1;
}}
return 0;
}


void func_318(char* sParam0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
HUD::CLEAR_PRINTS();
if(iLocal_83 !=2){
sLocal_346=sParam0;
func_255(2);
}}


void func_319(){
switch (iLocal_84){
case 0:
if(MISC::ARE_STRINGS_EQUAL(sLocal_346, "DEFAULT")){
func_472(1);
}else{
func_321(sLocal_346, 1);
}
iLocal_84=1;
break;
case 1:
if(func_320()){
func_457();
}
break;
}}

int func_320(){
if(Global_3){
return 1;
}
if(Global_100441==7 || Global_100441==8){
return 1;
}
return 0;
}


void func_321(char* sParam0, bool bParam1){
func_322(sParam0);
func_472(bParam1);
}


void func_322(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78551, sParam0, 16);
StringCopy(&Global_78555, "", 16);
if(RECORDING::_IS_RECORDING()){
RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
}}}}


void func_323(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
float fVar0;
int iVar1;
int iVar2;
int iVar3;
struct<2> Var4;
float fVar6;
float fVar7;
int iVar8;
int iVar9;
int iVar10;
var uVar11;
int iVar12;
if(Global_78573 !=6){
if(Global_78575==-1){
if(func_334(1, Param0)){
if(Global_78576==3){
fVar0=1,5f;
}else{
fVar0=2,5f;
}
if(fLocal_21 > fVar0){
Global_78575=MISC::GET_GAME_TIMER();
Local_22={
HUD::GET_HUD_COMPONENT_POSITION(15) 
};
fLocal_21=0f;
}else{
fLocal_21=(fLocal_21 + MISC::GET_FRAME_TIME());
}}else{
fLocal_21=0f;
}}else{
if(!func_334(0, Param0)){
Global_78575=(MISC::GET_GAME_TIMER() - 9000);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
iVar1=(MISC::GET_GAME_TIMER() - Global_78575);
if(iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT()){
iVar2=255;
if(iVar1 < 1000){
iVar2=SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
}else{
iVar3=(9000 - iVar1);
if(iVar3 < 1000){
iVar2=SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
}}
switch (Global_78573){
case 3:
case 5:
if(iParam6==1){
fVar6=0f;
fVar7=-0,07f;
}
elseif(iParam7==1){
fVar6=0f;
fVar7=-0,077f;
}
elseif(iParam8==1){
fVar6=0f;
fVar7=-0,05f;
}
elseif(iParam9==1){
fVar6=0f;
fVar7=-0,035f;
}
else{
fVar6=0f;
fVar7=-0,014f;
}
break;
default:
fVar6=0f;
fVar7=-0,014f;
break;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_TEXT_FONT(1);
HUD::SET_TEXT_JUSTIFICATION(2);
iVar12=func_215();
if(Global_78576==1 && Global_78574==62){
iVar12=Global_113386.f_2363.f_539.f_4322;
}
switch (iVar12){
case 0:
HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
break;
case 1:
HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
break;
case 2:
HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
break;
default:
iVar8=240;
iVar9=200;
iVar10=80;
}
HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
HUD::SET_TEXT_DROP_SHADOW();
Var4={
func_325(Global_78574, Global_78576, iParam10) 
};
if(fVar7==-0,014f){
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0,01f);
HUD::SET_TEXT_SCALE(0,67f, 0,67f);
if(!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF()){
fLocal_26=0,14f;
}else{
fLocal_26=0,17f;
}
if(fVar7==-0,014f){
if(func_324(&Var4) > fLocal_26){
if(HUD::IS_HUD_COMPONENT_ACTIVE(15)){
HUD::SET_HUD_COMPONENT_POSITION(15, Local_22.f_0, (Local_22.f_1 + fLocal_25));
Global_78578=1;
}}}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_78577==1){
func_173();
fLocal_21=0f;
}}else{
func_173();
fLocal_21=0f;
}}}}


float func_324(char* sParam0){
HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}


struct<2> func_325(int iParam0, int iParam1, int iParam2){
struct<2> Var0;
int iVar2;
StringCopy(&Var0, "", 8);
switch (iParam1){
case 1:
Var0={
func_333(iParam0) 
};
break;
case 7:
Var0={
func_157(iParam0) 
};
break;
case 3:
iVar2=iParam0;
switch (iVar2){
case 0:
Var0={
func_332(iParam2) 
};
break;
case 8:
Var0={
func_331(iParam2) 
};
break;
case 7:
Var0={
func_330(iParam2) 
};
break;
case 10:
Var0={
func_329(iParam2) 
};
break;
case 5:
Var0={
func_328(iParam2) 
};
break;
case 4:
Var0={
func_327(iParam2) 
};
break;
default:
StringCopy(&Var0, func_326(iVar2), 8);
break;
}
break;
default:
break;
}
return Var0;
}


char* func_326(int iParam0){
switch (iParam0){
case 0:
return "MG_BJUM";
break;
case 1:
return "MG_DART";
break;
case 2:
return "MG_GOLF";
break;
case 3:
return "MG_HUNT";
break;
case 4:
return "MG_OFFR";
break;
case 5:
return "MG_PILO";
break;
case 6:
return "MG_RMPG";
break;
case 7:
return "MG_SERA";
break;
case 8:
return "MG_SRAC";
break;
case 9:
return "MG_STRP";
break;
case 10:
return "MG_STNT";
break;
case 11:
return "MG_SHTR";
break;
case 12:
return "MG_TAXI";
break;
case 13:
return "MG_TENN";
break;
case 14:
return "MG_TOWI";
break;
case 15:
return "MG_TRFA";
break;
case 16:
return "MG_TRFG";
break;
case 17:
return "MG_TRIA";
break;
case 18:
return "MG_YOGA";
break;
case 19:
return "MG_CRCE";
break;
}
return "INVALID!";
}


struct<2> func_327(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "MGOR_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_328(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "MGFS_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_329(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "MGSP_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_330(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "MGSR_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_331(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2) || iParam0==3){}else{
StringCopy(&Var0, "MGCR_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_332(int iParam0){
struct<2> Var0;
char[] cVar2[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar2, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){}else{
StringCopy(&Var0, "MGBJ_", 8);
StringConCat(&Var0, &cVar2, 8);
}
return Var0;
}


struct<2> func_333(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "M_", 8);
StringConCat(&Var0, &(Global_91229[iParam0 /*34*/].f_8), 8);
if(iParam0==90){
switch (Global_113386.f_9085.f_99.f_205[7]){
case 1:
StringConCat(&Var0, "A", 8);
break;
case 2:
StringConCat(&Var0, "B", 8);
break;
default:
StringConCat(&Var0, "A", 8);
break;
}}
return Var0;
}

int func_334(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
if(((!func_336(0) || Global_78588) || Global_78577==1) || !CAM::IS_SCREEN_FADED_IN()){
return 0;
}
switch (Global_78573){
case 0:
if(MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)){
Global_78573=3;
}else{
Global_78573=1;
}
break;
case 1:
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
Global_78573=2;
}
break;
case 2:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
Global_78573=4;
return 1;
}elseif(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
Global_78573=3;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
}else{
Global_78573=5;
return 1;
}
break;
case 4:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 1;
}elseif(iParam0==1){
Global_78573=5;
}
break;
case 5:
if((CUTSCENE::IS_CUTSCENE_PLAYING() || func_305(0)) || func_335(1)){
}else{
return 1;
}
break;
}
return 0;
}


bool func_335(bool bParam0){
if(bParam0){
return (Global_23011.f_4 && Global_23011.f_104==4);
}
return Global_23011.f_4;
}

int func_336(int iParam0){
if(Global_43052==15){
return 0;
}
if(func_337(iParam0)){
return 0;
}
return 1;
}


bool func_337(int iParam0){
return func_338(iParam0, Global_43052);
}

int func_338(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}


void func_339(var uParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(func_233(uParam0->f_28[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(func_233(uParam0->f_35[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
if(func_233(uParam0->f_41[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
iVar0++;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
if(bParam2){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
}}}


void func_340(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
int iVar0;
iVar0=1;
if(!func_456() || !func_449()){
iVar0=0;
}
if(iVar0==1){
if(!func_446(iParam6, iParam7, iParam8, iParam13)){
iVar0=0;
}}
if(iVar0==1){
func_444();
while (!func_443()){
SYSTEM::WAIT(0);
}
*iParam0=func_417(Param1, fParam4);
}elseif(iParam9==1){
if(func_416(Param1, 0f, 0f, 0f, 0)){
Param1={
Global_106934.f_2890 
};
fParam4=Global_106934.f_2890.f_6;
}
MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
func_410(Param1, 5f, 0);
if(func_153(iParam12)){
func_408(iParam12, 0);
while (!func_341(iParam0, iParam12, Param1, fParam4, 1, 0)){
SYSTEM::WAIT(0);
}}else{
STREAMING::REQUEST_MODEL(iParam10);
while (!STREAMING::HAS_MODEL_LOADED(iParam10)){
SYSTEM::WAIT(0);
}
*iParam0=VEHICLE::CREATE_VEHICLE(iParam10, Param1, fParam4, true, true, false);
if(ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)){
if(iParam11==0){
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
}elseif(iParam11 > 0){
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam11, iParam11);
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam10);
}}
if(iParam5==1){
if(((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
}}}

int func_341(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7){
int iVar0;
var uVar1;
struct<97> Var5;
int iVar103;
int iVar104;
bool bVar105;
char cVar106[16];
int iVar110;
if(func_153(iParam1)){
Var5.f_11=12;
Var5.f_31=49;
Var5.f_81=2;
func_407(iParam1, &Var5, iParam7);
if(Var5.f_0==0){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::GET_ENTITY_MODEL(*iParam0) !=Var5.f_0){
}
return 1;
}
if((iParam1==0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]){
Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
}
if(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==Var5.f_0){
STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam5, false, false, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var5.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
iVar103=0;
while (iVar103 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar103 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
iVar103++;
}
if(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
}
if(func_406(&uVar1, &iVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}}}
func_400(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_398(iParam0);
}}
if(bParam6){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_397(*iParam0, iParam1);
return 1;
}}elseif(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==Var5.f_0){
STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam5, false, false, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var5.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
iVar104=0;
while (iVar104 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar104 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
iVar104++;
}
if(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
}
if(func_406(&uVar1, &iVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}}}
func_400(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_398(iParam0);
}}
if(bParam6){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_397(*iParam0, iParam1);
return 1;
}}else{
STREAMING::REQUEST_MODEL(Var5.f_0);
if(STREAMING::HAS_MODEL_LOADED(Var5.f_0)){
bVar105=true;
*iParam0=VEHICLE::CREATE_VEHICLE(Var5.f_0, Param2, fParam5, true, true, false);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
StringCopy(&cVar106, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var5.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
iVar110=0;
while (iVar110 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
iVar110++;
}
if(Var5.f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
}
if(func_406(&uVar1, &iVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
if(Var5.f_26 >=0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_87);
VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_92, 28));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_92, 29));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_92, 30));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_89);
}
if(Var5.f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Var5.f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_90);
}}}
func_400(iParam0, &(Var5.f_31), &(Var5.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar106);
bVar105=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_398(iParam0);
}}elseif(((iParam1==0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("tailgater")){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
Global_113386.f_2363.f_539.f_4316=1;
func_342(iParam1, iParam0, 0, 1);
}
if(bParam6){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5.f_0);
}
if(bVar105){
func_397(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_342(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_153(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false)){
if(iParam2 > Global_113386.f_2363.f_539.f_2407){
return;
}
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_378(*iParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam1) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
}
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1)){
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(iVar1);
}
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*iParam1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false)){
iVar2=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
if(iVar2==0 || iVar2==5){
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
}else{
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}}else{
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2)){
MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3)){
MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0)){
MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1)){
MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}
Global_113386.f_2363.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_347(*iParam1, 0, &uVar0)){
func_346(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113386.f_20118[iParam0 /*43*/].f_40=1;
Global_113386.f_20118[iParam0 /*43*/]=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113386.f_20118[iParam0 /*43*/].f_3=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113386.f_20118[iParam0 /*43*/].f_4=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113386.f_20118[iParam0 /*43*/].f_5=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113386.f_20118[iParam0 /*43*/].f_6=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113386.f_20118[iParam0 /*43*/].f_10=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113386.f_20118[iParam0 /*43*/].f_16=!Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113386.f_20118[iParam0 /*43*/].f_19={
Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113386.f_20118[iParam0 /*43*/].f_23=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113386.f_20118[iParam0 /*43*/].f_7=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113386.f_20118[iParam0 /*43*/].f_8=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113386.f_20118[iParam0 /*43*/].f_9=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113386.f_20118[iParam0 /*43*/].f_11=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113386.f_20118[iParam0 /*43*/].f_12=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113386.f_20118[iParam0 /*43*/].f_13=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113386.f_20118[iParam0 /*43*/].f_14=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113386.f_20118[iParam0 /*43*/].f_15=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113386.f_20118[iParam0 /*43*/].f_18=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113386.f_20118[iParam0 /*43*/].f_17=Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113386.f_20118[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
Global_113386.f_20118[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
Global_113386.f_20118[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
Global_113386.f_20118[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
Global_113386.f_20118[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
Global_113386.f_20118[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
Global_113386.f_20118[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
Global_113386.f_20118[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
Global_113386.f_20118[iParam0 /*43*/].f_31=func_345(*iParam1);
Global_113386.f_20118[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_343(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_343(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
}}}}

int func_343(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar6;
int iVar7;
iVar0=0;
while (func_344(iVar0, &sVar2, &iVar1, &iVar6, &iVar7)){
if((iParam0==iVar6 && (!bParam3 || iParam1==iVar7)) && ((iParam2==iVar1 || iParam2==-1) || iParam2==255)){
*uParam4=iVar0;
return 1;
}
iVar0++;
}
iParam0=-1;
iParam1=-1;
*uParam4=-1;
return 0;
}


bool func_344(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
*uParam2=-1;
*uParam3=-1;
*uParam4=-1;
switch (iParam0){
case 0:
StringCopy(sParam1, "BR BLACK_STEEL", 16);
*uParam2=3;
*uParam3=118;
*uParam4=3;
break;
case 1:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=0;
*uParam3=147;
*uParam4=4;
break;
case 2:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=1;
*uParam3=96;
*uParam4=0;
break;
case 3:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=0;
*uParam3=71;
*uParam4=145;
break;
case 4:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=0;
*uParam3=135;
*uParam4=135;
break;
case 5:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=0;
*uParam3=29;
*uParam4=28;
break;
case 6:
StringCopy(sParam1, "BLUE", 16);
*uParam2=0;
*uParam3=64;
*uParam4=68;
break;
case 7:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=1;
*uParam3=70;
*uParam4=0;
break;
case 8:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=1;
*uParam3=50;
*uParam4=0;
break;
case 9:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=2;
*uParam3=55;
*uParam4=0;
break;
case 10:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=1;
*uParam3=89;
*uParam4=0;
break;
case 11:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=1;
*uParam3=38;
*uParam4=0;
break;
case 12:
StringCopy(sParam1, "GOLD", 16);
*uParam2=0;
*uParam3=37;
*uParam4=106;
break;
case 13:
StringCopy(sParam1, "SILVER", 16);
*uParam2=0;
*uParam3=4;
*uParam4=111;
break;
case 14:
StringCopy(sParam1, "CHROME", 16);
*uParam2=4;
*uParam3=120;
*uParam4=0;
break;
case 15:
StringCopy(sParam1, "WHITE", 16);
*uParam2=1;
*uParam3=111;
*uParam4=0;
break;
case 16:
StringCopy(sParam1, "BLACK", 16);
*uParam2=0;
*uParam3=0;
*uParam4=10;
break;
case 17:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=0;
*uParam3=1;
*uParam4=5;
break;
case 18:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=0;
*uParam3=11;
*uParam4=2;
break;
case 19:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=0;
*uParam3=2;
*uParam4=5;
break;
case 20:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=0;
*uParam3=3;
*uParam4=6;
break;
case 21:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=0;
*uParam3=5;
*uParam4=111;
break;
case 22:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=0;
*uParam3=6;
*uParam4=4;
break;
case 23:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=0;
*uParam3=7;
*uParam4=5;
break;
case 24:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=0;
*uParam3=8;
*uParam4=5;
break;
case 25:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=0;
*uParam3=9;
*uParam4=7;
break;
case 26:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=0;
*uParam3=10;
*uParam4=7;
break;
case 27:
StringCopy(sParam1, "RED", 16);
*uParam2=0;
*uParam3=27;
*uParam4=36;
break;
case 28:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=0;
*uParam3=28;
*uParam4=28;
break;
case 29:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=0;
*uParam3=150;
*uParam4=42;
break;
case 30:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=0;
*uParam3=30;
*uParam4=36;
break;
case 31:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=0;
*uParam3=31;
*uParam4=27;
break;
case 32:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=0;
*uParam3=32;
*uParam4=25;
break;
case 33:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=0;
*uParam3=33;
*uParam4=47;
break;
case 34:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=0;
*uParam3=34;
*uParam4=47;
break;
case 35:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=0;
*uParam3=143;
*uParam4=31;
break;
case 36:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=0;
*uParam3=35;
*uParam4=25;
break;
case 37:
StringCopy(sParam1, "PINK", 16);
*uParam2=0;
*uParam3=137;
*uParam4=3;
break;
case 38:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=0;
*uParam3=136;
*uParam4=5;
break;
case 39:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=0;
*uParam3=36;
*uParam4=26;
break;
case 40:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=0;
*uParam3=38;
*uParam4=37;
break;
case 41:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=0;
*uParam3=138;
*uParam4=89;
break;
case 42:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=0;
*uParam3=90;
*uParam4=102;
break;
case 43:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=0;
*uParam3=88;
*uParam4=88;
break;
case 44:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=0;
*uParam3=89;
*uParam4=88;
break;
case 45:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=0;
*uParam3=91;
*uParam4=91;
break;
case 46:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=0;
*uParam3=49;
*uParam4=52;
break;
case 47:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=0;
*uParam3=50;
*uParam4=53;
break;
case 48:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=0;
*uParam3=51;
*uParam4=66;
break;
case 49:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=0;
*uParam3=52;
*uParam4=59;
break;
case 50:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=0;
*uParam3=53;
*uParam4=59;
break;
case 51:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=0;
*uParam3=54;
*uParam4=60;
break;
case 52:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=0;
*uParam3=92;
*uParam4=92;
break;
case 53:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=0;
*uParam3=141;
*uParam4=73;
break;
case 54:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=0;
*uParam3=61;
*uParam4=63;
break;
case 55:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=0;
*uParam3=62;
*uParam4=68;
break;
case 56:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=0;
*uParam3=63;
*uParam4=87;
break;
case 57:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=0;
*uParam3=65;
*uParam4=87;
break;
case 58:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=0;
*uParam3=66;
*uParam4=60;
break;
case 59:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=0;
*uParam3=67;
*uParam4=67;
break;
case 60:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=0;
*uParam3=68;
*uParam4=68;
break;
case 61:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=0;
*uParam3=69;
*uParam4=74;
break;
case 62:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=0;
*uParam3=73;
*uParam4=73;
break;
case 63:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=0;
*uParam3=70;
*uParam4=70;
break;
case 64:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=0;
*uParam3=74;
*uParam4=74;
break;
case 65:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=0;
*uParam3=96;
*uParam4=95;
break;
case 66:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=0;
*uParam3=101;
*uParam4=95;
break;
case 67:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=0;
*uParam3=95;
*uParam4=97;
break;
case 68:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=0;
*uParam3=94;
*uParam4=104;
break;
case 69:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=0;
*uParam3=97;
*uParam4=98;
break;
case 70:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=0;
*uParam3=103;
*uParam4=104;
break;
case 71:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=0;
*uParam3=104;
*uParam4=104;
break;
case 72:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=0;
*uParam3=98;
*uParam4=95;
break;
case 73:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=0;
*uParam3=100;
*uParam4=100;
break;
case 74:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=0;
*uParam3=102;
*uParam4=105;
break;
case 75:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=0;
*uParam3=99;
*uParam4=106;
break;
case 76:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=0;
*uParam3=105;
*uParam4=105;
break;
case 77:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=0;
*uParam3=106;
*uParam4=106;
break;
case 78:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=0;
*uParam3=72;
*uParam4=64;
break;
case joaat("mpsv_lp0_31"):
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=146;
*uParam4=145;
break;
case 80:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=145;
*uParam4=74;
break;
case 81:
StringCopy(sParam1, "CREAM", 16);
*uParam2=0;
*uParam3=107;
*uParam4=107;
break;
case 82:
StringCopy(sParam1, "WHITE", 16);
*uParam2=0;
*uParam3=111;
*uParam4=0;
break;
case 83:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=0;
*uParam3=112;
*uParam4=0;
break;
case 84:
StringCopy(sParam1, "BLACK", 16);
*uParam2=1;
*uParam3=0;
*uParam4=0;
break;
case 85:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=1;
*uParam3=147;
*uParam4=0;
break;
case 86:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=1;
*uParam3=1;
*uParam4=0;
break;
case 87:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=1;
*uParam3=11;
*uParam4=0;
break;
case 88:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=1;
*uParam3=2;
*uParam4=0;
break;
case 89:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=1;
*uParam3=3;
*uParam4=2;
break;
case 90:
StringCopy(sParam1, "SILVER", 16);
*uParam2=1;
*uParam3=4;
*uParam4=4;
break;
case 91:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=1;
*uParam3=5;
*uParam4=5;
break;
case 92:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=1;
*uParam3=6;
*uParam4=0;
break;
case 93:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=1;
*uParam3=7;
*uParam4=0;
break;
case 94:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=1;
*uParam3=8;
*uParam4=0;
break;
case 95:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=1;
*uParam3=9;
*uParam4=0;
break;
case 96:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=1;
*uParam3=10;
*uParam4=0;
break;
case 97:
StringCopy(sParam1, "RED", 16);
*uParam2=1;
*uParam3=27;
*uParam4=0;
break;
case 98:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=1;
*uParam3=28;
*uParam4=0;
break;
case 99:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=1;
*uParam3=29;
*uParam4=0;
break;
case 100:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=1;
*uParam3=150;
*uParam4=0;
break;
case 101:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=1;
*uParam3=30;
*uParam4=0;
break;
case 102:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=1;
*uParam3=31;
*uParam4=0;
break;
case 103:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=1;
*uParam3=32;
*uParam4=0;
break;
case 104:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=1;
*uParam3=33;
*uParam4=0;
break;
case 105:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=1;
*uParam3=34;
*uParam4=0;
break;
case 106:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=1;
*uParam3=143;
*uParam4=0;
break;
case 107:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=1;
*uParam3=35;
*uParam4=0;
break;
case 108:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=1;
*uParam3=135;
*uParam4=0;
break;
case 109:
StringCopy(sParam1, "PINK", 16);
*uParam2=1;
*uParam3=137;
*uParam4=0;
break;
case 110:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=1;
*uParam3=136;
*uParam4=0;
break;
case 111:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=1;
*uParam3=36;
*uParam4=0;
break;
case 112:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=1;
*uParam3=138;
*uParam4=0;
break;
case 113:
StringCopy(sParam1, "GOLD", 16);
*uParam2=1;
*uParam3=99;
*uParam4=99;
break;
case 114:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=1;
*uParam3=90;
*uParam4=102;
break;
case 115:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=1;
*uParam3=88;
*uParam4=0;
break;
case 116:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=1;
*uParam3=91;
*uParam4=0;
break;
case 117:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=1;
*uParam3=49;
*uParam4=0;
break;
case 118:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=1;
*uParam3=51;
*uParam4=0;
break;
case 119:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=1;
*uParam3=52;
*uParam4=0;
break;
case 120:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=1;
*uParam3=53;
*uParam4=0;
break;
case 121:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=1;
*uParam3=54;
*uParam4=0;
break;
case 122:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=1;
*uParam3=92;
*uParam4=0;
break;
case 123:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=1;
*uParam3=141;
*uParam4=0;
break;
case 124:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=1;
*uParam3=61;
*uParam4=0;
break;
case 125:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=1;
*uParam3=62;
*uParam4=0;
break;
case 126:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=1;
*uParam3=63;
*uParam4=0;
break;
case 127:
StringCopy(sParam1, "BLUE", 16);
*uParam2=1;
*uParam3=64;
*uParam4=0;
break;
case 128:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=1;
*uParam3=65;
*uParam4=0;
break;
case 129:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=1;
*uParam3=66;
*uParam4=0;
break;
case 130:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=1;
*uParam3=67;
*uParam4=0;
break;
case 131:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=1;
*uParam3=68;
*uParam4=0;
break;
case 132:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=1;
*uParam3=69;
*uParam4=0;
break;
case 133:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=1;
*uParam3=73;
*uParam4=0;
break;
case 134:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=1;
*uParam3=74;
*uParam4=0;
break;
case 135:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=1;
*uParam3=101;
*uParam4=0;
break;
case 136:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=1;
*uParam3=95;
*uParam4=0;
break;
case 137:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=1;
*uParam3=94;
*uParam4=0;
break;
case 138:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=1;
*uParam3=97;
*uParam4=0;
break;
case 139:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=1;
*uParam3=103;
*uParam4=0;
break;
case 140:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=1;
*uParam3=104;
*uParam4=0;
break;
case 141:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=1;
*uParam3=98;
*uParam4=0;
break;
case 142:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=1;
*uParam3=100;
*uParam4=0;
break;
case 143:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=1;
*uParam3=102;
*uParam4=0;
break;
case 144:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=1;
*uParam3=99;
*uParam4=0;
break;
case 145:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=1;
*uParam3=105;
*uParam4=0;
break;
case 146:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=1;
*uParam3=106;
*uParam4=0;
break;
case 147:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=1;
*uParam3=71;
*uParam4=0;
break;
case 148:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=1;
*uParam3=72;
*uParam4=0;
break;
case 149:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=142;
*uParam4=0;
break;
case 150:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=145;
*uParam4=0;
break;
case 151:
StringCopy(sParam1, "CREAM", 16);
*uParam2=1;
*uParam3=107;
*uParam4=0;
break;
case 152:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=1;
*uParam3=112;
*uParam4=0;
break;
case 153:
StringCopy(sParam1, "BLACK", 16);
*uParam2=2;
*uParam3=12;
*uParam4=0;
break;
case 154:
StringCopy(sParam1, "GREY", 16);
*uParam2=2;
*uParam3=13;
*uParam4=0;
break;
case 155:
StringCopy(sParam1, "LIGHT_GREY", 16);
*uParam2=2;
*uParam3=14;
*uParam4=0;
break;
case 156:
StringCopy(sParam1, "WHITE", 16);
*uParam2=2;
*uParam3=131;
*uParam4=0;
break;
case 157:
StringCopy(sParam1, "BLUE", 16);
*uParam2=2;
*uParam3=83;
*uParam4=0;
break;
case 158:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=2;
*uParam3=82;
*uParam4=0;
break;
case 159:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=2;
*uParam3=84;
*uParam4=0;
break;
case 160:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=2;
*uParam3=149;
*uParam4=0;
break;
case 161:
StringCopy(sParam1, "Purple", 16);
*uParam2=2;
*uParam3=148;
*uParam4=0;
break;
case 162:
StringCopy(sParam1, "RED", 16);
*uParam2=2;
*uParam3=39;
*uParam4=0;
break;
case 163:
StringCopy(sParam1, "DARK_RED", 16);
*uParam2=2;
*uParam3=40;
*uParam4=0;
break;
case 164:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=2;
*uParam3=41;
*uParam4=0;
break;
case 165:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=2;
*uParam3=42;
*uParam4=0;
break;
case 166:
StringCopy(sParam1, "GREEN", 16);
*uParam2=2;
*uParam3=128;
*uParam4=0;
break;
case 167:
StringCopy(sParam1, "MATTE_FOR", 16);
*uParam2=2;
*uParam3=151;
*uParam4=0;
break;
case 168:
StringCopy(sParam1, "MATTE_FOIL", 16);
*uParam2=2;
*uParam3=155;
*uParam4=0;
break;
case 169:
StringCopy(sParam1, "MATTE_OD", 16);
*uParam2=2;
*uParam3=152;
*uParam4=0;
break;
case 170:
StringCopy(sParam1, "MATTE_DIRT", 16);
*uParam2=2;
*uParam3=153;
*uParam4=0;
break;
case 171:
StringCopy(sParam1, "MATTE_DESERT", 16);
*uParam2=2;
*uParam3=154;
*uParam4=0;
break;
case 172:
StringCopy(sParam1, "BR_STEEL", 16);
*uParam2=3;
*uParam3=117;
*uParam4=18;
break;
case 173:
StringCopy(sParam1, "BR_ALUMINIUM", 16);
*uParam2=3;
*uParam3=119;
*uParam4=5;
break;
case 174:
StringCopy(sParam1, "GOLD_P", 16);
*uParam2=3;
*uParam3=158;
*uParam4=160;
break;
case 175:
StringCopy(sParam1, "GOLD_S", 16);
*uParam2=3;
*uParam3=159;
*uParam4=160;
break;
}
return *uParam2 !=-1;
}


float func_345(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
iVar0=100000;
iVar1=65000;
iVar2=50000;
iVar3=20000;
iVar4=20000;
iVar5=iVar4;
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
if(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==3){
iVar5=iVar0;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==1){
iVar5=iVar1;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==2){
iVar5=iVar2;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==0){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
iVar5=iVar3;
}else{
iVar5=iVar4;
}}}
fVar6=(SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
return fVar6;
}

int func_346(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
(*uParam1)[iVar0]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
(*uParam1)[iVar0]=1;
}}elseif(iVar1==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0)){
case 255:
(*uParam1)[iVar0]=1;
break;
case 0:
(*uParam1)[iVar0]=2;
break;
case 1:
(*uParam1)[iVar0]=3;
break;
case 2:
(*uParam1)[iVar0]=4;
break;
case 3:
(*uParam1)[iVar0]=5;
break;
case 4:
(*uParam1)[iVar0]=6;
break;
case 5:
(*uParam1)[iVar0]=7;
break;
case 6:
(*uParam1)[iVar0]=8;
break;
case 7:
(*uParam1)[iVar0]=9;
break;
case 8:
(*uParam1)[iVar0]=10;
break;
case 9:
(*uParam1)[iVar0]=11;
break;
case 10:
(*uParam1)[iVar0]=12;
break;
case 11:
(*uParam1)[iVar0]=13;
break;
case 12:
(*uParam1)[iVar0]=14;
break;
case 13:
(*uParam1)[iVar0]=15;
break;
}}else{
(*uParam1)[iVar0]=0;
}}else{
(*uParam1)[iVar0]=VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
if(iVar0==23){
(*uParam2)[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}elseif(iVar0==24){
(*uParam2)[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}}
iVar0++;
}
return 1;
}

int func_347(int iParam0, bool bParam1, var uParam2){
int iVar0;
bool bVar1;
*uParam2=0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((!func_376(iVar0, bParam1, uParam2) && !func_375(PLAYER::PLAYER_ID())) && !func_357(iParam0)){
return 0;
}
if(func_375(PLAYER::PLAYER_ID())){
if(func_356(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_355(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_353(iParam0)) && !bVar1) && !(func_352(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_349(PLAYER::PLAYER_ID()))){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
*uParam2=16;
break;
default:
*uParam2=2;
break;
}
return 0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_348(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_348(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0])){
if(Global_97802[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_349(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==11;
}}}
return 0;
}

int func_350(int iParam0){
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
case joaat("mpsv_lp0_31"):
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
}
return -1;
}

int func_351(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2703735.f_3){
return Global_2703735.f_2;
}elseif(Global_2689235[iVar0 /*453*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_352(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_353(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("halftrack"):
case joaat("phantom3"):
case joaat("hauler2"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("bruiser"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("bruiser2"):
case joaat("bruiser3"):
return 1;
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_354(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
}
return 0;
}

int func_354(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==13;
}}}
return 0;
}

int func_355(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==7;
}}}
return 0;
}

int func_356(int iParam0){
return 1;
}

int func_357(int iParam0){
if(func_374(PLAYER::PLAYER_ID()) || func_373(PLAYER::PLAYER_ID())){
if(func_358(iParam0)){
return 1;
}}
return 0;
}

int func_358(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false)){
return 0;
}
if(func_361(iParam0, 0)){
return 1;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_359(iParam0)){
return 1;
}}}
return 0;
}

int func_359(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_353(iParam0)) || func_360(iVar0)){
return 1;
}
switch (iVar0){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("caracara"):
case joaat("caracara2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return 1;
break;
}}
return 0;
}

int func_360(int iParam0){
switch (iParam0){
case joaat("mule"):
case joaat("mule2"):
case joaat("mule3"):
case joaat("brickade"):
case joaat("dune"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("boxville4"):
case joaat("boxville5"):
return 1;
default:
}
return 0;
}

int func_361(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_363(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2815059.f_303==iParam0){
return 1;
}elseif(func_362(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_362(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2703735.f_206[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_363(int iParam0, int iParam1){
if(iParam1==0){
if(func_372(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_371();
break;
case joaat("sabregt"):
if(Global_262145.f_14731){
return func_370();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14732){
return func_370();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14730){
return func_370();
}
break;
case joaat("minivan"):
if(Global_262145.f_14733){
return func_370();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14735){
return func_370();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_369();
break;
case joaat("comet2"):
if(Global_262145.f_19186){
return func_368();
}
break;
case joaat("diablous"):
if(Global_262145.f_19188){
return func_368();
}
break;
case joaat("fcr"):
if(Global_262145.f_19192){
return func_368();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19189){
return func_368();
}
break;
case joaat("nero"):
if(Global_262145.f_19196){
return func_368();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19194){
return func_368();
}
break;
case joaat("specter"):
if(Global_262145.f_19199){
return func_368();
}
break;
case joaat("technical"):
if(Global_262145.f_21144){
return func_367();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21145){
return func_367();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_366();
break;
case joaat("glendale"):
if(func_366() || func_365()){
return 1;
}
break;
case joaat("impaler"):
return func_366();
break;
case joaat("issi3"):
return func_366();
break;
case joaat("gargoyle"):
return func_366();
break;
case joaat("dominator"):
return func_366();
break;
case joaat("dominator2"):
return func_366();
break;
case joaat("imperator"):
return func_366();
break;
case joaat("imperator2"):
return func_366();
break;
case joaat("imperator3"):
return func_366();
break;
case joaat("deathbike"):
return func_366();
break;
case joaat("deathbike2"):
return func_366();
break;
case joaat("deathbike3"):
return func_366();
break;
case joaat("impaler2"):
case joaat("brutus"):
case joaat("bruiser"):
case joaat("slamvan4"):
case joaat("issi4"):
case joaat("monster3"):
case joaat("scarab"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
return func_366();
break;
case joaat("youga2"):
if(Global_262145.f_29320){
return func_365();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29670){
return func_365();
}
break;
case joaat("manana"):
if(Global_262145.f_29319){
return func_365();
}
break;
case joaat("peyote"):
if(Global_262145.f_29669){
return func_365();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29668){
return func_365();
}
break;
}
switch (iParam0){
case -893984159:
if(Global_262145.f_33045){
return func_364();
}
break;
case joaat("weevil"):
if(Global_262145.f_33044){
return func_364();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33037){
return func_364();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33046){
return func_364();
}
break;
}
return 0;
}


bool func_364(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_365(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_366(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_367(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_368(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_369(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_370(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_371(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_372(int iParam0, int iParam1){
switch (iParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return 1;
break;
case 274946574:
case -994371320:
case 15214558:
case -1356880839:
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("sabregt2"):
if(!Global_262145.f_14731){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14732){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14730){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("comet3"):
if(Global_262145.f_19186){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19188){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19192){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19189){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19196){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19194){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19199){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21145){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return 1;
break;
}
return 0;
}

int func_373(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1 && Global_2689235[iParam0 /*453*/].f_318.f_9 !=func_223()){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==5;
}}}
return 0;
}

int func_374(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1 && Global_2689235[iParam0 /*453*/].f_318.f_9 !=func_223()){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==8;
}}}
return 0;
}

int func_375(int iParam0){
if(iParam0 !=func_223()){
if(func_351(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_350(Global_2689235[iParam0 /*453*/].f_318.f_6)==9;
}}}
return 0;
}

int func_376(int iParam0, bool bParam1, var uParam2){
bool bVar0;
if(!bParam1){
if((((((((((((((iParam0==joaat("police") || iParam0==joaat("policeold1")) || iParam0==joaat("policeold2")) || iParam0==joaat("police2")) || iParam0==joaat("police3")) || iParam0==joaat("police4")) || iParam0==joaat("fbi")) || iParam0==joaat("fbi2")) || iParam0==joaat("polmav")) || iParam0==joaat("policeb")) || iParam0==joaat("policet")) || iParam0==joaat("riot")) || iParam0==joaat("sheriff")) || iParam0==joaat("pranger")) || iParam0==joaat("sheriff2")){
*uParam2=1;
return 0;
}}
if(((((((iParam0==joaat("ambulance") || iParam0==joaat("firetruk")) || iParam0==joaat("taxi")) || iParam0==joaat("lguard")) || iParam0==joaat("ripley")) || iParam0==joaat("dilettante2")) || iParam0==joaat("airbus")) || iParam0==joaat("airtug")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("burrito") || iParam0==joaat("rumpo2")) || iParam0==joaat("speedo")) || iParam0==joaat("speedo2")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("scorcher") || iParam0==joaat("bmx")) || iParam0==joaat("cruiser")) || iParam0==joaat("fixter")){
*uParam2=2;
return 0;
}
if(((((((((((((((((((iParam0==joaat("caddy") || iParam0==joaat("forklift")) || iParam0==joaat("caddy2")) || iParam0==joaat("crusader")) || iParam0==joaat("tribike")) || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")) || iParam0==joaat("tractor")) || iParam0==joaat("tractor2")) || iParam0==joaat("mower")) || iParam0==joaat("tornado4")) || iParam0==joaat("docktug")) || iParam0==joaat("stretch")) || iParam0==joaat("bison2")) || iParam0==joaat("bison3")) || iParam0==joaat("benson")) || iParam0==joaat("pounder")) || iParam0==joaat("submersible")) || iParam0==joaat("emperor3")) || iParam0==joaat("dune2")){
*uParam2=2;
return 0;
}
bVar0=false;
if(func_355(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
bVar0=true;
}
if(((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 !=joaat("blazer")) && iParam0 !=joaat("blazer2")) && iParam0 !=joaat("blazer3")) && iParam0 !=joaat("blazer4")) && iParam0 !=joaat("blazer5")) && iParam0 !=joaat("chimera")) && iParam0 !=joaat("trailerlarge")) && iParam0 !=joaat("trailersmall2")) && iParam0 !=joaat("rrocket")) && iParam0 !=joaat("stryder")) && iParam0 !=joaat("verus")) && !bVar0){
*uParam2=2;
return 0;
}
if(iParam0==joaat("monster")){
*uParam2=2;
return 0;
}
if((iParam0==joaat("insurgent") || iParam0==joaat("technical")) || iParam0==joaat("limo2")){
*uParam2=2;
return 0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_377(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_377(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}


void func_378(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_382(iParam0)){
return;
}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
if(!ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_zero")){
iParam1=0;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_one")){
iParam1=1;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_two")){
iParam1=2;
}}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iParam1=Global_113386.f_2363.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113386.f_32749.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1))){
Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113386.f_32749.f_5590=iParam1;
Global_78042=iParam0;
Global_113386.f_32749.f_5588=1;
func_379(iParam0, &(Global_113386.f_32749.f_5510));
}


void func_379(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
func_25(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(iParam0);
StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(iParam0);
uParam1->f_69=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2)){
MISC::SET_BIT(&(uParam1->f_77), 28);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3)){
MISC::SET_BIT(&(uParam1->f_77), 29);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 30);
}
if(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1)){
MISC::SET_BIT(&(uParam1->f_77), 31);
}
if(uParam1->f_65==-1 && !func_381(uParam1->f_66)){
uParam1->f_65=0;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false)){
uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 9);
}
if(VEHICLE::IS_VEHICLE_STOLEN(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 10);
}
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 12);
}
func_346(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar0 + 1));
}
iVar0++;
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 11);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 11);
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave")){
MISC::SET_BIT(&(uParam1->f_77), 27);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}}}

int func_380(int iParam0){
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_381(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}

int func_382(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_274(iParam0, 0, 0)) || func_274(iParam0, 1, 0)) || func_274(iParam0, 2, 0)) || func_396(iParam0) !=145) || func_395(iParam0)) || func_394(iParam0)) || func_348(iParam0)) || func_393(iParam0)) || !func_383(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_394(iParam0)){
}
if(func_394(iParam0)){
}
if(func_274(iParam0, 0, 0)){
}
if(func_274(iParam0, 1, 0)){
}
if(func_274(iParam0, 2, 0)){
}
if(func_396(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_383(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_384(iParam0, 0)){
return 0;
}
if(((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)){
return 0;
}
switch (iParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return 0;
break;
}
return 1;
}

int func_384(int iParam0, bool bParam1){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_392()){
return 0;
}}else{
iVar0=0;
while (iVar0 < FILES::GET_NUM_DLC_VEHICLES()){
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1)){
if(iParam0==Var1.f_1){
if(FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
return 0;
}}}
iVar0++;
}}
if(iParam0==joaat("blimp")){
if((((!func_391() && !func_390()) && !func_389()) && !func_388()) && !func_392()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_171() || MISC::IS_PC_VERSION()) || func_170()){
}elseif(!func_389()){
return 0;
}}
if(bParam1){
if(!func_387(iParam0)){
return 0;
}}
if(!func_385(iParam0)){
return 0;
}
return 1;
}

int func_385(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_386()){
return 1;
}
NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
if(iVar0==4){
return 1;
}
switch (iParam0){
case joaat("dune4"):
StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return 1;
break;
}
if(!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2)){
return 0;
}
return 1;
}

int func_386(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_387(int iParam0){
int iVar0;
int iVar1;
if(Global_2787545){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14734 && iVar1 < Global_262145.f_14746){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14730 && iVar1 < Global_262145.f_14742){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14731 && iVar1 < Global_262145.f_14743){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14732 && iVar1 < Global_262145.f_14744){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14733 && iVar1 < Global_262145.f_14745){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14735 && iVar1 < Global_262145.f_14747){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14736 && iVar1 < Global_262145.f_14739){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14737 && iVar1 < Global_262145.f_14740){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14738 && iVar1 < Global_262145.f_14741){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17368 && iVar1 < Global_262145.f_17333){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17363 && iVar1 < Global_262145.f_17328){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17367 && iVar1 < Global_262145.f_17332){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17366 && iVar1 < Global_262145.f_17331){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17360 && iVar1 < Global_262145.f_17325){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17361 && iVar1 < Global_262145.f_17326){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17364 && iVar1 < Global_262145.f_17329){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17365 && iVar1 < Global_262145.f_17330){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17362 && iVar1 < Global_262145.f_17327){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17370 && iVar1 < Global_262145.f_17335){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17371 && iVar1 < Global_262145.f_17336){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17359 && iVar1 < Global_262145.f_17324){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17358 && iVar1 < Global_262145.f_17323){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17357 && iVar1 < Global_262145.f_17322){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17369 && iVar1 < Global_262145.f_17334){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17372 && iVar1 < Global_262145.f_17337){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17373 && iVar1 < Global_262145.f_17338){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17374 && iVar1 < Global_262145.f_17339){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17375 && iVar1 < Global_262145.f_17340){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17522 && iVar1 < Global_262145.f_17544){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17523 && iVar1 < Global_262145.f_17545){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17524 && iVar1 < Global_262145.f_17546){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17525 && iVar1 < Global_262145.f_17547){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17526 && iVar1 < Global_262145.f_17548){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17527 && iVar1 < Global_262145.f_17549){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17529 && iVar1 < Global_262145.f_17550){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17530 && iVar1 < Global_262145.f_17551){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17531 && iVar1 < Global_262145.f_17552){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17532 && iVar1 < Global_262145.f_17553){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17533 && iVar1 < Global_262145.f_17554){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17534 && iVar1 < Global_262145.f_17555){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17535 && iVar1 < Global_262145.f_17556){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17541 && iVar1 < Global_262145.f_17563){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17538 && iVar1 < Global_262145.f_17559){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17539 && iVar1 < Global_262145.f_17560){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17540 && iVar1 < Global_262145.f_17561){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17528 && iVar1 < Global_262145.f_17562){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17542 && iVar1 < Global_262145.f_17564){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17536 && iVar1 < Global_262145.f_17557){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17537 && iVar1 < Global_262145.f_17558){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17543 && iVar1 < Global_262145.f_17565){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19176 && iVar1 < Global_262145.f_19273){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19177 && iVar1 < Global_262145.f_19274){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19178 && iVar1 < Global_262145.f_19275){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19179 && iVar1 < Global_262145.f_19276){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19180 && iVar1 < Global_262145.f_19277){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19181 && iVar1 < Global_262145.f_19278){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19182 && iVar1 < Global_262145.f_19279){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19183 && iVar1 < Global_262145.f_19280){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19184 && iVar1 < Global_262145.f_19281){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19185 && iVar1 < Global_262145.f_19282){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19186 && iVar1 < Global_262145.f_19283){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19187 && iVar1 < Global_262145.f_19284){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19188 && iVar1 < Global_262145.f_19285){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19189 && iVar1 < Global_262145.f_19286){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19190 && iVar1 < Global_262145.f_19287){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19191 && iVar1 < Global_262145.f_19288){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19192 && iVar1 < Global_262145.f_19289){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19193 && iVar1 < Global_262145.f_19290){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19194 && iVar1 < Global_262145.f_19291){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19195 && iVar1 < Global_262145.f_19292){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19196 && iVar1 < Global_262145.f_19293){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19197 && iVar1 < Global_262145.f_19294){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19198 && iVar1 < Global_262145.f_19295){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19199 && iVar1 < Global_262145.f_19296){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19200 && iVar1 < Global_262145.f_19297){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20257 && iVar1 < Global_262145.f_20253){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20258 && iVar1 < Global_262145.f_20254){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20259 && iVar1 < Global_262145.f_20255){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20260 && iVar1 < Global_262145.f_20256){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21138 && iVar1 < Global_262145.f_21146){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21139 && iVar1 < Global_262145.f_21147){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21140 && iVar1 < Global_262145.f_21148){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21141 && iVar1 < Global_262145.f_21149){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21142 && iVar1 < Global_262145.f_21150){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21143 && iVar1 < Global_262145.f_21151){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_21921 && iVar1 < Global_262145.f_21941){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_21933 && iVar1 < Global_262145.f_21953){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_21924 && iVar1 < Global_262145.f_21944){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_21934 && iVar1 < Global_262145.f_21954){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_21922 && iVar1 < Global_262145.f_21942){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_21938 && iVar1 < Global_262145.f_21958){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_21936 && iVar1 < Global_262145.f_21956){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_21937 && iVar1 < Global_262145.f_21957){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_21932 && iVar1 < Global_262145.f_21952){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_21939 && iVar1 < Global_262145.f_21959){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_21935 && iVar1 < Global_262145.f_21955){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_21931 && iVar1 < Global_262145.f_21951){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_21923 && iVar1 < Global_262145.f_21943){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_21925 && iVar1 < Global_262145.f_21945){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_21926 && iVar1 < Global_262145.f_21946){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_21927 && iVar1 < Global_262145.f_21947){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_21928 && iVar1 < Global_262145.f_21948){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_21929 && iVar1 < Global_262145.f_21949){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_21930 && iVar1 < Global_262145.f_21950){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_22889 && iVar1 < Global_262145.f_22917){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_22890 && iVar1 < Global_262145.f_22918){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_22891 && iVar1 < Global_262145.f_22919){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_22892 && iVar1 < Global_262145.f_22920){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_22893 && iVar1 < Global_262145.f_22921){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_22894 && iVar1 < Global_262145.f_22922){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_22895 && iVar1 < Global_262145.f_22923){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_22896 && iVar1 < Global_262145.f_22924){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_22897 && iVar1 < Global_262145.f_22925){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_22898 && iVar1 < Global_262145.f_22926){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_22899 && iVar1 < Global_262145.f_22927){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_22900 && iVar1 < Global_262145.f_22928){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_22901 && iVar1 < Global_262145.f_22929){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_22902 && iVar1 < Global_262145.f_22930){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_22903 && iVar1 < Global_262145.f_22931){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_22904 && iVar1 < Global_262145.f_22932){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_22905 && iVar1 < Global_262145.f_22933){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_22906 && iVar1 < Global_262145.f_22934){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_22907 && iVar1 < Global_262145.f_22935){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_22908 && iVar1 < Global_262145.f_22936){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_22909 && iVar1 < Global_262145.f_22937){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_22910 && iVar1 < Global_262145.f_22938){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_22911 && iVar1 < Global_262145.f_22939){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_22912 && iVar1 < Global_262145.f_22940){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_22913 && iVar1 < Global_262145.f_22941){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_22914 && iVar1 < Global_262145.f_22942){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_22915 && iVar1 < Global_262145.f_22943){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_22916 && iVar1 < Global_262145.f_22944){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24109 && iVar1 < Global_262145.f_24125){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24110 && iVar1 < Global_262145.f_24126){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24114 && iVar1 < Global_262145.f_24130){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24117 && iVar1 < Global_262145.f_24133){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24122 && iVar1 < Global_262145.f_24138){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24116 && iVar1 < Global_262145.f_24132){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24108 && iVar1 < Global_262145.f_24124){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24115 && iVar1 < Global_262145.f_24131){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24121 && iVar1 < Global_262145.f_24137){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24120 && iVar1 < Global_262145.f_24136){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24111 && iVar1 < Global_262145.f_24127){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24113 && iVar1 < Global_262145.f_24129){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24123 && iVar1 < Global_262145.f_24139){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24119 && iVar1 < Global_262145.f_24135){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24112 && iVar1 < Global_262145.f_24128){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24118 && iVar1 < Global_262145.f_24134){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24199 && iVar1 < Global_262145.f_24186){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24200 && iVar1 < Global_262145.f_24187){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24205 && iVar1 < Global_262145.f_24192){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24204 && iVar1 < Global_262145.f_24191){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24202 && iVar1 < Global_262145.f_24189){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24208 && iVar1 < Global_262145.f_24195){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24210 && iVar1 < Global_262145.f_24197){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24211 && iVar1 < Global_262145.f_24198){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24209 && iVar1 < Global_262145.f_24196){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24201 && iVar1 < Global_262145.f_24188){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24203 && iVar1 < Global_262145.f_24190){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24207 && iVar1 < Global_262145.f_24194){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24206 && iVar1 < Global_262145.f_24193){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26756 && iVar1 < Global_262145.f_26758){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25769 && iVar1 < Global_262145.f_25762){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25770 && iVar1 < Global_262145.f_25763){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25771 && iVar1 < Global_262145.f_25764){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25772 && iVar1 < Global_262145.f_25765){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26757 && iVar1 < Global_262145.f_26759){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25773 && iVar1 < Global_262145.f_25766){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25774 && iVar1 < Global_262145.f_25767){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25775 && iVar1 < Global_262145.f_25768){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25780 && iVar1 < Global_262145.f_25801){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25781 && iVar1 < Global_262145.f_25802){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25782 && iVar1 < Global_262145.f_25803){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25783 && iVar1 < Global_262145.f_25804){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25784 && iVar1 < Global_262145.f_25805){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25785 && iVar1 < Global_262145.f_25806){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25786 && iVar1 < Global_262145.f_25807){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25787 && iVar1 < Global_262145.f_25808){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25788 && iVar1 < Global_262145.f_25809){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25789 && iVar1 < Global_262145.f_25810){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25790 && iVar1 < Global_262145.f_25811){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25791 && iVar1 < Global_262145.f_25812){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25792 && iVar1 < Global_262145.f_25813){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25793 && iVar1 < Global_262145.f_25814){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25794 && iVar1 < Global_262145.f_25815){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25795 && iVar1 < Global_262145.f_25816){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25796 && iVar1 < Global_262145.f_25817){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25797 && iVar1 < Global_262145.f_25818){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25798 && iVar1 < Global_262145.f_25819){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25799 && iVar1 < Global_262145.f_25820){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_25800 && iVar1 < Global_262145.f_25821){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28601 && iVar1 < Global_262145.f_28622){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28602 && iVar1 < Global_262145.f_28623){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28603 && iVar1 < Global_262145.f_28624){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28604 && iVar1 < Global_262145.f_28625){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28605 && iVar1 < Global_262145.f_28626){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28606 && iVar1 < Global_262145.f_28627){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28607 && iVar1 < Global_262145.f_28628){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28608 && iVar1 < Global_262145.f_28629){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28609 && iVar1 < Global_262145.f_28630){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28610 && iVar1 < Global_262145.f_28631){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28611 && iVar1 < Global_262145.f_28632){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28612 && iVar1 < Global_262145.f_28633){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28613 && iVar1 < Global_262145.f_28634){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28614 && iVar1 < Global_262145.f_28635){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28615 && iVar1 < Global_262145.f_28636){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28616 && iVar1 < Global_262145.f_28637){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28617 && iVar1 < Global_262145.f_28638){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28618 && iVar1 < Global_262145.f_28639){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28619 && iVar1 < Global_262145.f_28640){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28620 && iVar1 < Global_262145.f_28641){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28621 && iVar1 < Global_262145.f_28642){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28652 && iVar1 < Global_262145.f_28655){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28653 && iVar1 < Global_262145.f_28656){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28654 && iVar1 < Global_262145.f_28657){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29670 && iVar1 < Global_262145.f_29335){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29321 && iVar1 < Global_262145.f_29342){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29322 && iVar1 < Global_262145.f_29328){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29668 && iVar1 < Global_262145.f_29336){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29669 && iVar1 < Global_262145.f_29337){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29315 && iVar1 < Global_262145.f_29334){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29316 && iVar1 < Global_262145.f_29343){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29317 && iVar1 < Global_262145.f_29333){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29318 && iVar1 < Global_262145.f_29331){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29664 && iVar1 < Global_262145.f_29338){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29665 && iVar1 < Global_262145.f_29339){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29666 && iVar1 < Global_262145.f_29340){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29667 && iVar1 < Global_262145.f_29341){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29319 && iVar1 < Global_262145.f_29330){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29320 && iVar1 < Global_262145.f_29332){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30129 && iVar1 < Global_262145.f_30112){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30130 && iVar1 < Global_262145.f_30113){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30131 && iVar1 < Global_262145.f_30114){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30132 && iVar1 < Global_262145.f_30115){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30133 && iVar1 < Global_262145.f_30116){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30134 && iVar1 < Global_262145.f_30117){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30135 && iVar1 < Global_262145.f_30118){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30136 && iVar1 < Global_262145.f_30119){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30137 && iVar1 < Global_262145.f_30120){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30146){
}elseif(!Global_262145.f_30138 && iVar1 < Global_262145.f_30121){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30139 && iVar1 < Global_262145.f_30122){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30140 && iVar1 < Global_262145.f_30123){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30141 && iVar1 < Global_262145.f_30124){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30142 && iVar1 < Global_262145.f_30125){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30147){
}elseif(!Global_262145.f_30143 && iVar1 < Global_262145.f_30126){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30144 && iVar1 < Global_262145.f_30127){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30145 && iVar1 < Global_262145.f_30128){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_30997 && iVar1 < Global_262145.f_30980){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_30998 && iVar1 < Global_262145.f_30981){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_30999 && iVar1 < Global_262145.f_30982){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31000 && iVar1 < Global_262145.f_30983){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31001 && iVar1 < Global_262145.f_30984){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31002 && iVar1 < Global_262145.f_30985){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31003 && iVar1 < Global_262145.f_30986){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31004 && iVar1 < Global_262145.f_30987){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31005 && iVar1 < Global_262145.f_30988){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31006 && iVar1 < Global_262145.f_30989){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31007 && iVar1 < Global_262145.f_30990){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31008 && iVar1 < Global_262145.f_30991){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31009 && iVar1 < Global_262145.f_30992){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31010 && iVar1 < Global_262145.f_30993){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31011 && iVar1 < Global_262145.f_30994){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31012 && iVar1 < Global_262145.f_30995){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31013 && iVar1 < Global_262145.f_30996){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_31872 && iVar1 < Global_262145.f_31857){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_31873 && iVar1 < Global_262145.f_31858){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_31874 && iVar1 < Global_262145.f_31859){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_31875 && iVar1 < Global_262145.f_31860){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_31876 && iVar1 < Global_262145.f_31861){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_31877 && iVar1 < Global_262145.f_31862){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_31878 && iVar1 < Global_262145.f_31863){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_31879 && iVar1 < Global_262145.f_31864){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_31880 && iVar1 < Global_262145.f_31865){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_31881 && iVar1 < Global_262145.f_31866){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_31882 && iVar1 < Global_262145.f_31867){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_31883 && iVar1 < Global_262145.f_31868){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_31884 && iVar1 < Global_262145.f_31869){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_31885 && iVar1 < Global_262145.f_31870){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_31950){
}elseif(!Global_262145.f_31886 && iVar1 < Global_262145.f_31871){
iVar0=0;
}}elseif(iParam0==15214558){
if(!Global_262145.f_33037 && iVar1 < Global_262145.f_33018){
iVar0=0;
}}elseif(iParam0==-754687673){
if(!Global_262145.f_33031 && iVar1 < Global_262145.f_33012){
iVar0=0;
}}elseif(iParam0==-768236378){
if(!Global_262145.f_33035 && iVar1 < Global_262145.f_33016){
iVar0=0;
}}elseif(iParam0==40817712){
if(!Global_262145.f_33029 && iVar1 < Global_262145.f_33010){
iVar0=0;
}}elseif(iParam0==-64075878){
if(!Global_262145.f_33040 && iVar1 < Global_262145.f_33021){
iVar0=0;
}}elseif(iParam0==-10917683){
if(!Global_262145.f_33032 && iVar1 < Global_262145.f_33013){
iVar0=0;
}}elseif(iParam0==-294678663){
if(!Global_262145.f_33041 && iVar1 < Global_262145.f_33022){
iVar0=0;
}}elseif(iParam0==-1855505138){
if(!Global_262145.f_33043 && iVar1 < Global_262145.f_33024){
iVar0=0;
}}elseif(iParam0==775514032){
if(!Global_262145.f_33034 && iVar1 < Global_262145.f_33015){
iVar0=0;
}}elseif(iParam0==-893984159){
if(!Global_262145.f_33042 && iVar1 < Global_262145.f_33023){
iVar0=0;
}}elseif(iParam0==274946574){
if(!Global_262145.f_33045 && iVar1 < Global_262145.f_33026){
iVar0=0;
}}elseif(iParam0==-165394758){
if(!Global_262145.f_33030 && iVar1 < Global_262145.f_33011){
iVar0=0;
}}elseif(iParam0==-1758379524){
if(!Global_262145.f_33038 && iVar1 < Global_262145.f_33019){
iVar0=0;
}}elseif(iParam0==-994371320){
if(!Global_262145.f_33044 && iVar1 < Global_262145.f_33025){
iVar0=0;
}}elseif(iParam0==1706945532){
if(!Global_262145.f_33036 && iVar1 < Global_262145.f_33017){
iVar0=0;
}}elseif(iParam0==-1356880839){
if(!Global_262145.f_33046 && iVar1 < Global_262145.f_33027){
iVar0=0;
}}elseif(iParam0==-477831899){
if(!Global_262145.f_33033 && iVar1 < Global_262145.f_33014){
iVar0=0;
}}elseif(iParam0==-505223465){
if(!Global_262145.f_33028 && iVar1 < Global_262145.f_33009){
iVar0=0;
}}
return iVar0;
}

int func_388(){
return 0;
}

int func_389(){
return 1;
}

int func_390(){
return 1;
}

int func_391(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_392(){
int iVar0;
if(Global_152259==2){
return 1;
}elseif(Global_152259==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, false);
STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_393(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_384(iVar0, 0)){
return 1;
}
return 0;
}

int func_394(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false)){
if(Global_97772[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_395(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24])){
if(iParam0==Global_77137.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77137.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_396(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0])){
if(Global_97772[iVar0]==iParam0){
return Global_97782[iVar0];
}}
iVar0++;
}
return 145;
}


void func_397(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0])){
Global_97772[iVar0]=iParam0;
Global_97782[iVar0]=iParam1;
Global_97792[iVar0]=ENTITY::GET_ENTITY_MODEL(iParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_97792[iVar0])){
Global_97820[iParam1 /*3*/][0]=-1;
}else{
Global_97820[iParam1 /*3*/][1]=-1;
}
iVar0=9;
}
if(iVar0==8){
}
iVar0++;
}}


void func_398(int iParam0){
if(!func_399(*iParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 5, !Global_113386.f_9085.f_99.f_58[119]);
}}


bool func_399(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_400(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
}else{
VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_404(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_372(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_403(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_403(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_402(iParam0);
if(func_401(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
}
return 1;
}

int func_401(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=0;
while (iVar0 < 49){
iVar1=iVar0;
if(((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21) || iVar1==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) !=-1){
StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
iVar2=MISC::GET_HASH_KEY(&cVar3);
if(iVar2 !=0){
if(iVar2==MISC::GET_HASH_KEY("MNU_CAGE") || iVar2==MISC::GET_HASH_KEY("SABRE_CAG")){
return 1;
}}}
iVar0++;
}}
return 0;
}


void func_402(var uParam0){
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
}else{
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
}
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}}

int func_403(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("tornado5"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 4;
break;
}
break;
case joaat("faction3"):
return 3;
break;
}
iVar0=VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
iVar1=VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
fVar2=(SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
iVar3=(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
if(iVar3 < 0){
iVar3=0;
}
if(iVar3 >=iVar0){
iVar3=(iVar0 - 1);
}
return iVar3;
}
return 0;
}

int func_404(var uParam0, int iParam1, int iParam2){
if(!func_405() && unk_0x00834EAC4A96E010(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_405(){
return 0;
}

int func_406(var uParam0, int iParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113386.f_20118.f_261){
*uParam0={
Global_113386.f_20118.f_267 
};
*iParam1=Global_113386.f_20118.f_271;
return 1;
}
return 0;
}


void func_407(int iParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (iParam0){
case 0:
iVar0=joaat("tailgater");
if(Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131]){
iVar0=joaat("premier");
}
switch (iVar0){
case joaat("tailgater"):
*uParam1=iVar0;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
StringCopy(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=iVar0;
uParam1->f_2=14,9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
StringCopy(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
iVar0=joaat("bodhi2");
switch (iVar0){
case joaat("bodhi2"):
*uParam1=iVar0;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113386.f_9085.f_99.f_58[119]){
uParam1->f_11[1]=1;
}
break;
}
break;
case 1:
if(iParam2==1){
iVar0=joaat("buffalo2");
}elseif(iParam2==2){
iVar0=joaat("bagger");
}elseif(Global_113386.f_9085.f_99.f_58[118]){
iVar0=joaat("bagger");
}else{
iVar0=joaat("buffalo2");
}
switch (iVar0){
case joaat("bagger"):
*uParam1=iVar0;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=iVar0;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
StringCopy(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}}


void func_408(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0])){
if(iParam0==145 || Global_97782[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0])==func_409(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97772[iVar0], false)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97772[iVar0], false, true);
VEHICLE::DELETE_VEHICLE(&(Global_97772[iVar0]));
Global_97782[iVar0]=145;
}}}}
iVar0++;
}}

int func_409(int iParam0, int iParam1){
struct<82> Var0;
if(func_153(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_407(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_410(struct<3> Param0, float fParam3, bool bParam4){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_415(&(Global_77137.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77137.f_555[0 /*21*/], bParam4) <=fParam3){
func_411(iVar0);
}}
iVar0++;
}}


void func_411(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_415(&(Global_77137.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0])){
bVar0=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false)){
bVar0=false;
}}}
if(bVar0){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
VEHICLE::DELETE_VEHICLE(&(Global_77137.f_139[iParam0]));
}}
Global_77137[iParam0]=1;
if(MISC::IS_BIT_SET(Global_77137.f_555[0 /*21*/].f_9, 13)){
if(((((iParam0==24 && func_184(iParam0, 0)) && Global_78046.f_66==0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] !=0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_413(0, Global_77137.f_555[0 /*21*/].f_12) || !func_413(1, Global_77137.f_555[0 /*21*/].f_12))){
func_412(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
Global_78124=Global_113386.f_32749.f_5591;
}
func_182(iParam0, 0);
}}}


void func_412(var uParam0, var uParam1){
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
}

int func_413(int iParam0, int iParam1){
int iVar0;
switch (iParam1){
case 0:
iVar0=0;
break;
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
}
if(iParam0 < 0 || iParam0 >=func_414(&(Global_113386.f_32749.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_384(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_414(var uParam0){
return *uParam0;
}

int func_415(var uParam0, int iParam1){
int iVar0;
int iVar1;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
StringCopy(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831,8538f, 172,1154f, 69,9058f 
};
uParam0->f_3=157,5705f;
uParam0->f_4=func_409(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 1:
*uParam0={
1970,943f, 3801,684f, 31,1396f 
};
uParam0->f_3=301,3964f;
uParam0->f_4=func_409(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 2:
*uParam0={
-22,6297f, -1439,137f, 29,6549f 
};
uParam0->f_3=180,0808f;
uParam0->f_4=func_409(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 3:
*uParam0={
-22,5229f, -1434,699f, 29,6552f 
};
uParam0->f_3=141,6114f;
uParam0->f_4=func_409(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 4:
*uParam0={
10,9281f, 545,669f, 174,7951f 
};
uParam0->f_3=61,392f;
uParam0->f_4=func_409(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 5:
*uParam0={
6,1093f, 544,9742f, 174,2835f 
};
uParam0->f_3=92,1548f;
uParam0->f_4=func_409(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 6:
*uParam0={
1981,416f, 3808,131f, 31,1384f 
};
uParam0->f_3=117,2557f;
uParam0->f_4=func_409(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 7:
*uParam0={
-1158,488f, -1529,367f, 3,8995f 
};
uParam0->f_3=35,7505f;
uParam0->f_4=func_409(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 8:
*uParam0={
148,2868f, -1270,569f, 28,2252f 
};
uParam0->f_3=208,4685f;
uParam0->f_4=func_409(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 9:
*uParam0={
1459,509f, -1380,45f, 78,3259f 
};
uParam0->f_3=99,6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 10:
*uParam0={
-1518,947f, -1387,865f, -0,5134f 
};
uParam0->f_3=98,3867f;
uParam0->f_4=joaat("seashark");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353,0926f, 3577,593f, 32,351f 
};
uParam0->f_3=16,6205f;
uParam0->f_4=joaat("duster");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652,004f, -3142,348f, 12,9921f 
};
uParam0->f_3=329,1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271,649f, -3380,685f, 12,9451f 
};
uParam0->f_3=329,5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735,586f, 3294,531f, 40,1651f 
};
uParam0->f_3=194,9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846,27f, -1363,19f, 0,22f 
};
uParam0->f_3=108,78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849,47f, -1354,99f, 0,24f 
};
uParam0->f_3=109,84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852,47f, -1346,2f, 0,21f 
};
uParam0->f_3=108,76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745,857f, -1433,904f, 4,0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756,2952f, -1441,609f, 2,9184f 
};
uParam0->f_18={
-738,0606f, -1423,068f, 8,2835f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761,8486f, -1453,829f, 4,0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772,8158f, -1459,957f, 3,2894f 
};
uParam0->f_18={
-754,3353f, -1440,836f, 8,3334f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769,3f, 3244f, 41,1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192,7897f, -1020,539f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192,7897f, -1020,539f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192,7897f, -1020,539f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 26:
case 27:
case 28:
iVar1=(iParam1 - 26);
uParam0->f_14=(12 + iVar1);
*uParam0={
196,2794f, -1020,479f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 29:
case 30:
case 31:
iVar1=(iParam1 - 29);
uParam0->f_14=(15 + iVar1);
*uParam0={
199,8872f, -1020,048f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 32:
case 33:
case 34:
iVar1=(iParam1 - 32);
uParam0->f_14=(18 + iVar1);
*uParam0={
203,6006f, -1019,776f, -99,98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723,2515f, -632,0496f, 27,1484f 
};
uParam0->f_3=12,9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 35:
*uParam0={
-51,23f, 3111,9f, 24,95f 
};
uParam0->f_3=46,78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 36:
*uParam0={
-55,7984f, -1096,586f, 25,4223f 
};
uParam0->f_3=308,0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 37:
*uParam0={
-2892,93f, 3192,37f, 11,66f 
};
uParam0->f_3=-132,35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 38:
*uParam0={
1744,308f, 3270,673f, 40,2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 39:
*uParam0={
1751,44f, 3322,643f, 42,1855f 
};
uParam0->f_3=268,134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
iVar0=1;
break;
case 41:
*uParam0={
1377,104f, -2076,2f, 52f 
};
uParam0->f_3=37,5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 40:
*uParam0={
1380,42f, -2072,77f, 51,7607f 
};
uParam0->f_3=37,5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 42:
*uParam0={
1359,389f, 3618,441f, 33,8907f 
};
uParam0->f_3=108,2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 43:
*uParam0={
693,1154f, -1018,155f, 21,6387f 
};
uParam0->f_3=177,6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 44:
*uParam0={
-73,6963f, 495,124f, 143,5226f 
};
uParam0->f_3=155,5994f;
uParam0->f_4=joaat("vacca");
iVar0=1;
break;
case 45:
*uParam0={
-67,6314f, 891,8266f, 234,5348f 
};
uParam0->f_3=294,993f;
uParam0->f_4=joaat("surano");
iVar0=1;
break;
case 46:
*uParam0={
533,9048f, -169,2469f, 53,7005f 
};
uParam0->f_3=1,2998f;
uParam0->f_4=joaat("tornado2");
iVar0=1;
break;
case 47:
*uParam0={
-726,8914f, -408,6952f, 34,0416f 
};
uParam0->f_3=267,7392f;
uParam0->f_4=joaat("superd");
iVar0=1;
break;
case 48:
*uParam0={
-1321,519f, 261,3993f, 61,5709f 
};
uParam0->f_3=350,7697f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 49:
*uParam0={
-1267,999f, 451,6463f, 93,7071f 
};
uParam0->f_3=48,9311f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 50:
*uParam0={
-1062,076f, -226,7637f, 37,157f 
};
uParam0->f_3=234,2767f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 51:
*uParam0={
68,16914f, -1558,958f, 29,46904f 
};
uParam0->f_3=49,90575f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 52:
*uParam0={
589,4399f, 2736,708f, 42,03316f 
};
uParam0->f_3=-175,7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 53:
*uParam0={
-488,774f, -344,5721f, 34,36356f 
};
uParam0->f_3=82,4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 54:
*uParam0={
288,8808f, -585,4728f, 43,15428f 
};
uParam0->f_3=-20,80707f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 55:
*uParam0={
304,8294f, -1383,674f, 31,67744f 
};
uParam0->f_3=-41,11603f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 56:
*uParam0={
1126,194f, -1481,486f, 34,7016f 
};
uParam0->f_3=-91,43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 57:
*uParam0={
-1598,36f, 5252,84f, 0f 
};
uParam0->f_3=28,14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 58:
*uParam0={
-1602,62f, 5260,37f, 0,86f 
};
uParam0->f_3=25,32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 59:
*uParam0={
2116,571f, 4763,279f, 40,1596f 
};
uParam0->f_3=198,723f;
uParam0->f_4=joaat("bfinjection");
iVar0=1;
break;
case 60:
*uParam0={
1133,21f, 120,2f, 80,9f 
};
uParam0->f_3=134,4f;
if(func_392()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806,31f, -2679,65f, 13,9f 
};
uParam0->f_3=150,54f;
if(func_392()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 62:
*uParam0={
1985,85f, 3828,96f, 31,98f 
};
uParam0->f_3=-16,58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 63:
*uParam0={
3870,75f, 4464,67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
iVar0=1;
break;
case 64:
*uParam0={
1257,729f, -2564,474f, 41,717f 
};
uParam0->f_3=284,5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 65:
*uParam0={
643,2823f, 3014,152f, 42,2733f 
};
uParam0->f_3=128,0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 66:
*uParam0={
38,9368f, 850,8677f, 196,3f 
};
uParam0->f_3=311,6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 67:
*uParam0={
1333,875f, 4262,226f, 30,78f 
};
uParam0->f_3=262,5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
}
if(MISC::IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678,8f, 3229,6f, 41,8f 
};
uParam0->f_3=106,0906f;
}}
if(!func_416(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113386.f_32749.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113386.f_32749.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_416(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_416(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}


bool func_416(struct<3> Param0, struct<3> Param3, bool bParam6){
if(bParam6){
return (Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1);
}
return ((Param0.f_0==Param3.f_0 && Param0.f_1==Param3.f_1) && Param0.f_2==Param3.f_2);
}

int func_417(struct<3> Param0, float fParam3){
return func_418(&(Global_106934.f_2890), Param0, fParam3, 0);
}

int func_418(var uParam0, struct<3> Param1, float fParam4, bool bParam5){
int iVar0;
struct<3> Var1;
bool bVar4;
var uVar5;
int iVar8;
if(func_442(uParam0)){
if(func_416(Param1, 0f, 0f, 0f, 0)){
Param1={
*uParam0 
};
fParam4=uParam0->f_6;
}
if(uParam0->f_12.f_66==joaat("monster") || uParam0->f_12.f_66==joaat("marshall")){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, false, true)){
Param1={
-850,93f, 158,82f, 65,7f 
};
fParam4=89,5f;
}}
if(func_441(uParam0)){
MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
func_410(Param1, 5f, 0);
iVar0=VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, true) 
};
if(SYSTEM::VDIST2(Var1, -1151,15f, -1530,32f, 7,48925f) <=3f){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
}
func_423(iVar0, &(uParam0->f_12), 0, 1);
bVar4=true;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66)){
if(!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5)){
bVar4=false;
}}
if(bVar4){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
}
if(uParam0->f_7==1){
if(bParam5){
if(VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_408(uParam0->f_11, 1);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_408(uParam0->f_11, 2);
}}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
func_397(iVar0, uParam0->f_11);
}elseif((!func_420(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning")){
iVar8=func_419(iVar0);
if(iVar8==-1){
uParam0->f_10=0;
}else{
func_411(iVar8);
}}
if(((Global_100441 !=13 && Global_100441 !=10) && Global_100441 !=11) && Global_100441 !=12){
if(MISC::GET_HASH_KEY(&(Global_100441.f_3))==Global_78125){
if(uParam0->f_12.f_66==Global_113386.f_32749.f_69[21 /*78*/].f_66){
func_182(24, 0);
func_411(24);
}}}
if(uParam0->f_9==1){
func_378(iVar0, uParam0->f_11);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, true) 
};
}
return iVar0;
}}
return iVar0;
}

int func_419(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 68){
if((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77137.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[iVar0], false)){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
VEHICLE::GET_VEHICLE_COLOURS(Global_77137.f_484[iVar0], &iVar3, &iVar4);
if(((ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[iVar0])) && iVar1==iVar2) && iVar3==iVar4){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_420(int iParam0, struct<3> Param1, bool bParam4){
int iVar0;
var uVar1[3];
int iVar5;
int iVar6;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("cargobob"):
if(func_422(iParam0, Global_77137.f_139[38], 0)){
func_411(38);
return 1;
}
break;
case joaat("firetruk"):
if(func_422(iParam0, Global_77137.f_139[43], 1)){
func_411(43);
return 1;
}
break;
case joaat("cuban800"):
iVar5=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar6=0;
while (iVar6 <=(iVar5 - 1)){
if(func_422(iParam0, uVar1[iVar6], 1) && func_421(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136,133f, 4780,563f, 39,9702f, 5f, 0)){
if((!bParam4 || func_416(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f){
VEHICLE::DELETE_VEHICLE(&iParam0);
return 1;
}else{
return 0;
}}
iVar6++;
}
break;
case joaat("luxor2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[14], false)){
if(ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[14])==joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[14])){
func_411(14);
return 1;
}}
break;
case joaat("swift2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[20], false)){
if(ENTITY::GET_ENTITY_MODEL(Global_77137.f_484[20])==joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77137.f_484[20])){
func_411(20);
return 1;
}}
break;
}
return 0;
}

int func_421(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7){
if(fParam6 < 0f){
fParam6=0f;
}
if(!bParam7){
if(MISC::ABSF((Param0.f_0 - Param3.f_0)) <=fParam6){
if(MISC::ABSF((Param0.f_1 - Param3.f_1)) <=fParam6){
if(MISC::ABSF((Param0.f_2 - Param3.f_2)) <=fParam6){
return 1;
}}}}elseif(MISC::ABSF((Param0.f_0 - Param3.f_0)) <=fParam6){
if(MISC::ABSF((Param0.f_1 - Param3.f_1)) <=fParam6){
return 1;
}}
return 0;
}

int func_422(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)){
if(bParam2){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
if(iVar0==iVar2 && iVar1==iVar3){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_423(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
if(uParam1->f_66 !=0){
}
if(!func_434(iParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
}
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
}}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
iVar0=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_380(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_380(iVar5));
}
iVar5++;
}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5) !=-1){
VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 13)){
VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 12)){
VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
}
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_432(uParam1->f_5) || func_432(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_431(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_430()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_381(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
}
if(bParam2){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
}
VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >=0){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
}
if(uParam1->f_69 > -1 && uParam1->f_69 < 255){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_69==6){
func_429(iParam0, uParam1->f_69);
}}else{
func_429(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
}}
if(bParam3){
func_400(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar6=0;
while (iVar6 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_380(iVar6 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
}
iVar6++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
}}
if(((func_424() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
if(!MISC::IS_BIT_SET(uParam1->f_77, 23)){
if(MISC::IS_BIT_SET(uParam1->f_77, 22)){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
}}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 27)){
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
}else{
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
}}}

int func_424(){
if((((Global_4718592.f_107227==6 || Global_4718592.f_107227==7) || Global_4718592.f_107227==18) || Global_4718592.f_107227==19) && Global_4718592.f_2==20){
return 0;
}
if(func_427(7)){
if(func_426(Global_2703735.f_4.f_16) || func_425(Global_2703735.f_4.f_16)){
return 0;
}}
return 1;
}

int func_425(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1888862[iVar0 /*120*/].f_77.f_42 !=0;
}
return 0;
}

int func_426(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_222(iParam0, 9);
}
return 0;
}


bool func_427(int iParam0){
return func_428(&(Global_2703735.f_169), iParam0);
}


var func__428(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}


void func_429(int iParam0, int iParam1){
int iVar0;
bool bVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
bVar1=VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("peyote2")){
return;
}
if(iVar0==-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1==1);
}}}


bool func_430(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_431(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(iVar0, 4);
}}}
return 0;
}

int func_432(int iParam0){
if(!func_405() && func_433(iParam0)){
return 1;
}
return 0;
}

int func_433(int iParam0){
switch (iParam0){
case 161:
case 164:
case 170:
case 171:
case 183:
case 191:
case 199:
case 209:
case 216:
case 218:
return 1;
break;
}
return 0;
}

int func_434(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if(!func_440(PLAYER::PLAYER_ID(), -1)){
iParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, false)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
return 0;
}
if(func_436(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
if(func_435(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_435(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_436(int iParam0){
if(func_439(iParam0)==233){
return func_437(iParam0);
}
return -1;
}

int func_437(int iParam0){
if(func_438(iParam0, 0)){
return Global_1892703[iParam0 /*599*/].f_10.f_182;
}
return -1;
}

int func_438(int iParam0, int iParam1){
if(Global_1892703[iParam0 /*599*/].f_10.f_33 !=-1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_439(int iParam0){
if(func_438(iParam0, 0)){
return Global_1892703[iParam0 /*599*/].f_10.f_33;
}
return -1;
}

int func_440(int iParam0, int iParam1){
int iVar0;
if(func_351(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false)){
return 1;
}}}}
return 0;
}

int func_441(var uParam0){
if(func_442(uParam0)){
if(STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66)){
return 1;
}else{
return 0;
}
return 1;
}else{
return 0;
}
return 1;
}

int func_442(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_384(uParam0->f_12.f_66, 0)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_421(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0)){
return 0;
}
return 1;
}


bool func_443(){
return func_441(&(Global_106934.f_2890));
}


void func_444(){
func_445(&(Global_106934.f_2890));
}


void func_445(var uParam0){
if(func_442(uParam0)){
STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
}}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3){
if(VEHICLE::IS_THIS_MODEL_A_BOAT(Global_106934.f_2890.f_12.f_66)){
return 0;
}
if(iParam1==0 && VEHICLE::IS_THIS_MODEL_A_HELI(Global_106934.f_2890.f_12.f_66)){
return 0;
}
if(iParam2==0 && func_448(Global_106934.f_2890.f_12.f_66)){
return 0;
}
if(iParam3==0 && VEHICLE::IS_THIS_MODEL_A_PLANE(Global_106934.f_2890.f_12.f_66)){
return 0;
}
if(iParam0==1){
if(!func_447()){
return 0;
}}
return 1;
}

int func_447(){
float fVar0;
if(!func_449()){
return 0;
}
if((VEHICLE::IS_THIS_MODEL_A_BOAT(Global_106934.f_2890.f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_106934.f_2890.f_12.f_66)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_106934.f_2890.f_12.f_66)){
return 0;
}
fVar0=VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Global_106934.f_2890.f_12.f_66);
if(fVar0 < 37f){
return 0;
}
return 1;
}

int func_448(int iParam0){
switch (iParam0){
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("polmav"):
case joaat("policeb"):
case joaat("policet"):
case joaat("policeold2"):
case joaat("policeold1"):
case joaat("sheriff"):
case joaat("sheriff2"):
return 1;
break;
}
return 0;
}


bool func_449(){
return func_442(&(Global_106934.f_2890));
}

int func_450(var uParam0){
int iVar0[5];
int iVar6[3];
struct<3> Var10[3];
struct<3> Var20[3];
char* sVar30;
int iVar31;
bool bVar32;
sVar30="rcmpaparazzo_3leadinoutpap_3_rcm";
iVar0[0]=uLocal_80;
iVar0[1]=joaat("prop_pap_camera_01");
iVar0[2]=joaat("prop_cs_dumpster_01a");
iVar0[3]=joaat("prop_cs_dumpster_lidl");
iVar0[4]=joaat("prop_cs_dumpster_lidr");
switch (iLocal_79){
case 0:
uParam0->f_16=5;
uParam0->f_17[0 /*3*/]={
-258,5052f, 287,5976f, 90,17828f 
};
uParam0->f_17[1 /*3*/]={
-258,5263f, 298,0905f, 93,69456f 
};
uParam0->f_24=7f;
uParam0->f_27=1;
uParam0->f_25=1;
StringCopy(&(uParam0->f_9), "PAP_3_RCM", 24);
iVar31=0;
while (iVar31 <=(iVar0 - 1)){
STREAMING::REQUEST_MODEL(iVar0[iVar31]);
iVar31++;
}
STREAMING::REQUEST_ANIM_DICT(sVar30);
iLocal_79=1;
break;
case 1:
if(!func_455(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar30)){
return 0;
}
iLocal_79=2;
break;
case 2:
bVar32=true;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0])){
if(func_452(&(uParam0->f_28[0]), 50, -261f, 292,22f, 90,89f, 10,53f, "PAPARAZZO LAUNCHER RC", 1)){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
}else{
bVar32=false;
}}
if(func_232(uParam0->f_28[0])){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3])){
func_451(&(uParam0->f_41[3]), iVar0[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2,5f), 0f);
if(func_233(uParam0->f_41[3])){
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[3], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[1]);
}else{
bVar32=false;
}}else{
bVar32=false;
}}
if(bVar32){
iVar6[0]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-260,62f, 292,1391f, 90,604f, 10f, joaat("prop_cs_dumpster_01a"), true, false, true);
Var10[0 /*3*/]={
-260,614f, 292,106f, 91,127f 
};
Var20[0 /*3*/]={
7,2E-05f, -2,500116f, 89,63998f 
};
iVar6[1]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261,58f, 291,66f, 92,06f, 10f, joaat("prop_cs_dumpster_lidl"), true, false, true);
Var10[1 /*3*/]={
-261,108f, 292,5062f, 92,03645f 
};
Var20[1 /*3*/]={
-0,656039f, -2,50018f, 89,6114f 
};
iVar6[2]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261,5835f, 291,6671f, 92,066f, 10f, joaat("prop_cs_dumpster_lidr"), true, false, true);
Var10[2 /*3*/]={
-261,1135f, 291,6249f, 91,99765f 
};
Var20[2 /*3*/]={
-0,281056f, -2,500049f, 89,62769f 
};
iVar31=0;
while (iVar31 <=2){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iVar6[iVar31]));
iVar31++;
}
ENTITY::CREATE_MODEL_HIDE(-260,62f, 292,13f, 90,6f, 10f, joaat("prop_cs_dumpster_01a"), true);
ENTITY::CREATE_MODEL_HIDE(-261,58f, 291,66f, 92,06f, 10f, joaat("prop_cs_dumpster_lidr"), true);
ENTITY::CREATE_MODEL_HIDE(-261,54f, 292,54f, 92,1f, 10f, joaat("prop_cs_dumpster_lidl"), true);
uParam0->f_41[0]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_01a"), Var10[0 /*3*/], true, true, false);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], Var20[0 /*3*/], 2, true);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], false);
uParam0->f_41[1]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidl"), Var10[1 /*3*/], true, true, false);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], Var20[1 /*3*/], 2, true);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[1], false);
uParam0->f_41[2]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidr"), Var10[2 /*3*/], true, true, false);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], Var20[2 /*3*/], 2, true);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[2], false);
iLocal_79=3;
}
break;
case 3:
if(func_233(uParam0->f_41[0])){
iLocal_82=PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_41[0], true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_41[0], 2), 2);
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], iLocal_82, "idle_closed_pap_3_rcm_dumpster", sVar30, 8f, -8f, 0, 1000f);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_82, true);
if(func_233(uParam0->f_28[0])){
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_82, sVar30, "idle_closed_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1000f, 0);
}
if(func_233(uParam0->f_41[1])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[1], iLocal_82, "idle_closed_pap_3_rcm_lid_l", sVar30, 8f, -8f, 0, 1000f);
}
if(func_233(uParam0->f_41[2])){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[2], iLocal_82, "idle_closed_pap_3_rcm_lid_r", sVar30, 8f, -8f, 0, 1000f);
}}
iVar31=0;
while (iVar31 <=(iVar0 - 1)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar31]);
iVar31++;
}
STREAMING::REMOVE_ANIM_DICT(sVar30);
return 1;
break;
}
return 0;
}


void func_451(int* iParam0, int iParam1, struct<3> Param2, float fParam5){
func_266(iParam0);
*iParam0=OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
}

int func_452(int* iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7){
if(func_453(iParam0, iParam1, Param2, fParam5, 1)){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*iParam0, false)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
PED::SET_PED_MONEY(*iParam0, 0);
if(iParam7==1){
PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
}}
PED::SET_PED_NAME_DEBUG(*iParam0, sParam6);
}
return 1;
}
return 0;
}

int func_453(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6){
int iVar0;
if(!func_153(iParam1)){
iVar0=func_494(iParam1);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
PED::DELETE_PED(iParam0);
}
*iParam0=PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
if(iVar0==joaat("ig_lamardavis")){
if(PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3)==0){
PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
}}
func_454(*iParam0, iParam1);
if(bParam6){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}
return 1;
}}
return 0;
}

int func_454(var uParam0, int iParam1){
int iVar0;
iVar0=7;
if(iParam1==19){
iVar0=3;
}elseif(iParam1==14){
iVar0=4;
}elseif(iParam1==17){
iVar0=5;
}else{
iVar0=7;
return 0;
}
Global_96275[(iVar0 - 3)]=uParam0;
return 1;
}

int func_455(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*iParam0 - 1)){
if(!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}

int func_456(){
if(Global_100441==10 || Global_100441==9){
return 1;
}
return 0;
}


void func_457(){
func_281();
if(func_471()){}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE")){
AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_03_SCENE");
}
AUDIO::RELEASE_SOUND_ID(iLocal_339);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[0])){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_149[0], true);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_149[1])){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_149[1], true);
}
func_470(&(iLocal_149[0]), 0);
func_470(&(iLocal_149[1]), 0);
func_470(&iLocal_147, 0);
func_470(&iLocal_148, 0);
STREAMING::REMOVE_ANIM_DICT(sLocal_161);
STREAMING::REMOVE_PTFX_ASSET();
func_469(&uLocal_163, 1);
func_469(&uLocal_163, 3);
HUD::CLEAR_ADDITIONAL_TEXT(0, true);
HUD::CLEAR_PRINTS();
func_468(&(Local_85.f_28[0]), 1, 0, 1);
func_458(&Local_85, 1, 0, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_458(var uParam0, int iParam1, bool bParam2, bool bParam3){
func_466(uParam0, iParam1);
func_461(uParam0, bParam2);
func_459(uParam0, bParam3);
}


void func_459(var uParam0, bool bParam1){
func_460(&(uParam0->f_41), bParam1);
}


void func_460(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_266(uParam0[iVar0]);
}else{
func_470(uParam0[iVar0], 0);
}
iVar0++;
}}


void func_461(var uParam0, bool bParam1){
func_462(&(uParam0->f_35), bParam1);
}


void func_462(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_464(uParam0[iVar0]);
}else{
func_463(uParam0[iVar0]);
}
iVar0++;
}}


void func_463(int* iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
ENTITY::IS_ENTITY_DEAD(*iParam0, false);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}}}


void func_464(int* iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
}
if(func_465(*iParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true)){
if(func_233(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(iParam0);
}}else{
if(func_233(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(iParam0);
}}}

int func_465(int iParam0){
if(func_233(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}


void func_466(var uParam0, int iParam1){
func_467(&(uParam0->f_28), iParam1);
}


void func_467(var uParam0, int iParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(iParam1==1){
func_206(uParam0[iVar0]);
}else{
func_468(uParam0[iVar0], 0, 1, 0);
}
iVar0++;
}}


void func_468(int* iParam0, bool bParam1, int iParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!PED::IS_PED_INJURED(*iParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
if(iParam3==0){
TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
}
PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
if(iParam2==1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}}


void func_469(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_470(int* iParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)){
ENTITY::DETACH_ENTITY(*iParam0, true, true);
}
if(!bParam1){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
}else{
OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
}}}

int func_471(){
int iVar0;
iVar0=func_204();
if(iVar0==-1){
return 0;
}
if(!Global_112473[iVar0 /*10*/].f_4){
return 0;
}
Global_112473[iVar0 /*10*/].f_4=0;
HUD::CLEAR_ADDITIONAL_TEXT(0, true);
HUD::CLEAR_ADDITIONAL_TEXT(3, true);
HUD::CLEAR_ADDITIONAL_TEXT(2, true);
if(!func_5(0)){
if(Global_112473[iVar0 /*10*/].f_5 && Global_112473[iVar0 /*10*/].f_6){
Global_112473[iVar0 /*10*/].f_6=0;
}
if(!Global_112473[iVar0 /*10*/].f_6 && !Global_112473[iVar0 /*10*/].f_5){
Global_112473[iVar0 /*10*/].f_6=1;
}}
return 1;
}


void func_472(bool bParam0){
int iVar0;
func_490();
if(!func_489()){
iVar0=func_204();
if(iVar0==-1){
return;
}
if(!Global_112473[iVar0 /*10*/].f_4){
return;
}
if(Global_112473[iVar0 /*10*/].f_5){
return;
}
if(Global_112473[iVar0 /*10*/].f_6){
return;
}
if(Global_94616==Global_100478){
Global_113386.f_18574[iVar0 /*6*/].f_4++;
}
Global_94616=Global_100478;
if(bParam0){
func_161(iVar0, 1, 0);
func_473(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
}else{
if(Global_112473[iVar0 /*10*/].f_9==-1){
}else{
func_174(&(Global_112473[iVar0 /*10*/].f_9));
}
func_160(iVar0, 1, 1, 0);
}
Global_112473[iVar0 /*10*/].f_6=1;
}}


void func_473(char* sParam0, int iParam1){
if(Global_100441 !=12){
if(func_474(sParam0, 6, iParam1)){
Global_100441.f_1=iParam1;
}}}

int func_474(char* sParam0, int iParam1, int iParam2){
int iVar0;
struct<32> Var1;
int iVar33;
func_17();
func_488();
Global_100441=0;
StringCopy(&(Global_100441.f_3), sParam0, 32);
Global_100441.f_11=iParam1;
MISC::PAUSE_DEATH_ARREST_RESTART(true);
MISC::SET_FADE_OUT_AFTER_ARREST(false);
MISC::SET_FADE_OUT_AFTER_DEATH(false);
func_302(1);
func_486(1);
func_483(0);
func_482(1);
MISC::CLEAR_BIT(&(Global_100441.f_20), 9);
MISC::CLEAR_BIT(&(Global_100441.f_20), 6);
MISC::CLEAR_BIT(&(Global_100441.f_20), 20);
MISC::CLEAR_BIT(&(Global_100441.f_20), 21);
MISC::CLEAR_BIT(&(Global_100441.f_20), 5);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0)){
MISC::SET_BIT(&(Global_100441.f_20), 5);
}}}}
HUD::CLEAR_HELP(true);
HUD::CLEAR_PRINTS();
func_481(0);
func_20(1);
Global_100441.f_2=Global_100478;
if(func_480()){
if(func_479()){
if(Global_100478 >=func_476()){
if(!MISC::IS_BIT_SET(Global_91229[iParam2 /*34*/].f_15, 16)){
if(Global_113386.f_9085.f_330[iParam2 /*6*/].f_1 >=2){
Global_94617=1;
}}}}elseif(Global_100441.f_11==6){
func_163(iParam2, &Var1);
if(Var1.f_31==1){
if(Global_113386.f_18574[iParam2 /*6*/].f_4 >=2){
Global_94617=1;
}}}else{
iVar33=func_475(SCRIPT::GET_THIS_SCRIPT_NAME());
if(iVar33 > -1){
if(Global_113386.f_24986.f_4[iVar33] >=2){
Global_94617=1;
}}}}
return 1;
}

int func_475(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0)){
return 0;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0)){
return 2;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0)){
return 3;
}
return -1;
}

int func_476(){
int iVar0;
int iVar1;
iVar0=func_477(&(Global_100441.f_3), 0);
iVar1=0;
if(iVar0==53){
iVar1=1;
}
return iVar1;
}

int func_477(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=func_478(iVar0, 1);
if(iVar1==-1 && !bParam1){}
return iVar1;
}

int func_478(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < 94){
if(Global_91229[iVar0 /*34*/].f_6==iParam0){
return iVar0;
}
iVar0++;
}
if(!bParam1){}
return -1;
}

int func_479(){
if((((Global_100441.f_11==0 || Global_100441.f_11==1) || Global_100441.f_11==2) || Global_100441.f_11==3) || Global_100441.f_11==4){
return 1;
}
return 0;
}

int func_480(){
if((((Global_100441.f_11==0 || Global_100441.f_11==1) || Global_100441.f_11==2) || Global_100441.f_11==6) || Global_100441.f_11==3){
return 1;
}
if(Global_100441.f_11==5){
if(func_475(&(Global_100441.f_3)) > -1){
return 1;
}}
return 0;
}


void func_481(bool bParam0){
HUD::DISPLAY_HUD(bParam0);
HUD::DISPLAY_RADAR(bParam0);
}


void func_482(int iParam0){
if(iParam0==1){
HUD::THEFEED_PAUSE();
MISC::SET_BIT(&(Global_100441.f_20), 3);
}elseif(MISC::IS_BIT_SET(Global_100441.f_20, 3)){
HUD::THEFEED_RESUME();
MISC::CLEAR_BIT(&(Global_100441.f_20), 3);
}}


void func_483(int iParam0){
if(iParam0==1){
if(MISC::IS_BIT_SET(Global_100441.f_20, 4)){
func_485();
MISC::CLEAR_BIT(&(Global_100441.f_20), 4);
}}else{
func_484();
MISC::SET_BIT(&(Global_100441.f_20), 4);
}}


void func_484(){
Global_23011.f_5=1;
}


void func_485(){
Global_23011.f_5=0;
}


void func_486(bool bParam0){
if(bParam0){
func_487();
if(Global_20266.f_1==10 || Global_20266.f_1==9){
MISC::SET_BIT(&Global_8137, 16);
}
Global_20266.f_1=1;
if(func_305(0)){
func_302(0);
}}elseif(Global_20266.f_1==1){
if(!Global_20266.f_1==0){
Global_20266.f_1=3;
}}}


void func_487(){
if(Global_20266.f_1==9 || Global_20266.f_1==10){
Global_21658=0;
Global_21654=1;
}}


void func_488(){
Global_94617=0;
Global_94618=0;
}

int func_489(){
if(((Global_100441==13 || Global_100441==10) || Global_100441==11) || Global_100441==12){
return 0;
}
return 1;
}


void func_490(){
Global_100476=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78551)){
switch (func_215()){
case 0:
StringCopy(&Global_78551, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78551, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78551, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78555, "", 16);
}
Global_100476=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78551)){
switch (func_215()){
case 0:
StringCopy(&Global_78551, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78551, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78551, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78555, "", 16);
}
Global_100476=0;
MISC::SET_BIT(&(Global_100441.f_20), 25);
}}


void func_491(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}


void func_492(var uParam0){
func_493(&(uParam0->f_28));
func_493(&(uParam0->f_35));
func_493(&(uParam0->f_41));
}


void func_493(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], false, true);
}
iVar0++;
}}

int func_494(int iParam0){
if(!func_153(iParam0)){
return func_152(iParam0);
}elseif(iParam0 !=145){}
return 0;
}
