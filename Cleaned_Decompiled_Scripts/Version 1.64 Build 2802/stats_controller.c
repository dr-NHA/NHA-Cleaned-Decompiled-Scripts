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
char* sLocal_18=NULL;
var uLocal_19=0;
var uLocal_20=0;
int iLocal_21=0;
float fLocal_22=0f;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
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
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
var uLocal_57=0;
int iLocal_58=0;
bool bLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
var uLocal_69=0;
int iLocal_70=0;
var uLocal_71=0;
int iLocal_72=0;
var uLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
var uLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
var uLocal_84=0;
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
iLocal_21=3;
fLocal_22=0f;
fLocal_26=-0.0375f;
fLocal_27=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
iLocal_53=2;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32)){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
func_104();
switch (iLocal_54){
case 0:
func_99();
break;
case 1:
func_90();
func_2();
Global_97965=0;
break;
case 2:
func_1();
break;
}
SYSTEM::WAIT(0);
}}


void func_1(){
iLocal_54=0;
}


void func_2(){
int iVar0;
bool bVar1;
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
bool bVar13;
int iVar14;
int iVar15;
bool bVar16;
if(iLocal_60){
iLocal_60=0;
}else{
iLocal_55++;
}
bLocal_59=false;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=3;
}else{
iVar0=func_85();
}
if(iVar0 !=iLocal_58){
iLocal_58=iVar0;
bLocal_59=true;
iLocal_66=0;
iLocal_67=0;
iLocal_74=0;
iLocal_80=0;
}
if(iLocal_58==145){
return;
}
bVar1=false;
if((iLocal_55==6 && func_84(64)) || (iLocal_55==5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0)){
bVar1=true;
iLocal_60=1;
}
func_78();
if(Global_97963 || (Global_97964 && !func_75(0))){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar2=0;
while (iVar2 < 8){
func_74(iLocal_58, iVar2);
iVar2++;
}
Global_97963=0;
}}
if(!bVar1){
if(((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_73(iLocal_58))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_72()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || Global_78556) || Global_97965) || iLocal_61){
iLocal_82=1;
iLocal_83=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_84=NETWORK::GET_NETWORK_TIME();
}
return;
}
if(iLocal_82){
if((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_83) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_84, 3000)))){
iLocal_82=0;
}else{
return;
}}}
if(((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_56) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_57, 2000)))) || bLocal_59){
if(iLocal_55 >=8){
iLocal_55=0;
iLocal_56=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_57=NETWORK::GET_NETWORK_TIME();
}}
iVar11=1;
if(bLocal_59){
iVar11=8;
}
iVar12=0;
while (iVar12 < iVar11){
bVar13=true;
if(bLocal_59){
iVar8=iVar12;
}else{
iVar8=iLocal_55;
}
func_71(iLocal_58, iVar8, &iVar6, &iVar7);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar3=func_70(iVar7, -1, 0);
}elseif(iVar8==0){
iVar3=Global_113648.f_2365.f_539.f_2387[iLocal_58];
}else{
STATS::STAT_GET_INT(iVar6, &iVar3, -1);
}
iVar5=iVar3;
iVar3=func_69(iVar3, 0, 100);
if(func_56(iLocal_58, iVar8, iVar3, &iVar4)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_55(iVar7, iVar4, -1, 1, 0);
}elseif(iVar8==0){
if(Global_113648.f_2365.f_539.f_2387[iLocal_58]==0){
bVar13=false;
}
Global_113648.f_2365.f_539.f_2387[iLocal_58]=iVar4;
}else{
STATS::STAT_SET_INT(iVar6, iVar4, 1);
}
if(iVar4 > func_53(iLocal_58, iVar8, -1)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
bVar13=false;
}}elseif((!Global_113648.f_9087 && !func_52(0)) || !MISC::IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 2)){
bVar13=false;
}
iVar14=iVar4;
iVar15=(iVar14 - (iVar14 % func_51(iLocal_58, iVar8)));
if((iVar14 % func_51(iLocal_58, iVar8)) >=0){
iVar15=(iVar15 + func_51(iLocal_58, iVar8));
}
if(iVar14 >=iVar15){
iVar14=iVar15;
}else{
iVar14=(iVar15 - func_51(iLocal_58, iVar8));
}
if(iVar4 > iVar14){
bVar13=false;
}
if(func_46()){
bVar13=false;
}
if(bVar13){
if(!bLocal_59){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_45(117, -1)==0){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9()){
func_8("STAT_HELP2", -1);
func_4(117, 1, -1, 1);
}}}
iLocal_61=1;
iLocal_64=(iVar4 - iVar3);
iLocal_64=(iLocal_64 + (iVar3 % func_51(iLocal_58, iVar8)));
iLocal_65=iVar4;
iLocal_62=iLocal_58;
iLocal_63=iVar8;
}}
if(iVar4 >=100){
if(func_3(iLocal_58, iVar8, &iVar9)){
if(iLocal_58==0){
STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar10, -1);
STATS::STAT_SET_INT(iVar9, iVar10, 1);
}elseif(iLocal_58==1){
STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar10, -1);
STATS::STAT_SET_INT(iVar9, iVar10, 1);
}elseif(iLocal_58==2){
STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar10, -1);
STATS::STAT_SET_INT(iVar9, iVar10, 1);
}elseif(iLocal_58==3){
}
}}}
func_74(iLocal_58, iVar8);
}elseif(iVar4 < iVar5){
bVar16=true;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_55(iVar7, iVar4, -1, 1, 0);
}elseif(iVar8==0){
Global_113648.f_2365.f_539.f_2387[iLocal_58]=iVar4;
bVar16=false;
}else{
STATS::STAT_SET_INT(iVar6, iVar4, 1);
}
if(bVar16){
func_74(iLocal_58, iVar8);
}}
iVar12++;
}}else{
iLocal_60=1;
}}


bool func_3(int iParam0, int iParam1, var uParam2){
*uParam2=joaat("last_playing_time");
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("sp0_special_ability_maxed");
break;
case 1:
*uParam2=joaat("sp0_stamina_maxed");
break;
case 3:
*uParam2=joaat("sp0_lung_capacity_maxed");
break;
case 2:
*uParam2=joaat("sp0_strength_maxed");
break;
case 4:
*uParam2=joaat("sp0_wheelie_ability_maxed");
break;
case 5:
*uParam2=joaat("sp0_flying_ability_maxed");
break;
case 6:
*uParam2=joaat("sp0_shooting_ability_maxed");
break;
case 7:
*uParam2=joaat("sp0_stealth_ability_maxed");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("sp1_special_ability_maxed");
break;
case 1:
*uParam2=joaat("sp1_stamina_maxed");
break;
case 3:
*uParam2=joaat("sp1_lung_capacity_maxed");
break;
case 2:
*uParam2=joaat("sp1_strength_maxed");
break;
case 4:
*uParam2=joaat("sp1_wheelie_ability_maxed");
break;
case 5:
*uParam2=joaat("sp1_flying_ability_maxed");
break;
case 6:
*uParam2=joaat("sp1_shooting_ability_maxed");
break;
case 7:
*uParam2=joaat("sp1_stealth_ability_maxed");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("sp2_special_ability_maxed");
break;
case 1:
*uParam2=joaat("sp2_stamina_maxed");
break;
case 3:
*uParam2=joaat("sp2_lung_capacity_maxed");
break;
case 2:
*uParam2=joaat("sp2_strength_maxed");
break;
case 4:
*uParam2=joaat("sp2_wheelie_ability_maxed");
break;
case 5:
*uParam2=joaat("sp2_flying_ability_maxed");
break;
case 6:
*uParam2=joaat("sp2_shooting_ability_maxed");
break;
case 7:
*uParam2=joaat("sp2_stealth_ability_maxed");
break;
}
break;
}
return *uParam2 !=joaat("last_playing_time");
}


void func_4(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_7()){
iVar0=Global_2848280[iParam0 /*3*/][func_5(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_5(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_6();
if(iVar1 > -1){
Global_2804739=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804739=1;
}}
return iVar0;
}

int func_6(){
return Global_1574918;
}

int func_7(){
return 1;
return 0;
}


void func_8(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_9(){
int iVar0;
iVar0=MISC::GET_FRAME_COUNT();
if(Global_1935365==iVar0){
return Global_1935366;
}else{
Global_1935365=iVar0;
Global_1935366=0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return 0;
}}
if((HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN()) && !func_44(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_1935367==1){
return 0;
}
if(Global_1935176==1){
return 0;
}
if(func_43()){
return 0;
}
if(MISC::IS_STUNT_JUMP_MESSAGE_SHOWING()){
return 0;
}
if(Global_1836583==1){
return 0;
}
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
return 0;
}
if(Global_1057410){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 16)){
return 0;
}
if(func_42()){
return 0;
}
if(func_41()){
return 0;
}
if(func_40()){
if(!func_41()){
if(!func_39(3, -1)){
if(func_37(&Global_2696995, 300000, 0)==1){
func_36(&Global_2696993);
func_34(3, -1);
}elseif(func_37(&Global_2696993, 7000, 0)==0){
return 0;
}}}else{
return 0;
}}
if(func_33()){
return 0;
}
if(func_32()){
return 0;
}
if(func_30()){
return 0;
}
if(func_29()){
return 0;
}
if(func_28()){
return 0;
}
if(func_27()){
return 0;
}
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(func_26(PLAYER::PLAYER_PED_ID())==joaat("weapon_sniperrifle") || func_26(PLAYER::PLAYER_PED_ID())==joaat("weapon_heavysniper")){
return 0;
}}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(func_25(8, -1)){
return 0;
}
if(func_24(12, -1)){
return 0;
}
if(HUD::IS_HUD_COMPONENT_ACTIVE(19)){
return 0;
}
if(func_23()){
return 0;
}
if(func_22()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2)){
return 0;
}
if(Global_1836374){
return 0;
}
if(Global_1836378){
return 0;
}
if(Global_1836380){
return 0;
}
if(Global_2672505.f_3693.f_39){
return 0;
}
if(func_21(0)){
return 0;
}
if(func_20()){
return 0;
}
if(Global_2793044.f_4062){
return 0;
}
if(Global_2672505.f_3559){
return 0;
}
if(!func_19(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}
if(func_18(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_2672505.f_3693.f_39==1){
return 0;
}
if(Global_2684799.f_2846.f_26==1){
return 0;
}
if(func_17(1)){
return 0;
}
if(func_15()){
return 0;
}
if(HUD::IS_HUD_COMPONENT_ACTIVE(16)){
return 0;
}
if(func_14()){
return 0;
}
if(func_13()){
return 0;
}
if(HUD::IS_HELP_MESSAGE_ON_SCREEN()){
if(func_12("FHU_HELP3")){
return 0;
}}
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 6)){
return 0;
}
if(func_10(PLAYER::PLAYER_ID())){
return 0;
}
Global_1935366=1;
return 1;
}

int func_10(int iParam0){
if(iParam0 !=func_11()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 26);
}
return 0;
}

int func_11(){
return -1;
}


bool func_12(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


bool func_13(){
return Global_2672505.f_1684.f_701 !=0;
}


bool func_14(){
return Global_2672505.f_2837.f_582;
}


bool func_15(){
return func_16();
}


bool func_16(){
return Global_1649046.f_40==3;
}


bool func_17(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}


bool func_18(int iParam0){
return MISC::IS_BIT_SET(Global_1890444[iParam0 /*129*/].f_14, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2){
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

int func_20(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0){
return 1;
}
return 0;
}

int func_21(int iParam0){
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


bool func_22(){
return Global_1653913.f_112;
}


bool func_23(){
return Global_2672505.f_2513[0 /*80*/].f_1 !=0;
}

int func_24(bool bParam0, int iParam1){
switch (bParam0){
case 5:
if(iParam1 > -1){
if(Global_1653913.f_137[iParam1]){
return 1;
}
if(Global_1653913.f_170[iParam1]){
return 1;
}}
break;
default:
if(MISC::IS_BIT_SET(Global_1653913.f_1046, bParam0)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1653913.f_1047, bParam0)){
return 1;
}
break;
}
return 0;
}


bool func_25(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_26(int iParam0){
var uVar0;
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
return uVar0;
}


bool func_27(){
return Global_2683862.f_692;
}


bool func_28(){
return MISC::IS_BIT_SET(Global_1048576.f_10, 13);
}


bool func_29(){
return Global_2683862.f_691;
}

int func_30(){
if(func_31()==1 || func_31()==4){
return 1;
}
return 0;
}

int func_31(){
return Global_1574632.f_18;
}

int func_32(){
if(func_31()==3 || func_31()==2){
return 1;
}
return 0;
}

int func_33(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0){
return 1;
}
return 0;
}


void func_34(bool bParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1==-1){
iParam1=func_6();
}
Global_1665487=0;
if(MISC::ARE_PROFILE_SETTINGS_VALID()==0){
return;
}
switch (bParam0){
case 0:
STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
iVar1=func_35(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(iVar1);
break;
default:
iVar1=func_35(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(iVar1);
if(!MISC::IS_BIT_SET(iVar0, bParam0)){
MISC::SET_BIT(&iVar0, bParam0);
STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
}
break;
}
switch (bParam0){
case 0:
func_4(120, 0, iParam1, 1);
func_4(124, 0, iParam1, 1);
func_4(115, 0, iParam1, 1);
func_4(119, 0, iParam1, 1);
func_4(121, 0, iParam1, 1);
func_4(122, 0, iParam1, 1);
func_4(125, 0, iParam1, 1);
func_55(1304, 0, iParam1, 1, 0);
func_55(7236, 0, iParam1, 1, 0);
break;
}}

int func_35(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_6();
}
switch (iParam0){
case 0:
iVar0=914;
break;
case 1:
iVar0=915;
break;
case 2:
iVar0=916;
break;
case 3:
iVar0=917;
break;
case 4:
iVar0=918;
break;
}
return iVar0;
}


void func_36(var uParam0){
uParam0->f_1=0;
}

int func_37(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_38(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
func_36(uParam0);
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
func_36(uParam0);
return 1;
}
return 0;
}


void func_38(var uParam0, bool bParam1, bool bParam2){
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


bool func_39(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1==-1){
iParam1=func_6();
}
iVar0=func_35(iParam1);
iVar1=MISC::GET_PROFILE_SETTING(iVar0);
return MISC::IS_BIT_SET(iVar1, iParam0);
}

int func_40(){
int iVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}


bool func_41(){
return Global_1575060;
}


bool func_42(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


bool func_43(){
return Global_2764905;
}


bool func_44(int iParam0){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848280[iParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_46(){
if(!func_49(1)){
return 0;
}
if(func_47()){
return 0;
}
return Global_1947720;
}


bool func_47(){
return func_48(PLAYER::PLAYER_ID());
}

int func_48(int iParam0){
if(iParam0 !=func_11()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_11()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}


bool func_49(bool bParam0){
return func_50(PLAYER::PLAYER_ID(), bParam0);
}


bool func_50(int iParam0, bool bParam1){
if(!bParam1){
if(func_48(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_11();
}

int func_51(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 20;
break;
case 1:
return 20;
break;
case 3:
return 20;
break;
case 2:
return 20;
break;
case 4:
return 20;
break;
case 5:
return 20;
break;
case 6:
return 20;
break;
case 7:
return 20;
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 20;
break;
case 1:
return 20;
break;
case 3:
return 20;
break;
case 2:
return 20;
break;
case 4:
return 20;
break;
case 5:
return 20;
break;
case 6:
return 20;
break;
case 7:
return 20;
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 20;
break;
case 1:
return 20;
break;
case 3:
return 20;
break;
case 2:
return 20;
break;
case 4:
return 20;
break;
case 5:
return 20;
break;
case 6:
return 20;
break;
case 7:
return 20;
break;
}
break;
case 3:
switch (iParam1){
case 0:
return 20;
break;
case 1:
return 20;
break;
case 3:
return 20;
break;
case 2:
return 20;
break;
case 4:
return 20;
break;
case 5:
return 20;
break;
case 6:
return 20;
break;
case 7:
return 20;
break;
}
break;
}
return 1;
}

int func_52(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_53(int iParam0, int iParam1, int iParam2){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_54(14)){
return 100;
}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 47;
break;
case 3:
return 22;
break;
case 2:
return 21;
break;
case 4:
return 54;
break;
case 5:
return 31;
break;
case 6:
return 79;
break;
case 7:
return 81;
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 51;
break;
case 3:
return 46;
break;
case 2:
return 49;
break;
case 4:
return 71;
break;
case 5:
return 19;
break;
case 6:
return 24;
break;
case 7:
return 21;
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 23;
break;
case 3:
return 28;
break;
case 2:
return 79;
break;
case 4:
return 31;
break;
case 5:
return 82;
break;
case 6:
return 69;
break;
case 7:
return 49;
break;
}
break;
case 3:
switch (iParam1){
case 1:
return func_70(1225, iParam2, 0);
break;
case 3:
return func_70(1231, iParam2, 0);
break;
case 2:
return func_70(1227, iParam2, 0);
break;
case 4:
return func_70(1230, iParam2, 0);
break;
case 5:
return func_70(1229, iParam2, 0);
break;
case 6:
return func_70(1226, iParam2, 0);
break;
case 7:
return func_70(1228, iParam2, 0);
break;
}
break;
}
return 0;
}


bool func_54(int iParam0){
return Global_43257==iParam0;
}


void func_55(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805027[iParam0 /*3*/][func_5(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3){
*uParam3=func_57(iParam0, iParam1, 0, -1);
if(*uParam3 > iParam2){
return 1;
}
return 0;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3){
float fVar0;
float fVar1;
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
float fVar12;
iVar2=0;
switch (iParam1){
case 0:
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
fVar0=SYSTEM::TO_FLOAT(iVar3);
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
fVar0=SYSTEM::TO_FLOAT(iVar3);
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
fVar0=SYSTEM::TO_FLOAT(iVar3);
}elseif(iParam0==3){
fVar0=SYSTEM::TO_FLOAT(func_70(64, iParam3, 0));
}
break;
case 1:
if(iParam0==0){
STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
}elseif(iParam0==1){
STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
}elseif(iParam0==2){
STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
}elseif(iParam0==3){
fVar0=(func_68(20, iParam3) / 175f);
func_65(&fVar0);
}
if(iParam0==0){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_swimming"))));
}elseif(iParam0==1){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_swimming"))));
}elseif(iParam0==2){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_swimming"))));
}elseif(iParam0==3){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(50, iParam3))));
func_65(&fVar0);
}
if(iParam0==0){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_bicycle"))));
}elseif(iParam0==1){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_bicycle"))));
}elseif(iParam0==2){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_bicycle"))));
}elseif(iParam0==3){
fVar0=(fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(47, iParam3))));
func_65(&fVar0);
}
if(iParam0==3){
fVar0=(fVar0 + ((4f * Global_262145.f_24333) * IntToFloat(func_70(7237, -1, 0))));
}
if(iParam0==3){
fVar0=(fVar0 * 0.25f);
}
break;
case 3:
if(iParam0==0){
fVar0=(SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_underwater"))) / 30f);
}elseif(iParam0==1){
fVar0=(SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_underwater"))) / 30f);
}elseif(iParam0==2){
fVar0=(SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_underwater"))) / 30f);
}elseif(iParam0==3){
fVar0=(SYSTEM::TO_FLOAT(func_62(func_63(52, iParam3))) / 30f);
func_65(&fVar0);
}
break;
case 2:
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar3, -1);
fVar0=(SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar3, -1);
fVar0=(SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar3, -1);
fVar0=(SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
}elseif(iParam0==3){
fVar0=(SYSTEM::TO_FLOAT(func_70(1500, iParam3, 0)) / 20f);
func_65(&fVar0);
}
break;
case 4:
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar3, -1);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar3, -1);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar3, -1);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
}elseif(iParam0==3){
fVar0=(fVar0 + IntToFloat((func_70(113, iParam3, 0) / 50)));
func_65(&fVar0);
}
break;
case 5:
if(iParam0==0){
fVar0=(SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_plane"))) / 10f);
}elseif(iParam0==1){
fVar0=(SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_plane"))) / 10f);
}elseif(iParam0==2){
fVar0=(SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_plane"))) / 10f);
}elseif(iParam0==3){
fVar0=(SYSTEM::TO_FLOAT(func_64(func_63(43, iParam3))) / 10f);
}
if(iParam0==0){
fVar0=(fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp0_time_driving_heli"))) / 10f));
}elseif(iParam0==1){
fVar0=(fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp1_time_driving_heli"))) / 10f));
}elseif(iParam0==2){
fVar0=(fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("sp2_time_driving_heli"))) / 10f));
}elseif(iParam0==3){
fVar0=(fVar0 + (SYSTEM::TO_FLOAT(func_64(func_63(45, iParam3))) / 10f));
}
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_plane_landings"), &iVar3, -1);
fVar0=(fVar0 + SYSTEM::TO_FLOAT(iVar3));
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_plane_landings"), &iVar3, -1);
fVar0=(fVar0 + SYSTEM::TO_FLOAT(iVar3));
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_plane_landings"), &iVar3, -1);
fVar0=(fVar0 + SYSTEM::TO_FLOAT(iVar3));
}elseif(iParam0==3){
fVar0=(fVar0 + IntToFloat(func_70(61, iParam3, 0)));
func_65(&fVar0);
}
if((iParam0==0 || iParam0==1) || iParam0==2){
iVar4=func_61(iParam0, 0);
if(iParam0==2){
if(iVar4==3){
fVar0=(fVar0 + 10f);
}elseif(iVar4==2){
fVar0=(fVar0 + 7f);
}elseif(iVar4==1){
fVar0=(fVar0 + 5f);
}}elseif(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 1);
if(iParam0==2){
if(iVar4==3){
fVar0=(fVar0 + 10f);
}elseif(iVar4==2){
fVar0=(fVar0 + 7f);
}elseif(iVar4==1){
fVar0=(fVar0 + 5f);
}}elseif(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 2);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 3);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 6);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 4);
if(iVar4==3){
fVar0=(fVar0 + 5f);
}elseif(iVar4==2){
fVar0=(fVar0 + 3f);
}elseif(iVar4==1){
fVar0=(fVar0 + 2f);
}
iVar4=func_61(iParam0, 5);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 7);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 8);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}
iVar4=func_61(iParam0, 11);
if(iVar4==3){
fVar0=(fVar0 + 12f);
}elseif(iVar4==2){
fVar0=(fVar0 + 9f);
}elseif(iVar4==1){
fVar0=(fVar0 + 7f);
}}
break;
case 7:
if(iParam0==0){
STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
}elseif(iParam0==1){
STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
}elseif(iParam0==2){
STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &fVar1, -1);
fVar0=((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
}elseif(iParam0==3){
fVar0=(func_68(19, iParam3) / 45f);
}
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar3, -1);
fVar0=(fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar3, -1);
fVar0=(fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar3, -1);
fVar0=(fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
}elseif(iParam0==3){
iVar3=func_70(34, iParam3, 0);
fVar0=(fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
func_65(&fVar0);
}
break;
case 6:
if(iParam0==0){
STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar5, -1);
STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
iVar6=(iVar6 - iVar5);
fVar0=(SYSTEM::TO_FLOAT((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
}elseif(iParam0==1){
STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar5, -1);
STATS::STAT_GET_INT(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
iVar6=(iVar6 - iVar5);
fVar0=(SYSTEM::TO_FLOAT((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
}elseif(iParam0==2){
STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar5, -1);
STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
iVar6=(iVar6 - iVar5);
fVar0=(SYSTEM::TO_FLOAT((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
}elseif(iParam0==3){
iVar6=func_70(172, iParam3, 0);
fVar0=(fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
}
if((iParam0==0 || iParam0==1) || iParam0==2){
iVar7=0;
while (iVar7 < 22){
switch (func_60(iVar7, iParam0)){
case 3:
iVar8++;
break;
case 2:
iVar9++;
break;
case 1:
iVar10++;
break;
}
iVar7++;
}
fVar0=(fVar0 + IntToFloat(iVar8 * 3));
fVar0=(fVar0 + IntToFloat(iVar9 * 2));
fVar0=(fVar0 + IntToFloat(iVar10 * 1));
}elseif(iParam0==3){
fVar0=(fVar0 + IntToFloat(func_59(joaat("mpply_shootingrange_wins")) * 1));
func_65(&fVar0);
}
break;
}
if(iParam1 !=0){
iVar11=func_53(iParam0, iParam1, iParam3);
fVar0=(fVar0 + IntToFloat(iVar11));
fVar0=(fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
}
if(bParam2){
fVar12=(fVar0 - (fVar0 % IntToFloat(func_51(iParam0, iParam1))));
if((fVar0 % IntToFloat(func_51(iParam0, iParam1))) >=0f){
fVar12=(fVar12 + IntToFloat(func_51(iParam0, iParam1)));
}
if(fVar0 >=fVar12){
fVar0=fVar12;
}else{
fVar0=(fVar12 - IntToFloat(func_51(iParam0, iParam1)));
}}
iVar2=SYSTEM::FLOOR(fVar0);
iVar2=func_69(iVar2, 0, 100);
return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 0:
case 1:
case 2:
switch (iParam1){
case 1:
case 3:
case 2:
case 4:
case 5:
case 6:
case 7:
return Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0];
break;
}
break;
case 3:
switch (iParam1){
case 1:
return func_70(72, iParam2, 0);
break;
case 3:
return func_70(74, iParam2, 0);
break;
case 2:
return func_70(73, iParam2, 0);
break;
case 4:
return func_70(75, iParam2, 0);
break;
case 5:
return func_70(76, iParam2, 0);
break;
case 6:
return func_70(77, iParam2, 0);
break;
case 7:
return func_70(78, iParam2, 0);
break;
}
break;
}
return 0;
}

int func_59(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_60(int iParam0, int iParam1){
return Global_113648.f_19149[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1){
if(iParam0 < 0 || iParam0 > 2){
return 0;
}
return Global_113648.f_1990[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0){
int iVar0;
iVar0=0;
iVar0=(iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400));
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0));
return iVar0;
}

int func_63(int iParam0, int iParam1){
return Global_2805027[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0){
int iVar0;
iVar0=0;
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
iVar0=(iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0));
return iVar0;
}


var func__65(float fParam0){
if(func_46()){
if(func_66() < Global_262145.f_13170){
if(*fParam0 + (IntToFloat(func_66()) * Global_262145.f_13169)) <=IntToFloat(Global_262145.f_13179){
*fParam0=(*fParam0 + (IntToFloat(func_66()) * Global_262145.f_13169));
}}
return *fParam0;
}
return *fParam0;
}

int func_66(){
if(func_49(1)){
return Global_1853910[func_67() /*862*/].f_205.f_6;
}
return 0;
}

int func_67(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


float func_68(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2847604[iParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2){
if(iParam0 > iParam2){
return iParam2;
}elseif(iParam0 < iParam1){
return iParam1;
}
return iParam0;
}

int func_70(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805027[iParam0 /*3*/][func_5(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_71(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("sp0_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp0_stamina");
break;
case 3:
*uParam2=joaat("sp0_lung_capacity");
break;
case 2:
*uParam2=joaat("sp0_strength");
break;
case 4:
*uParam2=joaat("sp0_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp0_flying_ability");
break;
case 6:
*uParam2=joaat("sp0_shooting_ability");
break;
case 7:
*uParam2=joaat("sp0_stealth_ability");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("sp1_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp1_stamina");
break;
case 3:
*uParam2=joaat("sp1_lung_capacity");
break;
case 2:
*uParam2=joaat("sp1_strength");
break;
case 4:
*uParam2=joaat("sp1_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp1_flying_ability");
break;
case 6:
*uParam2=joaat("sp1_shooting_ability");
break;
case 7:
*uParam2=joaat("sp1_stealth_ability");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("sp2_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp2_stamina");
break;
case 3:
*uParam2=joaat("sp2_lung_capacity");
break;
case 2:
*uParam2=joaat("sp2_strength");
break;
case 4:
*uParam2=joaat("sp2_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp2_flying_ability");
break;
case 6:
*uParam2=joaat("sp2_shooting_ability");
break;
case 7:
*uParam2=joaat("sp2_stealth_ability");
break;
}
break;
case 3:
switch (iParam1){
case 0:
*uParam3=64;
break;
case 1:
*uParam3=65;
break;
case 3:
*uParam3=67;
break;
case 2:
*uParam3=66;
break;
case 4:
*uParam3=68;
break;
case 5:
*uParam3=69;
break;
case 6:
*uParam3=70;
break;
case 7:
*uParam3=71;
break;
}
break;
}}

int func_72(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


bool func_73(int iParam0){
return iParam0 < 3;
}


void func_74(int iParam0, int iParam1){
int iVar0;
float fVar1;
var uVar2;
int iVar3;
if(((iParam0 !=0 || iParam0 !=1) || iParam0 !=2) || iParam0 !=3){
return;
}
func_71(iParam0, iParam1, &uVar2, &iVar3);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=func_70(iVar3, -1, 0);
}else{
STATS::STAT_GET_INT(uVar2, &iVar0, -1);
}
switch (iParam1){
case 2:
fVar1=(0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, 1);
break;
case 7:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) !=0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) !=0){
Global_97964=1;
}else{
fVar1=(1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
}
break;
}}

int func_75(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_76(iParam0)){
return 0;
}
return 1;
}


bool func_76(int iParam0){
return func_77(iParam0, Global_43257);
}

int func_77(int iParam0, int iParam1){
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


void func_78(){
var uVar0;
int iVar1;
iVar1=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(((ENTITY::DOES_ENTITY_EXIST(uVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0)==PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar0))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar0))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar0)))){
iVar1=1;
}}
func_83(&uVar0, &iVar1);
func_82(&uVar0, &iVar1);
func_79();
}


void func_79(){
int iVar0;
int iVar1;
int iVar2;
if(!iLocal_80){
if(iLocal_58==3){
if(Global_2359296[func_81() /*5568*/].f_681.f_7){
iLocal_77=func_62(func_63(148, -1));
Global_2359296[func_81() /*5568*/].f_681.f_7=0;
}else{
iLocal_77=Global_2359296[func_81() /*5568*/].f_681.f_6;
}
if(Global_2359296[func_81() /*5568*/].f_681.f_4==0){
Global_2359296[func_81() /*5568*/].f_681.f_4=NETWORK::GET_CLOUD_TIME_AS_INT();
}
iLocal_79=Global_2359296[func_81() /*5568*/].f_681.f_4;
iLocal_78=Global_2359296[func_81() /*5568*/].f_681.f_5;
}else{
if(Global_113648.f_2365.f_539.f_2292[iLocal_58]){
switch (iLocal_58){
case 0:
iLocal_77=func_62(joaat("sp0_total_wheelie_time"));
break;
case 1:
iLocal_77=func_62(joaat("sp1_total_wheelie_time"));
break;
case 2:
iLocal_77=func_62(joaat("sp2_total_wheelie_time"));
break;
}
Global_113648.f_2365.f_539.f_2292[iLocal_58]=0;
}else{
iLocal_77=Global_113648.f_2365.f_539.f_2288[iLocal_58];
}
if(Global_113648.f_2365.f_539.f_2280[iLocal_58]==0){
Global_113648.f_2365.f_539.f_2280[iLocal_58]=NETWORK::GET_CLOUD_TIME_AS_INT();
}
iLocal_79=Global_113648.f_2365.f_539.f_2280[iLocal_58];
iLocal_78=Global_113648.f_2365.f_539.f_2284[iLocal_58];
}
iLocal_80=1;
iLocal_81=1;
}elseif((NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_79) > 86400){
iLocal_80=0;
iLocal_81=0;
iLocal_79=NETWORK::GET_CLOUD_TIME_AS_INT();
iLocal_78=0;
if(iLocal_58==3){
Global_2359296[func_81() /*5568*/].f_681.f_7=1;
}else{
Global_113648.f_2365.f_539.f_2292[iLocal_58]=1;
}}
if(iLocal_81){
switch (iLocal_58){
case 0:
iVar0=func_62(joaat("sp0_total_wheelie_time"));
break;
case 1:
iVar0=func_62(joaat("sp1_total_wheelie_time"));
break;
case 2:
iVar0=func_62(joaat("sp2_total_wheelie_time"));
break;
case 3:
iVar0=func_62(func_63(148, -1));
break;
}
iVar1=(iVar0 - iLocal_77);
iVar2=(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
if(iVar2 > 0){
func_80(iLocal_58, 4, iVar2);
iLocal_78=(iLocal_78 + iVar2);
}
if(iVar0 > (iLocal_77 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60)){
iLocal_81=0;
}}
if(iLocal_58==3){
Global_2359296[func_81() /*5568*/].f_681.f_4=iLocal_79;
Global_2359296[func_81() /*5568*/].f_681.f_5=iLocal_78;
}else{
Global_113648.f_2365.f_539.f_2280[iLocal_58]=iLocal_79;
Global_113648.f_2365.f_539.f_2284[iLocal_58]=iLocal_78;
}}


void func_80(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
switch (iParam0){
case 0:
case 1:
case 2:
Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0]=(Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
break;
case 3:
iVar1=14192;
switch (iParam1){
case 1:
iVar1=72;
break;
case 3:
iVar1=74;
break;
case 2:
iVar1=73;
break;
case 4:
iVar1=75;
break;
case 5:
iVar1=76;
break;
case 6:
iVar1=77;
break;
case 7:
iVar1=78;
break;
}
if(iVar1 !=14192){
iVar0=func_70(iVar1, -1, 0);
iVar0=(iVar0 + iParam2);
if(iVar0 > 100){
iVar0=100;
}
func_55(iVar1, iVar0, -1, 1, 0);
}
break;
}}

int func_81(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_82(var uParam0, int iParam1){
bool bVar0;
if(iLocal_74){
bVar0=true;
if((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && !ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
bVar0=false;
if(ENTITY::GET_ENTITY_SPEED(*uParam0) >=53f){
func_80(iLocal_58, 4, 2);
bVar0=true;
}}
if(bVar0){
iLocal_74=0;
iLocal_75=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_76=NETWORK::GET_NETWORK_TIME();
}}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && ENTITY::GET_ENTITY_SPEED(*uParam0) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_75) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_76, 10000)))){
iLocal_74=1;
}}}


void func_83(var uParam0, int iParam1){
bool bVar0;
char cVar1[64];
bVar0=false;
if(*iParam1){
if(iLocal_66){
if(!ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_68) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_69, 1500)))){
iLocal_70=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_71=NETWORK::GET_NETWORK_TIME();
}
iLocal_67=1;
}
iLocal_66=0;
}}
if(iLocal_67){
if(!ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0)){
if((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70)==0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_71, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), uLocal_71))){
}else{
func_80(iLocal_58, 4, 1);
}
StringCopy(&cVar1, "Player landed on all wheels in ", 64);
StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_70), 64);
StringConCat(&cVar1, "ms", 64);
bVar0=true;
}}else{
bVar0=true;
}}
if(!iLocal_66 && !iLocal_67){
if((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_72) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_73, 1000)))){
if(ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(!iLocal_66){
iLocal_68=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_69=NETWORK::GET_NETWORK_TIME();
}
iLocal_66=1;
}}}}}elseif(iLocal_66 || iLocal_67){
bVar0=true;
}
if(bVar0){
iLocal_72=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_73=NETWORK::GET_NETWORK_TIME();
}
iLocal_66=0;
iLocal_67=0;
}}


bool func_84(int iParam0){
return (Global_112733 && iParam0) !=0;
}

int func_85(){
func_86();
return Global_113648.f_2365.f_539.f_4321;
}


void func_86(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_88(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_87(PLAYER::PLAYER_PED_ID());
if(func_73(iVar0) && (!func_54(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_73(Global_113648.f_2365.f_539.f_4321)){
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

int func_87(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_88(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_88(int iParam0){
if(func_73(iParam0)){
return func_89(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__89(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_90(){
char* sVar0;
int iVar1;
if(iLocal_61){
if(iLocal_62 !=iLocal_58){
iLocal_61=0;
return;
}
sVar0="CHAR_DEFAULT";
switch (iLocal_62){
case 0:
sVar0="CHAR_MICHAEL";
break;
case 1:
sVar0="CHAR_FRANKLIN";
break;
case 2:
sVar0="CHAR_TREVOR";
break;
case 3:
iVar1=func_93(PLAYER::PLAYER_ID());
if(iVar1==0){
return;
}else{
sVar0=PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
}
break;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE");
HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_65);
HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
iLocal_82=1;
iLocal_83=MISC::GET_GAME_TIMER() + 5000;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_84=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
}
iLocal_61=0;
}}

int func_91(int iParam0){
switch (iParam0){
case 0:
return 23;
break;
case 1:
return 2;
break;
case 3:
return 24;
break;
case 2:
return 25;
break;
case 4:
return 14;
break;
case 5:
return 27;
break;
case 6:
return 17;
break;
case 7:
return 28;
break;
}
return -1;
}


char* func_92(int iParam0){
switch (iParam0){
case 0:
return "PSF_SPEC_AB";
break;
case 1:
return "PSF_STAMINA";
break;
case 3:
return "PSF_LUNG";
break;
case 2:
return "PSF_STRENGTH";
break;
case 4:
return "PSF_DRIVING";
break;
case 5:
return "PSF_FLYING";
break;
case 6:
return "PSF_SHOOTING";
break;
case 7:
return "PSF_STEALTH";
break;
}
return "ERROR";
}

int func_93(int iParam0){
int iVar0;
iVar0=func_96(iParam0);
if(iVar0==-1){
func_94(iParam0, 1);
return 0;
}
Global_1666668[iVar0 /*5*/].f_4=1;
return Global_1666668[iVar0 /*5*/].f_2;
}


void func_94(int iParam0, bool bParam1){
if(!func_19(iParam0, 0, 1)){
return;
}
if(func_96(iParam0) !=-1){
return;
}
if(Global_1666831){
if(iParam0==Global_1666831.f_1){
return;
}}
if(func_95(iParam0)){
return;
}
if(Global_1666869 >=32){
return;
}
Global_1666836[Global_1666869]=iParam0;
Global_1666869++;
if(bParam1){}}

int func_95(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666869){
if(Global_1666836[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_96(int iParam0){
int iVar0;
if(!func_19(iParam0, 0, 1)){
return -1;
}
if(Global_1666829==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666829){
if(Global_1666668[iVar0 /*5*/].f_1==iParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[iVar0 /*5*/].f_2)){
return iVar0;
}
func_97(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_97(int iParam0){
char cVar0[64];
char cVar16[64];
int iVar32;
int iVar33;
if(iParam0 >=Global_1666829){
return;
}
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
if(Global_1666668[iParam0 /*5*/].f_2 !=0){
StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
}
iVar32=iParam0;
iVar33=iVar32 + 1;
while (iVar33 < Global_1666829){
Global_1666668[iVar32 /*5*/]={
Global_1666668[iVar33 /*5*/] 
};
iVar32++;
iVar33++;
}
func_98(&(Global_1666668[iVar32 /*5*/]));
Global_1666829=(Global_1666829 - 1);
}


void func_98(var uParam0){
*uParam0=0;
uParam0->f_1=func_11();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


void func_99(){
float fVar0;
int iVar1;
if(MISC::GET_INDEX_OF_CURRENT_LEVEL() !=1){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_103(PLAYER::PLAYER_ID())){
return;
}
if(func_102() !=0){
return;
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_102()==0){
iLocal_53=1;
}}else{
iLocal_53=0;
}
if(!func_101()){
func_100();
}
iLocal_55=0;
iLocal_56=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_57=NETWORK::GET_NETWORK_TIME();
}
iLocal_72=MISC::GET_GAME_TIMER();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_73=NETWORK::GET_NETWORK_TIME();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!MISC::IS_BIT_SET(Global_2359296[func_81() /*5568*/].f_681.f_1274, 2)){
fVar0=(SYSTEM::TO_FLOAT(func_70(193, -1, 0)) / 20f);
iVar1=SYSTEM::FLOOR(fVar0);
iVar1=func_69(iVar1, 0, 100);
func_80(3, 2, iVar1);
MISC::SET_BIT(&(Global_2359296[func_81() /*5568*/].f_681.f_1274), 2);
}}
bLocal_59=true;
iLocal_54=1;
}


void func_100(){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
var uVar6;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=0;
while (iVar0 < 8){
if(iVar0 !=0){
func_71(3, iVar0, &uVar1, &iVar2);
func_55(iVar2, func_53(3, iVar0, -1), -1, 1, 0);
}
iVar0++;
}
func_4(0, 1, -1, 1);
Global_97963=1;
}else{
iVar3=0;
while (iVar3 < 3){
iVar4=0;
while (iVar4 < 8){
if(iVar4 !=0){
func_71(iVar3, iVar4, &iVar5, &uVar6);
STATS::STAT_SET_INT(iVar5, func_53(iVar3, iVar4, -1), 1);
}
iVar4++;
}
iVar3++;
}
Global_113648.f_2365.f_539.f_2387[0]=func_53(0, 0, -1);
Global_113648.f_2365.f_539.f_2387[1]=func_53(1, 0, -1);
Global_113648.f_2365.f_539.f_2387[2]=func_53(2, 0, -1);
Global_113648.f_2365.f_539.f_2354=1;
Global_97963=1;
}}

int func_101(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
return Global_113648.f_2365.f_539.f_2354;
}

int func_102(){
return Global_32163;
}

int func_103(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}


void func_104(){
if(iLocal_54 !=0 && iLocal_53 !=2){
if(iLocal_53==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_53=2;
}
if(!func_101()){
iLocal_53=2;
}}elseif(iLocal_53==1){
if((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_103(PLAYER::PLAYER_ID())) || func_102() !=0){
iLocal_53=2;
}}
if(iLocal_53==2){
iLocal_54=2;
}}}