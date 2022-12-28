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
char* sLocal_20=0;
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
int iLocal_47=0;
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
var uLocal_67=1;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=-1;
var uLocal_72=-1;
var uLocal_73=2;
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
var uLocal_86=2;
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
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
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
var uLocal_136=0;
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
int iLocal_153=0;
int iLocal_154=0;
BOOL bLocal_155=0;
BOOL bLocal_156=0;
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
sLocal_20="NULL";
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
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(func_328()) func_327();
if(!func_326()) Global_1835433.f_13=0;
while (!Global_2696069){
if(func_328()) func_323();
SYSTEM::WAIT(0);
}
if(!Global_1835433.f_13){
func_322();
while (!func_43(&iLocal_47, true, true, false)){
if(func_328()) func_323();
SYSTEM::WAIT(0);
}}
Global_1835433.f_13=0;
func_42();
if(func_41()) func_40();
if(func_39()) func_42();
if(!func_38()) func_37();
while (true){
if(func_328()) func_323();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_41()){
if(Global_4718592==0 && Global_4718592.f_2==7 || Global_4718592.f_2==1){
if(func_36(PLAYER::PLAYER_ID()) || func_35(PLAYER::PLAYER_ID())){
Global_1835433.f_12=1;
func_323();
}}}
if(func_41()){
bLocal_156=true;
if(bLocal_155){
bLocal_155=false;
if(iLocal_47 !=0) func_33(&(iLocal_47.f_3), false, true);
}
if(iLocal_47.f_3.f_4 !=0 && iLocal_47.f_3.f_4 !=1)if(NETWORK::UGC_WAS_QUERY_FORCE_CANCELLED()) func_33(&(iLocal_47.f_3), false, true);
if(!func_39()) func_322();
if(func_43(&iLocal_47, true, true, false)){
func_40();
func_42();
func_31();
}
SYSTEM::WAIT(0);
}else{
bLocal_155=true;
if(bLocal_156){
bLocal_156=false;
if(iLocal_47 !=0) func_33(&(iLocal_47.f_3), false, true);
}
SYSTEM::WAIT(0);
switch (iLocal_153){
case 0:
if(func_30()){
if(func_6()){
Global_794709.f_3=0;
Global_794709.f_1=0;
iLocal_153=1;
func_5();
func_322();
Global_1835433.f_8=1;
func_33(&(iLocal_47.f_3), true, true);
func_4(&iLocal_47, 0);
iLocal_47.f_1=0;
iLocal_47.f_2=0;
iLocal_154=0;
}
else{
func_3();
}}
break;
case 1:
iLocal_47.f_3.f_26=1;
if(iLocal_154==0 && !IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 30)){
if(func_43(&iLocal_47, false, false, true)) func_31();
}else{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 29))if(func_2()) func_1();
if(!func_2()){
iLocal_154=0;
func_33(&(iLocal_47.f_3), true, true);
func_4(&iLocal_47, 0);
iLocal_47.f_1=0;
iLocal_47.f_2=0;
}}
if(iLocal_47.f_3.f_4 !=0 && iLocal_47.f_3.f_4 !=1 && iLocal_154==0)if(NETWORK::UGC_WAS_QUERY_FORCE_CANCELLED()) iLocal_154=1;
break;
}}}
return;
}


void func_1() // Position - 0x32B{
Global_2692733.f_1=0;
return;
}
BOOL func_2() // Position - 0x33A{
return Global_2692733.f_1;
}


void func_3() // Position - 0x348{
Player player;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return;
player=PLAYER::PLAYER_ID();
if(player < 0) return;
if(Global_1853910[player /*862*/].f_136.f_1 !=0){
Global_1853910[player /*862*/].f_136.f_1=0;
Global_1853910[player /*862*/].f_136=0;
}
return;
}


void func_4(var uParam0, int iParam1) // Position - 0x395{
*uParam0=iParam1;
return;
}


void func_5() // Position - 0x3A2{
Global_2692733=0;
return;
}
BOOL func_6() // Position - 0x3AF{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 30)) return false;
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 29)) return true;
if(func_29()==0 && !func_28() && !func_2() && !func_27() && !func_26() && !func_25() && !func_24() && !func_23() && !func_22() && func_19() && func_12() && Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 !=8 && Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 !=9 && !func_10(PLAYER::PLAYER_ID()) && !func_9() && !func_7(PLAYER::PLAYER_ID(), true, false)) return true;
return false;
}
BOOL func_7(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4AB{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0)) return true;
if(bParam1)if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1)) return true;
if(bParam2)if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return true;
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x50F{
return -1;
}
BOOL func_9() // Position - 0x518{
if(NETWORK::UGC_IS_CREATING()) return true;
elseif(NETWORK::UGC_IS_GETTING()) return true;
elseif(NETWORK::UGC_IS_MODIFYING()) return true;
return false;
}
BOOL func_10(Player plParam0) // Position - 0x548{
return func_11(plParam0);
}
BOOL func_11(Player plParam0) // Position - 0x556{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}
BOOL func_12() // Position - 0x56D{
if(!func_13()) return false;
return true;
}
BOOL func_13() // Position - 0x582{
if(Global_1574612) return true;
if(func_18()) return true;
if(func_17()) return true;
return func_14(120, -1);
}
BOOL func_14(int iParam0, int iParam1) // Position - 0x5B2{
Hash statHash;
int outValue;
statHash=Global_2848280[iParam0 /*3*/][func_15(iParam1)];
if(STATS::STAT_GET_BOOL(statHash, &outValue, -1)) return outValue;
return 0;
}

int func_15(int iParam0) // Position - 0x5DE{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_16();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_16() // Position - 0x612{
return Global_1574918;
}
BOOL func_17() // Position - 0x61E{
return Global_1575048;
}
BOOL func_18() // Position - 0x62A{
return Global_1575050;
}
BOOL func_19() // Position - 0x636{
if(func_21() && func_20(0)) return true;
return false;
}


var func__20(int iParam0) // Position - 0x654{
return Global_1574538[iParam0];
}


var func__21() // Position - 0x664{
return func_20(func_16() + 1);
}
BOOL func_22() // Position - 0x676{
if(!Global_2625315 && !Global_2625315.f_1 && !Global_2625315.f_2) return false;
if(!Global_2625315.f_23) return true;
return false;
}
BOOL func_23() // Position - 0x6B1{
return Global_1573131.f_5;
}
BOOL func_24() // Position - 0x6BF{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}
BOOL func_25() // Position - 0x6D7{
return Global_2683862.f_706;
}
BOOL func_26() // Position - 0x6E6{
return IS_BIT_SET(Global_2683862, 21);
}
BOOL func_27() // Position - 0x6F5{
return IS_BIT_SET(Global_2683862, 19);
}
BOOL func_28() // Position - 0x704{
return Global_2683862.f_691;
}

int func_29() // Position - 0x713{
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192;
}
BOOL func_30() // Position - 0x728{
return Global_1835433.f_3;
}


void func_31() // Position - 0x736{
func_42();
func_32();
Global_1835433.f_9=1;
iLocal_47=0;
iLocal_153=0;
func_33(&(iLocal_47.f_3), false, true);
return;
}


void func_32() // Position - 0x75D{
Global_1835433.f_3=0;
return;
}


void func_33(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x76C{
var unk;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_12=0;
uParam0->f_32=0;
uParam0->f_13=0;
uParam0->f_14=0;
uParam0->f_15=0;
uParam0->f_17=1;
uParam0->f_17=1;
uParam0->f_18=0;
uParam0->f_19=0;
uParam0->f_20=0;
uParam0->f_21=-1;
uParam0->f_3=0;
uParam0->f_28=0;
uParam0->f_29=0;
uParam0->f_30=0;
Global_1835450[0]=0;
Global_1835450[1]=0;
uParam0->f_41=0;
if(bParam2) uParam0->f_42={
unk 
};
if(bParam1) func_34(uParam0, 0);
return;
}


void func_34(var uParam0, int iParam1) // Position - 0x80A{
uParam0->f_4=iParam1;
return;
}
BOOL func_35(Player plParam0) // Position - 0x818{
return Global_2657589[plParam0 /*466*/].f_121==2;
}
BOOL func_36(Player plParam0) // Position - 0x82D{
return Global_2657589[plParam0 /*466*/].f_121==7;
}


void func_37() // Position - 0x842{
Global_2692733=1;
return;
}
BOOL func_38() // Position - 0x84F{
return Global_2692733;
}
BOOL func_39() // Position - 0x85B{
return Global_2692733.f_4;
}


void func_40() // Position - 0x869{
Global_1835433.f_10=0;
return;
}
BOOL func_41() // Position - 0x878{
return Global_1835433.f_10;
}


void func_42() // Position - 0x886{
Global_2692733.f_4=0;
return;
}
BOOL func_43(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x895{
if(func_321()) return false;
uParam0->f_3.f_26=1;
switch (*uParam0){
case 0:
if(bParam2 && !func_320()){
if(func_319()){
func_4(uParam0, 1);
func_318();
}}else{
func_4(uParam0, 1);
}
break;
case 1:
uParam0->f_3.f_24=func_317(1);
uParam0->f_3.f_25=func_314(1);
func_5();
func_4(uParam0, 2);
break;
case 2:
if(func_313(&(uParam0->f_3), 0, 0, 1800))if(func_312()) func_4(uParam0, 12);
elseif(!bParam3) func_4(uParam0, 13);
else func_4(uParam0, 12);
break;
case 13:
if(func_303(&(uParam0->f_3)))if(!bParam3) func_4(uParam0, 4);
else func_4(uParam0, 12);
break;
case 3:
if(func_302()){
if(!func_301()) func_300();
return false;
}else{
if(func_301()) func_299();
func_4(uParam0, 4);
}
break;
case 4:
if(func_298(&(uParam0->f_3), 0, 0, 300)) func_4(uParam0, 5);
break;
case 5:
if(func_296(&(uParam0->f_3), 0, 0, 300)){
uParam0->f_1=0;
uParam0->f_2=180;
func_4(uParam0, 6);
}
break;
case 6:
func_295(uParam0->f_1, uParam0->f_2);
if(uParam0->f_1 + uParam0->f_2 > 1800)if(bParam3) func_4(uParam0, 12);
elseif(func_312()) func_4(uParam0, 12);
elseif(NETWORK::NETWORK_PLAYER_IS_CHEATER()) func_4(uParam0, 10);
else func_4(uParam0, 7);
else uParam0->f_1=uParam0->f_1 + uParam0->f_2;
break;
case 7:
if(func_294()){
if(func_293(&(uParam0->f_3), 0, 31, false)){
uParam0->f_1=0;
uParam0->f_2=180;
func_4(uParam0, 8);
}}else{
func_4(uParam0, 10);
}
break;
case 8:
func_291(uParam0->f_1, uParam0->f_2);
if(uParam0->f_1 + uParam0->f_2 > 1800) func_4(uParam0, 9);
else uParam0->f_1=uParam0->f_1 + uParam0->f_2;
break;
case 9:
if(func_294())if(func_287(&(uParam0->f_99))) func_4(uParam0, 10);
else func_4(uParam0, 10);
break;
case 10:
if(bParam1){
if(func_45(&(uParam0->f_3), 0)){
func_4(uParam0, 11);
uParam0->f_1=0;
uParam0->f_2=180;
}}else{
func_4(uParam0, 12);
}
break;
case 11:
func_4(uParam0, 12);
break;
case 12:
func_33(&(uParam0->f_3), true, true);
func_4(uParam0, 0);
uParam0->f_1=0;
uParam0->f_2=0;
func_37();
func_44();
return true;
}
return false;
}


void func_44() // Position - 0xB92{
Global_2692733.f_6=1;
return;
}
BOOL func_45(var uParam0, int iParam1) // Position - 0xBA1{
var unk;
return func_46(uParam0, &unk, 8, iParam1, 0, 0, 31, -1, false, 1, false, 0, -1);
}
BOOL func_46(var uParam0, Any* panParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12) // Position - 0xBBF{
int num;
int num2;
int num3;
if(uParam0->f_26==0)if(func_39() && uParam0->f_4==0) return 0;
if(NETWORK::UGC_WAS_QUERY_FORCE_CANCELLED()){
if(uParam0->f_4 > 1){
uParam0->f_4=0;
func_33(uParam0, false, true);
return 0;
}}
if(!func_312()){
if(NETWORK::UGC_WAS_QUERY_FORCE_CANCELLED()){
if(uParam0->f_4 > 1){
uParam0->f_4=0;
uParam0->f_14=0;
func_33(uParam0, false, true);
return 0;
}}}
if(!func_312())if(func_284()) return 0;
switch (uParam0->f_4){
case 0:
if(func_9()) return 0;
Global_1835450[0]=0;
Global_1835450[1]=0;
func_283();
uParam0->f_24=func_317(1);
uParam0->f_25=func_314(1);
_STOPWATCH_DESTROY(&(uParam0->f_39));
func_33(uParam0, false, true);
func_281();
uParam0->f_12=iParam3;
func_280();
uParam0->f_13=0;
uParam0->f_10=0;
if(func_312()) NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
else NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
if(uParam0->f_14==0){
switch (iParam5){
case 0:
switch (iParam4){
case 1:
case 2:
func_279(false, true, 0);
break;
case 3:
case 4:
func_278(&Global_978406, false, true, 0);
Global_978406.f_32423=0;
Global_978406.f_32424=0;
break;
case 5:
case 6:
break;
case 0:
switch (iParam2){
case 0:
case 1:
if(bParam10) func_277(&Global_1016359, true, false, true, 0, true);
else func_277(&Global_1010831, true, false, true, 0, false);
break;
case 7:
func_276(&Global_1027415, false, true, 0);
break;
case 8:
if(bParam10) func_277(&Global_1021887, true, false, true, 0, true);
else func_277(&Global_1010831, false, false, true, 0, false);
break;
case 2:
func_276(&Global_1027415, false, true, 0);
break;
}
break;
}
break;
case 1:
if(iParam2==8){
func_275(&Global_1052643);
}
else{
switch (iParam4){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
break;
default:
func_275(&Global_1051704);
break;
}
}
break;
case 4:
func_274();
break;
}
uParam0->f_14=1;
}
func_34(uParam0, 1);
break;
case 1:
if(func_312()){
if(iParam5==1){
NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
if(DATAFILE::DATAFILE_LOAD_OFFLINE_UGC("RockstarPlaylists", 0)){
func_273(&Global_1054521);
return 1;
}}else{
NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
NETWORK::UGC_LOAD_OFFLINE_QUERY(iParam4);
func_34(uParam0, 2);
}}elseif(func_270(iParam2, uParam0->f_12, iParam4, iParam5, iParam7, panParam1, iParam6, iParam11, iParam12, false)){
if(iParam2==0) Global_1010831.f_5524=0;
func_34(uParam0, 2);
}
break;
case 2:
if(NETWORK::UGC_IS_GETTING() || NETWORK::UGC_DID_GET_SUCCEED() && NETWORK::UGC_GET_CONTENT_NUM() > 0){
uParam0->f_10=uParam0->f_10 + NETWORK::UGC_GET_CONTENT_NUM();
uParam0->f_7=0;
while (uParam0->f_7 <=NETWORK::UGC_GET_CONTENT_NUM() - 1){
if(DATAFILE::DATAFILE_SELECT_UGC_DATA(uParam0->f_7, 0)){
switch (iParam5){
case 0:
switch (iParam4){
case 1:
case 2:
func_235(uParam0, false);
break;
case 3:
case 4:
func_219(&Global_978406, uParam0, false, iParam4, 0);
break;
case 5:
case 6:
func_219(&Global_978406, uParam0, false, iParam4, Global_978406.f_32423);
break;
case 0:
switch (iParam2){
case 0:
case 1:
func_123(uParam0, iParam2, 0, bParam8, bParam10, false);
break;
case 8:
func_123(uParam0, iParam2, 31, bParam8, bParam10, true);
break;
case 7:
case 2:
func_64(uParam0, bParam8);
break;
}
break;
}
break;
case 1:
switch (iParam2){
case 8:
func_63(uParam0, &Global_1052643, true, 0);
break;
default:
switch (iParam4){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
func_62(uParam0, &Global_1054521, true, iParam4);
break;
default:
func_63(uParam0, &Global_1051704, true, iParam4);
break;
}
break;
}
break;
case 4:
func_54(uParam0, iParam9, true, iParam2);
break;
}}
switch (iParam5){
case 0:
switch (iParam4){
case 1:
case 2:
if(uParam0->f_9 > 1800){
func_33(uParam0, true, true);
Global_794709.f_3=NETWORK::GET_CLOUD_TIME_AS_INT();
func_280();
NETWORK::UGC_CANCEL_QUERY();
*uParam0=1;
return 1;
}
break;
case 3:
case 4:
case 5:
case 6:
if(uParam0->f_9 + Global_978406.f_32423 >=300){
func_33(uParam0, true, true);
Global_978406.f_2=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam4==3 || iParam4==4) Global_978406.f_32423=uParam0->f_9;
else Global_978406.f_32424=uParam0->f_9;
func_280();
NETWORK::UGC_CANCEL_QUERY();
*uParam0=1;
return 1;
}
break;
case 0:
if(uParam0->f_9 > iParam6){
if(iParam2==8 && Global_1835450[0] !=0 || Global_1835450[1] !=0){
uParam0->f_29=1;
func_34(uParam0, 26);
}
else{
func_280();
NETWORK::UGC_CANCEL_QUERY();
func_33(uParam0, true, true);
*uParam0=1;
return 1;
}
}
break;
}
break;
case 1:
case 4:
if(iParam4==1 || iParam4==2) num=32;
else num=16;
if(uParam0->f_9 > num){
func_33(uParam0, true, true);
func_280();
NETWORK::UGC_CANCEL_QUERY();
*uParam0=1;
return 1;
}
break;
}
uParam0->f_7=uParam0->f_7 + 1;
}
func_280();
}
if(NETWORK::UGC_HAS_GET_FINISHED()){
if(NETWORK::UGC_DID_GET_SUCCEED()){
if(iParam5==0 && iParam4==1 || iParam4==2){
if(NETWORK::UGC_GET_CONTENT_TOTAL()==0){
if(uParam0->f_11 < 3) uParam0->f_11=uParam0->f_11 + 1;
else func_53(1);
func_34(uParam0, 1);
uParam0->f_10=0;
uParam0->f_8=0;
return 0;
}}
if(NETWORK::UGC_GET_CONTENT_TOTAL() !=0) uParam0->f_13=NETWORK::UGC_GET_CONTENT_TOTAL();
if(bParam10){
if(iParam2==8) Global_1021887.f_1=uParam0->f_13;
elseif(iParam2==0) Global_1016359.f_1=uParam0->f_13;
}elseif(iParam2==5){
switch (iParam4){
case 3:
case 4:
case 5:
case 6:
Global_978406.f_2=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam4==3 || iParam4==4) Global_978406.f_32423=uParam0->f_9;
else Global_978406.f_32424=uParam0->f_9;
break;
}}
if(iParam4==1){
Global_794709.f_1=NETWORK::UGC_GET_CONTENT_HASH();
num2=uParam0->f_9;
if(num2==0) num2=uParam0->f_13;
}
if(iParam2==8 && Global_1835450[0] !=0 || Global_1835450[1] !=0){
func_34(uParam0, 26);
return 0;
}
if(iParam4==5 || iParam4==6) num3=Global_978406.f_32423;
func_52(iParam5, iParam2, iParam4, uParam0->f_13 + num3, bParam10);
func_33(uParam0, true, true);
*uParam0=1;
return 1;
}elseif(iParam5==0 && iParam4==1 || iParam4==2){
if(func_312()){
func_33(uParam0, true, true);
*uParam0=0;
return 1;
}else{
if(uParam0->f_11 < 3){
uParam0->f_11=uParam0->f_11 + 1;
}
else{
func_51();
func_53(true);
}
uParam0->f_41=NETWORK::UGC_GET_QUERY_RESULT();
func_34(uParam0, 1);
func_279(true, true, 0);
uParam0->f_10=0;
uParam0->f_8=0;
uParam0->f_9=0;
NETWORK::UGC_CLEAR_OFFLINE_QUERY();
NETWORK::UGC_CLEAR_QUERY_RESULTS();
return 0;
}}else{
func_52(iParam5, iParam2, iParam4, uParam0->f_9, bParam10);
func_33(uParam0, true, true);
uParam0->f_41=NETWORK::UGC_GET_QUERY_RESULT();
*uParam0=0;
return 1;
}}
break;
case 26:
if(Global_1835450[0]==0 && Global_1835450[1]==0){
if(!uParam0->f_29) func_52(iParam5, iParam2, iParam4, uParam0->f_13, bParam10);
func_280();
NETWORK::UGC_CANCEL_QUERY();
func_33(uParam0, true, true);
*uParam0=1;
return 1;
}
if(!_STOPWATCH_IS_INITIALIZED(&(uParam0->f_39))) _STOPWATCH_INITIALIZE(&(uParam0->f_39), false, false);
if(_STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_39), 30000, false)) func_47(bParam10);
break;
}
return 0;
}


void func_47(BOOL bParam0) // Position - 0x148C{
int i;
int num;
int offset;
int j;
int num2;
num2=62;
if(bParam0){
for (i=0;
i < num2;
i=i + 1){
Global_1021887.f_5461[i]=0;
offset=i % 32;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(i) / 32f);
if(IS_BIT_SET(Global_1835450[num], offset)){
for (j=i;
j <=num2 - 2;
j=j + 1){
Global_1021887.f_4[j /*88*/]={
Global_1021887.f_4[j + 1 /*88*/] 
};
}
MISC::CLEAR_BIT(&Global_1835450[num], offset);
return;
}
MISC::CLEAR_BIT(&Global_1835450[num], offset);
}}else{
for (i=0;
i < num2;
i=i + 1){
Global_1010831.f_5461[i]=0;
offset=i % 32;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(i) / 32f);
if(IS_BIT_SET(Global_1835450[num], offset)){
for (j=i;
j <=num2 - 2;
j=j + 1){
Global_1010831.f_4[j /*88*/]={
Global_1010831.f_4[j + 1 /*88*/] 
};
}
MISC::CLEAR_BIT(&Global_1835450[num], offset);
return;
}
MISC::CLEAR_BIT(&Global_1835450[num], offset);
}}
return;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x15CE{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x162C{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x1671{
return uParam0->f_1;
}


void func_51() // Position - 0x167D{
return;
}


void func_52(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1685{
int i;
switch (iParam0){
case 0:
switch (iParam2){
case 1:
case 2:
func_279(true, false, iParam3);
break;
case 3:
case 4:
case 5:
case 6:
func_278(&Global_978406, true, false, iParam3);
break;
case 0:
switch (iParam1){
case 0:
case 1:
if(bParam4) func_277(&Global_1016359, true, true, false, iParam3, bParam4);
else func_277(&Global_1010831, true, true, false, iParam3, false);
break;
case 8:
if(bParam4){
func_277(&Global_1021887, true, true, false, iParam3, bParam4);
for (i=0;
i < 62;
i=i + 1){
Global_1021887.f_5461[i]=0;
}}else{
func_277(&Global_1010831, false, true, false, iParam3 + 31, false);
}
break;
case 7:
case 2:
func_276(&Global_1027415, true, false, iParam3);
break;
}
break;
}
break;
}
return;
}


void func_53(BOOL bParam0) // Position - 0x1790{
Global_2695031=bParam0;
return;
}


void func_54(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x179E{
Any* fileDict;
Any* dict;
Any* dict2;
int int;
var gamerHandle;
BOOL bool;
if(uParam0->f_9 >=16){
func_281();
return;
}
if(!func_60(NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
func_281();
return;
}
if(!func_58(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7), NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
func_281();
return;
}
if(iParam3 !=0 && iParam3 !=1 && iParam3 !=2 && iParam3 !=8){
if(func_56(NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7))){
func_281();
return;
}}
if(Global_1053582.f_935==0){
gamerHandle={
GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&int, 35, &gamerHandle);
Global_1053582.f_935=int;
}
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "data");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "trg");
int=DATAFILE::DATADICT_GET_INT(dict, "crew");
if(iParam1==1 && iParam3 !=8){
if(Global_1053582.f_935==int && Global_1053582.f_935 !=0){
func_281();
return;
}}
if(bParam2 && iParam3 !=8){
bool=DATAFILE::DATADICT_GET_BOOL(dict, "open");
if(!bool){
func_281();
return;
}}
TEXT_LABEL_ASSIGN_STRING(&Global_1053582.f_354[uParam0->f_9 /*16*/], DATAFILE::DATADICT_GET_STRING(dict, "crewnm"), 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1053582[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1053582.f_257[uParam0->f_9 /*6*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
Global_1053582.f_884[uParam0->f_9]=DATAFILE::DATADICT_GET_INT(dict, "cash");
Global_1053582.f_901[uParam0->f_9]=DATAFILE::DATADICT_GET_INT(dict2, "scr");
Global_1053582.f_918[uParam0->f_9]=DATAFILE::DATADICT_GET_INT(dict2, "time");
Global_1053582.f_936=uParam0->f_9 + 1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1053582[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_1053582.f_257[uParam0->f_9 /*6*/])) uParam0->f_9=uParam0->f_9 + 1;
func_281();
return;
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x19A4{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_56(const char* sParam0) // Position - 0x19BB{
var gamerHandle2;
var gamerHandle1;
gamerHandle2={
GET_GAMER_HANDLE_USER(sParam0) 
};
gamerHandle1={
GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle2)) return true;
return false;
}
struct<13> GET_GAMER_HANDLE_USER(const char* sParam0) // Position - 0x19EB{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_58(int iParam0, BOOL bParam1, const char* sParam2, int iParam3) // Position - 0x1A02{
var gamerHandle2;
var gamerHandle1;
if(iParam3==1 || iParam3==2 || iParam3==3 || iParam3==4 || iParam3==5 || iParam3==6) return true;
if(iParam0==0){
gamerHandle2={
GET_GAMER_HANDLE_USER(sParam2) 
};
gamerHandle1={
GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) 
};
if(bParam1){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle2)) return true;
elseif(!NETWORK::NETWORK_IS_FRIEND(&gamerHandle2)) return false;
}elseif(func_59()){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle2)) return true;
elseif(unk_0x66955BC2BF0032B5(&gamerHandle2) && NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&gamerHandle2) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle2)) return false;
}else{
gamerHandle1={
GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) 
};
if(!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle1, &gamerHandle2)) return false;
}}
return true;
}
BOOL func_59() // Position - 0x1AEB{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_60(int iParam0) // Position - 0x1B01{
if(iParam0==3 || iParam0==1) return true;
if(!IS_ROCKSTAR_DEV())if(iParam0==4 || iParam0==2 || iParam0==6) return false;
return true;
}
BOOL IS_ROCKSTAR_DEV() // Position - 0x1B46{
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_62(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x1B57{
BOOL bool;
BOOL bool2;
Any* fileDict;
Any* array;
int count;
int i;
var unk;
if(uParam0->f_9 >=513) return;
if(uParam0->f_9==0 && iParam3==1) uParam1->f_1864=0;
TEXT_LABEL_ASSIGN_STRING(&uParam1->[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
TEXT_LABEL_ASSIGN_STRING(&uParam1->f_513[uParam0->f_9 /*6*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
array=DATAFILE::DATADICT_GET_ARRAY(fileDict, "list");
if(bParam2){
if(DATAFILE::DATADICT_GET_TYPE(fileDict, "h2h")==1) bool=DATAFILE::DATADICT_GET_BOOL(fileDict, "h2h");
if(DATAFILE::DATADICT_GET_TYPE(fileDict, "h2h")==1) bool2=DATAFILE::DATADICT_GET_BOOL(fileDict, "ch");
if(bool) MISC::SET_BIT(&(uParam1->f_1865), uParam0->f_9);
if(bool2) MISC::SET_BIT(&(uParam1->f_1866), uParam0->f_9);
}
count=DATAFILE::DATAARRAY_GET_COUNT(array);
unk=16;
for (i=0;
i <=count - 1;
i=i + 1){
unk[i]=DATAFILE::DATAARRAY_GET_DICT(array, i);
if(DATAFILE::DATADICT_GET_TYPE(unk[i], "type")==2) uParam1->f_1219[uParam0->f_9 /*17*/][i]=DATAFILE::DATADICT_GET_INT(unk[i], "type");
}
uParam1->f_1864=uParam0->f_9;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uParam1->[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&uParam1->f_513[uParam0->f_9 /*6*/])) uParam0->f_9=uParam0->f_9 + 1;
uParam1->f_1864=uParam1->f_1864 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_63(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x1CC6{
BOOL bool;
BOOL bool2;
Any* fileDict;
Any* array;
int count;
int i;
var unk;
if(uParam0->f_9 >=257) return;
if(uParam0->f_9==0 && iParam3==1) uParam1->f_936=0;
TEXT_LABEL_ASSIGN_STRING(&uParam1->[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
TEXT_LABEL_ASSIGN_STRING(&uParam1->f_257[uParam0->f_9 /*6*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
array=DATAFILE::DATADICT_GET_ARRAY(fileDict, "list");
if(bParam2){
bool=DATAFILE::DATADICT_GET_BOOL(fileDict, "h2h");
bool2=DATAFILE::DATADICT_GET_BOOL(fileDict, "ch");
if(bool) MISC::SET_BIT(&(uParam1->f_937), uParam0->f_9);
if(bool2) MISC::SET_BIT(&(uParam1->f_938), uParam0->f_9);
}
count=DATAFILE::DATAARRAY_GET_COUNT(array);
unk=16;
if(count !=0){
for (i=0;
i <=count - 1;
i=i + 1){
unk[i]=DATAFILE::DATAARRAY_GET_DICT(array, i);
uParam1->f_611[uParam0->f_9 /*17*/][i]=DATAFILE::DATADICT_GET_INT(unk[i], "type");
}}
uParam1->f_936=uParam0->f_9;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uParam1->[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&uParam1->f_257[uParam0->f_9 /*6*/])) uParam0->f_9=uParam0->f_9 + 1;
uParam1->f_936=uParam1->f_936 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_64(var uParam0, BOOL bParam1) // Position - 0x1E10{
Any* fileDict;
Any* dict;
int dict2;
int num;
int int;
Hash hashKey;
int int2;
var unk;
Any* dict3;
BOOL flag;
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "gen");
num=uParam0->f_9;
int=DATAFILE::DATADICT_GET_INT(dict2, "type");
hashKey=MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7));
if(bParam1==false){
if(!func_60(NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
func_281();
return;
}
if(!func_58(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7), NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
func_281();
return;
}
if(func_122(hashKey) || func_121(hashKey) || func_120(hashKey) || func_119(hashKey) || func_118(hashKey) || func_117(hashKey) || func_116(hashKey) || func_114(hashKey)){
func_281();
return;
}
if(func_112(hashKey) && !func_111(PLAYER::PLAYER_ID())){
func_281();
return;
}
if(func_110(hashKey)){
func_281();
return;
}
if(int==6){
func_281();
return;
}
int2=DATAFILE::DATADICT_GET_INT(dict2, "rank");
if(int2 > 1000){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
if(func_109(hashKey)){
func_281();
return;
}
if(func_108(hashKey)){
func_281();
return;
}
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==7 || DATAFILE::DATADICT_GET_INT(dict2, "subtype")==1){
func_281();
return;
}}else{
if(Global_262145.f_7092==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 || DATAFILE::DATADICT_GET_TYPE(dict2, "type") !=2 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==6){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}
if(Global_262145.f_7093==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 || DATAFILE::DATADICT_GET_TYPE(dict2, "type") !=2 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==5){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}
if(Global_262145.f_7693==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==2){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}
if(Global_262145.f_7694==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==1){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}}
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
Global_1027415.f_33[num /*88*/]={
unk 
};
Global_1027415.f_33[num /*88*/].f_65=int;
Global_1027415.f_33[num /*88*/].f_56={
func_107(dict2) 
};
if(DATAFILE::DATADICT_GET_TYPE(dict2, "cam")==5){
Global_1027415.f_33[num /*88*/].f_59={
func_106(dict2, "cam") 
};
}elseif(DATAFILE::DATADICT_GET_TYPE(dict2, "cam")==6){
dict3=DATAFILE::DATADICT_GET_DICT(dict2, "cam");
if(DATAFILE::DATADICT_GET_TYPE(dict3, "x")==2) Global_1027415.f_33[num /*88*/].f_59=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict3, "x"));
else Global_1027415.f_33[num /*88*/].f_59=DATAFILE::DATADICT_GET_FLOAT(dict3, "x");
if(DATAFILE::DATADICT_GET_TYPE(dict3, "y")==2) Global_1027415.f_33[num /*88*/].f_59.f_1=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict3, "y"));
else Global_1027415.f_33[num /*88*/].f_59.f_1=DATAFILE::DATADICT_GET_FLOAT(dict3, "y");
if(DATAFILE::DATADICT_GET_TYPE(dict3, "z")==2) Global_1027415.f_33[num /*88*/].f_59.f_2=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict3, "z"));
else Global_1027415.f_33[num /*88*/].f_59.f_2=DATAFILE::DATADICT_GET_FLOAT(dict3, "z");
}
Global_1027415.f_33[num /*88*/].f_62={
func_105(dict2) 
};
Global_1027415.f_33[num /*88*/].f_69=DATAFILE::DATADICT_GET_INT(dict2, "min");
Global_1027415.f_33[num /*88*/].f_71=DATAFILE::DATADICT_GET_INT(dict2, "num");
if(Global_1027415.f_33[num /*88*/].f_71==-1) Global_1027415.f_33[num /*88*/].f_71=func_104();
TEXT_LABEL_ASSIGN_STRING(&(Global_1027415.f_33[num /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
Global_1027415.f_33[num /*88*/].f_81=NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7);
Global_1027415.f_33[num /*88*/].f_68=DATAFILE::DATADICT_GET_INT(dict2, "subtype");
Global_1027415.f_33[num /*88*/].f_80=DATAFILE::DATADICT_GET_INT(dict2, "adverm");
Global_1027415.f_33[num /*88*/].f_70=DATAFILE::DATADICT_GET_INT(dict2, "rank");
Global_1027415.f_33[num /*88*/].f_73=func_103(NETWORK::UGC_GET_CONTENT_RATING(uParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0));
TEXT_LABEL_ASSIGN_STRING(&Global_1027415.f_33[num /*88*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
Global_1027415.f_33[num /*88*/].f_55=unk_0xDCE06353298ED7A3(uParam0->f_7);
if(func_102() !=2){
if(Global_1027415.f_33[uParam0->f_9 /*88*/].f_71 > Global_262145.f_4606) Global_1027415.f_33[uParam0->f_9 /*88*/].f_71=Global_262145.f_4606;
if(Global_1027415.f_33[uParam0->f_9 /*88*/].f_69 > Global_262145.f_4606) Global_1027415.f_33[uParam0->f_9 /*88*/].f_69=Global_262145.f_4606;
}
TEXT_LABEL_ASSIGN_STRING(&(Global_1027415.f_33[num /*88*/].f_6), unk_0x6FD7F673042CBB0D(uParam0->f_7), 64);
NETWORK::UGC_GET_CONTENT_UPDATED_DATE(uParam0->f_7, &(Global_1027415.f_33[num /*88*/].f_82));
Global_1027415.f_2762[num]=false;
if(!func_312()){
if(NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7))) Global_1027415.f_33[num /*88*/].f_54=NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
else Global_1027415.f_33[num /*88*/].f_54=-1;
Global_1027415.f_33[num /*88*/].f_67=func_101(uParam0->f_7);
Global_1027415.f_33[num /*88*/].f_66=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, Global_1027415.f_33[num /*88*/].f_67);
if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7)) Global_1027415.f_2762[num]=NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam0->f_7);
}
Global_1027415.f_33[num /*88*/].f_75=DATAFILE::DATADICT_GET_INT(dict2, "charcon");
Global_1027415.f_33[num /*88*/].f_72=DATAFILE::DATADICT_GET_INT(dict2, "tnum");
Global_1027415.f_1[num]=hashKey;
func_100(Global_1027415.f_33[num /*88*/].f_65, &(Global_1027415.f_33[num /*88*/].f_71), &(Global_1027415.f_33[num /*88*/].f_69));
Global_1027415.f_33[num /*88*/].f_76=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
if(IS_BIT_SET(Global_1027415.f_33[num /*88*/].f_76, 27)) flag=true;
Global_1027415.f_33[num /*88*/].f_76=0;
MISC::SET_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 13);
if(flag) MISC::SET_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 27);
MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 15);
MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 18);
MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 19);
MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 29);
MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 28);
func_66(MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7)), &(Global_1027415.f_33[num /*88*/].f_76), &(Global_1027415.f_33[num /*88*/].f_77), Global_1027415.f_33[num /*88*/].f_80);
MISC::SET_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 13);
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_1027415.f_33[num /*88*/])) MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 13);
if(_IS_NULL_VECTOR(Global_1027415.f_33[num /*88*/].f_56)) MISC::CLEAR_BIT(&(Global_1027415.f_33[num /*88*/].f_76), 13);
Global_1027415=Global_1027415 + 1;
uParam0->f_9=uParam0->f_9 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x25EC{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}


void func_66(Hash hParam0, int iParam1, int* piParam2, int iParam3) // Position - 0x2616{
if(func_99(hParam0)) MISC::SET_BIT(iParam1, 15);
elseif(func_98(hParam0)) MISC::SET_BIT(iParam1, 18);
elseif(func_97(hParam0)) MISC::SET_BIT(iParam1, 19);
elseif(func_96(hParam0)) MISC::SET_BIT(iParam1, 29);
elseif(func_95(hParam0, true)) MISC::SET_BIT(iParam1, 28);
elseif(func_94(hParam0)) MISC::SET_BIT(piParam2, 0);
elseif(func_93(hParam0)) MISC::SET_BIT(piParam2, 1);
elseif(func_92(hParam0)) MISC::SET_BIT(piParam2, 2);
elseif(func_91(hParam0)) MISC::SET_BIT(piParam2, 3);
elseif(func_90(hParam0)) MISC::SET_BIT(piParam2, 4);
elseif(func_89(hParam0)) MISC::SET_BIT(piParam2, 5);
elseif(func_88(hParam0)) MISC::SET_BIT(piParam2, 6);
elseif(func_87(hParam0)) MISC::SET_BIT(piParam2, 7);
elseif(func_86(hParam0)) MISC::SET_BIT(piParam2, 8);
elseif(func_85(hParam0)) MISC::SET_BIT(piParam2, 9);
elseif(func_84(hParam0)) MISC::SET_BIT(piParam2, 10);
elseif(func_83(hParam0)) MISC::SET_BIT(piParam2, 11);
elseif(func_82(hParam0)) MISC::SET_BIT(piParam2, 12);
elseif(func_81(iParam3)) MISC::SET_BIT(piParam2, 13);
elseif(func_80(hParam0)) MISC::SET_BIT(piParam2, 14);
elseif(func_79(hParam0)) MISC::SET_BIT(piParam2, 22);
elseif(func_78(iParam3)) MISC::SET_BIT(piParam2, 16);
elseif(func_77(iParam3)) MISC::SET_BIT(piParam2, 17);
elseif(func_76(iParam3)) MISC::SET_BIT(piParam2, 20);
elseif(func_75(iParam3)) MISC::SET_BIT(piParam2, 21);
elseif(func_79(iParam3)) MISC::SET_BIT(piParam2, 22);
elseif(func_74(iParam3)) MISC::SET_BIT(piParam2, 23);
elseif(func_73(iParam3)) MISC::SET_BIT(piParam2, 24);
elseif(func_72(iParam3)) MISC::SET_BIT(piParam2, 25);
elseif(func_71(iParam3)) MISC::SET_BIT(piParam2, 26);
elseif(func_70(iParam3)) MISC::SET_BIT(piParam2, 27);
elseif(func_69(iParam3)) MISC::SET_BIT(piParam2, 28);
elseif(func_68(iParam3)) MISC::SET_BIT(piParam2, 29);
elseif(func_67(iParam3)) MISC::SET_BIT(piParam2, 30);
return;
}
BOOL func_67(int iParam0) // Position - 0x28BC{
return iParam0==17;
}
BOOL func_68(int iParam0) // Position - 0x28C9{
return iParam0==16;
}
BOOL func_69(int iParam0) // Position - 0x28D6{
return iParam0==15;
}
BOOL func_70(int iParam0) // Position - 0x28E3{
return iParam0==14;
}
BOOL func_71(int iParam0) // Position - 0x28F0{
return iParam0==13;
}
BOOL func_72(int iParam0) // Position - 0x28FD{
return iParam0==12;
}
BOOL func_73(int iParam0) // Position - 0x290A{
return iParam0==11;
}
BOOL func_74(int iParam0) // Position - 0x2917{
return iParam0==9;
}
BOOL func_75(int iParam0) // Position - 0x2924{
return iParam0==1 || iParam0==67;
}
BOOL func_76(int iParam0) // Position - 0x293B{
return iParam0==6;
}
BOOL func_77(int iParam0) // Position - 0x2947{
return iParam0==4;
}
BOOL func_78(int iParam0) // Position - 0x2953{
return iParam0==2;
}
BOOL func_79(int iParam0) // Position - 0x295F{
return iParam0==8;
}
BOOL func_80(Hash hParam0) // Position - 0x296C{
int i;
if(*Global_4718592.f_166301==35) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9721[i]) return true;
}
return false;
}
BOOL func_81(int iParam0) // Position - 0x29B9{
return iParam0==3;
}
BOOL func_82(Hash hParam0) // Position - 0x29C5{
int i;
if(*Global_4718592.f_166301==31) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9710[i]) return true;
}
return false;
}
BOOL func_83(Hash hParam0) // Position - 0x2A12{
int i;
if(*Global_4718592.f_166301==34) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9699[i]) return true;
}
return false;
}
BOOL func_84(Hash hParam0) // Position - 0x2A5F{
int i;
if(*Global_4718592.f_166301==30) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9688[i]) return true;
}
return false;
}
BOOL func_85(Hash hParam0) // Position - 0x2AAC{
int i;
if(*Global_4718592.f_166301==29) return true;
if(hParam0==0) return false;
for (i=0;
i <=11;
i=i + 1){
if(hParam0==Global_262145.f_9675[i]) return true;
}
return false;
}
BOOL func_86(Hash hParam0) // Position - 0x2AF9{
int i;
if(*Global_4718592.f_166301==27) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9664[i]) return true;
}
return false;
}
BOOL func_87(Hash hParam0) // Position - 0x2B46{
int i;
if(*Global_4718592.f_166301==28) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9653[i]) return true;
}
return false;
}
BOOL func_88(Hash hParam0) // Position - 0x2B93{
int i;
if(*Global_4718592.f_166301==46) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9642[i]) return true;
}
return false;
}
BOOL func_89(Hash hParam0) // Position - 0x2BE0{
int i;
if(*Global_4718592.f_166301==32) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9545[i]) return true;
}
return false;
}
BOOL func_90(Hash hParam0) // Position - 0x2C2D{
int i;
if(*Global_4718592.f_166301==33) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9567[i]) return true;
}
return false;
}
BOOL func_91(Hash hParam0) // Position - 0x2C7A{
int i;
if(*Global_4718592.f_166301==86) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9556[i]) return true;
}
return false;
}
BOOL func_92(Hash hParam0) // Position - 0x2CC7{
int i;
if(*Global_4718592.f_166301==84) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9534[i]) return true;
}
return false;
}
BOOL func_93(Hash hParam0) // Position - 0x2D14{
int i;
if(*Global_4718592.f_166301==25) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9523[i]) return true;
}
return false;
}
BOOL func_94(Hash hParam0) // Position - 0x2D61{
int i;
if(*Global_4718592.f_166301==85) return true;
if(hParam0==0) return false;
for (i=0;
i <=9;
i=i + 1){
if(hParam0==Global_262145.f_9512[i]) return true;
}
return false;
}
BOOL func_95(Hash hParam0, BOOL bParam1) // Position - 0x2DAE{
int i;
if(bParam1)if(*Global_4718592.f_166301==65) return true;
if(hParam0==0) return false;
for (i=0;
i <=6;
i=i + 1){
if(hParam0==Global_262145.f_9486[i]) return true;
}
return false;
}
BOOL func_96(Hash hParam0) // Position - 0x2DFF{
int i;
if(*Global_4718592.f_166301==21) return true;
if(hParam0==0) return false;
for (i=0;
i <=6;
i=i + 1){
if(hParam0==Global_262145.f_9478[i]) return true;
}
return false;
}
BOOL func_97(Hash hParam0) // Position - 0x2E4B{
if(*Global_4718592.f_166301==18) return true;
if(hParam0==Global_262145.f_9473 || hParam0==Global_262145.f_9474 || hParam0==Global_262145.f_9475 || hParam0==Global_262145.f_9476 || hParam0==Global_262145.f_9477) return true;
return false;
}
BOOL func_98(Hash hParam0) // Position - 0x2EB8{
if(*Global_4718592.f_166301==20) return true;
if(hParam0==Global_262145.f_9468 || hParam0==Global_262145.f_9469 || hParam0==Global_262145.f_9470 || hParam0==Global_262145.f_9471 || hParam0==Global_262145.f_9472) return true;
return false;
}
BOOL func_99(Hash hParam0) // Position - 0x2F25{
if(*Global_4718592.f_166301==19) return true;
if(hParam0==Global_262145.f_9461 || hParam0==Global_262145.f_9462 || hParam0==Global_262145.f_9463 || hParam0==Global_262145.f_9464 || hParam0==Global_262145.f_9465 || hParam0==Global_262145.f_9466 || hParam0==Global_262145.f_9467) return true;
return false;
}


void func_100(int iParam0, int iParam1, int iParam2) // Position - 0x2FB2{
if(iParam0==1)if(*iParam2 < 2) *iParam2=2;
elseif(*iParam2 < 1) *iParam2=1;
if(*iParam1 < *iParam2) *iParam1=*iParam2;
return;
}

int func_101(int iParam0) // Position - 0x2FE8{
if(NETWORK::UGC_GET_CONTENT_HAS_HI_RES_PHOTO(iParam0)) return 2;
elseif(NETWORK::UGC_GET_CONTENT_HAS_LO_RES_PHOTO(iParam0)) return 1;
return 1;
}

int func_102() // Position - 0x300E{
return Global_32163;
}

int func_103(float fParam0, int iParam1) // Position - 0x3019{
int num;
if(iParam1==0) return -1;
num=SYSTEM::ROUND(fParam0 * 100f);
if(num < 0) num=-1;
return num;
}

int func_104() // Position - 0x3044{
if(Global_2691794) return 32;
return 32 - Global_2691795;
}


Vector3 func__105(int iParam0) // Position - 0x305F{
float float;
if(DATAFILE::DATADICT_GET_TYPE(iParam0, "camp")==3) float=DATAFILE::DATADICT_GET_FLOAT(iParam0, "camp");
elseif(DATAFILE::DATADICT_GET_TYPE(iParam0, "camp")==2) float=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camp"));
if(DATAFILE::DATADICT_GET_TYPE(iParam0, "camh")==3) float.f_2=DATAFILE::DATADICT_GET_FLOAT(iParam0, "camh");
elseif(DATAFILE::DATADICT_GET_TYPE(iParam0, "camh")==2) float.f_2=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camh"));
return float;
}


Vector3 func__106(int iParam0, char* sParam1) // Position - 0x30DD{
float vector;
Any* dict;
if(DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==5){
vector={
DATAFILE::DATADICT_GET_VECTOR(iParam0, sParam1) 
};
}elseif(DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==6){
dict=DATAFILE::DATADICT_GET_DICT(iParam0, sParam1);
if(DATAFILE::DATADICT_GET_TYPE(dict, "x")==2) vector=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "x"));
else vector=DATAFILE::DATADICT_GET_FLOAT(dict, "x");
if(DATAFILE::DATADICT_GET_TYPE(dict, "y")==2) vector.f_1=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "y"));
else vector.f_1=DATAFILE::DATADICT_GET_FLOAT(dict, "y");
if(DATAFILE::DATADICT_GET_TYPE(dict, "z")==2) vector.f_2=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "z"));
else vector.f_2=DATAFILE::DATADICT_GET_FLOAT(dict, "z");
}
return vector;
}


Vector3 func__107(int iParam0) // Position - 0x31A0{
Vector3 vector;
if(iParam0==0) return 0f, 0f, 0f;
vector={
func_106(iParam0, "start") 
};
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2233.327f, 2436.1338f, -14.65155f, -2229.5598f, 2399.5764f, 11.997612f, 24f, false, true)) vector={
-2303.54f, 2428.09f, 2.02f 
};
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 603.6218f, 5573.0464f, 694.484f, 594.23785f, 5542.7915f, 727.479f, 33.5f, false, true)) vector={
502.6f, 5537.06f, 777.05f 
};
return vector;
}
BOOL func_108(Hash hParam0) // Position - 0x324B{
int i;
int j;
if(hParam0 !=0){
for (j=0;
j < 19;
j=j + 1){
if(Global_262145.f_6891[j]==2){
for (i=0;
i < Global_262145.f_6211[j];
i=i + 1){
if(hParam0==Global_262145.f_5066[j /*51*/][i]) return 1;
}}}}
return 0;
}
BOOL func_109(Hash hParam0) // Position - 0x32B0{
int i;
if(hParam0==0) return false;
for (i=0;
i < 8;
i=i + 1){
if(hParam0==Global_262145.f_9494[i] || hParam0==Global_262145.f_9503[i]) return true;
}
return false;
}
BOOL func_110(Hash hParam0) // Position - 0x32FF{
int i;
for (i=0;
i < 11;
i=i + 1){
if(Global_262145.f_29933[i]==hParam0) return true;
}
return false;
}
BOOL func_111(Player plParam0) // Position - 0x332F{
return Global_2657589[plParam0 /*466*/].f_272;
}
BOOL func_112(Hash hParam0) // Position - 0x3343{
int i;
for (i=0;
i < 6;
i=i + 1){
if(hParam0==func_113(i)) return true;
}
return false;
}
Hash func_113(int iParam0) // Position - 0x336D{
return Global_262145.f_29264[iParam0];
}
BOOL func_114(Hash hParam0) // Position - 0x3380{
if(hParam0==func_115(6) || hParam0==func_115(7) || hParam0==func_115(8) || hParam0==func_115(9) || hParam0==func_115(10)) return true;
return false;
}
Hash func_115(int iParam0) // Position - 0x33D3{
if(iParam0 !=-1) return Global_262145.f_33703[iParam0];
return -1;
}
BOOL func_116(Hash hParam0) // Position - 0x33F2{
if(hParam0==func_115(0) || hParam0==func_115(1) || hParam0==func_115(2) || hParam0==func_115(3) || hParam0==func_115(4) || hParam0==func_115(5)) return true;
return false;
}
BOOL func_117(Hash hParam0) // Position - 0x3450{
int i;
for (i=0;
i < 6;
i=i + 1){
if(Global_262145.f_31715[i]==hParam0) return true;
}
return false;
}
BOOL func_118(Hash hParam0) // Position - 0x347F{
if(Global_262145.f_6087[0]==hParam0 || Global_262145.f_6087[6]==hParam0 || Global_262145.f_6087[13]==hParam0) return true;
return false;
}
BOOL func_119(Hash hParam0) // Position - 0x34C3{
int i;
if(hParam0==0) return false;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_31051[i]==hParam0) return true;
}
return false;
}
BOOL func_120(Hash hParam0) // Position - 0x34FD{
int i;
if(hParam0==0) return false;
for (i=0;
i < 16;
i=i + 1){
if(Global_262145.f_5042[i]==hParam0) return true;
}
return false;
}

int func_121(Hash hParam0) // Position - 0x3537{
int i;
if(hParam0==0) return 0;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_5033[i]==hParam0) return 1;
}
return 0;
}

int func_122(Hash hParam0) // Position - 0x3571{
int i;
if(hParam0==0) return 0;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_5024[i]==hParam0) return 1;
}
return 0;
}


void func_123(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x35AB{
int value;
int offset;
int num;
var netHandle;
if(bParam4) iParam2=0;
value=iParam2 + uParam0->f_9;
if(iParam1 !=0 && iParam1 !=1){
if(!func_60(NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
func_281();
return;
}
if(!func_58(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7), NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7))){
if(bParam5 && func_59()){
offset=value % 32;
num=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f);
MISC::SET_BIT(&Global_1835450[num], offset);
netHandle={
GET_GAMER_HANDLE_USER(NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7)) 
};
if(bParam4) Global_1021887.f_5461[value]=NETWORK::NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(&netHandle);
else Global_1010831.f_5461[value]=NETWORK::NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(&netHandle);
}else{
func_281();
return;
}}}
if(bParam4){
if(bParam5){
if(func_215(uParam0, &Global_1021887.f_4[value /*88*/], iParam1, true, iParam2, bParam5)){
Global_1021887=Global_1021887 + 1;
uParam0->f_9=uParam0->f_9 + 1;
}}elseif(func_215(uParam0, &Global_1016359.f_4[value /*88*/], iParam1, true, iParam2, false)){
Global_1016359=Global_1016359 + 1;
func_129(uParam0, iParam1);
func_124(uParam0, iParam1, value);
MISC::SET_BIT(&(Global_1016359.f_4[value /*88*/].f_76), 16);
uParam0->f_9=uParam0->f_9 + 1;
}}elseif(bParam3){
if(iParam1==1){
if(Global_1010831 < 62){
func_215(uParam0, &Global_1010831.f_4[Global_1010831 /*88*/], iParam1, false, iParam2, false);
Global_1010831=Global_1010831 + 1;
}}elseif(Global_1027415 < 31){
if(func_215(uParam0, &Global_1027415.f_33[Global_1027415 /*88*/], iParam1, false, iParam2, false)) Global_1027415=Global_1027415 + 1;
}
uParam0->f_9=uParam0->f_9 + 1;
}elseif(func_215(uParam0, &Global_1010831.f_4[value /*88*/], iParam1, true, iParam2, false)){
func_129(uParam0, iParam1);
if(iParam2==0){
Global_1010831=Global_1010831 + 1;
}else{
Global_1010831.f_3=Global_1010831.f_3 + 1;
MISC::SET_BIT(&(Global_1010831.f_4[value /*88*/].f_76), 16);
}
uParam0->f_9=uParam0->f_9 + 1;
}
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_124(var uParam0, int iParam1, int iParam2) // Position - 0x37F5{
if(iParam1==0 || iParam1==1)if(NETWORK::UGC_GET_CONTENT_IS_VERIFIED(uParam0->f_7))if(Global_1010831.f_4[iParam2 /*88*/].f_65==2) func_128(Global_1016359.f_4[iParam2 /*88*/].f_22);
elseif(Global_1010831.f_4[iParam2 /*88*/].f_65==1) func_127(Global_1016359.f_4[iParam2 /*88*/].f_22);
elseif(Global_1010831.f_4[iParam2 /*88*/].f_65==4) func_125(Global_1016359.f_4[iParam2 /*88*/].f_22);
return;
}


void func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3888{
int num;
num=func_126(4);
Global_2645068[num /*83*/]=4;
Global_2645068[num /*83*/].f_1={
uParam0 
};
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "-FromLiveArea", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[1 /*16*/], "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[2 /*16*/], "-LiveAreaLoadContent=", 64);
TEXT_LABEL_COPY(&Global_2645068[num /*83*/].f_18[3 /*16*/],{
Global_4718592.f_114011 
}
, 16);
return;
}

int func_126(int iParam0) // Position - 0x3904{
int num;
int i;
num=19;
for (i=0;
i <=19;
i=i + 1){
if(Global_2645068[i /*83*/]==iParam0){
num=i;
i=20;
}elseif(Global_2645068[i /*83*/]==0){
num=i;
i=20;
}}
return num;
}


void func_127(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3951{
int num;
num=func_126(3);
Global_2645068[num /*83*/]=3;
Global_2645068[num /*83*/].f_1={
uParam0 
};
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "-FromLiveArea", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[1 /*16*/], "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[2 /*16*/], "-LiveAreaLoadContent=", 64);
TEXT_LABEL_COPY(&Global_2645068[num /*83*/].f_18[3 /*16*/],{
Global_4718592.f_114011 
}
, 16);
return;
}


void func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x39CD{
int num;
num=func_126(2);
Global_2645068[num /*83*/]=2;
Global_2645068[num /*83*/].f_1={
uParam0 
};
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "-FromLiveArea", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[1 /*16*/], "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[2 /*16*/], "-LiveAreaLoadContent=", 64);
TEXT_LABEL_COPY(&Global_2645068[num /*83*/].f_18[3 /*16*/],{
Global_4718592.f_114011 
}
, 16);
return;
}


void func_129(var uParam0, int iParam1) // Position - 0x3A49{
if(iParam1==0 || iParam1==1){
if(NETWORK::UGC_GET_CONTENT_IS_VERIFIED(uParam0->f_7)){
if(!func_214(89, -1) || func_213(4244, -1)==false){
_STAT_SET_PACKED_BOOL(4244, 1, -1);
func_181(89, 1, true, false, false, -1);
if(!func_179()) func_130(joaat("MP_M_Freemode_01"), 89);
else func_130(joaat("MP_F_Freemode_01"), 89);
}}}
return;
}


void func_130(int iParam0, int iParam1) // Position - 0x3ABD{
if(iParam0==joaat("MP_M_Freemode_01")){
if(iParam1==89){
func_131(joaat("MP_M_Freemode_01"), 11, 23, true);
func_131(joaat("MP_M_Freemode_01"), 8, 23, true);
func_131(joaat("MP_M_Freemode_01"), 8, 231, true);
}elseif(iParam1==88){
func_131(joaat("MP_M_Freemode_01"), 11, 17, true);
func_131(joaat("MP_M_Freemode_01"), 8, 17, true);
func_131(joaat("MP_M_Freemode_01"), 8, 225, true);
}elseif(iParam1==87){
func_131(joaat("MP_M_Freemode_01"), 11, 28, true);
func_131(joaat("MP_M_Freemode_01"), 8, 28, true);
func_131(joaat("MP_M_Freemode_01"), 8, 236, true);
}}elseif(iParam0==joaat("MP_F_Freemode_01")){
if(iParam1==89){
func_131(joaat("MP_F_Freemode_01"), 11, 4, true);
func_131(joaat("MP_F_Freemode_01"), 8, 4, true);
func_131(joaat("MP_F_Freemode_01"), 8, 20, true);
}elseif(iParam1==88){
func_131(joaat("MP_F_Freemode_01"), 11, 7, true);
func_131(joaat("MP_F_Freemode_01"), 8, 7, true);
func_131(joaat("MP_F_Freemode_01"), 8, 23, true);
}elseif(iParam1==87){
func_131(joaat("MP_F_Freemode_01"), 11, 9, true);
func_131(joaat("MP_F_Freemode_01"), 8, 9, true);
func_131(joaat("MP_F_Freemode_01"), 8, 25, true);
}}
return;
}

int func_131(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3C0E{
eMPStat stat;
int address;
Global_78341[1 /*14*/]={
func_135(iParam0, iParam1, iParam2, -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
if(func_134(iParam1, Global_78341[1 /*14*/].f_2, &stat)){
address=_MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
if(bParam3) MISC::CLEAR_BIT(&address, Global_78341[1 /*14*/].f_1);
else MISC::SET_BIT(&address, Global_78341[1 /*14*/].f_1);
_MPCHAR_STAT_SET_INT(stat, address, Global_78338, true, false);
return 1;
}}
return 0;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3C96{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_15(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x3CC6{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_15(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_134(int iParam0, int iParam1, var uParam2) // Position - 0x3D03{
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
struct<14> func_135(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x410B{
func_178();
if(iParam0==joaat("MP_M_Freemode_01")) func_162(iParam1, iParam2, hParam3);
elseif(iParam0==joaat("MP_F_Freemode_01")) func_136(iParam1, iParam2, hParam3);
return Global_78341[0 /*14*/];
}


void func_136(int iParam0, int iParam1, Hash hParam2) // Position - 0x414C{
switch (iParam0){
case 2:
func_161(iParam1, hParam2);
break;
case 11:
func_160(iParam1, hParam2);
break;
case 8:
func_159(iParam1, hParam2);
break;
case 9:
func_158(iParam1, hParam2);
break;
case 3:
func_157(iParam1, hParam2);
break;
case 4:
func_156(iParam1, hParam2);
break;
case 6:
func_155(iParam1, hParam2);
break;
case 1:
func_154(iParam1, hParam2);
break;
case 7:
func_153(iParam1, hParam2);
break;
case 10:
func_152(iParam1, hParam2);
break;
case 14:
func_151(iParam1, hParam2);
break;
case 12:
func_150(iParam1, hParam2);
break;
case 5:
func_149(iParam1, hParam2);
break;
case 0:
func_146(iParam1, hParam2);
break;
case 13:
func_137(iParam1);
break;
}
return;
}


void func_137(int iParam0) // Position - 0x4258{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
switch (iParam0){
case 31:
num2=0;
num3=0;
break;
case 0:
num2=0;
num3=0;
break;
case 1:
num2=0;
num3=0;
break;
case 2:
num2=0;
num3=0;
break;
case 3:
num2=0;
num3=0;
break;
case 4:
num2=0;
num3=0;
break;
case 5:
num2=0;
num3=0;
break;
case 6:
num2=0;
num3=0;
break;
case 7:
num2=0;
num3=0;
break;
case 8:
num2=0;
num3=0;
break;
case 9:
num2=0;
num3=0;
break;
case 10:
num2=0;
num3=0;
break;
case 11:
num2=0;
num3=0;
break;
case 12:
num2=0;
num3=0;
break;
case 13:
num2=0;
num3=0;
break;
case 14:
num2=0;
num3=0;
break;
case 15:
num2=0;
num3=0;
break;
case 16:
num2=0;
num3=0;
break;
case 17:
num2=0;
num3=0;
break;
case 18:
num2=0;
num3=0;
break;
case 19:
num2=0;
num3=0;
break;
case 20:
num2=0;
num3=0;
break;
case 21:
num2=0;
num3=0;
break;
case 22:
num2=0;
num3=0;
break;
case 23:
num2=0;
num3=0;
break;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_138(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x4413{
int num;
eMPStat stat;
iParam0->f_6=0;
*iParam0=iParam9;
iParam0->f_1=iParam2 % 32;
iParam0->f_2=iParam2 / 32;
iParam0->f_3=iParam4;
iParam0->f_4=iParam5;
iParam0->f_7=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
iParam0->f_13=iParam8;
iParam0->f_12=func_145(iParam8);
if(iParam0->f_2 >=10 && iParam0->f_5 >=0 && iParam0->f_5 < 3){
!bParam10;
iParam0->f_2=0;
}
MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL");
if(bParam7) MISC::SET_BIT(&(iParam0->f_6), 3);
if(bParam10){
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam0->f_5 >=0 && iParam0->f_5 < 3) MISC::SET_BIT(&(iParam0->f_6), 5);
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
MISC::SET_BIT(&(iParam0->f_6), 6);
if(func_144(14)) return;
if(iParam1==1)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)) MISC::SET_BIT(&(iParam0->f_6), 7);
if(iParam1==12){
if(!func_142(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_142(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_142(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_142(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
if(!func_142(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_142(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(iParam0->f_6), 1);
MISC::CLEAR_BIT(&(iParam0->f_6), 0);
}}elseif(iParam0->f_5 >=0 && iParam0->f_5 < 3){
MISC::SET_BIT(&(iParam0->f_6), 0);
MISC::SET_BIT(&(iParam0->f_6), 5);
if(func_141(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 1);
if(func_141(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(!func_141(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam1==11 || iParam1==4 || iParam1==6 || iParam1==1 || iParam1==14 || iParam1==2 || iParam1==8 || iParam1==9 || iParam1==10 || iParam1==7 || iParam1==12){
if(func_144(14)) return;
num=_MPCHAR_STAT_GET_INT(func_140(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 1);
num=_MPCHAR_STAT_GET_INT(func_139(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(func_134(iParam1, iParam0->f_2, &stat)){
num=_MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
if(!IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
return;
}
eMPStat func_139(int iParam0, int iParam1) // Position - 0x47B7{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR;
case 3:
return MP_STAT_CLTHS_ACQUIRED_TORSO;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2;
case 10:
return MP_STAT_CLTHS_ACQUIRED_DECL;
case 1:
return MP_STAT_CLTHS_ACQUIRED_BERD;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS;
case 12:
return MP_STAT_CLTHS_ACQUIRED_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_1;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_1;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_1;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_1;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_1;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_2;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_2;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_2;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_2;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_2;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_3;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_3;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_3;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_4;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_4;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_4;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_5;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_5;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_5;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_6;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_6;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_6;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_7;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_7;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_7;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_ACQUIRED_JBIB;
}
eMPStat func_140(int iParam0, int iParam1) // Position - 0x4BB2{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR;
case 3:
return MP_STAT_CLTHS_AVAILABLE_TORSO;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2;
case 10:
return MP_STAT_CLTHS_AVAILABLE_DECL;
case 1:
return MP_STAT_CLTHS_AVAILABLE_BERD;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS;
case 12:
return MP_STAT_CLTHS_AVAILABLE_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_1;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_1;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_1;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_1;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_1;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_2;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_2;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_2;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_2;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_2;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_3;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_3;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_3;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_4;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_4;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_4;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_5;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_5;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_5;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_6;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_6;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_6;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_7;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_7;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_7;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_AVAILABLE_JBIB;
}
BOOL func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4FAD{
if(iParam0==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
}elseif(iParam0==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
}elseif(iParam0==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
}elseif(iParam2==6){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
}elseif(iParam2==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
}elseif(iParam2==8){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
}elseif(iParam2==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
}}elseif(iParam0==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
}}elseif(iParam0==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
}}elseif(iParam0==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
}}elseif(iParam0==13){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
}}
return false;
}
BOOL func_142(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x5E50{
int num;
int num2;
eMPStat stat;
int num3;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_143(hParam0, iParam1, &stat, &num2, bParam2, bParam3)){
num3=_MPCHAR_STAT_GET_INT(stat, num, 0);
return IS_BIT_SET(num3, num2);
}
return false;
}
BOOL func_143(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5E8F{
int fmMaleShopPedApparelItemIndex;
*uParam2=14192;
if(bParam4 && Global_4539485 || !bParam4 && bParam5){
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}else{
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}
fmMaleShopPedApparelItemIndex=-1;
if(bParam4)if(Global_4539485) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
elseif(bParam5) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
if(fmMaleShopPedApparelItemIndex==-1) return false;
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
case 79:
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
case 79:
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
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
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=fmMaleShopPedApparelItemIndex % 32;
return *uParam2 !=14192;
}
BOOL func_144(int iParam0) // Position - 0x869F{
return Global_43257==iParam0;
}

int func_145(int iParam0) // Position - 0x86AD{
switch (iParam0){
case -1:
return 0;
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
return 0;
case 10:
return 1;
case 11:
return 0;
case 12:
return 0;
case 13:
return 0;
}
return 0;
}


void func_146(int iParam0, Hash hParam1) // Position - 0x8781{
int num;
num=0;
Global_78341[0 /*14*/].f_5=4;
func_147(num, iParam0, 0, hParam1);
return;
}


void func_147(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x87A1{
int num;
int num2;
Hash hash;
Ped ped;
Ped ped2;
Hash outProp;
int num3;
int componentId;
int num4;
Hash outComponent;
int componentId2;
int num5;
num=iParam1 - iParam2;
num=num;
if(num < 0) return;
num2=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
ped=iParam1 - iParam2;
if(ped >=0){
ped2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
if(ped2 > ped){
PED::APPLY_PED_BLOOD_BY_ZONE(ped, &hash);
Global_2883588=hash.f_1;
Global_2883589=hash;
func_138(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
return;
}}}elseif(iParam0==13){
func_138(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - iParam2;
if(componentId >=0){
num4=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
if(num4 > componentId){
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
if(outProp.f_6==0) num3=9;
elseif(outProp.f_6==1) num3=10;
elseif(outProp.f_6==2) num3=2;
elseif(outProp.f_6==3) num3=3;
elseif(outProp.f_6==4) num3=4;
elseif(outProp.f_6==5) num3=5;
elseif(outProp.f_6==6) num3=6;
elseif(outProp.f_6==7) num3=7;
elseif(outProp.f_6==8) num3=8;
else num3=-1;
Global_2883588=outProp.f_1;
Global_2883589=outProp;
func_138(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num3, 2, outProp.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
if(hParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_138(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}
componentId2=iParam1 - iParam2;
if(componentId2 >=0){
num5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_148(iParam0));
if(num5 > componentId2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_138(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}}}
return;
}

int func_148(int iParam0) // Position - 0x8A27{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}


void func_149(int iParam0, Hash hParam1) // Position - 0x8AD7{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num6, iParam0, 9, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num3, 16);
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_150(int iParam0, Hash hParam1) // Position - 0x8BD9{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
switch (iParam0){
case 0:
num2=0;
num3=0;
flag=true;
break;
case 1:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S1" /*The Indie Heart*/, 16);
break;
case 2:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S2" /*The Kitten*/, 16);
break;
case 3:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S3" /*The Vacation*/, 16);
break;
case 4:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S4" /*The Girly*/, 16);
break;
case 5:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S5" /*The Standout*/, 16);
break;
case 6:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S6" /*The Streetwise*/, 16);
break;
case 7:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S7" /*The Butterfly*/, 16);
break;
case 8:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S8" /*The Festival*/, 16);
break;
case 9:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P1" /*The Interview*/, 16);
break;
case 10:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P2" /*The Red Hot*/, 16);
break;
case 11:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P3" /*The Upmarket*/, 16);
break;
case 12:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P4" /*The Power Suit*/, 16);
break;
case 13:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P5" /*The Versatile*/, 16);
break;
case 14:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P6" /*The Egyptian*/, 16);
break;
case 15:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P7" /*The Chalet*/, 16);
break;
case 16:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P8" /*The Cougar*/, 16);
break;
case 17:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P9" /*The Spring Break*/, 16);
break;
case 18:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P10" /*The Yacht Club*/, 16);
break;
case 19:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B1" /*The Holla Over*/, 16);
break;
case 20:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B2" /*The Tough Chick*/, 16);
break;
case 21:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B3" /*The Chica*/, 16);
break;
case 22:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B4" /*The Tomboy*/, 16);
break;
case 23:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B5" /*The Basics*/, 16);
break;
case 24:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B6" /*The Young Luck*/, 16);
break;
case 25:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B7" /*The Workout*/, 16);
break;
case 26:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B8" /*The She Devil*/, 16);
break;
case 27:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B9" /*The Beach Beauty*/, 16);
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num6, iParam0, 28, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_151(int iParam0, Hash hParam1) // Position - 0x8EB8{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=14;
num6=0;
switch (iParam0){
case 0:
num=-1;
num2=0;
value=0;
num3=0;
break;
case 1:
num=-1;
num2=0;
value=0;
num3=1;
break;
case 2:
num=-1;
num2=0;
value=0;
num3=2;
break;
case 3:
num=-1;
num2=0;
value=0;
num3=3;
break;
case 4:
num=-1;
num2=0;
value=0;
num3=4;
break;
case 5:
num=-1;
num2=0;
value=0;
num3=5;
break;
case 6:
num=-1;
num2=0;
value=0;
num3=6;
break;
case 7:
num=-1;
num2=0;
value=0;
num3=7;
break;
case 8:
num=-1;
num2=0;
value=0;
num3=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_0" /*Red Ear Defenders*/, 16);
num=0;
num2=0;
value=65;
num3=0;
num6=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_1" /*Magenta Ear Defenders*/, 16);
num=0;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_2" /*Green Ear Defenders*/, 16);
num=0;
num2=2;
value=85;
num3=0;
num6=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_3" /*Yellow Ear Defenders*/, 16);
num=0;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_4" /*Desert Camo Ear Defenders*/, 16);
num=0;
num2=4;
value=235;
num3=0;
num6=1;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_5" /*Blue Ear Defenders*/, 16);
num=0;
num2=5;
value=80;
num3=0;
num6=1;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_6" /*Pale Blue Ear Defenders*/, 16);
num=0;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_7" /*Orange Ear Defenders*/, 16);
num=0;
num2=7;
value=90;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_1_0", 16);
num=1;
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_0", 16);
num=2;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_1" /*Pink Accent Cowgirl Hat*/, 16);
num=2;
num2=1;
value=5000;
num3=0;
num6=1;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_2", 16);
num=2;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_3", 16);
num=2;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_4", 16);
num=2;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_5", 16);
num=2;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_6", 16);
num=2;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_7", 16);
num=2;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_0", 16);
num=3;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_1", 16);
num=3;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_2", 16);
num=3;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_3", 16);
num=3;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_4", 16);
num=3;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_5", 16);
num=3;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_6", 16);
num=3;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_7" /*Gray Plaid Canvas Hat*/, 16);
num=3;
num2=7;
value=120;
num3=0;
num6=1;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_0" /*Black LS Fitted Cap*/, 16);
num=4;
num2=0;
value=400;
num3=0;
num6=1;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_1" /*Fruntalot Fitted Cap*/, 16);
num=4;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_2" /*Broker Fitted Cap*/, 16);
num=4;
num2=2;
value=375;
num3=0;
num6=1;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_3" /*SA Fitted Cap*/, 16);
num=4;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_4" /*SA Boars Fitted Cap*/, 16);
num=4;
num2=4;
value=65;
num3=0;
num6=1;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_5" /*Stank Fitted Cap*/, 16);
num=4;
num2=5;
value=65;
num3=0;
num6=1;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_6" /*Red Mist XI Fitted Cap*/, 16);
num=4;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_7" /*LS Corkers Fitted Cap*/, 16);
num=4;
num2=7;
value=325;
num3=0;
num6=1;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_0" /*Rearwall Black Beanie*/, 16);
num=5;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_1" /*Crevis Ash Beanie*/, 16);
num=5;
num2=1;
value=30;
num3=0;
num6=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_2" /*Crevis Pink Beanie*/, 16);
num=5;
num2=2;
value=35;
num3=0;
num6=1;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_3" /*LS Panic Beanie*/, 16);
num=5;
num2=3;
value=40;
num3=0;
num6=1;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_4" /*SA Beanie*/, 16);
num=5;
num2=4;
value=35;
num3=0;
num6=1;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_5" /*Hawaiian Snow Blue Beanie*/, 16);
num=5;
num2=5;
value=30;
num3=0;
num6=1;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_6" /*Rearwall Lime Beanie*/, 16);
num=5;
num2=6;
value=35;
num3=0;
num6=1;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_7" /*Hawaiian Snow Plaid Beanie*/, 16);
num=5;
num2=7;
value=255;
num3=0;
num6=1;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_0" /*Black Military Cap*/, 16);
num=6;
num2=0;
value=360;
num3=0;
num6=1;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_1" /*Green Military Cap*/, 16);
num=6;
num2=1;
value=195;
num3=0;
num6=1;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_2" /*Leopard Military Cap*/, 16);
num=6;
num2=2;
value=3970;
num3=0;
num6=1;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_3" /*Tan Military Cap*/, 16);
num=6;
num2=3;
value=135;
num3=0;
num6=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_4" /*Denim Military Cap*/, 16);
num=6;
num2=4;
value=1355;
num3=0;
num6=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_5" /*Field Camo Military Cap*/, 16);
num=6;
num2=5;
value=110;
num3=0;
num6=1;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_6" /*Desert Camo Military Cap*/, 16);
num=6;
num2=6;
value=140;
num3=0;
num6=1;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_7" /*Woodland Camo Military Cap*/, 16);
num=6;
num2=7;
value=130;
num3=0;
num6=1;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_0" /*Navy Flat Cap*/, 16);
num=7;
num2=0;
value=230;
num3=0;
num6=1;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_1" /*White Flat Cap*/, 16);
num=7;
num2=1;
value=195;
num3=0;
num6=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_2" /*Gray Plaid Flat Cap*/, 16);
num=7;
num2=2;
value=515;
num3=0;
num6=1;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_3" /*Brown Plaid Flat Cap*/, 16);
num=7;
num2=3;
value=545;
num3=0;
num6=1;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_4" /*Red Flat Cap*/, 16);
num=7;
num2=4;
value=195;
num3=0;
num6=1;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_5" /*Pink Flat Cap*/, 16);
num=7;
num2=5;
value=155;
num3=0;
num6=1;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_6" /*Green Plaid Flat Cap*/, 16);
num=7;
num2=6;
value=155;
num3=0;
num6=1;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_7" /*Fruity Plaid Flat Cap*/, 16);
num=7;
num2=7;
value=1440;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_0", 16);
num=8;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_1", 16);
num=8;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_2", 16);
num=8;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_3", 16);
num=8;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_4", 16);
num=8;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_5", 16);
num=8;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_6", 16);
num=8;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_7", 16);
num=8;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_0" /*Fruit Cap*/, 16);
num=9;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_1" /*247 Cap*/, 16);
num=9;
num2=1;
value=25;
num3=0;
num6=1;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_2" /*Fred's Cap*/, 16);
num=9;
num2=2;
value=30;
num3=0;
num6=1;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_3" /*US Post LS Cap*/, 16);
num=9;
num2=3;
value=25;
num3=0;
num6=1;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_4" /*Swallow Cap*/, 16);
num=9;
num2=4;
value=50;
num3=0;
num6=1;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_5" /*CNT Cap*/, 16);
num=9;
num2=5;
value=40;
num3=0;
num6=1;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_6" /*Peachy Chics Snakeskin Cap*/, 16);
num=9;
num2=6;
value=575;
num3=0;
num6=1;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_7" /*Peachy Chics Leopard Cap*/, 16);
num=9;
num2=7;
value=605;
num3=0;
num6=1;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_0", 16);
num=10;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_1", 16);
num=10;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_2", 16);
num=10;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_3", 16);
num=10;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_4", 16);
num=10;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_5", 16);
num=10;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_6", 16);
num=10;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_7" /*Tan Patterned Cap*/, 16);
num=10;
num2=7;
value=285;
num3=0;
num6=1;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_0", 16);
num=11;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_1" /*Black Sun Hat*/, 16);
num=11;
num2=1;
value=2125;
num3=0;
num6=1;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_2", 16);
num=11;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_3", 16);
num=11;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_4", 16);
num=11;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_5", 16);
num=11;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_6", 16);
num=11;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_7", 16);
num=11;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_0" /*Black Saggy Beanie*/, 16);
num=12;
num2=0;
value=75;
num3=0;
num6=1;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_1", 16);
num=12;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_2", 16);
num=12;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_3", 16);
num=12;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_4", 16);
num=12;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_5", 16);
num=12;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_6" /*Hawaiian Snow Saggy Beanie*/, 16);
num=12;
num2=6;
value=75;
num3=0;
num6=1;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_7" /*Yeti Saggy Beanie*/, 16);
num=12;
num2=7;
value=295;
num3=0;
num6=1;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_0" /*Tan Straw Hat*/, 16);
num=13;
num2=0;
value=195;
num3=0;
num6=1;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_1" /*Two-Tone Straw Hat*/, 16);
num=13;
num2=1;
value=200;
num3=0;
num6=1;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_2" /*Brown Straw Hat*/, 16);
num=13;
num2=2;
value=160;
num3=0;
num6=1;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_3" /*Safari Straw Hat*/, 16);
num=13;
num2=3;
value=855;
num3=0;
num6=1;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_4" /*Gray Patterned Straw Hat*/, 16);
num=13;
num2=4;
value=1615;
num3=0;
num6=1;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_5" /*Brown Striped Straw Hat*/, 16);
num=13;
num2=5;
value=1130;
num3=0;
num6=1;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_6" /*Gray Straw Hat*/, 16);
num=13;
num2=6;
value=165;
num3=0;
num6=1;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_7" /*Navy Straw Hat*/, 16);
num=13;
num2=7;
value=215;
num3=0;
num6=1;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_0" /*Black Beret*/, 16);
num=14;
num2=0;
value=145;
num3=0;
num6=1;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_1" /*Cherry Beret*/, 16);
num=14;
num2=1;
value=250;
num3=0;
num6=1;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_2" /*Purple Beret*/, 16);
num=14;
num2=2;
value=110;
num3=0;
num6=1;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_3" /*White Beret*/, 16);
num=14;
num2=3;
value=145;
num3=0;
num6=1;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_4" /*Gray Beret*/, 16);
num=14;
num2=4;
value=105;
num3=0;
num6=1;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_5" /*Navy Beret*/, 16);
num=14;
num2=5;
value=105;
num3=0;
num6=1;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_6" /*Tan Beret*/, 16);
num=14;
num2=6;
value=115;
num3=0;
num6=1;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_7" /*Magenta Beret*/, 16);
num=14;
num2=7;
value=115;
num3=0;
num6=1;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_0" /*Beat Off White Headphones*/, 16);
num=15;
num2=0;
value=390;
num3=0;
num6=1;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_1" /*Beat Off Black Headphones*/, 16);
num=15;
num2=1;
value=395;
num3=0;
num6=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_2" /*Beat Off Red Headphones*/, 16);
num=15;
num2=2;
value=595;
num3=0;
num6=1;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_3" /*Beat Off Gray Headphones*/, 16);
num=15;
num2=3;
value=425;
num3=0;
num6=1;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_4" /*Beat Off Navy Headphones*/, 16);
num=15;
num2=4;
value=600;
num3=0;
num6=1;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_5" /*Beat Off Purple Headphones*/, 16);
num=15;
num2=5;
value=590;
num3=0;
num6=1;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_6" /*Beat Off Pink Headphones*/, 16);
num=15;
num2=6;
value=595;
num3=0;
num6=1;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_7" /*Beat Off Orange Headphones*/, 16);
num=15;
num2=7;
value=555;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_0" /*Western MC Yellow Helmet*/, 16);
num=16;
num2=0;
value=1060;
num3=0;
num6=2;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_1" /*Steel Horse Blue Helmet*/, 16);
num=16;
num2=1;
value=1400;
num3=0;
num6=2;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_2" /*Steel Horse Orange Helmet*/, 16);
num=16;
num2=2;
value=1315;
num3=0;
num6=2;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_3" /*Western MC Green Helmet*/, 16);
num=16;
num2=3;
value=1230;
num3=0;
num6=2;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_4" /*Western MC Red Helmet*/, 16);
num=16;
num2=4;
value=1145;
num3=0;
num6=2;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_5" /*Steel Horse Black Helmet*/, 16);
num=16;
num2=5;
value=8450;
num3=0;
num6=2;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_6" /*Black Helmet*/, 16);
num=16;
num2=6;
value=675;
num3=0;
num6=2;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_7" /*Western MC Lilac Helmet*/, 16);
num=16;
num2=7;
value=8750;
num3=0;
num6=2;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_0" /*Blue Open-Face Helmet*/, 16);
num=17;
num2=0;
value=975;
num3=0;
num6=2;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_1" /*Orange Open-Face Helmet*/, 16);
num=17;
num2=1;
value=750;
num3=0;
num6=2;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_2" /*Pale Blue Open-Face Helmet*/, 16);
num=17;
num2=2;
value=865;
num3=0;
num6=2;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_3" /*Red Open-Face Helmet*/, 16);
num=17;
num2=3;
value=890;
num3=0;
num6=2;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_4" /*Gray Open-Face Helmet*/, 16);
num=17;
num2=4;
value=730;
num3=0;
num6=2;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_5" /*Black Open-Face Helmet*/, 16);
num=17;
num2=5;
value=650;
num3=0;
num6=2;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_6" /*Pink Open-Face Helmet*/, 16);
num=17;
num2=6;
value=645;
num3=0;
num6=2;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_7" /*White Open-Face Helmet*/, 16);
num=17;
num2=7;
value=755;
num3=0;
num6=2;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_0" /*Shatter Pattern Helmet*/, 16);
num=18;
num2=0;
value=13850;
num3=0;
num6=2;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_1" /*Stars Helmet*/, 16);
num=18;
num2=1;
value=2900;
num3=0;
num6=2;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_2" /*Squared Helmet*/, 16);
num=18;
num2=2;
value=2895;
num3=0;
num6=2;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_3" /*Crimson Helmet*/, 16);
num=18;
num2=3;
value=12500;
num3=0;
num6=2;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_4" /*Skull Helmet*/, 16);
num=18;
num2=4;
value=15000;
num3=0;
num6=2;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_5" /*Ace of Spades Helmet*/, 16);
num=18;
num2=5;
value=14750;
num3=0;
num6=2;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_6" /*Flamejob Helmet*/, 16);
num=18;
num2=6;
value=13150;
num3=0;
num6=2;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_7" /*White Helmet*/, 16);
num=18;
num2=7;
value=2925;
num3=0;
num6=2;
break;
}
switch (iParam0){
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_0" /*Hornet Sports Shades*/, 16);
num=0;
num2=0;
value=65;
num3=1;
num6=3;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_1" /*Two-Tone Sports Shades*/, 16);
num=0;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_2" /*Orange Sports Shades*/, 16);
num=0;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_3" /*Blue Sports Shades*/, 16);
num=0;
num2=3;
value=75;
num3=1;
num6=3;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_4" /*Marble Sports Shades*/, 16);
num=0;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_5" /*Purple Sports Shades*/, 16);
num=0;
num2=5;
value=80;
num3=1;
num6=3;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_6" /*Topaz Sports Shades*/, 16);
num=0;
num2=6;
value=85;
num3=1;
num6=3;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_7" /*Beige Sports Shades*/, 16);
num=0;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_8", 16);
num=0;
num2=8;
value=820;
num3=1;
num6=3;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_9", 16);
num=0;
num2=9;
value=435;
num3=1;
num6=3;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_10", 16);
num=0;
num2=10;
value=500;
num3=1;
num6=3;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_0" /*Copper Marbles*/, 16);
num=1;
num2=0;
value=160;
num3=1;
num6=3;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_1" /*Blue Tint Marbles*/, 16);
num=1;
num2=1;
value=165;
num3=1;
num6=3;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_2" /*Black Marbles*/, 16);
num=1;
num2=2;
value=170;
num3=1;
num6=3;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_3" /*Purple Marbles*/, 16);
num=1;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_4" /*Teal Marbles*/, 16);
num=1;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_5" /*Red Tint Marbles*/, 16);
num=1;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_6" /*White Marbles*/, 16);
num=1;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_7" /*Pink Tint Marbles*/, 16);
num=1;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_8", 16);
num=1;
num2=8;
value=970;
num3=1;
num6=3;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_9", 16);
num=1;
num2=9;
value=585;
num3=1;
num6=3;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_10", 16);
num=1;
num2=10;
value=650;
num3=1;
num6=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_0" /*Marble Mademoiselles*/, 16);
num=2;
num2=0;
value=180;
num3=1;
num6=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_1" /*Copper Mademoiselles*/, 16);
num=2;
num2=1;
value=110;
num3=1;
num6=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_2" /*Orange Tint Mademoiselles*/, 16);
num=2;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_3" /*Pink Tint Mademoiselles*/, 16);
num=2;
num2=3;
value=120;
num3=1;
num6=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_4" /*Walnut Mademoiselles*/, 16);
num=2;
num2=4;
value=595;
num3=1;
num6=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_5" /*Black Mademoiselles*/, 16);
num=2;
num2=5;
value=160;
num3=1;
num6=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_6" /*Vintage Red Mademoiselles*/, 16);
num=2;
num2=6;
value=545;
num3=1;
num6=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_7" /*Gold Mademoiselles*/, 16);
num=2;
num2=7;
value=590;
num3=1;
num6=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_8", 16);
num=2;
num2=8;
value=1125;
num3=1;
num6=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_9", 16);
num=2;
num2=9;
value=740;
num3=1;
num6=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_10", 16);
num=2;
num2=10;
value=805;
num3=1;
num6=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_0" /*Zebra Shields*/, 16);
num=3;
num2=0;
value=6250;
num3=1;
num6=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_1" /*Ombre Shields*/, 16);
num=3;
num2=1;
value=4065;
num3=1;
num6=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_2" /*Flame Shields*/, 16);
num=3;
num2=2;
value=3585;
num3=1;
num6=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_3" /*Violet Shields*/, 16);
num=3;
num2=3;
value=4075;
num3=1;
num6=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_4" /*Sun Shields*/, 16);
num=3;
num2=4;
value=4935;
num3=1;
num6=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_5" /*Silver Accent Shields*/, 16);
num=3;
num2=5;
value=130;
num3=1;
num6=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_6" /*Party Shields*/, 16);
num=3;
num2=6;
value=5600;
num3=1;
num6=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_7" /*Gold Shields*/, 16);
num=3;
num2=7;
value=4790;
num3=1;
num6=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_8", 16);
num=3;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_9", 16);
num=3;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_10", 16);
num=3;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_0" /*Deep Walnut Retro*/, 16);
num=4;
num2=0;
value=2245;
num3=1;
num6=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_1" /*Marble Retro*/, 16);
num=4;
num2=1;
value=250;
num3=1;
num6=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_2" /*Beige Retro*/, 16);
num=4;
num2=2;
value=210;
num3=1;
num6=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_3" /*Aqua Retro*/, 16);
num=4;
num2=3;
value=245;
num3=1;
num6=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_4" /*Dice Retro*/, 16);
num=4;
num2=4;
value=1205;
num3=1;
num6=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_5" /*Black Retro*/, 16);
num=4;
num2=5;
value=205;
num3=1;
num6=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_6" /*Toffee Retro*/, 16);
num=4;
num2=6;
value=2215;
num3=1;
num6=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_7" /*Red Retro*/, 16);
num=4;
num2=7;
value=215;
num3=1;
num6=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_8", 16);
num=4;
num2=8;
value=2835;
num3=1;
num6=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_9", 16);
num=4;
num2=9;
value=2450;
num3=1;
num6=3;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_10", 16);
num=4;
num2=10;
value=2515;
num3=1;
num6=3;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_0", 16);
num=5;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_1", 16);
num=5;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_2", 16);
num=5;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_3", 16);
num=5;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_4", 16);
num=5;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_5", 16);
num=5;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_6", 16);
num=5;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_7", 16);
num=5;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_8", 16);
num=5;
num2=8;
value=50;
num3=1;
num6=3;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_9", 16);
num=5;
num2=9;
value=50;
num3=1;
num6=3;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_10", 16);
num=5;
num2=10;
value=50;
num3=1;
num6=3;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_0" /*Purple Tint Bugs*/, 16);
num=6;
num2=0;
value=5000;
num3=1;
num6=3;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_1", 16);
num=6;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_2", 16);
num=6;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_3", 16);
num=6;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_4", 16);
num=6;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_5", 16);
num=6;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_6", 16);
num=6;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_7", 16);
num=6;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_8", 16);
num=6;
num2=8;
value=2820;
num3=1;
num6=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_9", 16);
num=6;
num2=9;
value=2435;
num3=1;
num6=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_10", 16);
num=6;
num2=10;
value=2500;
num3=1;
num6=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_0" /*Champagne Figure 8s*/, 16);
num=7;
num2=0;
value=4815;
num3=1;
num6=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_1" /*Platinum Figure 8s*/, 16);
num=7;
num2=1;
value=4795;
num3=1;
num6=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_2" /*Sapphire Figure 8s*/, 16);
num=7;
num2=2;
value=4305;
num3=1;
num6=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_3" /*Amethyst Figure 8s*/, 16);
num=7;
num2=3;
value=4305;
num3=1;
num6=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_4" /*Gold Figure 8s*/, 16);
num=7;
num2=4;
value=4965;
num3=1;
num6=3;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_5" /*White Figure 8s*/, 16);
num=7;
num2=5;
value=480;
num3=1;
num6=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_6" /*Gray Figure 8s*/, 16);
num=7;
num2=6;
value=465;
num3=1;
num6=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_7" /*Garnet Figure 8s*/, 16);
num=7;
num2=7;
value=4320;
num3=1;
num6=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_8", 16);
num=7;
num2=8;
value=2390;
num3=1;
num6=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_9", 16);
num=7;
num2=9;
value=2005;
num3=1;
num6=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_10", 16);
num=7;
num2=10;
value=2070;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_0" /*Orange Tint Squared*/, 16);
num=8;
num2=0;
value=500;
num3=1;
num6=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_1", 16);
num=8;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_2", 16);
num=8;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_3", 16);
num=8;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_4", 16);
num=8;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_5", 16);
num=8;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_6", 16);
num=8;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_7", 16);
num=8;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_8", 16);
num=8;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_9", 16);
num=8;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_10", 16);
num=8;
num2=10;
value=325;
num3=1;
num6=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_0" /*Lime Tint Shooters*/, 16);
num=9;
num2=0;
value=70;
num3=1;
num6=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_1" /*Orange Tint Shooters*/, 16);
num=9;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_2" /*Blue Shooters*/, 16);
num=9;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_3" /*Tropic Shooters*/, 16);
num=9;
num2=3;
value=570;
num3=1;
num6=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_4" /*Fly Shooters*/, 16);
num=9;
num2=4;
value=525;
num3=1;
num6=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_5" /*Crimson Shooters*/, 16);
num=9;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_6" /*Green Tint Shooters*/, 16);
num=9;
num2=6;
value=75;
num3=1;
num6=3;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_7" /*Pink Shooters*/, 16);
num=9;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_8", 16);
num=9;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_9", 16);
num=9;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_10", 16);
num=9;
num2=10;
value=325;
num3=1;
num6=3;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_0" /*Luxury Ice Sports*/, 16);
num=10;
num2=0;
value=4065;
num3=1;
num6=3;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_1" /*Black Sports*/, 16);
num=10;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_2" /*Green Sports*/, 16);
num=10;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_3" /*Luxury Cowhide Sports*/, 16);
num=10;
num2=3;
value=4275;
num3=1;
num6=3;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_4" /*Orange Sports*/, 16);
num=10;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_5" /*Black Pattern Sports*/, 16);
num=10;
num2=5;
value=80;
num3=1;
num6=3;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_6" /*Blue Pattern Sports*/, 16);
num=10;
num2=6;
value=85;
num3=1;
num6=3;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_7" /*Pink Pattern Sports*/, 16);
num=10;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_8", 16);
num=10;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_9", 16);
num=10;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_10", 16);
num=10;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 276:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_0" /*Pewter Aviators*/, 16);
num=11;
num2=0;
value=3660;
num3=1;
num6=3;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_1" /*Steel Aviators*/, 16);
num=11;
num2=1;
value=4165;
num3=1;
num6=3;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_2" /*Bronze Aviators*/, 16);
num=11;
num2=2;
value=3670;
num3=1;
num6=3;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_3" /*Black Aviators*/, 16);
num=11;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_4" /*Neon Aviators*/, 16);
num=11;
num2=4;
value=3620;
num3=1;
num6=3;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_5" /*Copper Aviators*/, 16);
num=11;
num2=5;
value=3610;
num3=1;
num6=3;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_6" /*Gold Aviators*/, 16);
num=11;
num2=6;
value=4140;
num3=1;
num6=3;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_7" /*Slate Aviators*/, 16);
num=11;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_0", 16);
num=12;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_1", 16);
num=12;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_2", 16);
num=12;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_3", 16);
num=12;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_4", 16);
num=12;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_5", 16);
num=12;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_6", 16);
num=12;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_7", 16);
num=12;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_0", 16);
num=13;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_1", 16);
num=13;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_2", 16);
num=13;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_3", 16);
num=13;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_4", 16);
num=13;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_5", 16);
num=13;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_6", 16);
num=13;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_7", 16);
num=13;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_0" /*Black Cat Eyes*/, 16);
num=14;
num2=0;
value=325;
num3=1;
num6=3;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_1" /*Brown Marble Cat Eyes*/, 16);
num=14;
num2=1;
value=110;
num3=1;
num6=3;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_2" /*Pink Cat Eyes*/, 16);
num=14;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_3" /*Green Marble Cat Eyes*/, 16);
num=14;
num2=3;
value=120;
num3=1;
num6=3;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_4" /*Red Cat Eyes*/, 16);
num=14;
num2=4;
value=135;
num3=1;
num6=3;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_5" /*Teal Cat Eyes*/, 16);
num=14;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_6" /*Purple Cat Eyes*/, 16);
num=14;
num2=6;
value=115;
num3=1;
num6=3;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_7" /*Blue Cat Eyes*/, 16);
num=14;
num2=7;
value=120;
num3=1;
num6=3;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_8", 16);
num=14;
num2=8;
value=1490;
num3=1;
num6=3;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_9", 16);
num=14;
num2=9;
value=1105;
num3=1;
num6=3;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_10", 16);
num=14;
num2=10;
value=1170;
num3=1;
num6=3;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_0", 16);
num=15;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_1", 16);
num=15;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_2", 16);
num=15;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_3", 16);
num=15;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_4", 16);
num=15;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_5", 16);
num=15;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_6", 16);
num=15;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 318:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_7", 16);
num=15;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
}
switch (iParam0){
case 319:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_0", 16);
num=0;
num2=0;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 320:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_1", 16);
num=0;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 321:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_2", 16);
num=0;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 322:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_3", 16);
num=0;
num2=3;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 323:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_4" /*Pewter Watch*/, 16);
num=0;
num2=4;
value=825;
num3=6;
num6=4;
break;
case 324:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_0", 16);
num=1;
num2=0;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 325:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_1", 16);
num=1;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 326:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_2", 16);
num=1;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
}
if(num6==1){
num7=iParam0 - 10;
if(num7 >=0 && num7 < 121){
if(num7 > 8) num7=num7 - 1;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2054[num7] * Global_296940.f_26);
}}elseif(num6==2){
num8=iParam0 - 131;
if(num8 >=0 && num8 < 24) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2175[num8] * Global_296940.f_27);
}elseif(num6==3){
num9=iParam0 - 155;
if(num9 >=0 && num9 < 128) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2200[num9] * Global_296940.f_56);
}elseif(num6==4){
num10=iParam0 - 319;
if(num10 >=0 && num10 < 10) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2329[num10] * Global_296940.f_28);
}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 327, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_26);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_56);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_28);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_152(int iParam0, Hash hParam1) // Position - 0xBC8D{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
num2=0;
num3=0;
num=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=1;
num3=0;
num=10000;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=2;
num3=0;
num=5000;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=3;
num3=0;
num=10000;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=4;
num3=0;
num=5000;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=5;
num3=0;
num=10000;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num6, iParam0, 6, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_153(int iParam0, Hash hParam1) // Position - 0xBD92{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=7;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
if(Global_262145.f_4151 !=-1) value=Global_262145.f_4151;
else value=310;
break;
case 2:
num=1;
num2=1;
if(Global_262145.f_4152 !=-1) value=Global_262145.f_4152;
else value=125;
break;
case 3:
num=1;
num2=2;
if(Global_262145.f_4153 !=-1) value=Global_262145.f_4153;
else value=145;
break;
case 4:
num=1;
num2=3;
if(Global_262145.f_4154 !=-1) value=Global_262145.f_4154;
else value=130;
break;
case 5:
num=1;
num2=4;
if(Global_262145.f_4155 !=-1) value=Global_262145.f_4155;
else value=265;
break;
case 6:
num=1;
num2=5;
if(Global_262145.f_4156 !=-1) value=Global_262145.f_4156;
else value=280;
break;
case 7:
num=2;
num2=0;
if(Global_262145.f_4157 !=-1) value=Global_262145.f_4157;
else value=295;
break;
case 8:
num=2;
num2=1;
if(Global_262145.f_4158 !=-1) value=Global_262145.f_4158;
else value=95;
break;
case 9:
num=2;
num2=2;
if(Global_262145.f_4159 !=-1) value=Global_262145.f_4159;
else value=85;
break;
case 10:
num=2;
num2=3;
if(Global_262145.f_4160 !=-1) value=Global_262145.f_4160;
else value=95;
break;
case 11:
num=2;
num2=4;
if(Global_262145.f_4161 !=-1) value=Global_262145.f_4161;
else value=105;
break;
case 12:
num=2;
num2=5;
if(Global_262145.f_4162 !=-1) value=Global_262145.f_4162;
else value=95;
break;
case 13:
num=3;
num2=0;
if(Global_262145.f_4163 !=-1) value=Global_262145.f_4163;
else value=35;
break;
case 14:
num=3;
num2=1;
if(Global_262145.f_4164 !=-1) value=Global_262145.f_4164;
else value=35;
break;
case 15:
num=3;
num2=2;
if(Global_262145.f_4165 !=-1) value=Global_262145.f_4165;
else value=30;
break;
case 16:
num=3;
num2=3;
if(Global_262145.f_4166 !=-1) value=Global_262145.f_4166;
else value=40;
break;
case 17:
num=3;
num2=4;
if(Global_262145.f_4167 !=-1) value=Global_262145.f_4167;
else value=35;
break;
case 18:
num=3;
num2=5;
if(Global_262145.f_4168 !=-1) value=Global_262145.f_4168;
else value=35;
break;
case 19:
num=4;
num2=0;
value=0;
flag=true;
break;
case 20:
num=4;
num2=1;
value=0;
flag=true;
break;
case 21:
num=4;
num2=2;
if(Global_262145.f_4169 !=-1) value=Global_262145.f_4169;
else value=355;
break;
case 22:
num=4;
num2=3;
if(Global_262145.f_4170 !=-1) value=Global_262145.f_4170;
else value=370;
break;
case 23:
num=4;
num2=4;
value=0;
flag=true;
break;
case 24:
num=4;
num2=5;
value=0;
flag=true;
break;
case 25:
num=5;
num2=0;
value=0;
flag=true;
break;
case 26:
num=5;
num2=1;
value=0;
flag=true;
break;
case 27:
num=5;
num2=2;
value=0;
flag=true;
break;
case 28:
num=5;
num2=3;
value=0;
flag=true;
break;
case 29:
num=5;
num2=4;
if(Global_262145.f_4171 !=-1) value=Global_262145.f_4171;
else value=110;
break;
case 30:
num=5;
num2=5;
if(Global_262145.f_4172 !=-1) value=Global_262145.f_4172;
else value=160;
break;
case 31:
num=6;
num2=0;
if(Global_262145.f_4173 !=-1) value=Global_262145.f_4173;
else value=385;
break;
case 32:
num=6;
num2=1;
if(Global_262145.f_4174 !=-1) value=Global_262145.f_4174;
else value=190;
break;
case 33:
num=6;
num2=2;
if(Global_262145.f_4175 !=-1) value=Global_262145.f_4175;
else value=235;
break;
case 34:
num=6;
num2=3;
if(Global_262145.f_4176 !=-1) value=Global_262145.f_4176;
else value=220;
break;
case 35:
num=6;
num2=4;
if(Global_262145.f_4177 !=-1) value=Global_262145.f_4177;
else value=250;
break;
case 36:
num=6;
num2=5;
if(Global_262145.f_4178 !=-1) value=Global_262145.f_4178;
else value=205;
break;
case 37:
num=7;
num2=0;
if(Global_262145.f_4179 !=-1) value=Global_262145.f_4179;
else value=445;
break;
case 38:
num=7;
num2=1;
if(Global_262145.f_4180 !=-1) value=Global_262145.f_4180;
else value=175;
break;
case 39:
num=7;
num2=2;
value=0;
flag=true;
break;
case 40:
num=7;
num2=3;
value=0;
flag=true;
break;
case 41:
num=7;
num2=4;
value=0;
flag=true;
break;
case 42:
num=7;
num2=5;
value=0;
flag=true;
break;
case 43:
num=8;
num2=0;
value=0;
flag=true;
break;
case 44:
num=8;
num2=1;
value=0;
flag=true;
break;
case 45:
num=8;
num2=2;
value=0;
flag=true;
break;
case 46:
num=8;
num2=3;
value=0;
flag=true;
break;
case 47:
num=8;
num2=4;
value=0;
flag=true;
break;
case 48:
num=8;
num2=5;
value=0;
flag=true;
break;
case 49:
num=9;
num2=0;
if(Global_262145.f_4181 !=-1) value=Global_262145.f_4181;
else value=340;
break;
case 50:
num=9;
num2=1;
value=0;
flag=true;
break;
case 51:
num=9;
num2=2;
value=0;
flag=true;
break;
case 52:
num=9;
num2=3;
value=0;
flag=true;
break;
case 53:
num=9;
num2=4;
value=0;
flag=true;
break;
case 54:
num=9;
num2=5;
value=0;
flag=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 55, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_58);
return;
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_58);
TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_154(int iParam0, Hash hParam1) // Position - 0xC56F{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=1;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=965;
break;
case 2:
num=1;
num2=1;
value=960;
break;
case 3:
num=1;
num2=2;
value=9500;
break;
case 4:
num=1;
num2=3;
value=975;
break;
case 5:
num=2;
num2=0;
value=1185;
break;
case 6:
num=2;
num2=1;
value=15000;
break;
case 7:
num=2;
num2=2;
value=1115;
break;
case 8:
num=2;
num2=3;
value=1105;
break;
case 9:
num=3;
num2=0;
value=25000;
break;
case 10:
num=4;
num2=0;
value=510;
break;
case 11:
num=4;
num2=1;
value=530;
break;
case 12:
num=4;
num2=2;
value=5500;
break;
case 13:
num=4;
num2=3;
value=535;
break;
case 14:
num=5;
num2=0;
value=1510;
break;
case 15:
num=5;
num2=1;
value=1530;
break;
case 16:
num=5;
num2=2;
value=14500;
break;
case 17:
num=5;
num2=3;
value=13000;
break;
case 18:
num=6;
num2=0;
value=8000;
break;
case 19:
num=6;
num2=1;
value=1265;
break;
case 20:
num=6;
num2=2;
value=8500;
break;
case 21:
num=6;
num2=3;
value=1210;
break;
case 22:
num=7;
num2=0;
value=2360;
break;
case 23:
num=7;
num2=1;
value=22500;
break;
case 24:
num=7;
num2=2;
value=2375;
break;
case 25:
num=7;
num2=3;
value=2485;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 26, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_29);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0 - 1;
if(num6 >=0 && num6 < 26) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2027[num6] * Global_296940.f_29);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_155(int iParam0, Hash hParam1) // Position - 0xC854{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=6;
switch (iParam0){
case 0:
num=0;
num2=0;
value=1765;
break;
case 1:
num=0;
num2=1;
value=760;
break;
case 2:
num=0;
num2=2;
value=760;
break;
case 3:
num=0;
num2=3;
value=765;
break;
case 4:
num=0;
num2=4;
value=0;
flag=true;
break;
case 5:
num=0;
num2=5;
value=0;
flag=true;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=0;
flag=true;
break;
case 8:
num=0;
num2=8;
value=0;
flag=true;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=0;
flag=true;
break;
case 11:
num=0;
num2=11;
value=0;
flag=true;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=85;
break;
case 17:
num=1;
num2=1;
value=80;
break;
case 18:
num=1;
num2=2;
value=90;
break;
case 19:
num=1;
num2=3;
value=90;
break;
case 20:
num=1;
num2=4;
value=95;
break;
case 21:
num=1;
num2=5;
value=100;
break;
case 22:
num=1;
num2=6;
value=60;
break;
case 23:
num=1;
num2=7;
value=55;
break;
case 24:
num=1;
num2=8;
value=100;
break;
case 25:
num=1;
num2=9;
value=1255;
break;
case 26:
num=1;
num2=10;
value=65;
break;
case 27:
num=1;
num2=11;
value=1050;
break;
case 28:
num=1;
num2=12;
value=1895;
break;
case 29:
num=1;
num2=13;
value=185;
break;
case 30:
num=1;
num2=14;
value=190;
break;
case 31:
num=1;
num2=15;
value=115;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=415;
break;
case 33:
num=2;
num2=1;
value=115;
break;
case 34:
num=2;
num2=2;
value=135;
break;
case 35:
num=2;
num2=3;
value=125;
break;
case 36:
num=2;
num2=4;
value=105;
break;
case 37:
num=2;
num2=5;
value=130;
break;
case 38:
num=2;
num2=6;
value=3530;
break;
case 39:
num=2;
num2=7;
value=2610;
break;
case 40:
num=2;
num2=8;
value=1295;
break;
case 41:
num=2;
num2=9;
value=120;
break;
case 42:
num=2;
num2=10;
value=160;
break;
case 43:
num=2;
num2=11;
value=160;
break;
case 44:
num=2;
num2=12;
value=145;
break;
case 45:
num=2;
num2=13;
value=105;
break;
case 46:
num=2;
num2=14;
value=115;
break;
case 47:
num=2;
num2=15;
value=150;
break;
case 48:
num=3;
num2=0;
value=540;
break;
case 49:
num=3;
num2=1;
value=115;
break;
case 50:
num=3;
num2=2;
value=110;
break;
case 51:
num=3;
num2=3;
value=120;
break;
case 52:
num=3;
num2=4;
value=460;
break;
case 53:
num=3;
num2=5;
value=120;
break;
case 54:
num=3;
num2=6;
value=120;
break;
case 55:
num=3;
num2=7;
value=415;
break;
case 56:
num=3;
num2=8;
value=135;
break;
case 57:
num=3;
num2=9;
value=140;
break;
case 58:
num=3;
num2=10;
value=160;
break;
case 59:
num=3;
num2=11;
value=120;
break;
case 60:
num=3;
num2=12;
value=1025;
break;
case 61:
num=3;
num2=13;
value=1560;
break;
case 62:
num=3;
num2=14;
value=145;
break;
case 63:
num=3;
num2=15;
value=120;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=365;
break;
case 65:
num=4;
num2=1;
value=100;
break;
case 66:
num=4;
num2=2;
value=65;
break;
case 67:
num=4;
num2=3;
value=85;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=50;
break;
case 81:
num=5;
num2=1;
value=35;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=50;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=50;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=2395;
break;
case 97:
num=6;
num2=1;
value=3675;
break;
case 98:
num=6;
num2=2;
value=320;
break;
case 99:
num=6;
num2=3;
value=3875;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
case 112:
num=7;
num2=0;
value=2050;
break;
case 113:
num=7;
num2=1;
value=375;
break;
case 114:
num=7;
num2=2;
value=2105;
break;
case 115:
num=7;
num2=3;
value=345;
break;
case 116:
num=7;
num2=4;
value=380;
break;
case 117:
num=7;
num2=5;
value=340;
break;
case 118:
num=7;
num2=6;
value=385;
break;
case 119:
num=7;
num2=7;
value=4135;
break;
case 120:
num=7;
num2=8;
value=370;
break;
case 121:
num=7;
num2=9;
value=375;
break;
case 122:
num=7;
num2=10;
value=385;
break;
case 123:
num=7;
num2=11;
value=365;
break;
case 124:
num=7;
num2=12;
value=325;
break;
case 125:
num=7;
num2=13;
value=325;
break;
case 126:
num=7;
num2=14;
value=370;
break;
case 127:
num=7;
num2=15;
value=330;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=1025;
break;
case 129:
num=8;
num2=1;
value=390;
break;
case 130:
num=8;
num2=2;
value=400;
break;
case 131:
num=8;
num2=3;
value=390;
break;
case 132:
num=8;
num2=4;
value=365;
break;
case 133:
num=8;
num2=5;
value=410;
break;
case 134:
num=8;
num2=6;
value=4125;
break;
case 135:
num=8;
num2=7;
value=4365;
break;
case 136:
num=8;
num2=8;
value=5365;
break;
case 137:
num=8;
num2=9;
value=6225;
break;
case 138:
num=8;
num2=10;
value=3755;
break;
case 139:
num=8;
num2=11;
value=405;
break;
case 140:
num=8;
num2=12;
value=4115;
break;
case 141:
num=8;
num2=13;
value=2240;
break;
case 142:
num=8;
num2=14;
value=3850;
break;
case 143:
num=8;
num2=15;
value=3110;
break;
case 144:
num=9;
num2=0;
value=1950;
break;
case 145:
num=9;
num2=1;
value=455;
break;
case 146:
num=9;
num2=2;
value=405;
break;
case 147:
num=9;
num2=3;
value=410;
break;
case 148:
num=9;
num2=4;
value=0;
flag=true;
break;
case 149:
num=9;
num2=5;
value=0;
flag=true;
break;
case 150:
num=9;
num2=6;
value=0;
flag=true;
break;
case 151:
num=9;
num2=7;
value=0;
flag=true;
break;
case 152:
num=9;
num2=8;
value=0;
flag=true;
break;
case 153:
num=9;
num2=9;
value=0;
flag=true;
break;
case 154:
num=9;
num2=10;
value=0;
flag=true;
break;
case 155:
num=9;
num2=11;
value=415;
break;
case 156:
num=9;
num2=12;
value=4425;
break;
case 157:
num=9;
num2=13;
value=0;
flag=true;
break;
case 158:
num=9;
num2=14;
value=0;
flag=true;
break;
case 159:
num=9;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=115;
break;
case 161:
num=10;
num2=1;
value=65;
break;
case 162:
num=10;
num2=2;
value=85;
break;
case 163:
num=10;
num2=3;
value=75;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
case 176:
num=11;
num2=0;
value=115;
break;
case 177:
num=11;
num2=1;
value=360;
break;
case 178:
num=11;
num2=2;
value=135;
break;
case 179:
num=11;
num2=3;
value=175;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=0;
flag=true;
break;
case 192:
num=12;
num2=0;
value=0;
flag=true;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=0;
flag=true;
break;
case 197:
num=12;
num2=5;
value=0;
flag=true;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=0;
flag=true;
break;
case 200:
num=12;
num2=8;
value=0;
flag=true;
break;
case 201:
num=12;
num2=9;
value=0;
flag=true;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=0;
flag=true;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=675;
break;
case 209:
num=13;
num2=1;
value=100;
break;
case 210:
num=13;
num2=2;
value=400;
break;
case 211:
num=13;
num2=3;
value=340;
break;
case 212:
num=13;
num2=4;
value=195;
break;
case 213:
num=13;
num2=5;
value=215;
break;
case 214:
num=13;
num2=6;
value=120;
break;
case 215:
num=13;
num2=7;
value=165;
break;
case 216:
num=13;
num2=8;
value=100;
break;
case 217:
num=13;
num2=9;
value=1040;
break;
case 218:
num=13;
num2=10;
value=100;
break;
case 219:
num=13;
num2=11;
value=120;
break;
case 220:
num=13;
num2=12;
value=210;
break;
case 221:
num=13;
num2=13;
value=205;
break;
case 222:
num=13;
num2=14;
value=200;
break;
case 223:
num=13;
num2=15;
value=100;
break;
case 224:
num=14;
num2=0;
value=1420;
break;
case 225:
num=14;
num2=1;
value=445;
break;
case 226:
num=14;
num2=2;
value=435;
break;
case 227:
num=14;
num2=3;
value=420;
break;
case 228:
num=14;
num2=4;
value=425;
break;
case 229:
num=14;
num2=5;
value=435;
break;
case 230:
num=14;
num2=6;
value=425;
break;
case 231:
num=14;
num2=7;
value=430;
break;
case 232:
num=14;
num2=8;
value=3215;
break;
case 233:
num=14;
num2=9;
value=3320;
break;
case 234:
num=14;
num2=10;
value=440;
break;
case 235:
num=14;
num2=11;
value=440;
break;
case 236:
num=14;
num2=12;
value=445;
break;
case 237:
num=14;
num2=13;
value=450;
break;
case 238:
num=14;
num2=14;
value=450;
break;
case 239:
num=14;
num2=15;
value=1255;
break;
case 240:
num=15;
num2=0;
value=750;
break;
case 241:
num=15;
num2=1;
value=165;
break;
case 242:
num=15;
num2=2;
value=460;
break;
case 243:
num=15;
num2=3;
value=190;
break;
case 244:
num=15;
num2=4;
value=195;
break;
case 245:
num=15;
num2=5;
value=200;
break;
case 246:
num=15;
num2=6;
value=205;
break;
case 247:
num=15;
num2=7;
value=210;
break;
case 248:
num=15;
num2=8;
value=215;
break;
case 249:
num=15;
num2=9;
value=220;
break;
case 250:
num=15;
num2=10;
value=455;
break;
case 251:
num=15;
num2=11;
value=175;
break;
case 252:
num=15;
num2=12;
value=800;
break;
case 253:
num=15;
num2=13;
value=790;
break;
case 254:
num=15;
num2=14;
value=175;
break;
case 255:
num=15;
num2=15;
value=190;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1770[num6] * Global_296940.f_25);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_25);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_156(int iParam0, Hash hParam1) // Position - 0xDE7B{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=4;
switch (iParam0){
case 0:
num=0;
num2=0;
value=270;
break;
case 1:
num=0;
num2=1;
value=750;
break;
case 2:
num=0;
num2=2;
value=450;
break;
case 3:
num=0;
num2=3;
value=4875;
break;
case 4:
num=0;
num2=4;
value=1760;
break;
case 5:
num=0;
num2=5;
value=1090;
break;
case 6:
num=0;
num2=6;
value=2465;
break;
case 7:
num=0;
num2=7;
value=305;
break;
case 8:
num=0;
num2=8;
value=290;
break;
case 9:
num=0;
num2=9;
value=410;
break;
case 10:
num=0;
num2=10;
value=255;
break;
case 11:
num=0;
num2=11;
value=255;
break;
case 12:
num=0;
num2=12;
value=405;
break;
case 13:
num=0;
num2=13;
value=5000;
break;
case 14:
num=0;
num2=14;
value=4480;
break;
case 15:
num=0;
num2=15;
value=4335;
break;
}
switch (iParam0){
case 16:
num=1;
num2=0;
value=375;
break;
case 17:
num=1;
num2=1;
value=265;
break;
case 18:
num=1;
num2=2;
value=275;
break;
case 19:
num=1;
num2=3;
value=280;
break;
case 20:
num=1;
num2=4;
value=300;
break;
case 21:
num=1;
num2=5;
value=265;
break;
case 22:
num=1;
num2=6;
value=255;
break;
case 23:
num=1;
num2=7;
value=250;
break;
case 24:
num=1;
num2=8;
value=260;
break;
case 25:
num=1;
num2=9;
value=250;
break;
case 26:
num=1;
num2=10;
value=225;
break;
case 27:
num=1;
num2=11;
value=230;
break;
case 28:
num=1;
num2=12;
value=215;
break;
case 29:
num=1;
num2=13;
value=650;
break;
case 30:
num=1;
num2=14;
value=425;
break;
case 31:
num=1;
num2=15;
value=345;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=115;
break;
case 33:
num=2;
num2=1;
value=110;
break;
case 34:
num=2;
num2=2;
value=250;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=290;
break;
case 49:
num=3;
num2=1;
value=115;
break;
case 50:
num=3;
num2=2;
value=135;
break;
case 51:
num=3;
num2=3;
value=125;
break;
case 52:
num=3;
num2=4;
value=120;
break;
case 53:
num=3;
num2=5;
value=130;
break;
case 54:
num=3;
num2=6;
value=110;
break;
case 55:
num=3;
num2=7;
value=525;
break;
case 56:
num=3;
num2=8;
value=115;
break;
case 57:
num=3;
num2=9;
value=535;
break;
case 58:
num=3;
num2=10;
value=135;
break;
case 59:
num=3;
num2=11;
value=120;
break;
case 60:
num=3;
num2=12;
value=130;
break;
case 61:
num=3;
num2=13;
value=140;
break;
case 62:
num=3;
num2=14;
value=130;
break;
case 63:
num=3;
num2=15;
value=520;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=215;
break;
case 65:
num=4;
num2=1;
value=220;
break;
case 66:
num=4;
num2=2;
value=225;
break;
case 67:
num=4;
num2=3;
value=245;
break;
case 68:
num=4;
num2=4;
value=215;
break;
case 69:
num=4;
num2=5;
value=630;
break;
case 70:
num=4;
num2=6;
value=250;
break;
case 71:
num=4;
num2=7;
value=260;
break;
case 72:
num=4;
num2=8;
value=200;
break;
case 73:
num=4;
num2=9;
value=225;
break;
case 74:
num=4;
num2=10;
value=230;
break;
case 75:
num=4;
num2=11;
value=725;
break;
case 76:
num=4;
num2=12;
value=650;
break;
case 77:
num=4;
num2=13;
value=230;
break;
case 78:
num=4;
num2=14;
value=230;
break;
case 79:
num=4;
num2=15;
value=280;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=0;
flag=true;
break;
case 81:
num=5;
num2=1;
value=0;
flag=true;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=330;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=320;
break;
case 95:
num=5;
num2=15;
value=315;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=850;
break;
case 97:
num=6;
num2=1;
value=535;
break;
case 98:
num=6;
num2=2;
value=530;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=890;
break;
case 113:
num=7;
num2=1;
value=440;
break;
case 114:
num=7;
num2=2;
value=455;
break;
case 115:
num=7;
num2=3;
value=0;
flag=true;
break;
case 116:
num=7;
num2=4;
value=0;
flag=true;
break;
case 117:
num=7;
num2=5;
value=0;
flag=true;
break;
case 118:
num=7;
num2=6;
value=0;
flag=true;
break;
case 119:
num=7;
num2=7;
value=0;
flag=true;
break;
case 120:
num=7;
num2=8;
value=0;
flag=true;
break;
case 121:
num=7;
num2=9;
value=0;
flag=true;
break;
case 122:
num=7;
num2=10;
value=0;
flag=true;
break;
case 123:
num=7;
num2=11;
value=0;
flag=true;
break;
case 124:
num=7;
num2=12;
value=0;
flag=true;
break;
case 125:
num=7;
num2=13;
value=0;
flag=true;
break;
case 126:
num=7;
num2=14;
value=0;
flag=true;
break;
case 127:
num=7;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=295;
break;
case 129:
num=8;
num2=1;
value=180;
break;
case 130:
num=8;
num2=2;
value=150;
break;
case 131:
num=8;
num2=3;
value=150;
break;
case 132:
num=8;
num2=4;
value=155;
break;
case 133:
num=8;
num2=5;
value=840;
break;
case 134:
num=8;
num2=6;
value=205;
break;
case 135:
num=8;
num2=7;
value=150;
break;
case 136:
num=8;
num2=8;
value=950;
break;
case 137:
num=8;
num2=9;
value=580;
break;
case 138:
num=8;
num2=10;
value=200;
break;
case 139:
num=8;
num2=11;
value=665;
break;
case 140:
num=8;
num2=12;
value=780;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=615;
break;
case 143:
num=8;
num2=15;
value=250;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=495;
break;
case 145:
num=9;
num2=1;
value=435;
break;
case 146:
num=9;
num2=2;
value=420;
break;
case 147:
num=9;
num2=3;
value=390;
break;
case 148:
num=9;
num2=4;
value=485;
break;
case 149:
num=9;
num2=5;
value=380;
break;
case 150:
num=9;
num2=6;
value=1295;
break;
case 151:
num=9;
num2=7;
value=1135;
break;
case 152:
num=9;
num2=8;
value=1425;
break;
case 153:
num=9;
num2=9;
value=1645;
break;
case 154:
num=9;
num2=10;
value=1925;
break;
case 155:
num=9;
num2=11;
value=2250;
break;
case 156:
num=9;
num2=12;
value=365;
break;
case 157:
num=9;
num2=13;
value=360;
break;
case 158:
num=9;
num2=14;
value=2245;
break;
case 159:
num=9;
num2=15;
value=2170;
break;
case 160:
num=10;
num2=0;
value=50;
break;
case 161:
num=10;
num2=1;
value=100;
break;
case 162:
num=10;
num2=2;
value=65;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=275;
break;
case 177:
num=11;
num2=1;
value=300;
break;
case 178:
num=11;
num2=2;
value=145;
break;
case 179:
num=11;
num2=3;
value=150;
break;
case 180:
num=11;
num2=4;
value=110;
break;
case 181:
num=11;
num2=5;
value=95;
break;
case 182:
num=11;
num2=6;
value=155;
break;
case 183:
num=11;
num2=7;
value=155;
break;
case 184:
num=11;
num2=8;
value=510;
break;
case 185:
num=11;
num2=9;
value=165;
break;
case 186:
num=11;
num2=10;
value=465;
break;
case 187:
num=11;
num2=11;
value=250;
break;
case 188:
num=11;
num2=12;
value=110;
break;
case 189:
num=11;
num2=13;
value=470;
break;
case 190:
num=11;
num2=14;
value=480;
break;
case 191:
num=11;
num2=15;
value=155;
break;
case 192:
num=12;
num2=0;
value=275;
break;
case 193:
num=12;
num2=1;
value=395;
break;
case 194:
num=12;
num2=2;
value=285;
break;
case 195:
num=12;
num2=3;
value=560;
break;
case 196:
num=12;
num2=4;
value=595;
break;
case 197:
num=12;
num2=5;
value=295;
break;
case 198:
num=12;
num2=6;
value=230;
break;
case 199:
num=12;
num2=7;
value=215;
break;
case 200:
num=12;
num2=8;
value=270;
break;
case 201:
num=12;
num2=9;
value=295;
break;
case 202:
num=12;
num2=10;
value=285;
break;
case 203:
num=12;
num2=11;
value=215;
break;
case 204:
num=12;
num2=12;
value=210;
break;
case 205:
num=12;
num2=13;
value=290;
break;
case 206:
num=12;
num2=14;
value=230;
break;
case 207:
num=12;
num2=15;
value=215;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=0;
flag=true;
break;
case 209:
num=13;
num2=1;
value=0;
flag=true;
break;
case 210:
num=13;
num2=2;
value=0;
flag=true;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
case 224:
num=14;
num2=0;
value=90;
break;
case 225:
num=14;
num2=1;
value=105;
break;
case 226:
num=14;
num2=2;
value=0;
flag=true;
break;
case 227:
num=14;
num2=3;
value=0;
flag=true;
break;
case 228:
num=14;
num2=4;
value=0;
flag=true;
break;
case 229:
num=14;
num2=5;
value=0;
flag=true;
break;
case 230:
num=14;
num2=6;
value=0;
flag=true;
break;
case 231:
num=14;
num2=7;
value=0;
flag=true;
break;
case 232:
num=14;
num2=8;
value=100;
break;
case 233:
num=14;
num2=9;
value=105;
break;
case 234:
num=14;
num2=10;
value=0;
flag=true;
break;
case 235:
num=14;
num2=11;
value=0;
flag=true;
break;
case 236:
num=14;
num2=12;
value=0;
flag=true;
break;
case 237:
num=14;
num2=13;
value=0;
flag=true;
break;
case 238:
num=14;
num2=14;
value=0;
flag=true;
break;
case 239:
num=14;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=230;
break;
case 241:
num=15;
num2=1;
value=0;
flag=true;
break;
case 242:
num=15;
num2=2;
value=0;
flag=true;
break;
case 243:
num=15;
num2=3;
value=130;
break;
case 244:
num=15;
num2=4;
value=0;
flag=true;
break;
case 245:
num=15;
num2=5;
value=0;
flag=true;
break;
case 246:
num=15;
num2=6;
value=0;
flag=true;
break;
case 247:
num=15;
num2=7;
value=0;
flag=true;
break;
case 248:
num=15;
num2=8;
value=0;
flag=true;
break;
case 249:
num=15;
num2=9;
value=0;
flag=true;
break;
case 250:
num=15;
num2=10;
value=350;
break;
case 251:
num=15;
num2=11;
value=335;
break;
case 252:
num=15;
num2=12;
value=0;
flag=true;
break;
case 253:
num=15;
num2=13;
value=0;
flag=true;
break;
case 254:
num=15;
num2=14;
value=0;
flag=true;
break;
case 255:
num=15;
num2=15;
value=0;
flag=true;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1256[num6] * Global_296940.f_23);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_23);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_157(int iParam0, Hash hParam1) // Position - 0xF4DA{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
case 9:
num2=9;
num3=0;
break;
case 10:
num2=10;
num3=0;
break;
case 11:
num2=11;
num3=0;
break;
case 12:
num2=12;
num3=0;
break;
case 13:
num2=13;
num3=0;
break;
case 14:
num2=14;
num3=0;
break;
case 15:
num2=15;
num3=0;
break;
}
if(iParam0 >=16){
Global_78341[0 /*14*/].f_5=4;
func_147(num6, iParam0, 16, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_158(int iParam0, Hash hParam1) // Position - 0xF635{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=1;
num3=1;
break;
case 3:
num2=1;
num3=2;
break;
case 4:
num2=1;
num3=3;
break;
case 5:
num2=1;
num3=4;
break;
case 6:
num2=2;
num3=0;
break;
case 7:
num2=2;
num3=1;
break;
case 8:
num2=2;
num3=2;
break;
case 9:
num2=2;
num3=3;
break;
case 10:
num2=2;
num3=4;
break;
case 11:
num2=3;
num3=0;
break;
case 12:
num2=3;
num3=1;
break;
case 13:
num2=3;
num3=2;
break;
case 14:
num2=3;
num3=3;
break;
case 15:
num2=3;
num3=4;
break;
case 16:
num2=4;
num3=0;
break;
case 17:
num2=4;
num3=1;
break;
case 18:
num2=4;
num3=2;
break;
case 19:
num2=4;
num3=3;
break;
case 20:
num2=4;
num3=4;
break;
case 21:
num2=5;
num3=0;
break;
case 22:
num2=5;
num3=1;
break;
case 23:
num2=5;
num3=2;
break;
case 24:
num2=5;
num3=3;
break;
case 25:
num2=5;
num3=4;
break;
case 26:
num2=6;
num3=0;
break;
case 27:
num2=6;
num3=1;
break;
case 28:
num2=6;
num3=2;
break;
case 29:
num2=6;
num3=3;
break;
case 30:
num2=6;
num3=4;
break;
case 31:
num2=7;
num3=0;
break;
case 32:
num2=7;
num3=1;
break;
case 33:
num2=7;
num3=2;
break;
case 34:
num2=7;
num3=3;
break;
case 35:
num2=7;
num3=4;
break;
}
if(iParam0 >=36){
Global_78341[0 /*14*/].f_5=4;
func_147(num6, iParam0, 36, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_159(int iParam0, Hash hParam1) // Position - 0xF8B5{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=8;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
num=0;
num2=0;
value=250;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
num=0;
num2=1;
value=225;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
num=0;
num2=2;
value=50;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
num=0;
num2=3;
value=40;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
num=0;
num2=4;
value=40;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
num=0;
num2=5;
value=40;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
num=0;
num2=6;
value=40;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
num=0;
num2=7;
value=45;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
num=0;
num2=8;
value=40;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
num=0;
num2=9;
value=40;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
num=0;
num2=10;
value=135;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
num=0;
num2=11;
value=60;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
num=0;
num2=12;
value=220;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
num=0;
num2=13;
value=45;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
num=0;
num2=14;
value=45;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
num=0;
num2=15;
value=125;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
num=1;
num2=0;
value=250;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
num=1;
num2=1;
value=60;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
num=1;
num2=2;
value=50;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
num=1;
num2=3;
value=40;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
num=1;
num2=4;
value=40;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
num=1;
num2=5;
value=40;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
num=1;
num2=6;
value=40;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
num=1;
num2=7;
value=45;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
num=1;
num2=8;
value=40;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
num=1;
num2=9;
value=40;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
num=1;
num2=10;
value=135;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
num=1;
num2=11;
value=60;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
num=1;
num2=12;
value=220;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
num=1;
num2=13;
value=45;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
num=1;
num2=14;
value=45;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
num=1;
num2=15;
value=125;
break;
case 32:
num=2;
num2=0;
break;
case 33:
num=3;
num2=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_0", 16);
num=4;
num2=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_1", 16);
num=4;
num2=1;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_2", 16);
num=4;
num2=2;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_3", 16);
num=4;
num2=3;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_4", 16);
num=4;
num2=4;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_5", 16);
num=4;
num2=5;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_6", 16);
num=4;
num2=6;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_7", 16);
num=4;
num2=7;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_8", 16);
num=4;
num2=8;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_9", 16);
num=4;
num2=9;
flag=true;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_10", 16);
num=4;
num2=10;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_11", 16);
num=4;
num2=11;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_12", 16);
num=4;
num2=12;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_13" /*Red Two-Tone Tank*/, 16);
num=4;
num2=13;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[77]);
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_14" /*Two-Tone Tank*/, 16);
num=4;
num2=14;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[78]);
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_15", 16);
num=4;
num2=15;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_0" /*Off-White Cropped Tank*/, 16);
num=5;
num2=0;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[80]);
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_1" /*Ash Cropped Tank*/, 16);
num=5;
num2=1;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[81]);
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_2", 16);
num=5;
num2=2;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_3", 16);
num=5;
num2=3;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_4", 16);
num=5;
num2=4;
flag=true;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_5", 16);
num=5;
num2=5;
flag=true;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_6", 16);
num=5;
num2=6;
flag=true;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_7" /*Snakeskin Cropped Tank*/, 16);
num=5;
num2=7;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[87]);
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_8", 16);
num=5;
num2=8;
flag=true;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_9" /*White Stripe Cropped Tank*/, 16);
num=5;
num2=9;
value=90;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[89]);
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_10", 16);
num=5;
num2=10;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_11", 16);
num=5;
num2=11;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_12", 16);
num=5;
num2=12;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_13", 16);
num=5;
num2=13;
flag=true;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_14", 16);
num=5;
num2=14;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_15", 16);
num=5;
num2=15;
flag=true;
break;
case 66:
num=6;
num2=0;
break;
case 67:
num=7;
num2=0;
break;
case 68:
num=8;
num2=0;
break;
case 69:
num=9;
num2=0;
break;
case 70:
num=10;
num2=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_0" /*Sky Blue Racerback*/, 16);
num=11;
num2=0;
value=90;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[176]);
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_1" /*Purple Racerback*/, 16);
num=11;
num2=1;
value=95;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[177]);
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_2" /*Gray Racerback*/, 16);
num=11;
num2=2;
value=95;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[178]);
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_3", 16);
num=11;
num2=3;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_4", 16);
num=11;
num2=4;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_5", 16);
num=11;
num2=5;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_6", 16);
num=11;
num2=6;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_7", 16);
num=11;
num2=7;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_8", 16);
num=11;
num2=8;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_9", 16);
num=11;
num2=9;
flag=true;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_10" /*Los Santos 01 Racerback*/, 16);
num=11;
num2=10;
value=150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[186]);
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_11" /*LS Racerback*/, 16);
num=11;
num2=11;
value=65;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[187]);
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_12", 16);
num=11;
num2=12;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_13", 16);
num=11;
num2=13;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_14", 16);
num=11;
num2=14;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_15" /*LC Penetrators Racerback*/, 16);
num=11;
num2=15;
value=145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[191]);
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_0", 16);
num=12;
num2=0;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_1", 16);
num=12;
num2=1;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_2", 16);
num=12;
num2=2;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_3", 16);
num=12;
num2=3;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_4", 16);
num=12;
num2=4;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_5", 16);
num=12;
num2=5;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_6", 16);
num=12;
num2=6;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_7" /*Neon Camisole*/, 16);
num=12;
num2=7;
value=1560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[199]);
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_8" /*Red Spotted Camisole*/, 16);
num=12;
num2=8;
value=195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[200]);
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_9" /*Black Spotted Camisole*/, 16);
num=12;
num2=9;
value=200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[201]);
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_10", 16);
num=12;
num2=10;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_11", 16);
num=12;
num2=11;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_12", 16);
num=12;
num2=12;
flag=true;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_13", 16);
num=12;
num2=13;
flag=true;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_14", 16);
num=12;
num2=14;
flag=true;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_15", 16);
num=12;
num2=15;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_0" /*Black Bustier*/, 16);
num=13;
num2=0;
value=975;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[208]);
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_1" /*Pink Rose Bustier*/, 16);
num=13;
num2=1;
value=2670;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[209]);
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_2" /*Olive Bustier*/, 16);
num=13;
num2=2;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[210]);
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_3" /*Gray Bustier*/, 16);
num=13;
num2=3;
value=400;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[211]);
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_4" /*Floral Bustier*/, 16);
num=13;
num2=4;
value=2500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[212]);
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_5" /*Red Plaid Bustier*/, 16);
num=13;
num2=5;
value=2060;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[213]);
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_6" /*Studded Bustier*/, 16);
num=13;
num2=6;
value=2620;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[214]);
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_7" /*Pink Bustier*/, 16);
num=13;
num2=7;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[215]);
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_8" /*White Bustier*/, 16);
num=13;
num2=8;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[216]);
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_9" /*Vivid Blue Bustier*/, 16);
num=13;
num2=9;
value=2280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[217]);
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_10" /*Denim Bustier*/, 16);
num=13;
num2=10;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[218]);
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_11" /*Pink Tribal Bustier*/, 16);
num=13;
num2=11;
value=2390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[219]);
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_12" /*Camo Bustier*/, 16);
num=13;
num2=12;
value=2610;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[220]);
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_13" /*Blue Bustier*/, 16);
num=13;
num2=13;
value=1450;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[221]);
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_14" /*Black & White Bustier*/, 16);
num=13;
num2=14;
value=2720;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[222]);
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_15" /*Leopard Bustier*/, 16);
num=13;
num2=15;
value=4995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[223]);
break;
case 119:
num=14;
num2=0;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_0" /*Black Bikini*/, 16);
num=15;
num2=0;
value=325;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[240]);
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_1", 16);
num=15;
num2=1;
flag=true;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_2", 16);
num=15;
num2=2;
flag=true;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_3" /*Gray Bikini*/, 16);
num=15;
num2=3;
value=130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[243]);
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_4", 16);
num=15;
num2=4;
flag=true;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_5", 16);
num=15;
num2=5;
flag=true;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_6", 16);
num=15;
num2=6;
flag=true;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_7", 16);
num=15;
num2=7;
flag=true;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_8", 16);
num=15;
num2=8;
flag=true;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_9", 16);
num=15;
num2=9;
flag=true;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_10" /*Aqua Bikini*/, 16);
num=15;
num2=10;
value=450;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[250]);
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_11" /*Orange Bikini*/, 16);
num=15;
num2=11;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[251]);
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_12", 16);
num=15;
num2=12;
flag=true;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_13", 16);
num=15;
num2=13;
flag=true;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_14", 16);
num=15;
num2=14;
flag=true;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_15", 16);
num=15;
num2=15;
flag=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 136, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
return;
}
if(iParam0==4 || iParam0==20){
if(func_214(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4]);
}}elseif(iParam0==7 || iParam0==23){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
}elseif(iParam0==9 || iParam0==25){
if(func_214(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9]);
}}elseif(iParam0 >=0 && iParam0 < 16){
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6]);
}elseif(iParam0 >=16 && iParam0 < 32){
num7=iParam0 - 16;
if(num7 >=0 && num7 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num7]);
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_24);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_160(int iParam0, Hash hParam1) // Position - 0x10C59{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=11;
switch (iParam0){
case 0:
num=0;
num2=0;
value=250;
break;
case 1:
num=0;
num2=1;
value=225;
break;
case 2:
num=0;
num2=2;
value=50;
break;
case 3:
num=0;
num2=3;
value=40;
break;
case 4:
num=0;
num2=4;
value=40;
break;
case 5:
num=0;
num2=5;
value=40;
break;
case 6:
num=0;
num2=6;
value=40;
break;
case 7:
num=0;
num2=7;
value=45;
break;
case 8:
num=0;
num2=8;
value=40;
break;
case 9:
num=0;
num2=9;
value=40;
break;
case 10:
num=0;
num2=10;
value=135;
break;
case 11:
num=0;
num2=11;
value=60;
break;
case 12:
num=0;
num2=12;
value=220;
break;
case 13:
num=0;
num2=13;
value=45;
break;
case 14:
num=0;
num2=14;
value=45;
break;
case 15:
num=0;
num2=15;
value=125;
break;
}
switch (iParam0){
case 16:
num=1;
num2=0;
value=390;
break;
case 17:
num=1;
num2=1;
value=230;
break;
case 18:
num=1;
num2=2;
value=355;
break;
case 19:
num=1;
num2=3;
value=0;
flag=true;
break;
case 20:
num=1;
num2=4;
value=5000;
break;
case 21:
num=1;
num2=5;
value=2725;
break;
case 22:
num=1;
num2=6;
value=3265;
break;
case 23:
num=1;
num2=7;
value=0;
flag=true;
break;
case 24:
num=1;
num2=8;
value=0;
flag=true;
break;
case 25:
num=1;
num2=9;
value=3625;
break;
case 26:
num=1;
num2=10;
value=0;
flag=true;
break;
case 27:
num=1;
num2=11;
value=4220;
break;
case 28:
num=1;
num2=12;
value=0;
flag=true;
break;
case 29:
num=1;
num2=13;
value=0;
flag=true;
break;
case 30:
num=1;
num2=14;
value=310;
break;
case 31:
num=1;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=45;
break;
case 33:
num=2;
num2=1;
value=210;
break;
case 34:
num=2;
num2=2;
value=75;
break;
case 35:
num=2;
num2=3;
value=50;
break;
case 36:
num=2;
num2=4;
value=60;
break;
case 37:
num=2;
num2=5;
value=50;
break;
case 38:
num=2;
num2=6;
value=295;
break;
case 39:
num=2;
num2=7;
value=80;
break;
case 40:
num=2;
num2=8;
value=75;
break;
case 41:
num=2;
num2=9;
value=2250;
break;
case 42:
num=2;
num2=10;
value=275;
break;
case 43:
num=2;
num2=11;
value=445;
break;
case 44:
num=2;
num2=12;
value=50;
break;
case 45:
num=2;
num2=13;
value=40;
break;
case 46:
num=2;
num2=14;
value=45;
break;
case 47:
num=2;
num2=15;
value=470;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=95;
break;
case 49:
num=3;
num2=1;
value=95;
break;
case 50:
num=3;
num2=2;
value=360;
break;
case 51:
num=3;
num2=3;
value=100;
break;
case 52:
num=3;
num2=4;
value=60;
break;
case 53:
num=3;
num2=5;
value=0;
flag=true;
break;
case 54:
num=3;
num2=6;
value=0;
flag=true;
break;
case 55:
num=3;
num2=7;
value=0;
flag=true;
break;
case 56:
num=3;
num2=8;
value=0;
flag=true;
break;
case 57:
num=3;
num2=9;
value=0;
flag=true;
break;
case 58:
num=3;
num2=10;
value=295;
break;
case 59:
num=3;
num2=11;
value=460;
break;
case 60:
num=3;
num2=12;
value=1980;
break;
case 61:
num=3;
num2=13;
value=2110;
break;
case 62:
num=3;
num2=14;
value=95;
break;
case 63:
num=3;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=0;
flag=true;
break;
case 65:
num=4;
num2=1;
value=0;
flag=true;
break;
case 66:
num=4;
num2=2;
value=0;
flag=true;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=40;
break;
case 78:
num=4;
num2=14;
value=40;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=45;
break;
case 81:
num=5;
num2=1;
value=60;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=375;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=90;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=900;
break;
case 97:
num=6;
num2=1;
value=1000;
break;
case 98:
num=6;
num2=2;
value=1050;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=1000;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=2975;
break;
case 113:
num=7;
num2=1;
value=1100;
break;
case 114:
num=7;
num2=2;
value=1825;
break;
case 115:
num=7;
num2=3;
value=0;
flag=true;
break;
case 116:
num=7;
num2=4;
value=0;
flag=true;
break;
case 117:
num=7;
num2=5;
value=0;
flag=true;
break;
case 118:
num=7;
num2=6;
value=0;
flag=true;
break;
case 119:
num=7;
num2=7;
value=0;
flag=true;
break;
case 120:
num=7;
num2=8;
value=1750;
break;
case 121:
num=7;
num2=9;
value=0;
flag=true;
break;
case 122:
num=7;
num2=10;
value=0;
flag=true;
break;
case 123:
num=7;
num2=11;
value=0;
flag=true;
break;
case 124:
num=7;
num2=12;
value=0;
flag=true;
break;
case 125:
num=7;
num2=13;
value=0;
flag=true;
break;
case 126:
num=7;
num2=14;
value=0;
flag=true;
break;
case 127:
num=7;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=1025;
break;
case 129:
num=8;
num2=1;
value=1075;
break;
case 130:
num=8;
num2=2;
value=2805;
break;
case 131:
num=8;
num2=3;
value=0;
flag=true;
break;
case 132:
num=8;
num2=4;
value=0;
flag=true;
break;
case 133:
num=8;
num2=5;
value=0;
flag=true;
break;
case 134:
num=8;
num2=6;
value=0;
flag=true;
break;
case 135:
num=8;
num2=7;
value=0;
flag=true;
break;
case 136:
num=8;
num2=8;
value=0;
flag=true;
break;
case 137:
num=8;
num2=9;
value=0;
flag=true;
break;
case 138:
num=8;
num2=10;
value=0;
flag=true;
break;
case 139:
num=8;
num2=11;
value=0;
flag=true;
break;
case 140:
num=8;
num2=12;
value=2250;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=0;
flag=true;
break;
case 143:
num=8;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=495;
break;
case 145:
num=9;
num2=1;
value=95;
break;
case 146:
num=9;
num2=2;
value=95;
break;
case 147:
num=9;
num2=3;
value=525;
break;
case 148:
num=9;
num2=4;
value=100;
break;
case 149:
num=9;
num2=5;
value=110;
break;
case 150:
num=9;
num2=6;
value=100;
break;
case 151:
num=9;
num2=7;
value=110;
break;
case 152:
num=9;
num2=8;
value=130;
break;
case 153:
num=9;
num2=9;
value=560;
break;
case 154:
num=9;
num2=10;
value=295;
break;
case 155:
num=9;
num2=11;
value=975;
break;
case 156:
num=9;
num2=12;
value=160;
break;
case 157:
num=9;
num2=13;
value=100;
break;
case 158:
num=9;
num2=14;
value=1700;
break;
case 159:
num=9;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=380;
break;
case 161:
num=10;
num2=1;
value=95;
break;
case 162:
num=10;
num2=2;
value=95;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=110;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=95;
break;
case 171:
num=10;
num2=11;
value=90;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=85;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=215;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=90;
break;
case 177:
num=11;
num2=1;
value=95;
break;
case 178:
num=11;
num2=2;
value=95;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=150;
break;
case 187:
num=11;
num2=11;
value=65;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=145;
break;
}
switch (iParam0){
case 192:
num=12;
num2=0;
value=0;
flag=true;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=0;
flag=true;
break;
case 197:
num=12;
num2=5;
value=0;
flag=true;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=1560;
break;
case 200:
num=12;
num2=8;
value=195;
break;
case 201:
num=12;
num2=9;
value=200;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=0;
flag=true;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=975;
break;
case 209:
num=13;
num2=1;
value=2670;
break;
case 210:
num=13;
num2=2;
value=480;
break;
case 211:
num=13;
num2=3;
value=400;
break;
case 212:
num=13;
num2=4;
value=2500;
break;
case 213:
num=13;
num2=5;
value=2060;
break;
case 214:
num=13;
num2=6;
value=2620;
break;
case 215:
num=13;
num2=7;
value=475;
break;
case 216:
num=13;
num2=8;
value=490;
break;
case 217:
num=13;
num2=9;
value=2280;
break;
case 218:
num=13;
num2=10;
value=485;
break;
case 219:
num=13;
num2=11;
value=2390;
break;
case 220:
num=13;
num2=12;
value=2610;
break;
case 221:
num=13;
num2=13;
value=1450;
break;
case 222:
num=13;
num2=14;
value=2720;
break;
case 223:
num=13;
num2=15;
value=4995;
break;
}
switch (iParam0){
case 224:
num=14;
num2=0;
value=265;
break;
case 225:
num=14;
num2=1;
value=385;
break;
case 226:
num=14;
num2=2;
value=345;
break;
case 227:
num=14;
num2=3;
value=330;
break;
case 228:
num=14;
num2=4;
value=430;
break;
case 229:
num=14;
num2=5;
value=375;
break;
case 230:
num=14;
num2=6;
value=375;
break;
case 231:
num=14;
num2=7;
value=295;
break;
case 232:
num=14;
num2=8;
value=360;
break;
case 233:
num=14;
num2=9;
value=325;
break;
case 234:
num=14;
num2=10;
value=340;
break;
case 235:
num=14;
num2=11;
value=435;
break;
case 236:
num=14;
num2=12;
value=300;
break;
case 237:
num=14;
num2=13;
value=315;
break;
case 238:
num=14;
num2=14;
value=415;
break;
case 239:
num=14;
num2=15;
value=420;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=325;
break;
case 241:
num=15;
num2=1;
value=0;
flag=true;
break;
case 242:
num=15;
num2=2;
value=0;
flag=true;
break;
case 243:
num=15;
num2=3;
value=130;
break;
case 244:
num=15;
num2=4;
value=0;
flag=true;
break;
case 245:
num=15;
num2=5;
value=0;
flag=true;
break;
case 246:
num=15;
num2=6;
value=0;
flag=true;
break;
case 247:
num=15;
num2=7;
value=0;
flag=true;
break;
case 248:
num=15;
num2=8;
value=0;
flag=true;
break;
case 249:
num=15;
num2=9;
value=0;
flag=true;
break;
case 250:
num=15;
num2=10;
value=450;
break;
case 251:
num=15;
num2=11;
value=465;
break;
case 252:
num=15;
num2=12;
value=0;
flag=true;
break;
case 253:
num=15;
num2=13;
value=0;
flag=true;
break;
case 254:
num=15;
num2=14;
value=0;
flag=true;
break;
case 255:
num=15;
num2=15;
value=0;
flag=true;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0==4){
if(func_214(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_24);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4] * Global_296940.f_24);
}}elseif(iParam0==7){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_24);
}elseif(iParam0==9){
if(func_214(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_24);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9] * Global_296940.f_24);
}}else{
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6] * Global_296940.f_24);
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_161(int iParam0, Hash hParam1) // Position - 0x123BE{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=2;
switch (iParam0){
case 0:
num=0;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[0]);
break;
case 1:
num=1;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[1]);
break;
case 2:
num=1;
num2=1;
value=495;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[2]);
break;
case 3:
num=1;
num2=2;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[3]);
break;
case 4:
num=1;
num2=3;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[4]);
break;
case 5:
num=1;
num2=4;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[5]);
break;
case 6:
num=1;
num2=5;
value=0;
break;
case 7:
num=2;
num2=0;
value=440;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[6]);
break;
case 8:
num=2;
num2=1;
value=435;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[7]);
break;
case 9:
num=2;
num2=2;
value=430;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[8]);
break;
case 10:
num=2;
num2=3;
value=425;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[9]);
break;
case 11:
num=2;
num2=4;
value=420;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[10]);
break;
case 12:
num=2;
num2=5;
value=0;
break;
case 13:
num=3;
num2=0;
value=190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[11]);
break;
case 14:
num=3;
num2=1;
value=185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[12]);
break;
case 15:
num=3;
num2=2;
value=180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[13]);
break;
case 16:
num=3;
num2=3;
value=175;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[14]);
break;
case 17:
num=3;
num2=4;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[15]);
break;
case 18:
num=4;
num2=0;
value=295;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[16]);
break;
case 19:
num=4;
num2=1;
value=290;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[17]);
break;
case 20:
num=4;
num2=2;
value=285;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[18]);
break;
case 21:
num=4;
num2=3;
value=280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[19]);
break;
case 22:
num=4;
num2=4;
value=275;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[20]);
break;
case 23:
num=4;
num2=5;
value=0;
break;
case 24:
num=5;
num2=0;
value=2000;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[21]);
break;
case 25:
num=5;
num2=1;
value=1995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[22]);
break;
case 26:
num=5;
num2=2;
value=1990;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[23]);
break;
case 27:
num=5;
num2=3;
value=1985;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[24]);
break;
case 28:
num=5;
num2=4;
value=1980;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[25]);
break;
case 29:
num=5;
num2=5;
value=0;
break;
case 30:
num=6;
num2=0;
value=1150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[26]);
break;
case 31:
num=6;
num2=1;
value=1145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[27]);
break;
case 32:
num=6;
num2=2;
value=1140;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[28]);
break;
case 33:
num=6;
num2=3;
value=1135;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[29]);
break;
case 34:
num=6;
num2=4;
value=1130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[30]);
break;
case 35:
num=7;
num2=0;
value=550;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[31]);
break;
case 36:
num=7;
num2=1;
value=545;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[32]);
break;
case 37:
num=7;
num2=2;
value=540;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[33]);
break;
case 38:
num=7;
num2=3;
value=535;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[34]);
break;
case 39:
num=7;
num2=4;
value=530;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[35]);
break;
case 40:
num=7;
num2=5;
value=0;
break;
case 41:
num=8;
num2=0;
value=580;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[36]);
break;
case 42:
num=8;
num2=1;
value=575;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[37]);
break;
case 43:
num=8;
num2=2;
value=570;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[38]);
break;
case 44:
num=8;
num2=3;
value=565;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[39]);
break;
case 45:
num=8;
num2=4;
value=560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[40]);
break;
case 46:
num=8;
num2=5;
value=0;
break;
case 47:
num=9;
num2=0;
value=1100;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[41]);
break;
case 48:
num=9;
num2=1;
value=1095;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[42]);
break;
case 49:
num=9;
num2=2;
value=1090;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[43]);
break;
case 50:
num=9;
num2=3;
value=1085;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[44]);
break;
case 51:
num=9;
num2=4;
value=1080;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[45]);
break;
case 52:
num=9;
num2=5;
value=0;
break;
case 53:
num=10;
num2=0;
value=520;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[46]);
break;
case 54:
num=10;
num2=1;
value=515;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[47]);
break;
case 55:
num=10;
num2=2;
value=510;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[48]);
break;
case 56:
num=10;
num2=3;
value=505;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[49]);
break;
case 57:
num=10;
num2=4;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[50]);
break;
case 58:
num=10;
num2=5;
value=0;
break;
case 59:
num=10;
num2=6;
value=0;
break;
case 60:
num=11;
num2=0;
value=395;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[51]);
break;
case 61:
num=11;
num2=1;
value=390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[52]);
break;
case 62:
num=11;
num2=2;
value=385;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[53]);
break;
case 63:
num=11;
num2=3;
value=380;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[54]);
break;
case 64:
num=11;
num2=4;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[55]);
break;
case 65:
num=11;
num2=5;
value=0;
break;
case 66:
num=11;
num2=6;
value=0;
break;
case 67:
num=12;
num2=0;
value=1050;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[56]);
break;
case 68:
num=12;
num2=1;
value=1045;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[57]);
break;
case 69:
num=12;
num2=2;
value=1040;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[58]);
break;
case 70:
num=12;
num2=3;
value=1035;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[59]);
break;
case 71:
num=12;
num2=4;
value=1030;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[60]);
break;
case 72:
num=12;
num2=5;
value=0;
break;
case 73:
num=13;
num2=0;
value=1200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[61]);
break;
case 74:
num=13;
num2=1;
value=1195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[62]);
break;
case 75:
num=13;
num2=2;
value=1190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[63]);
break;
case 76:
num=13;
num2=3;
value=1185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[64]);
break;
case 77:
num=13;
num2=4;
value=1180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[65]);
break;
case 78:
num=13;
num2=5;
value=0;
break;
case 79:
num=14;
num2=0;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[66]);
break;
case 80:
num=14;
num2=1;
value=470;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[67]);
break;
case 81:
num=14;
num2=2;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[68]);
break;
case 82:
num=14;
num2=3;
value=460;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[69]);
break;
case 83:
num=14;
num2=4;
value=455;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[70]);
break;
case 84:
num=14;
num2=5;
value=0;
break;
case 85:
num=15;
num2=0;
value=950;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[71]);
break;
case 86:
num=15;
num2=1;
value=945;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[72]);
break;
case 87:
num=15;
num2=2;
value=940;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[73]);
break;
case 88:
num=15;
num2=3;
value=935;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[74]);
break;
case 89:
num=15;
num2=4;
value=930;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[75]);
break;
case 90:
num=15;
num2=5;
value=0;
break;
case 91:
num=15;
num2=6;
value=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_147(num5, iParam0, 92, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_162(int iParam0, int iParam1, Hash hParam2) // Position - 0x1328F{
switch (iParam0){
case 2:
func_177(iParam1, hParam2);
break;
case 11:
func_176(iParam1, hParam2);
break;
case 8:
func_175(iParam1, hParam2);
break;
case 9:
func_174(iParam1, hParam2);
break;
case 3:
func_173(iParam1, hParam2);
break;
case 4:
func_172(iParam1, hParam2);
break;
case 6:
func_171(iParam1, hParam2);
break;
case 1:
func_170(iParam1, hParam2);
break;
case 7:
func_169(iParam1, hParam2);
break;
case 10:
func_168(iParam1, hParam2);
break;
case 14:
func_167(iParam1, hParam2);
break;
case 12:
func_166(iParam1, hParam2);
break;
case 5:
func_165(iParam1, hParam2);
break;
case 0:
func_164(iParam1, hParam2);
break;
case 13:
func_163(iParam1);
break;
}
return;
}


void func_163(int iParam0) // Position - 0x1339B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
switch (iParam0){
case 31:
num2=0;
num3=0;
break;
case 0:
num2=0;
num3=0;
break;
case 1:
num2=0;
num3=0;
break;
case 2:
num2=0;
num3=0;
break;
case 3:
num2=0;
num3=0;
break;
case 4:
num2=0;
num3=0;
break;
case 5:
num2=0;
num3=0;
break;
case 6:
num2=0;
num3=0;
break;
case 7:
num2=0;
num3=0;
break;
case 8:
num2=0;
num3=0;
break;
case 9:
num2=0;
num3=0;
break;
case 10:
num2=0;
num3=0;
break;
case 11:
num2=0;
num3=0;
break;
case 12:
num2=0;
num3=0;
break;
case 13:
num2=0;
num3=0;
break;
case 14:
num2=0;
num3=0;
break;
case 15:
num2=0;
num3=0;
break;
case 16:
num2=0;
num3=0;
break;
case 17:
num2=0;
num3=0;
break;
case 18:
num2=0;
num3=0;
break;
case 19:
num2=0;
num3=0;
break;
case 20:
num2=0;
num3=0;
break;
case 21:
num2=0;
num3=0;
break;
case 22:
num2=0;
num3=0;
break;
case 23:
num2=0;
num3=0;
break;
case 24:
num2=0;
num3=0;
break;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_164(int iParam0, Hash hParam1) // Position - 0x13565{
int num;
num=0;
Global_78341[0 /*14*/].f_5=3;
func_147(num, iParam0, 0, hParam1);
return;
}


void func_165(int iParam0, Hash hParam1) // Position - 0x13585{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num6, iParam0, 9, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num3, 16);
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_166(int iParam0, Hash hParam1) // Position - 0x13688{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
switch (iParam0){
case 0:
num2=0;
num3=0;
flag=true;
break;
case 1:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S1" /*The Beat Maker*/, 16);
break;
case 2:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S2" /*The Brand*/, 16);
break;
case 3:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S3" /*The Skater*/, 16);
break;
case 4:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S4" /*The Roller*/, 16);
break;
case 5:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S5" /*The Camo Kid*/, 16);
break;
case 6:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S6" /*The Vibe*/, 16);
break;
case 7:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S7" /*The Color Junky*/, 16);
break;
case 8:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S8" /*The Classic T*/, 16);
break;
case 9:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S9" /*The Worker*/, 16);
break;
case 10:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P1" /*The Ladies Man*/, 16);
break;
case 11:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P2" /*The Office*/, 16);
break;
case 12:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P3" /*The After Party*/, 16);
break;
case 13:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P4" /*The Rebel*/, 16);
break;
case 14:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P5" /*The Trendsetter*/, 16);
break;
case 15:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P6" /*The Artist*/, 16);
break;
case 16:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P7" /*The Icon*/, 16);
break;
case 17:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P8" /*The Nightlife*/, 16);
break;
case 18:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B1" /*The Sun Bather*/, 16);
break;
case 19:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B2" /*The Stoop*/, 16);
break;
case 20:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B3" /*The Street G*/, 16);
break;
case 21:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B4" /*The Effortless*/, 16);
break;
case 22:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B5" /*The Everyday*/, 16);
break;
case 23:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B6" /*The Hood*/, 16);
break;
case 24:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B7" /*The Jock*/, 16);
break;
case 25:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B8" /*The Pounders Fan*/, 16);
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num6, iParam0, 26, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_167(int iParam0, Hash hParam1) // Position - 0x13939{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=14;
num6=0;
switch (iParam0){
case 0:
num=-1;
num2=0;
value=0;
num3=0;
break;
case 1:
num=-1;
num2=0;
value=0;
num3=1;
break;
case 2:
num=-1;
num2=0;
value=0;
num3=2;
break;
case 3:
num=-1;
num2=0;
value=0;
num3=3;
break;
case 4:
num=-1;
num2=0;
value=0;
num3=4;
break;
case 5:
num=-1;
num2=0;
value=0;
num3=5;
break;
case 6:
num=-1;
num2=0;
value=0;
num3=6;
break;
case 7:
num=-1;
num2=0;
value=0;
num3=7;
break;
case 8:
num=-1;
num2=0;
value=0;
num3=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_0" /*Red Ear Defenders*/, 16);
num=0;
num2=0;
value=65;
num3=0;
num6=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_1" /*Blue Ear Defenders*/, 16);
num=0;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_2" /*Green Ear Defenders*/, 16);
num=0;
num2=2;
value=85;
num3=0;
num6=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_3" /*Yellow Ear Defenders*/, 16);
num=0;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_4" /*Desert Camo Ear Defenders*/, 16);
num=0;
num2=4;
value=235;
num3=0;
num6=1;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_5" /*Black Ear Defenders*/, 16);
num=0;
num2=5;
value=80;
num3=0;
num6=1;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_6" /*Gray Ear Defenders*/, 16);
num=0;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_7" /*White Ear Defenders*/, 16);
num=0;
num2=7;
value=90;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_1_0" /*White Dunce Cap*/, 16);
num=1;
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_0" /*Black Winter Hat*/, 16);
num=2;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_1" /*Gray Winter Hat*/, 16);
num=2;
num2=1;
value=30;
num3=0;
num6=1;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_2" /*Blue Winter Hat*/, 16);
num=2;
num2=2;
value=35;
num3=0;
num6=1;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_3" /*Rasta Winter Hat*/, 16);
num=2;
num2=3;
value=320;
num3=0;
num6=1;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_4" /*Gray Striped Winter Hat*/, 16);
num=2;
num2=4;
value=185;
num3=0;
num6=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_5" /*Trio Knit Winter Hat*/, 16);
num=2;
num2=5;
value=245;
num3=0;
num6=1;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_6" /*White Winter Hat*/, 16);
num=2;
num2=6;
value=35;
num3=0;
num6=1;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_7" /*Maroon Winter Hat*/, 16);
num=2;
num2=7;
value=40;
num3=0;
num6=1;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_0", 16);
num=3;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_1" /*Black Canvas Hat*/, 16);
num=3;
num2=1;
value=60;
num3=0;
num6=1;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_2" /*Tan Canvas Hat*/, 16);
num=3;
num2=2;
value=65;
num3=0;
num6=1;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_3", 16);
num=3;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_4", 16);
num=3;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_5", 16);
num=3;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_6", 16);
num=3;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_7", 16);
num=3;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_0" /*Black LS Fitted Cap*/, 16);
num=4;
num2=0;
value=415;
num3=0;
num6=1;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_1" /*Gray LS Fitted Cap*/, 16);
num=4;
num2=1;
value=315;
num3=0;
num6=1;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_2", 16);
num=4;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_3", 16);
num=4;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_4", 16);
num=4;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_5", 16);
num=4;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_6", 16);
num=4;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_7", 16);
num=4;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_0" /*Black Saggy Beanie*/, 16);
num=5;
num2=0;
value=75;
num3=0;
num6=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_1" /*Gray Saggy Beanie*/, 16);
num=5;
num2=1;
value=60;
num3=0;
num6=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_2", 16);
num=5;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_3", 16);
num=5;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_4", 16);
num=5;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_5", 16);
num=5;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_6", 16);
num=5;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_7", 16);
num=5;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_0" /*Green Army Cap*/, 16);
num=6;
num2=0;
value=160;
num3=0;
num6=1;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_1" /*Black Army Cap*/, 16);
num=6;
num2=1;
value=265;
num3=0;
num6=1;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_2" /*Gray Army Cap*/, 16);
num=6;
num2=2;
value=170;
num3=0;
num6=1;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_3" /*Blue Army Cap*/, 16);
num=6;
num2=3;
value=135;
num3=0;
num6=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_4" /*Desert Army Cap*/, 16);
num=6;
num2=4;
value=570;
num3=0;
num6=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_5" /*Woodland Army Cap*/, 16);
num=6;
num2=5;
value=560;
num3=0;
num6=1;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_6" /*Ranch Beige Army Cap*/, 16);
num=6;
num2=6;
value=140;
num3=0;
num6=1;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_7" /*Ranch Brown Army Cap*/, 16);
num=6;
num2=7;
value=130;
num3=0;
num6=1;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_0" /*White Flat Cap*/, 16);
num=7;
num2=0;
value=260;
num3=0;
num6=1;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_1" /*Gray Flat Cap*/, 16);
num=7;
num2=1;
value=215;
num3=0;
num6=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_2" /*Black Flat Cap*/, 16);
num=7;
num2=2;
value=430;
num3=0;
num6=1;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_3" /*Navy Flat Cap*/, 16);
num=7;
num2=3;
value=160;
num3=0;
num6=1;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_4" /*Red Flat Cap*/, 16);
num=7;
num2=4;
value=200;
num3=0;
num6=1;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_5" /*Brown Flat Cap*/, 16);
num=7;
num2=5;
value=155;
num3=0;
num6=1;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_6" /*Green Flat Cap*/, 16);
num=7;
num2=6;
value=155;
num3=0;
num6=1;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_7" /*Yellow Flat Cap*/, 16);
num=7;
num2=7;
value=165;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_0", 16);
num=8;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_1", 16);
num=8;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_2", 16);
num=8;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_3", 16);
num=8;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_4", 16);
num=8;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_5", 16);
num=8;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_6", 16);
num=8;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_7", 16);
num=8;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_0", 16);
num=9;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_1", 16);
num=9;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_2", 16);
num=9;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_3", 16);
num=9;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_4", 16);
num=9;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_5" /*Fruntalot Green Cap*/, 16);
num=9;
num2=5;
value=100;
num3=0;
num6=1;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_6", 16);
num=9;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_7" /*Stank Purple Cap*/, 16);
num=9;
num2=7;
value=65;
num3=0;
num6=1;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_0", 16);
num=10;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_1", 16);
num=10;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_2", 16);
num=10;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_3", 16);
num=10;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_4", 16);
num=10;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_5" /*Fruntalot Green Cap*/, 16);
num=10;
num2=5;
value=65;
num3=0;
num6=1;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_6", 16);
num=10;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_7" /*Stank Purple Cap*/, 16);
num=10;
num2=7;
value=65;
num3=0;
num6=1;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_0", 16);
num=11;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_1" /*Black Pork Pie*/, 16);
num=11;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_2", 16);
num=11;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_3" /*Olive Pork Pie*/, 16);
num=11;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_4", 16);
num=11;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_5", 16);
num=11;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_6" /*Blue Pork Pie*/, 16);
num=11;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_7", 16);
num=11;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_0" /*Black Fedora*/, 16);
num=12;
num2=0;
value=1715;
num3=0;
num6=1;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_1" /*White Fedora*/, 16);
num=12;
num2=1;
value=3900;
num3=0;
num6=1;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_2" /*Ash Fedora*/, 16);
num=12;
num2=2;
value=1550;
num3=0;
num6=1;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_3", 16);
num=12;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_4" /*Brown Fedora*/, 16);
num=12;
num2=4;
value=4250;
num3=0;
num6=1;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_5", 16);
num=12;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_6" /*Green Fedora*/, 16);
num=12;
num2=6;
value=4460;
num3=0;
num6=1;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_7" /*Navy Fedora*/, 16);
num=12;
num2=7;
value=4970;
num3=0;
num6=1;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_0" /*Black Cowboy Hat*/, 16);
num=13;
num2=0;
value=290;
num3=0;
num6=1;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_1" /*Brown Cowboy Hat*/, 16);
num=13;
num2=1;
value=305;
num3=0;
num6=1;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_2" /*Chocolate Cowboy Hat*/, 16);
num=13;
num2=2;
value=4170;
num3=0;
num6=1;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_3" /*White Cowboy Hat*/, 16);
num=13;
num2=3;
value=335;
num3=0;
num6=1;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_4" /*Chestnut Cowboy Hat*/, 16);
num=13;
num2=4;
value=4940;
num3=0;
num6=1;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_5" /*Beige Cowboy Hat*/, 16);
num=13;
num2=5;
value=275;
num3=0;
num6=1;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_6" /*Red Cowboy Hat*/, 16);
num=13;
num2=6;
value=5000;
num3=0;
num6=1;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_7" /*Tan Cowboy Hat*/, 16);
num=13;
num2=7;
value=3620;
num3=0;
num6=1;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_0" /*White Paisley Bandana*/, 16);
num=14;
num2=0;
value=30;
num3=0;
num6=1;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_1" /*Black Paisley Bandana*/, 16);
num=14;
num2=1;
value=25;
num3=0;
num6=1;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_2" /*Navy Bandana*/, 16);
num=14;
num2=2;
value=30;
num3=0;
num6=1;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_3" /*Red Bandana*/, 16);
num=14;
num2=3;
value=30;
num3=0;
num6=1;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_4" /*Green Bandana*/, 16);
num=14;
num2=4;
value=35;
num3=0;
num6=1;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_5" /*Purple Bandana*/, 16);
num=14;
num2=5;
value=30;
num3=0;
num6=1;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_6" /*Camo Bandana*/, 16);
num=14;
num2=6;
value=350;
num3=0;
num6=1;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_7" /*Yellow Bandana*/, 16);
num=14;
num2=7;
value=35;
num3=0;
num6=1;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_0" /*Beat Off White Headphones*/, 16);
num=15;
num2=0;
value=365;
num3=0;
num6=1;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_1" /*Beat Off Black Headphones*/, 16);
num=15;
num2=1;
value=380;
num3=0;
num6=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_2" /*Beat Off Red Headphones*/, 16);
num=15;
num2=2;
value=595;
num3=0;
num6=1;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_3" /*Beat Off Blue Headphones*/, 16);
num=15;
num2=3;
value=595;
num3=0;
num6=1;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_4" /*Beat Off Yellow Headphones*/, 16);
num=15;
num2=4;
value=600;
num3=0;
num6=1;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_5" /*Beat Off Purple Headphones*/, 16);
num=15;
num2=5;
value=590;
num3=0;
num6=1;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_6" /*Beat Off Gray Headphones*/, 16);
num=15;
num2=6;
value=395;
num3=0;
num6=1;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_7" /*Beat Off Green Headphones*/, 16);
num=15;
num2=7;
value=555;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_0" /*Western MC Yellow Helmet*/, 16);
num=16;
num2=0;
value=1060;
num3=0;
num6=2;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_1" /*Steel Horse Blue Helmet*/, 16);
num=16;
num2=1;
value=1400;
num3=0;
num6=2;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_2" /*Steel Horse Orange Helmet*/, 16);
num=16;
num2=2;
value=1315;
num3=0;
num6=2;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_3" /*Western MC Green Helmet*/, 16);
num=16;
num2=3;
value=1230;
num3=0;
num6=2;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_4" /*Western MC Red Helmet*/, 16);
num=16;
num2=4;
value=1145;
num3=0;
num6=2;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_5" /*Steel Horse Black Helmet*/, 16);
num=16;
num2=5;
value=8450;
num3=0;
num6=2;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_6" /*Black Helmet*/, 16);
num=16;
num2=6;
value=675;
num3=0;
num6=2;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_7" /*Western MC Lilac Helmet*/, 16);
num=16;
num2=7;
value=8750;
num3=0;
num6=2;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_0" /*Blue Open-Face Helmet*/, 16);
num=17;
num2=0;
value=975;
num3=0;
num6=2;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_1" /*Orange Open-Face Helmet*/, 16);
num=17;
num2=1;
value=750;
num3=0;
num6=2;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_2" /*Pale Blue Open-Face Helmet*/, 16);
num=17;
num2=2;
value=865;
num3=0;
num6=2;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_3" /*Red Open-Face Helmet*/, 16);
num=17;
num2=3;
value=890;
num3=0;
num6=2;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_4" /*Gray Open-Face Helmet*/, 16);
num=17;
num2=4;
value=730;
num3=0;
num6=2;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_5" /*Black Open-Face Helmet*/, 16);
num=17;
num2=5;
value=650;
num3=0;
num6=2;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_6" /*Pink Open-Face Helmet*/, 16);
num=17;
num2=6;
value=645;
num3=0;
num6=2;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_7" /*White Open-Face Helmet*/, 16);
num=17;
num2=7;
value=755;
num3=0;
num6=2;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_0" /*Shatter Pattern Helmet*/, 16);
num=18;
num2=0;
value=13850;
num3=0;
num6=2;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_1" /*Stars Helmet*/, 16);
num=18;
num2=1;
value=2900;
num3=0;
num6=2;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_2" /*Squared Helmet*/, 16);
num=18;
num2=2;
value=2895;
num3=0;
num6=2;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_3" /*Crimson Helmet*/, 16);
num=18;
num2=3;
value=12500;
num3=0;
num6=2;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_4" /*Skull Helmet*/, 16);
num=18;
num2=4;
value=15000;
num3=0;
num6=2;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_5" /*Ace of Spades Helmet*/, 16);
num=18;
num2=5;
value=14750;
num3=0;
num6=2;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_6" /*Flamejob Helmet*/, 16);
num=18;
num2=6;
value=13150;
num3=0;
num6=2;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_7" /*White Helmet*/, 16);
num=18;
num2=7;
value=2925;
num3=0;
num6=2;
break;
}
switch (iParam0){
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_0", 16);
num=0;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_1", 16);
num=0;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_2", 16);
num=0;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_3", 16);
num=0;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_4", 16);
num=0;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_5", 16);
num=0;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_6", 16);
num=0;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_7", 16);
num=0;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_8", 16);
num=0;
num2=8;
value=50;
num3=1;
num6=3;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_9", 16);
num=0;
num2=9;
value=50;
num3=1;
num6=3;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_10", 16);
num=0;
num2=10;
value=50;
num3=1;
num6=3;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_0", 16);
num=1;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_1" /*Black Wraparounds*/, 16);
num=1;
num2=1;
value=180;
num3=1;
num6=3;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_2", 16);
num=1;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_3", 16);
num=1;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_4", 16);
num=1;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_5", 16);
num=1;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_6", 16);
num=1;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_7", 16);
num=1;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_0" /*Black Winter Shades*/, 16);
num=2;
num2=0;
value=110;
num3=1;
num6=3;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_1" /*White Silver Shades*/, 16);
num=2;
num2=1;
value=140;
num3=1;
num6=3;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_2" /*Crimson Polarized Shades*/, 16);
num=2;
num2=2;
value=380;
num3=1;
num6=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_3" /*Black Summer Shades*/, 16);
num=2;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_4" /*Black Autumn Shades*/, 16);
num=2;
num2=4;
value=130;
num3=1;
num6=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_5" /*White Rust Shades*/, 16);
num=2;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_6" /*White Steel Shades*/, 16);
num=2;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_7" /*Green Polarized Shades*/, 16);
num=2;
num2=7;
value=390;
num3=1;
num6=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_8", 16);
num=2;
num2=8;
value=950;
num3=1;
num6=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_9", 16);
num=2;
num2=9;
value=565;
num3=1;
num6=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_10", 16);
num=2;
num2=10;
value=630;
num3=1;
num6=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_0" /*Slate Janitor Frames*/, 16);
num=3;
num2=0;
value=70;
num3=1;
num6=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_1" /*Black Janitor Frames*/, 16);
num=3;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_2" /*Gray Janitor Frames*/, 16);
num=3;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_3" /*Ash Janitor Frames*/, 16);
num=3;
num2=3;
value=95;
num3=1;
num6=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_4" /*Tan Janitor Frames*/, 16);
num=3;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_5" /*Smoke Janitor Frames*/, 16);
num=3;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_6" /*Charcoal Janitor Frames*/, 16);
num=3;
num2=6;
value=75;
num3=1;
num6=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_7" /*White Janitor Frames*/, 16);
num=3;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_8", 16);
num=3;
num2=8;
value=650;
num3=1;
num6=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_9", 16);
num=3;
num2=9;
value=265;
num3=1;
num6=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_10", 16);
num=3;
num2=10;
value=330;
num3=1;
num6=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_0" /*Enema Brown Glasses*/, 16);
num=4;
num2=0;
value=245;
num3=1;
num6=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_1" /*Enema Gray Glasses*/, 16);
num=4;
num2=1;
value=250;
num3=1;
num6=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_2" /*Enema Black Glasses*/, 16);
num=4;
num2=2;
value=210;
num3=1;
num6=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_3" /*Enema Tortoiseshell Glasses*/, 16);
num=4;
num2=3;
value=245;
num3=1;
num6=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_4" /*Enema Walnut Glasses*/, 16);
num=4;
num2=4;
value=205;
num3=1;
num6=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_5" /*Enema Marble Glasses*/, 16);
num=4;
num2=5;
value=205;
num3=1;
num6=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_6" /*Enema Smoke Glasses*/, 16);
num=4;
num2=6;
value=215;
num3=1;
num6=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_7" /*Enema Smoke Shades*/, 16);
num=4;
num2=7;
value=215;
num3=1;
num6=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_8", 16);
num=4;
num2=8;
value=995;
num3=1;
num6=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_9", 16);
num=4;
num2=9;
value=610;
num3=1;
num6=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_10", 16);
num=4;
num2=10;
value=675;
num3=1;
num6=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_0" /*Gold Aviators*/, 16);
num=5;
num2=0;
value=4050;
num3=1;
num6=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_1" /*Steel Aviators*/, 16);
num=5;
num2=1;
value=4060;
num3=1;
num6=3;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_2" /*Silver Aviators, Brown Tint*/, 16);
num=5;
num2=2;
value=170;
num3=1;
num6=3;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_3" /*Gray Aviators, Green Tint*/, 16);
num=5;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_4" /*Silver Aviators, Blue Tint*/, 16);
num=5;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_5" /*Tan Aviators, Dark Tint*/, 16);
num=5;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_6" /*Steel Aviators, Blue Tint*/, 16);
num=5;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_7" /*Silver Aviators, Copper Tint*/, 16);
num=5;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_8", 16);
num=5;
num2=8;
value=1760;
num3=1;
num6=3;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_9", 16);
num=5;
num2=9;
value=1375;
num3=1;
num6=3;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_10", 16);
num=5;
num2=10;
value=1440;
num3=1;
num6=3;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_0", 16);
num=6;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_1", 16);
num=6;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_2", 16);
num=6;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_3", 16);
num=6;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_4", 16);
num=6;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_5", 16);
num=6;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_6", 16);
num=6;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_7", 16);
num=6;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_0" /*Black Casuals*/, 16);
num=7;
num2=0;
value=180;
num3=1;
num6=3;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_1" /*Zap Casuals*/, 16);
num=7;
num2=1;
value=500;
num3=1;
num6=3;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_2" /*Tortoiseshell Casuals*/, 16);
num=7;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_3" /*Red Casuals*/, 16);
num=7;
num2=3;
value=220;
num3=1;
num6=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_4" /*White Casuals*/, 16);
num=7;
num2=4;
value=185;
num3=1;
num6=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_5" /*Camo Collection Casuals*/, 16);
num=7;
num2=5;
value=1445;
num3=1;
num6=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_6" /*Lemon Casuals*/, 16);
num=7;
num2=6;
value=530;
num3=1;
num6=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_7" /*Blood Casuals*/, 16);
num=7;
num2=7;
value=650;
num3=1;
num6=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_8", 16);
num=7;
num2=8;
value=1170;
num3=1;
num6=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_9", 16);
num=7;
num2=9;
value=785;
num3=1;
num6=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_10", 16);
num=7;
num2=10;
value=850;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_0" /*Brown Eyewear*/, 16);
num=8;
num2=0;
value=4260;
num3=1;
num6=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_1" /*Silver Eyewear*/, 16);
num=8;
num2=1;
value=4310;
num3=1;
num6=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_2" /*Gray Eyewear*/, 16);
num=8;
num2=2;
value=4130;
num3=1;
num6=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_3" /*Smoke Cop Frames*/, 16);
num=8;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_4" /*Coffee Cop Frames*/, 16);
num=8;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_5" /*Black Cop Frames*/, 16);
num=8;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_6" /*Slate Cop Frames*/, 16);
num=8;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_7" /*Charcoal Cop Frames*/, 16);
num=8;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_8", 16);
num=8;
num2=8;
value=1885;
num3=1;
num6=3;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_9", 16);
num=8;
num2=9;
value=1500;
num3=1;
num6=3;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_10", 16);
num=8;
num2=10;
value=1565;
num3=1;
num6=3;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_0" /*Hawaiian Snow Black*/, 16);
num=9;
num2=0;
value=65;
num3=1;
num6=3;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_1" /*Hawaiian Snow Gray*/, 16);
num=9;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_2" /*Hawaiian Snow White*/, 16);
num=9;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_3" /*Hawaiian Snow Ash*/, 16);
num=9;
num2=3;
value=75;
num3=1;
num6=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_4" /*Hawaiian Snow Copper*/, 16);
num=9;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_5" /*Hawaiian Snow Tortoiseshell*/, 16);
num=9;
num2=5;
value=4290;
num3=1;
num6=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_6" /*Hawaiian Snow Marble*/, 16);
num=9;
num2=6;
value=4150;
num3=1;
num6=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_7" /*Hawaiian Snow Walnut*/, 16);
num=9;
num2=7;
value=4295;
num3=1;
num6=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_8", 16);
num=9;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_9", 16);
num=9;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_10", 16);
num=9;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_0" /*Gold Bull Emic*/, 16);
num=10;
num2=0;
value=6240;
num3=1;
num6=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_1" /*Gray Bull Emic*/, 16);
num=10;
num2=1;
value=4955;
num3=1;
num6=3;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_2" /*Silver Bull Emic*/, 16);
num=10;
num2=2;
value=5590;
num3=1;
num6=3;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_3" /*Black Bull Emic*/, 16);
num=10;
num2=3;
value=4920;
num3=1;
num6=3;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_4" /*Brown Bull Emic*/, 16);
num=10;
num2=4;
value=4990;
num3=1;
num6=3;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_5" /*Slate Bull Emic*/, 16);
num=10;
num2=5;
value=4780;
num3=1;
num6=3;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_6" /*White Bull Emic*/, 16);
num=10;
num2=6;
value=4775;
num3=1;
num6=3;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_7" /*Purple Tint Bull Emic*/, 16);
num=10;
num2=7;
value=4800;
num3=1;
num6=3;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_8", 16);
num=10;
num2=8;
value=2835;
num3=1;
num6=3;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_9", 16);
num=10;
num2=9;
value=2450;
num3=1;
num6=3;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_10", 16);
num=10;
num2=10;
value=2515;
num3=1;
num6=3;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_0", 16);
num=11;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_1", 16);
num=11;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_2", 16);
num=11;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_3", 16);
num=11;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_4", 16);
num=11;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_5", 16);
num=11;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_7", 16);
num=11;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_0" /*Orange Elvis*/, 16);
num=12;
num2=0;
value=385;
num3=1;
num6=3;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_1" /*Gray Elvis*/, 16);
num=12;
num2=1;
value=310;
num3=1;
num6=3;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_2" /*Slate Elvis*/, 16);
num=12;
num2=2;
value=3655;
num3=1;
num6=3;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_3" /*Black Elvis*/, 16);
num=12;
num2=3;
value=4055;
num3=1;
num6=3;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_4" /*White Elvis*/, 16);
num=12;
num2=4;
value=3595;
num3=1;
num6=3;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_5" /*Blue Tint Elvis*/, 16);
num=12;
num2=5;
value=3605;
num3=1;
num6=3;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_6" /*Pink Tint Elvis*/, 16);
num=12;
num2=6;
value=3645;
num3=1;
num6=3;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_7" /*Copper Elvis*/, 16);
num=12;
num2=7;
value=320;
num3=1;
num6=3;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_8", 16);
num=12;
num2=8;
value=2820;
num3=1;
num6=3;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_9", 16);
num=12;
num2=9;
value=2435;
num3=1;
num6=3;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_10", 16);
num=12;
num2=10;
value=2500;
num3=1;
num6=3;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_0" /*Broker Black Hipsters*/, 16);
num=13;
num2=0;
value=230;
num3=1;
num6=3;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_1" /*White Polarized Hipsters*/, 16);
num=13;
num2=1;
value=1605;
num3=1;
num6=3;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_2" /*Choco Polarized Hipsters*/, 16);
num=13;
num2=2;
value=2230;
num3=1;
num6=3;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_3" /*Slate Hipsters*/, 16);
num=13;
num2=3;
value=220;
num3=1;
num6=3;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_4" /*Charcoal Hipsters*/, 16);
num=13;
num2=4;
value=185;
num3=1;
num6=3;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_5" /*Olive Polarized Hipsters*/, 16);
num=13;
num2=5;
value=2070;
num3=1;
num6=3;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_6" /*Gold Polarized Hipsters*/, 16);
num=13;
num2=6;
value=2205;
num3=1;
num6=3;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_7" /*Candy Polarized Hipsters*/, 16);
num=13;
num2=7;
value=1690;
num3=1;
num6=3;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_8", 16);
num=13;
num2=8;
value=2715;
num3=1;
num6=3;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_9", 16);
num=13;
num2=9;
value=2330;
num3=1;
num6=3;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_10", 16);
num=13;
num2=10;
value=2395;
num3=1;
num6=3;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_0", 16);
num=14;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_1", 16);
num=14;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_2", 16);
num=14;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_3", 16);
num=14;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_4", 16);
num=14;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_5", 16);
num=14;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_6", 16);
num=14;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_7", 16);
num=14;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_0" /*Yellow Guns*/, 16);
num=15;
num2=0;
value=515;
num3=1;
num6=3;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_1" /*White Guns*/, 16);
num=15;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_2" /*Gray Guns*/, 16);
num=15;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_3" /*Red Guns*/, 16);
num=15;
num2=3;
value=95;
num3=1;
num6=3;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_4" /*Blue Guns*/, 16);
num=15;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_5" /*Hornet Guns*/, 16);
num=15;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_6" /*Orange Guns*/, 16);
num=15;
num2=6;
value=485;
num3=1;
num6=3;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_7" /*Pink Guns*/, 16);
num=15;
num2=7;
value=545;
num3=1;
num6=3;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_8", 16);
num=15;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_9", 16);
num=15;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 318:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_10", 16);
num=15;
num2=10;
value=325;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 319:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_0" /*Deep Sea Watch*/, 16);
num=0;
num2=0;
value=5000;
num3=6;
num6=4;
break;
case 320:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_1" /*Gold Watch*/, 16);
num=0;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 321:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_2" /*Silver Watch*/, 16);
num=0;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 322:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_3" /*Black Watch*/, 16);
num=0;
num2=3;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 323:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_4" /*Gold Faced Silver Watch*/, 16);
num=0;
num2=4;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 324:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_0" /*White LED, Black Strap*/, 16);
num=1;
num2=0;
value=695;
num3=6;
num6=4;
break;
case 325:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_1" /*Red LED, White Strap*/, 16);
num=1;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 326:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_2" /*Red LED, Brown Strap*/, 16);
num=1;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
}
if(num6==1){
num7=iParam0 - 10;
if(num7 >=0 && num7 < 121){
if(num7 > 8) num7=num7 - 1;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_965[num7] * Global_296940.f_18);
}}elseif(num6==2){
num8=iParam0 - 131;
if(num8 >=0 && num8 < 24) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1086[num8] * Global_296940.f_19);
}elseif(num6==3){
num9=iParam0 - 155;
if(num9 >=0 && num9 < 128) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1111[num9] * Global_296940.f_20);
}elseif(num6==4){
num10=iParam0 - 319;
if(num10 >=0 && num10 < 15) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1240[num10] * Global_296940.f_21);
}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 327, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_18);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_20);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_21);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_168(int iParam0, Hash hParam1) // Position - 0x166F9{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
num2=0;
num3=0;
num=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=1;
num3=0;
num=5000;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=2;
num3=0;
num=10000;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=3;
num3=0;
num=5000;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=4;
num3=0;
num=10000;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=5;
num3=0;
num=5000;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=6;
num3=0;
num=10000;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num6, iParam0, 7, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_169(int iParam0, Hash hParam1) // Position - 0x1681A{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=7;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=0;
flag=true;
break;
case 2:
num=1;
num2=1;
value=0;
flag=true;
break;
case 3:
num=1;
num2=2;
value=0;
flag=true;
break;
case 4:
num=2;
num2=0;
value=0;
flag=true;
break;
case 5:
num=2;
num2=1;
value=0;
flag=true;
break;
case 6:
num=2;
num2=2;
value=0;
flag=true;
break;
case 7:
num=3;
num2=0;
value=0;
flag=true;
break;
case 8:
num=3;
num2=1;
value=0;
flag=true;
break;
case 9:
num=3;
num2=2;
value=0;
flag=true;
break;
case 10:
num=4;
num2=0;
value=0;
flag=true;
break;
case 11:
num=4;
num2=1;
value=0;
flag=true;
break;
case 12:
num=4;
num2=2;
value=0;
flag=true;
break;
case 13:
num=4;
num2=3;
value=0;
flag=true;
break;
case 14:
num=4;
num2=4;
value=0;
flag=true;
break;
case 15:
num=4;
num2=5;
value=0;
flag=true;
break;
case 16:
num=4;
num2=6;
value=0;
flag=true;
break;
case 17:
num=4;
num2=7;
value=0;
flag=true;
break;
case 18:
num=4;
num2=8;
value=0;
flag=true;
break;
case 19:
num=4;
num2=9;
value=0;
flag=true;
break;
case 20:
num=4;
num2=10;
flag=true;
break;
case 21:
num=4;
num2=11;
flag=true;
break;
case 22:
num=4;
num2=12;
flag=true;
break;
case 23:
num=4;
num2=13;
flag=true;
break;
case 24:
num=4;
num2=14;
flag=true;
break;
case 25:
num=4;
num2=15;
flag=true;
break;
case 26:
num=5;
num2=0;
value=0;
flag=true;
break;
case 27:
num=5;
num2=1;
value=0;
flag=true;
break;
case 28:
num=5;
num2=2;
value=0;
flag=true;
break;
case 29:
num=5;
num2=3;
value=0;
flag=true;
break;
case 30:
num=5;
num2=4;
value=0;
flag=true;
break;
case 31:
num=5;
num2=5;
value=0;
flag=true;
break;
case 32:
num=6;
num2=0;
value=0;
flag=true;
break;
case 33:
num=6;
num2=1;
value=0;
flag=true;
break;
case 34:
num=6;
num2=2;
value=0;
flag=true;
break;
case 35:
num=6;
num2=3;
value=0;
flag=true;
break;
case 36:
num=6;
num2=4;
value=0;
flag=true;
break;
case 37:
num=6;
num2=5;
value=0;
flag=true;
break;
case 38:
num=7;
num2=0;
break;
case 39:
num=8;
num2=0;
break;
case 40:
num=9;
num2=0;
break;
case 41:
num=10;
num2=0;
if(Global_262145.f_4182 !=-1) value=Global_262145.f_4182;
else value=115;
break;
case 42:
num=10;
num2=1;
if(Global_262145.f_4183 !=-1) value=Global_262145.f_4183;
else value=125;
break;
case 43:
num=10;
num2=2;
if(Global_262145.f_4184 !=-1) value=Global_262145.f_4184;
else value=130;
break;
case 44:
num=10;
num2=3;
value=0;
flag=true;
break;
case 45:
num=10;
num2=4;
value=0;
flag=true;
break;
case 46:
num=10;
num2=5;
value=0;
flag=true;
break;
case 47:
num=10;
num2=6;
value=0;
flag=true;
break;
case 48:
num=10;
num2=7;
value=0;
flag=true;
break;
case 49:
num=10;
num2=8;
value=0;
flag=true;
break;
case 50:
num=10;
num2=9;
value=0;
flag=true;
break;
case 51:
num=10;
num2=10;
value=0;
flag=true;
break;
case 52:
num=10;
num2=11;
value=0;
flag=true;
break;
case 53:
num=10;
num2=12;
value=0;
flag=true;
break;
case 54:
num=10;
num2=13;
value=0;
flag=true;
break;
case 55:
num=10;
num2=14;
value=0;
flag=true;
break;
case 56:
num=10;
num2=15;
value=0;
flag=true;
break;
case 57:
num=11;
num2=0;
value=0;
flag=true;
break;
case 58:
num=11;
num2=1;
value=0;
flag=true;
break;
case 59:
num=11;
num2=2;
if(Global_262145.f_4188 !=-1) value=Global_262145.f_4188;
else value=725;
break;
case 60:
num=11;
num2=3;
value=0;
flag=true;
break;
case 61:
num=11;
num2=4;
value=0;
flag=true;
break;
case 62:
num=11;
num2=5;
value=0;
flag=true;
break;
case 63:
num=11;
num2=6;
value=0;
flag=true;
break;
case 64:
num=11;
num2=7;
value=0;
flag=true;
break;
case 65:
num=11;
num2=8;
value=0;
flag=true;
break;
case 66:
num=11;
num2=9;
value=0;
flag=true;
break;
case 67:
num=11;
num2=10;
value=0;
flag=true;
break;
case 68:
num=11;
num2=11;
value=0;
flag=true;
break;
case 69:
num=11;
num2=12;
value=0;
flag=true;
break;
case 70:
num=11;
num2=13;
value=0;
flag=true;
break;
case 71:
num=11;
num2=14;
value=0;
flag=true;
break;
case 72:
num=11;
num2=15;
value=0;
flag=true;
break;
case 73:
num=12;
num2=0;
if(Global_262145.f_4185 !=-1) value=Global_262145.f_4185;
else value=65;
break;
case 74:
num=12;
num2=1;
if(Global_262145.f_4186 !=-1) value=Global_262145.f_4186;
else value=65;
break;
case 75:
num=12;
num2=2;
if(Global_262145.f_4187 !=-1) value=Global_262145.f_4187;
else value=95;
break;
case 76:
num=12;
num2=3;
value=0;
flag=true;
break;
case 77:
num=12;
num2=4;
value=0;
flag=true;
break;
case 78:
num=12;
num2=5;
value=0;
flag=true;
break;
case 79:
num=12;
num2=6;
value=0;
flag=true;
break;
case 80:
num=12;
num2=7;
value=0;
flag=true;
break;
case 81:
num=12;
num2=8;
value=0;
flag=true;
break;
case 82:
num=12;
num2=9;
value=0;
flag=true;
break;
case 83:
num=12;
num2=10;
value=0;
flag=true;
break;
case 84:
num=12;
num2=11;
value=0;
flag=true;
break;
case 85:
num=12;
num2=12;
value=0;
flag=true;
break;
case 86:
num=12;
num2=13;
value=0;
flag=true;
break;
case 87:
num=12;
num2=14;
value=0;
flag=true;
break;
case 88:
num=12;
num2=15;
value=0;
flag=true;
break;
case 89:
num=13;
num2=0;
break;
case 90:
num=14;
num2=0;
break;
case 91:
num=15;
num2=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 92, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_57);
return;
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_57);
TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_170(int iParam0, Hash hParam1) // Position - 0x17112{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=1;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=965;
break;
case 2:
num=1;
num2=1;
value=960;
break;
case 3:
num=1;
num2=2;
value=9500;
break;
case 4:
num=1;
num2=3;
value=975;
break;
case 5:
num=2;
num2=0;
value=1185;
break;
case 6:
num=2;
num2=1;
value=15000;
break;
case 7:
num=2;
num2=2;
value=1115;
break;
case 8:
num=2;
num2=3;
value=1105;
break;
case 9:
num=3;
num2=0;
value=25000;
break;
case 10:
num=4;
num2=0;
value=510;
break;
case 11:
num=4;
num2=1;
value=530;
break;
case 12:
num=4;
num2=2;
value=5500;
break;
case 13:
num=4;
num2=3;
value=535;
break;
case 14:
num=5;
num2=0;
value=1510;
break;
case 15:
num=5;
num2=1;
value=1530;
break;
case 16:
num=5;
num2=2;
value=14500;
break;
case 17:
num=5;
num2=3;
value=13000;
break;
case 18:
num=6;
num2=0;
value=8000;
break;
case 19:
num=6;
num2=1;
value=1265;
break;
case 20:
num=6;
num2=2;
value=8500;
break;
case 21:
num=6;
num2=3;
value=1210;
break;
case 22:
num=7;
num2=0;
value=2360;
break;
case 23:
num=7;
num2=1;
value=22500;
break;
case 24:
num=7;
num2=2;
value=2375;
break;
case 25:
num=7;
num2=3;
value=2485;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 26, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0 - 1;
if(num6 >=0 && num6 < 26) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_938[num6] * Global_296940.f_22);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_171(int iParam0, Hash hParam1) // Position - 0x173C9{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=6;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
flag=true;
break;
case 1:
num=0;
num2=1;
value=0;
flag=true;
break;
case 2:
num=0;
num2=2;
value=0;
flag=true;
break;
case 3:
num=0;
num2=3;
value=0;
flag=true;
break;
case 4:
num=0;
num2=4;
value=0;
flag=true;
break;
case 5:
num=0;
num2=5;
value=0;
flag=true;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=0;
flag=true;
break;
case 8:
num=0;
num2=8;
value=0;
flag=true;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=300;
break;
case 11:
num=0;
num2=11;
value=0;
flag=true;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=285;
break;
case 17:
num=1;
num2=1;
value=180;
break;
case 18:
num=1;
num2=2;
value=190;
break;
case 19:
num=1;
num2=3;
value=190;
break;
case 20:
num=1;
num2=4;
value=165;
break;
case 21:
num=1;
num2=5;
value=200;
break;
case 22:
num=1;
num2=6;
value=480;
break;
case 23:
num=1;
num2=7;
value=155;
break;
case 24:
num=1;
num2=8;
value=350;
break;
case 25:
num=1;
num2=9;
value=290;
break;
case 26:
num=1;
num2=10;
value=165;
break;
case 27:
num=1;
num2=11;
value=165;
break;
case 28:
num=1;
num2=12;
value=170;
break;
case 29:
num=1;
num2=13;
value=155;
break;
case 30:
num=1;
num2=14;
value=165;
break;
case 31:
num=1;
num2=15;
value=165;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=160;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=205;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
case 48:
num=3;
num2=0;
value=560;
break;
case 49:
num=3;
num2=1;
value=275;
break;
case 50:
num=3;
num2=2;
value=290;
break;
case 51:
num=3;
num2=3;
value=300;
break;
case 52:
num=3;
num2=4;
value=360;
break;
case 53:
num=3;
num2=5;
value=270;
break;
case 54:
num=3;
num2=6;
value=265;
break;
case 55:
num=3;
num2=7;
value=295;
break;
case 56:
num=3;
num2=8;
value=355;
break;
case 57:
num=3;
num2=9;
value=340;
break;
case 58:
num=3;
num2=10;
value=285;
break;
case 59:
num=3;
num2=11;
value=310;
break;
case 60:
num=3;
num2=12;
value=350;
break;
case 61:
num=3;
num2=13;
value=305;
break;
case 62:
num=3;
num2=14;
value=280;
break;
case 63:
num=3;
num2=15;
value=320;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=115;
break;
case 65:
num=4;
num2=1;
value=115;
break;
case 66:
num=4;
num2=2;
value=110;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=125;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=50;
break;
case 81:
num=5;
num2=1;
value=35;
break;
case 82:
num=5;
num2=2;
value=50;
break;
case 83:
num=5;
num2=3;
value=50;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=65;
break;
case 97:
num=6;
num2=1;
value=65;
break;
case 98:
num=6;
num2=2;
value=0;
flag=true;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
case 112:
num=7;
num2=0;
value=165;
break;
case 113:
num=7;
num2=1;
value=165;
break;
case 114:
num=7;
num2=2;
value=185;
break;
case 115:
num=7;
num2=3;
value=175;
break;
case 116:
num=7;
num2=4;
value=185;
break;
case 117:
num=7;
num2=5;
value=460;
break;
case 118:
num=7;
num2=6;
value=185;
break;
case 119:
num=7;
num2=7;
value=190;
break;
case 120:
num=7;
num2=8;
value=165;
break;
case 121:
num=7;
num2=9;
value=165;
break;
case 122:
num=7;
num2=10;
value=185;
break;
case 123:
num=7;
num2=11;
value=175;
break;
case 124:
num=7;
num2=12;
value=235;
break;
case 125:
num=7;
num2=13;
value=445;
break;
case 126:
num=7;
num2=14;
value=185;
break;
case 127:
num=7;
num2=15;
value=190;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=175;
break;
case 129:
num=8;
num2=1;
value=215;
break;
case 130:
num=8;
num2=2;
value=225;
break;
case 131:
num=8;
num2=3;
value=230;
break;
case 132:
num=8;
num2=4;
value=235;
break;
case 133:
num=8;
num2=5;
value=215;
break;
case 134:
num=8;
num2=6;
value=205;
break;
case 135:
num=8;
num2=7;
value=245;
break;
case 136:
num=8;
num2=8;
value=225;
break;
case 137:
num=8;
num2=9;
value=215;
break;
case 138:
num=8;
num2=10;
value=225;
break;
case 139:
num=8;
num2=11;
value=230;
break;
case 140:
num=8;
num2=12;
value=235;
break;
case 141:
num=8;
num2=13;
value=215;
break;
case 142:
num=8;
num2=14;
value=425;
break;
case 143:
num=8;
num2=15;
value=245;
break;
case 144:
num=9;
num2=0;
value=225;
break;
case 145:
num=9;
num2=1;
value=135;
break;
case 146:
num=9;
num2=2;
value=130;
break;
case 147:
num=9;
num2=3;
value=110;
break;
case 148:
num=9;
num2=4;
value=140;
break;
case 149:
num=9;
num2=5;
value=95;
break;
case 150:
num=9;
num2=6;
value=100;
break;
case 151:
num=9;
num2=7;
value=110;
break;
case 152:
num=9;
num2=8;
value=95;
break;
case 153:
num=9;
num2=9;
value=105;
break;
case 154:
num=9;
num2=10;
value=105;
break;
case 155:
num=9;
num2=11;
value=115;
break;
case 156:
num=9;
num2=12;
value=115;
break;
case 157:
num=9;
num2=13;
value=115;
break;
case 158:
num=9;
num2=14;
value=500;
break;
case 159:
num=9;
num2=15;
value=440;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=1090;
break;
case 161:
num=10;
num2=1;
value=0;
flag=true;
break;
case 162:
num=10;
num2=2;
value=0;
flag=true;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=600;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=1865;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=490;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
case 176:
num=11;
num2=0;
value=0;
flag=true;
break;
case 177:
num=11;
num2=1;
value=0;
flag=true;
break;
case 178:
num=11;
num2=2;
value=0;
flag=true;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=470;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=1795;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=1830;
break;
case 191:
num=11;
num2=15;
value=455;
break;
}
switch (iParam0){
case 192:
num=12;
num2=0;
value=455;
break;
case 193:
num=12;
num2=1;
value=2110;
break;
case 194:
num=12;
num2=2;
value=380;
break;
case 195:
num=12;
num2=3;
value=1655;
break;
case 196:
num=12;
num2=4;
value=2500;
break;
case 197:
num=12;
num2=5;
value=415;
break;
case 198:
num=12;
num2=6;
value=730;
break;
case 199:
num=12;
num2=7;
value=445;
break;
case 200:
num=12;
num2=8;
value=425;
break;
case 201:
num=12;
num2=9;
value=410;
break;
case 202:
num=12;
num2=10;
value=480;
break;
case 203:
num=12;
num2=11;
value=485;
break;
case 204:
num=12;
num2=12;
value=480;
break;
case 205:
num=12;
num2=13;
value=395;
break;
case 206:
num=12;
num2=14;
value=495;
break;
case 207:
num=12;
num2=15;
value=2090;
break;
case 208:
num=13;
num2=0;
value=0;
flag=true;
break;
case 209:
num=13;
num2=1;
value=0;
flag=true;
break;
case 210:
num=13;
num2=2;
value=0;
flag=true;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 224:
num=14;
num2=0;
value=450;
break;
case 225:
num=14;
num2=1;
value=685;
break;
case 226:
num=14;
num2=2;
value=420;
break;
case 227:
num=14;
num2=3;
value=365;
break;
case 228:
num=14;
num2=4;
value=465;
break;
case 229:
num=14;
num2=5;
value=405;
break;
case 230:
num=14;
num2=6;
value=400;
break;
case 231:
num=14;
num2=7;
value=440;
break;
case 232:
num=14;
num2=8;
value=385;
break;
case 233:
num=14;
num2=9;
value=435;
break;
case 234:
num=14;
num2=10;
value=375;
break;
case 235:
num=14;
num2=11;
value=390;
break;
case 236:
num=14;
num2=12;
value=475;
break;
case 237:
num=14;
num2=13;
value=430;
break;
case 238:
num=14;
num2=14;
value=490;
break;
case 239:
num=14;
num2=15;
value=490;
break;
case 240:
num=15;
num2=0;
value=615;
break;
case 241:
num=15;
num2=1;
value=315;
break;
case 242:
num=15;
num2=2;
value=415;
break;
case 243:
num=15;
num2=3;
value=425;
break;
case 244:
num=15;
num2=4;
value=435;
break;
case 245:
num=15;
num2=5;
value=445;
break;
case 246:
num=15;
num2=6;
value=640;
break;
case 247:
num=15;
num2=7;
value=460;
break;
case 248:
num=15;
num2=8;
value=465;
break;
case 249:
num=15;
num2=9;
value=745;
break;
case 250:
num=15;
num2=10;
value=845;
break;
case 251:
num=15;
num2=11;
value=1420;
break;
case 252:
num=15;
num2=12;
value=475;
break;
case 253:
num=15;
num2=13;
value=470;
break;
case 254:
num=15;
num2=14;
value=1000;
break;
case 255:
num=15;
num2=15;
value=690;
break;
}
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_681[num6] * Global_296940.f_17);
TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_17);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_172(int iParam0, Hash hParam1) // Position - 0x18A08{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=4;
switch (iParam0){
case 0:
num=0;
num2=0;
value=335;
break;
case 1:
num=0;
num2=1;
value=460;
break;
case 2:
num=0;
num2=2;
value=455;
break;
case 3:
num=0;
num2=3;
value=470;
break;
case 4:
num=0;
num2=4;
value=650;
break;
case 5:
num=0;
num2=5;
value=385;
break;
case 6:
num=0;
num2=6;
value=455;
break;
case 7:
num=0;
num2=7;
value=2150;
break;
case 8:
num=0;
num2=8;
value=375;
break;
case 9:
num=0;
num2=9;
value=2190;
break;
case 10:
num=0;
num2=10;
value=285;
break;
case 11:
num=0;
num2=11;
value=295;
break;
case 12:
num=0;
num2=12;
value=445;
break;
case 13:
num=0;
num2=13;
value=2240;
break;
case 14:
num=0;
num2=14;
value=465;
break;
case 15:
num=0;
num2=15;
value=1740;
break;
case 16:
num=1;
num2=0;
value=1415;
break;
case 17:
num=1;
num2=1;
value=325;
break;
case 18:
num=1;
num2=2;
value=345;
break;
case 19:
num=1;
num2=3;
value=355;
break;
case 20:
num=1;
num2=4;
value=395;
break;
case 21:
num=1;
num2=5;
value=315;
break;
case 22:
num=1;
num2=6;
value=275;
break;
case 23:
num=1;
num2=7;
value=265;
break;
case 24:
num=1;
num2=8;
value=305;
break;
case 25:
num=1;
num2=9;
value=255;
break;
case 26:
num=1;
num2=10;
value=235;
break;
case 27:
num=1;
num2=11;
value=245;
break;
case 28:
num=1;
num2=12;
value=215;
break;
case 29:
num=1;
num2=13;
value=1865;
break;
case 30:
num=1;
num2=14;
value=450;
break;
case 31:
num=1;
num2=15;
value=415;
break;
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=100;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=55;
break;
case 49:
num=3;
num2=1;
value=60;
break;
case 50:
num=3;
num2=2;
value=100;
break;
case 51:
num=3;
num2=3;
value=65;
break;
case 52:
num=3;
num2=4;
value=65;
break;
case 53:
num=3;
num2=5;
value=100;
break;
case 54:
num=3;
num2=6;
value=100;
break;
case 55:
num=3;
num2=7;
value=65;
break;
case 56:
num=3;
num2=8;
value=90;
break;
case 57:
num=3;
num2=9;
value=75;
break;
case 58:
num=3;
num2=10;
value=65;
break;
case 59:
num=3;
num2=11;
value=100;
break;
case 60:
num=3;
num2=12;
value=100;
break;
case 61:
num=3;
num2=13;
value=225;
break;
case 62:
num=3;
num2=14;
value=205;
break;
case 63:
num=3;
num2=15;
value=215;
break;
case 64:
num=4;
num2=0;
value=490;
break;
case 65:
num=4;
num2=1;
value=485;
break;
case 66:
num=4;
num2=2;
value=2500;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=485;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=100;
break;
case 81:
num=5;
num2=1;
value=105;
break;
case 82:
num=5;
num2=2;
value=80;
break;
case 83:
num=5;
num2=3;
value=90;
break;
case 84:
num=5;
num2=4;
value=100;
break;
case 85:
num=5;
num2=5;
value=95;
break;
case 86:
num=5;
num2=6;
value=100;
break;
case 87:
num=5;
num2=7;
value=90;
break;
case 88:
num=5;
num2=8;
value=85;
break;
case 89:
num=5;
num2=9;
value=80;
break;
case 90:
num=5;
num2=10;
value=80;
break;
case 91:
num=5;
num2=11;
value=100;
break;
case 92:
num=5;
num2=12;
value=95;
break;
case 93:
num=5;
num2=13;
value=440;
break;
case 94:
num=5;
num2=14;
value=380;
break;
case 95:
num=5;
num2=15;
value=80;
break;
case 96:
num=6;
num2=0;
value=115;
break;
case 97:
num=6;
num2=1;
value=140;
break;
case 98:
num=6;
num2=2;
value=135;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=255;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=325;
break;
case 113:
num=7;
num2=1;
value=115;
break;
case 114:
num=7;
num2=2;
value=135;
break;
case 115:
num=7;
num2=3;
value=125;
break;
case 116:
num=7;
num2=4;
value=120;
break;
case 117:
num=7;
num2=5;
value=130;
break;
case 118:
num=7;
num2=6;
value=110;
break;
case 119:
num=7;
num2=7;
value=345;
break;
case 120:
num=7;
num2=8;
value=745;
break;
case 121:
num=7;
num2=9;
value=120;
break;
case 122:
num=7;
num2=10;
value=135;
break;
case 123:
num=7;
num2=11;
value=345;
break;
case 124:
num=7;
num2=12;
value=130;
break;
case 125:
num=7;
num2=13;
value=140;
break;
case 126:
num=7;
num2=14;
value=130;
break;
case 127:
num=7;
num2=15;
value=660;
break;
case 128:
num=8;
num2=0;
value=150;
break;
case 129:
num=8;
num2=1;
value=0;
flag=true;
break;
case 130:
num=8;
num2=2;
value=0;
flag=true;
break;
case 131:
num=8;
num2=3;
value=150;
break;
case 132:
num=8;
num2=4;
value=150;
break;
case 133:
num=8;
num2=5;
value=0;
flag=true;
break;
case 134:
num=8;
num2=6;
value=0;
flag=true;
break;
case 135:
num=8;
num2=7;
value=0;
flag=true;
break;
case 136:
num=8;
num2=8;
value=0;
flag=true;
break;
case 137:
num=8;
num2=9;
value=0;
flag=true;
break;
case 138:
num=8;
num2=10;
value=0;
flag=true;
break;
case 139:
num=8;
num2=11;
value=0;
flag=true;
break;
case 140:
num=8;
num2=12;
value=0;
flag=true;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=150;
break;
case 143:
num=8;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=75;
break;
case 145:
num=9;
num2=1;
value=90;
break;
case 146:
num=9;
num2=2;
value=145;
break;
case 147:
num=9;
num2=3;
value=150;
break;
case 148:
num=9;
num2=4;
value=110;
break;
case 149:
num=9;
num2=5;
value=95;
break;
case 150:
num=9;
num2=6;
value=155;
break;
case 151:
num=9;
num2=7;
value=255;
break;
case 152:
num=9;
num2=8;
value=165;
break;
case 153:
num=9;
num2=9;
value=1150;
break;
case 154:
num=9;
num2=10;
value=1150;
break;
case 155:
num=9;
num2=11;
value=1210;
break;
case 156:
num=9;
num2=12;
value=1125;
break;
case 157:
num=9;
num2=13;
value=1135;
break;
case 158:
num=9;
num2=14;
value=1145;
break;
case 159:
num=9;
num2=15;
value=1145;
break;
case 160:
num=10;
num2=0;
value=845;
break;
case 161:
num=10;
num2=1;
value=480;
break;
case 162:
num=10;
num2=2;
value=475;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=0;
flag=true;
break;
case 177:
num=11;
num2=1;
value=0;
flag=true;
break;
case 178:
num=11;
num2=2;
value=0;
flag=true;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=0;
flag=true;
break;
case 192:
num=12;
num2=0;
value=220;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=100;
break;
case 197:
num=12;
num2=5;
value=65;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=50;
break;
case 200:
num=12;
num2=8;
value=0;
flag=true;
break;
case 201:
num=12;
num2=9;
value=0;
flag=true;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=100;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=460;
break;
case 209:
num=13;
num2=1;
value=475;
break;
case 210:
num=13;
num2=2;
value=470;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
case 224:
num=14;
num2=0;
value=50;
break;
case 225:
num=14;
num2=1;
value=100;
break;
case 226:
num=14;
num2=2;
value=0;
flag=true;
break;
case 227:
num=14;
num2=3;
value=100;
break;
case 228:
num=14;
num2=4;
value=0;
flag=true;
break;
case 229:
num=14;
num2=5;
value=0;
flag=true;
break;
case 230:
num=14;
num2=6;
value=0;
flag=true;
break;
case 231:
num=14;
num2=7;
value=0;
flag=true;
break;
case 232:
num=14;
num2=8;
value=0;
flag=true;
break;
case 233:
num=14;
num2=9;
value=0;
flag=true;
break;
case 234:
num=14;
num2=10;
value=0;
flag=true;
break;
case 235:
num=14;
num2=11;
value=0;
flag=true;
break;
case 236:
num=14;
num2=12;
value=100;
break;
case 237:
num=14;
num2=13;
value=0;
flag=true;
break;
case 238:
num=14;
num2=14;
value=0;
flag=true;
break;
case 239:
num=14;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=90;
break;
case 241:
num=15;
num2=1;
value=105;
break;
case 242:
num=15;
num2=2;
value=100;
break;
case 243:
num=15;
num2=3;
value=240;
break;
case 244:
num=15;
num2=4;
value=95;
break;
case 245:
num=15;
num2=5;
value=95;
break;
case 246:
num=15;
num2=6;
value=100;
break;
case 247:
num=15;
num2=7;
value=105;
break;
case 248:
num=15;
num2=8;
value=100;
break;
case 249:
num=15;
num2=9;
value=295;
break;
case 250:
num=15;
num2=10;
value=250;
break;
case 251:
num=15;
num2=11;
value=285;
break;
case 252:
num=15;
num2=12;
value=275;
break;
case 253:
num=15;
num2=13;
value=105;
break;
case 254:
num=15;
num2=14;
value=100;
break;
case 255:
num=15;
num2=15;
value=95;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_186[num6] * Global_296940.f_15);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_15);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_173(int iParam0, Hash hParam1) // Position - 0x1A03B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
case 9:
num2=9;
num3=0;
break;
case 10:
num2=10;
num3=0;
break;
case 11:
num2=11;
num3=0;
break;
case 12:
num2=12;
num3=0;
break;
case 13:
num2=13;
num3=0;
break;
case 14:
num2=14;
num3=0;
break;
case 15:
num2=15;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num6, iParam0, 16, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_174(int iParam0, Hash hParam1) // Position - 0x1A192{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=1;
num3=1;
break;
case 3:
num2=1;
num3=2;
break;
case 4:
num2=1;
num3=3;
break;
case 5:
num2=1;
num3=4;
break;
case 6:
num2=2;
num3=0;
break;
case 7:
num2=2;
num3=1;
break;
case 8:
num2=2;
num3=2;
break;
case 9:
num2=2;
num3=3;
break;
case 10:
num2=2;
num3=4;
break;
case 11:
num2=3;
num3=0;
break;
case 12:
num2=3;
num3=1;
break;
case 13:
num2=3;
num3=2;
break;
case 14:
num2=3;
num3=3;
break;
case 15:
num2=3;
num3=4;
break;
case 16:
num2=4;
num3=0;
break;
case 17:
num2=4;
num3=1;
break;
case 18:
num2=4;
num3=2;
break;
case 19:
num2=4;
num3=3;
break;
case 20:
num2=4;
num3=4;
break;
case 21:
num2=5;
num3=0;
break;
case 22:
num2=5;
num3=1;
break;
case 23:
num2=5;
num3=2;
break;
case 24:
num2=5;
num3=3;
break;
case 25:
num2=5;
num3=4;
break;
case 26:
num2=6;
num3=0;
break;
case 27:
num2=6;
num3=1;
break;
case 28:
num2=6;
num3=2;
break;
case 29:
num2=6;
num3=3;
break;
case 30:
num2=6;
num3=4;
break;
case 31:
num2=7;
num3=0;
break;
case 32:
num2=7;
num3=1;
break;
case 33:
num2=7;
num3=2;
break;
case 34:
num2=7;
num3=3;
break;
case 35:
num2=7;
num3=4;
break;
case 36:
num2=8;
num3=0;
break;
case 37:
num2=8;
num3=1;
break;
case 38:
num2=8;
num3=2;
break;
case 39:
num2=8;
num3=3;
break;
case 40:
num2=8;
num3=4;
break;
case 41:
num2=9;
num3=0;
break;
case 42:
num2=9;
num3=1;
break;
case 43:
num2=9;
num3=2;
break;
case 44:
num2=9;
num3=3;
break;
case 45:
num2=9;
num3=4;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num6, iParam0, 46, hParam1);
return;
}
func_138(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_175(int iParam0, Hash hParam1) // Position - 0x1A4AE{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=8;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
num=0;
num2=0;
value=250;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
num=0;
num2=1;
value=210;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
num=0;
num2=2;
value=50;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
num=0;
num2=3;
value=90;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
num=0;
num2=4;
value=210;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
num=0;
num2=5;
value=200;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
num=0;
num2=6;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
num=0;
num2=7;
value=130;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
num=0;
num2=8;
value=220;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
num=0;
num2=9;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
num=0;
num2=10;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
num=0;
num2=11;
value=220;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
num=0;
num2=12;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
num=0;
num2=13;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
num=0;
num2=14;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
num=0;
num2=15;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
num=1;
num2=0;
value=45;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
num=1;
num2=1;
value=60;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
num=1;
num2=2;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
num=1;
num2=3;
value=40;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
num=1;
num2=4;
value=315;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
num=1;
num2=5;
value=215;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
num=1;
num2=6;
value=265;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
num=1;
num2=7;
value=45;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
num=1;
num2=8;
value=205;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
num=1;
num2=9;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
num=1;
num2=10;
flag=true;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
num=1;
num2=11;
value=60;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
num=1;
num2=12;
value=55;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
num=1;
num2=13;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
num=1;
num2=14;
value=170;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
num=1;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
num=2;
num2=0;
value=250;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
num=2;
num2=1;
value=210;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
num=2;
num2=2;
value=50;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
num=2;
num2=3;
value=90;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
num=2;
num2=4;
value=210;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
num=2;
num2=5;
value=200;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
num=2;
num2=6;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
num=2;
num2=7;
value=130;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
num=2;
num2=8;
value=220;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
num=2;
num2=9;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
num=2;
num2=10;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
num=2;
num2=11;
value=220;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
num=2;
num2=12;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
num=2;
num2=13;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
num=2;
num2=14;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
num=2;
num2=15;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
num=3;
num2=0;
if(Global_262145.f_4191 !=-1) value=Global_262145.f_4191;
else value=165;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
num=3;
num2=1;
if(Global_262145.f_4199 !=-1) value=Global_262145.f_4199;
else value=120;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
num=3;
num2=2;
if(Global_262145.f_4194 !=-1) value=Global_262145.f_4194;
else value=115;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
num=3;
num2=3;
flag=true;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
num=3;
num2=4;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
num=3;
num2=5;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
num=3;
num2=6;
flag=true;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
num=3;
num2=7;
flag=true;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
num=3;
num2=8;
flag=true;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
num=3;
num2=9;
flag=true;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
num=3;
num2=10;
flag=true;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
num=3;
num2=11;
flag=true;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
num=3;
num2=12;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
num=3;
num2=13;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
num=3;
num2=14;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
num=3;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
num=4;
num2=0;
if(Global_262145.f_4191 !=-1) value=Global_262145.f_4191;
else value=165;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
num=4;
num2=1;
if(Global_262145.f_4199 !=-1) value=Global_262145.f_4199;
else value=120;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
num=4;
num2=2;
if(Global_262145.f_4194 !=-1) value=Global_262145.f_4194;
else value=115;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
num=4;
num2=3;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
num=4;
num2=4;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
num=4;
num2=5;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
num=4;
num2=6;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
num=4;
num2=7;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
num=4;
num2=8;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
num=4;
num2=9;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
num=4;
num2=10;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
num=4;
num2=11;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
num=4;
num2=12;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
num=4;
num2=13;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
num=4;
num2=14;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
num=4;
num2=15;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_0" /*White Tank*/, 16);
num=5;
num2=0;
value=80;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[80]);
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_1" /*Gray Tank*/, 16);
num=5;
num2=1;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[81]);
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_2" /*Black Tank*/, 16);
num=5;
num2=2;
value=50;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[82]);
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_3", 16);
num=5;
num2=3;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_4", 16);
num=5;
num2=4;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_5", 16);
num=5;
num2=5;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_6", 16);
num=5;
num2=6;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_7" /*Red Tank*/, 16);
num=5;
num2=7;
value=50;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[87]);
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_8", 16);
num=5;
num2=8;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_9", 16);
num=5;
num2=9;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_10", 16);
num=5;
num2=10;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_11", 16);
num=5;
num2=11;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_12", 16);
num=5;
num2=12;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_13", 16);
num=5;
num2=13;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_14", 16);
num=5;
num2=14;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_15", 16);
num=5;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
num=6;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=420;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
num=6;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=415;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
num=6;
num2=2;
if(Global_262145.f_4190 !=-1) value=Global_262145.f_4190;
else value=440;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
num=6;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=400;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
num=6;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=400;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
num=6;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=410;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
num=6;
num2=6;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=435;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
num=6;
num2=7;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=425;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
num=6;
num2=8;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=435;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
num=6;
num2=9;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=420;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
num=6;
num2=10;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=425;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
num=6;
num2=11;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=425;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
num=6;
num2=12;
if(Global_262145.f_4197 !=-1) value=Global_262145.f_4197;
else value=435;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
num=6;
num2=13;
if(Global_262145.f_4192 !=-1) value=Global_262145.f_4192;
else value=750;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
num=6;
num2=14;
if(Global_262145.f_4207 !=-1) value=Global_262145.f_4207;
else value=400;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
num=6;
num2=15;
if(Global_262145.f_4200 !=-1) value=Global_262145.f_4200;
else value=435;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
num=7;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=420;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
num=7;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=415;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
num=7;
num2=2;
if(Global_262145.f_4190 !=-1) value=Global_262145.f_4190;
else value=440;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
num=7;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=400;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
num=7;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=400;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
num=7;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=410;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
num=7;
num2=6;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=435;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
num=7;
num2=7;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=425;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
num=7;
num2=8;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=435;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
num=7;
num2=9;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=420;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
num=7;
num2=10;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=425;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
num=7;
num2=11;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=425;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
num=7;
num2=12;
if(Global_262145.f_4197 !=-1) value=Global_262145.f_4197;
else value=435;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
num=7;
num2=13;
if(Global_262145.f_4192 !=-1) value=Global_262145.f_4192;
else value=750;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
num=7;
num2=14;
if(Global_262145.f_4207 !=-1) value=Global_262145.f_4207;
else value=400;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
num=7;
num2=15;
if(Global_262145.f_4200 !=-1) value=Global_262145.f_4200;
else value=435;
break;
}
switch (iParam0){
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_0" /*Red Accent Tee*/, 16);
num=8;
num2=0;
value=45;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_1", 16);
num=8;
num2=1;
flag=true;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_2", 16);
num=8;
num2=2;
flag=true;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_3", 16);
num=8;
num2=3;
flag=true;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_4", 16);
num=8;
num2=4;
flag=true;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_5", 16);
num=8;
num2=5;
flag=true;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_6", 16);
num=8;
num2=6;
flag=true;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_7", 16);
num=8;
num2=7;
flag=true;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_8", 16);
num=8;
num2=8;
flag=true;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_9", 16);
num=8;
num2=9;
flag=true;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_10" /*Sky Blue Tee*/, 16);
num=8;
num2=10;
value=65;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_11", 16);
num=8;
num2=11;
flag=true;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_12", 16);
num=8;
num2=12;
flag=true;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_13" /*Slate Tee*/, 16);
num=8;
num2=13;
value=40;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_14" /*Gray Two-Tone Tee*/, 16);
num=8;
num2=14;
value=45;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_15", 16);
num=8;
num2=15;
flag=true;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_0" /*White Striped Polo Shirt*/, 16);
num=9;
num2=0;
value=265;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_1" /*Metal Polo Shirt*/, 16);
num=9;
num2=1;
value=340;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_2" /*Night Polo Shirt*/, 16);
num=9;
num2=2;
value=335;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_3" /*Cupcake Polo Shirt*/, 16);
num=9;
num2=3;
value=330;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_4" /*Blue Polo Shirt*/, 16);
num=9;
num2=4;
value=345;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_5" /*Vibe Polo Shirt*/, 16);
num=9;
num2=5;
value=550;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_6" /*Salmon Polo Shirt*/, 16);
num=9;
num2=6;
value=340;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_7" /*Royale Polo Shirt*/, 16);
num=9;
num2=7;
value=295;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_8", 16);
num=9;
num2=8;
flag=true;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_9", 16);
num=9;
num2=9;
flag=true;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_10" /*Pro Lite Polo Shirt*/, 16);
num=9;
num2=10;
value=545;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_11" /*Ice Polo Shirt*/, 16);
num=9;
num2=11;
value=345;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_12" /*Money Polo Shirt*/, 16);
num=9;
num2=12;
value=315;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_13" /*Hunter Polo Shirt*/, 16);
num=9;
num2=13;
value=520;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_14" /*Red Polo Shirt*/, 16);
num=9;
num2=14;
value=325;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_15" /*Sunshine Polo Shirt*/, 16);
num=9;
num2=15;
value=330;
break;
}
switch (iParam0){
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
num=10;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=405;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
num=10;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=400;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
num=10;
num2=2;
if(Global_262145.f_4196 !=-1) value=Global_262145.f_4196;
else value=425;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
num=10;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=385;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
num=10;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=385;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
num=10;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=395;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
num=10;
num2=6;
if(Global_262145.f_4195 !=-1) value=Global_262145.f_4195;
else value=500;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
num=10;
num2=7;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=420;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
num=10;
num2=8;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=410;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
num=10;
num2=9;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=420;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
num=10;
num2=10;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=405;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
num=10;
num2=11;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=410;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
num=10;
num2=12;
if(Global_262145.f_4193 !=-1) value=Global_262145.f_4193;
else value=420;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
num=10;
num2=13;
if(Global_262145.f_4208 !=-1) value=Global_262145.f_4208;
else value=420;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
num=10;
num2=14;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=410;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
num=10;
num2=15;
if(Global_262145.f_4202 !=-1) value=Global_262145.f_4202;
else value=460;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
num=11;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=405;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
num=11;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=400;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
num=11;
num2=2;
if(Global_262145.f_4196 !=-1) value=Global_262145.f_4196;
else value=425;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
num=11;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=385;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
num=11;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=385;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
num=11;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=395;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
num=11;
num2=6;
if(Global_262145.f_4195 !=-1) value=Global_262145.f_4195;
else value=500;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
num=11;
num2=7;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=420;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
num=11;
num2=8;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=410;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
num=11;
num2=9;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=420;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
num=11;
num2=10;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=405;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
num=11;
num2=11;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=410;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
num=11;
num2=12;
if(Global_262145.f_4193 !=-1) value=Global_262145.f_4193;
else value=420;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
num=11;
num2=13;
if(Global_262145.f_4208 !=-1) value=Global_262145.f_4208;
else value=420;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
num=11;
num2=14;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=410;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
num=11;
num2=15;
if(Global_262145.f_4202 !=-1) value=Global_262145.f_4202;
else value=460;
break;
}
switch (iParam0){
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_0" /*White Untucked*/, 16);
num=12;
num2=0;
value=420;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_1" /*Steel Untucked*/, 16);
num=12;
num2=1;
value=415;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_2" /*Black Untucked*/, 16);
num=12;
num2=2;
value=695;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_3" /*Sky Untucked*/, 16);
num=12;
num2=3;
value=385;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_4" /*Navy Untucked*/, 16);
num=12;
num2=4;
value=330;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_5" /*Red Untucked*/, 16);
num=12;
num2=5;
value=345;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_6" /*Moss Untucked*/, 16);
num=12;
num2=6;
value=340;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_7" /*Ash Untucked*/, 16);
num=12;
num2=7;
value=450;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_8" /*Mustard Untucked*/, 16);
num=12;
num2=8;
value=295;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_9" /*Butter Untucked*/, 16);
num=12;
num2=9;
value=340;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_10" /*Forest Untucked*/, 16);
num=12;
num2=10;
value=1060;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_11" /*Azure Untucked*/, 16);
num=12;
num2=11;
value=1040;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_12", 16);
num=12;
num2=12;
flag=true;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_13", 16);
num=12;
num2=13;
flag=true;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_14", 16);
num=12;
num2=14;
flag=true;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_15", 16);
num=12;
num2=15;
flag=true;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_0" /*White Tucked*/, 16);
num=13;
num2=0;
value=420;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_1" /*Silver Tucked*/, 16);
num=13;
num2=1;
value=415;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_2" /*Black Tucked*/, 16);
num=13;
num2=2;
value=680;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_3" /*Blue Tucked*/, 16);
num=13;
num2=3;
value=385;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_4", 16);
num=13;
num2=4;
flag=true;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_5" /*Burgundy Tucked*/, 16);
num=13;
num2=5;
value=345;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_6", 16);
num=13;
num2=6;
flag=true;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_7", 16);
num=13;
num2=7;
flag=true;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_8", 16);
num=13;
num2=8;
flag=true;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_9", 16);
num=13;
num2=9;
flag=true;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_10", 16);
num=13;
num2=10;
flag=true;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_11", 16);
num=13;
num2=11;
flag=true;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_12", 16);
num=13;
num2=12;
flag=true;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_13" /*Green Plaid Tucked*/, 16);
num=13;
num2=13;
value=1065;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_14", 16);
num=13;
num2=14;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_15", 16);
num=13;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
num=14;
num2=0;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[16]);
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
num=14;
num2=1;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[17]);
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
num=14;
num2=2;
flag=true;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
num=14;
num2=3;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[19]);
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
num=14;
num2=4;
value=315;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[20]);
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
num=14;
num2=5;
value=215;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[21]);
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
num=14;
num2=6;
value=265;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[22]);
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
num=14;
num2=7;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[23]);
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
num=14;
num2=8;
value=205;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[24]);
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
num=14;
num2=9;
flag=true;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
num=14;
num2=10;
flag=true;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
num=14;
num2=11;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[27]);
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
num=14;
num2=12;
value=55;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[28]);
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
num=14;
num2=13;
flag=true;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
num=14;
num2=14;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[30]);
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
num=14;
num2=15;
flag=true;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_15_0", 16);
num=15;
num2=0;
value=0;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[32]);
break;
}
if(iParam0==23 || iParam0==231){
if(func_214(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23]);
}}elseif(iParam0==17 || iParam0==225){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
}elseif(iParam0==28 || iParam0==236){
if(func_214(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28]);
}}elseif(iParam0 >=0 && iParam0 < 32){
num6=iParam0;
if(num6 >=0 && num6 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6]);
}elseif(iParam0 >=32 && iParam0 < 48){
num7=iParam0 - 32;
if(num7 >=0 && num7 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num7]);
}elseif(iParam0 >=128 && iParam0 < 160){
num8=(iParam0 - 160) + 124;
if(num8 >=0 && num8 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num8]);
}elseif(iParam0 >=192 && iParam0 < 224){
num9=(iParam0 - 160) + 188;
if(num9 >=0 && num9 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num9]);
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_16);
if(iParam0 >=241){
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 241, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_176(int iParam0, Hash hParam1) // Position - 0x1C9A1{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=11;
switch (iParam0){
case 0:
num=0;
num2=0;
value=250;
break;
case 1:
num=0;
num2=1;
value=210;
break;
case 2:
num=0;
num2=2;
value=50;
break;
case 3:
num=0;
num2=3;
value=90;
break;
case 4:
num=0;
num2=4;
value=210;
break;
case 5:
num=0;
num2=5;
value=200;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=130;
break;
case 8:
num=0;
num2=8;
value=220;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=0;
flag=true;
break;
case 11:
num=0;
num2=11;
value=220;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=45;
break;
case 17:
num=1;
num2=1;
value=60;
break;
case 18:
num=1;
num2=2;
value=0;
flag=true;
break;
case 19:
num=1;
num2=3;
value=40;
break;
case 20:
num=1;
num2=4;
value=315;
break;
case 21:
num=1;
num2=5;
value=215;
break;
case 22:
num=1;
num2=6;
value=265;
break;
case 23:
num=1;
num2=7;
value=45;
break;
case 24:
num=1;
num2=8;
value=205;
break;
case 25:
num=1;
num2=9;
value=0;
flag=true;
break;
case 26:
num=1;
num2=10;
value=0;
flag=true;
break;
case 27:
num=1;
num2=11;
value=60;
break;
case 28:
num=1;
num2=12;
value=55;
break;
case 29:
num=1;
num2=13;
value=0;
flag=true;
break;
case 30:
num=1;
num2=14;
value=170;
break;
case 31:
num=1;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=160;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
case 48:
num=3;
num2=0;
value=205;
break;
case 49:
num=3;
num2=1;
value=110;
break;
case 50:
num=3;
num2=2;
value=150;
break;
case 51:
num=3;
num2=3;
value=115;
break;
case 52:
num=3;
num2=4;
value=115;
break;
case 53:
num=3;
num2=5;
value=150;
break;
case 54:
num=3;
num2=6;
value=150;
break;
case 55:
num=3;
num2=7;
value=115;
break;
case 56:
num=3;
num2=8;
value=140;
break;
case 57:
num=3;
num2=9;
value=125;
break;
case 58:
num=3;
num2=10;
value=115;
break;
case 59:
num=3;
num2=11;
value=150;
break;
case 60:
num=3;
num2=12;
value=150;
break;
case 61:
num=3;
num2=13;
value=275;
break;
case 62:
num=3;
num2=14;
value=460;
break;
case 63:
num=3;
num2=15;
value=260;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=965;
break;
case 65:
num=4;
num2=1;
value=0;
flag=true;
break;
case 66:
num=4;
num2=2;
value=2520;
break;
case 67:
num=4;
num2=3;
value=350;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=150;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=3125;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=80;
break;
case 81:
num=5;
num2=1;
value=45;
break;
case 82:
num=5;
num2=2;
value=50;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=50;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=2485;
break;
case 97:
num=6;
num2=1;
value=535;
break;
case 98:
num=6;
num2=2;
value=0;
flag=true;
break;
case 99:
num=6;
num2=3;
value=2945;
break;
case 100:
num=6;
num2=4;
value=3080;
break;
case 101:
num=6;
num2=5;
value=2990;
break;
case 102:
num=6;
num2=6;
value=3750;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=515;
break;
case 105:
num=6;
num2=9;
value=530;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=2810;
break;
case 108:
num=7;
num2=0;
value=150;
break;
case 109:
num=7;
num2=1;
value=155;
break;
case 110:
num=7;
num2=2;
value=320;
break;
case 111:
num=7;
num2=3;
value=140;
break;
case 112:
num=7;
num2=4;
value=150;
break;
case 113:
num=7;
num2=5;
value=145;
break;
case 114:
num=7;
num2=6;
value=150;
break;
case 115:
num=7;
num2=7;
value=140;
break;
case 116:
num=7;
num2=8;
value=135;
break;
case 117:
num=7;
num2=9;
value=130;
break;
case 118:
num=7;
num2=10;
value=130;
break;
case 119:
num=7;
num2=11;
value=150;
break;
case 120:
num=7;
num2=12;
value=145;
break;
case 121:
num=7;
num2=13;
value=740;
break;
case 122:
num=7;
num2=14;
value=790;
break;
case 123:
num=7;
num2=15;
value=130;
break;
}
switch (iParam0){
case 124:
num=8;
num2=0;
value=45;
break;
case 125:
num=8;
num2=1;
value=0;
flag=true;
break;
case 126:
num=8;
num2=2;
value=0;
flag=true;
break;
case 127:
num=8;
num2=3;
value=0;
flag=true;
break;
case 128:
num=8;
num2=4;
value=0;
flag=true;
break;
case 129:
num=8;
num2=5;
value=0;
flag=true;
break;
case 130:
num=8;
num2=6;
value=0;
flag=true;
break;
case 131:
num=8;
num2=7;
value=0;
flag=true;
break;
case 132:
num=8;
num2=8;
value=0;
flag=true;
break;
case 133:
num=8;
num2=9;
value=0;
flag=true;
break;
case 134:
num=8;
num2=10;
value=65;
break;
case 135:
num=8;
num2=11;
value=0;
flag=true;
break;
case 136:
num=8;
num2=12;
value=0;
flag=true;
break;
case 137:
num=8;
num2=13;
value=40;
break;
case 138:
num=8;
num2=14;
value=45;
break;
case 139:
num=8;
num2=15;
value=0;
flag=true;
break;
case 140:
num=9;
num2=0;
value=265;
break;
case 141:
num=9;
num2=1;
value=340;
break;
case 142:
num=9;
num2=2;
value=335;
break;
case 143:
num=9;
num2=3;
value=330;
break;
case 144:
num=9;
num2=4;
value=345;
break;
case 145:
num=9;
num2=5;
value=550;
break;
case 146:
num=9;
num2=6;
value=340;
break;
case 147:
num=9;
num2=7;
value=295;
break;
case 148:
num=9;
num2=8;
value=0;
flag=true;
break;
case 149:
num=9;
num2=9;
value=0;
flag=true;
break;
case 150:
num=9;
num2=10;
value=545;
break;
case 151:
num=9;
num2=11;
value=345;
break;
case 152:
num=9;
num2=12;
value=315;
break;
case 153:
num=9;
num2=13;
value=520;
break;
case 154:
num=9;
num2=14;
value=325;
break;
case 155:
num=9;
num2=15;
value=330;
break;
}
switch (iParam0){
case 156:
num=10;
num2=0;
value=505;
break;
case 157:
num=10;
num2=1;
value=470;
break;
case 158:
num=10;
num2=2;
value=475;
break;
case 159:
num=10;
num2=3;
value=0;
flag=true;
break;
case 160:
num=10;
num2=4;
value=0;
flag=true;
break;
case 161:
num=10;
num2=5;
value=0;
flag=true;
break;
case 162:
num=10;
num2=6;
value=0;
flag=true;
break;
case 163:
num=10;
num2=7;
value=0;
flag=true;
break;
case 164:
num=10;
num2=8;
value=0;
flag=true;
break;
case 165:
num=10;
num2=9;
value=0;
flag=true;
break;
case 166:
num=10;
num2=10;
value=0;
flag=true;
break;
case 167:
num=10;
num2=11;
value=0;
flag=true;
break;
case 168:
num=10;
num2=12;
value=0;
flag=true;
break;
case 169:
num=10;
num2=13;
value=0;
flag=true;
break;
case 170:
num=10;
num2=14;
value=0;
flag=true;
break;
case 171:
num=10;
num2=15;
value=0;
flag=true;
break;
case 172:
num=11;
num2=0;
value=120;
break;
case 173:
num=11;
num2=1;
value=360;
break;
case 174:
num=11;
num2=2;
value=0;
flag=true;
break;
case 175:
num=11;
num2=3;
value=0;
flag=true;
break;
case 176:
num=11;
num2=4;
value=0;
flag=true;
break;
case 177:
num=11;
num2=5;
value=0;
flag=true;
break;
case 178:
num=11;
num2=6;
value=0;
flag=true;
break;
case 179:
num=11;
num2=7;
value=90;
break;
case 180:
num=11;
num2=8;
value=0;
flag=true;
break;
case 181:
num=11;
num2=9;
value=0;
flag=true;
break;
case 182:
num=11;
num2=10;
value=0;
flag=true;
break;
case 183:
num=11;
num2=11;
value=0;
flag=true;
break;
case 184:
num=11;
num2=12;
value=0;
flag=true;
break;
case 185:
num=11;
num2=13;
value=0;
flag=true;
break;
case 186:
num=11;
num2=14;
value=2450;
break;
case 187:
num=11;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 188:
num=12;
num2=0;
value=420;
break;
case 189:
num=12;
num2=1;
value=415;
break;
case 190:
num=12;
num2=2;
value=695;
break;
case 191:
num=12;
num2=3;
value=385;
break;
case 192:
num=12;
num2=4;
value=330;
break;
case 193:
num=12;
num2=5;
value=345;
break;
case 194:
num=12;
num2=6;
value=340;
break;
case 195:
num=12;
num2=7;
value=450;
break;
case 196:
num=12;
num2=8;
value=295;
break;
case 197:
num=12;
num2=9;
value=340;
break;
case 198:
num=12;
num2=10;
value=1060;
break;
case 199:
num=12;
num2=11;
value=1040;
break;
case 200:
num=12;
num2=12;
value=0;
flag=true;
break;
case 201:
num=12;
num2=13;
value=0;
flag=true;
break;
case 202:
num=12;
num2=14;
value=0;
flag=true;
break;
case 203:
num=12;
num2=15;
value=0;
flag=true;
break;
case 204:
num=13;
num2=0;
value=420;
break;
case 205:
num=13;
num2=1;
value=415;
break;
case 206:
num=13;
num2=2;
value=680;
break;
case 207:
num=13;
num2=3;
value=385;
break;
case 208:
num=13;
num2=4;
value=0;
flag=true;
break;
case 209:
num=13;
num2=5;
value=345;
break;
case 210:
num=13;
num2=6;
value=0;
flag=true;
break;
case 211:
num=13;
num2=7;
value=0;
flag=true;
break;
case 212:
num=13;
num2=8;
value=0;
flag=true;
break;
case 213:
num=13;
num2=9;
value=0;
flag=true;
break;
case 214:
num=13;
num2=10;
value=0;
flag=true;
break;
case 215:
num=13;
num2=11;
value=0;
flag=true;
break;
case 216:
num=13;
num2=12;
value=0;
flag=true;
break;
case 217:
num=13;
num2=13;
value=1065;
break;
case 218:
num=13;
num2=14;
value=0;
flag=true;
break;
case 219:
num=13;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 220:
num=14;
num2=0;
value=420;
break;
case 221:
num=14;
num2=1;
value=415;
break;
case 222:
num=14;
num2=2;
value=440;
break;
case 223:
num=14;
num2=3;
value=385;
break;
case 224:
num=14;
num2=4;
value=330;
break;
case 225:
num=14;
num2=5;
value=445;
break;
case 226:
num=14;
num2=6;
value=340;
break;
case 227:
num=14;
num2=7;
value=440;
break;
case 228:
num=14;
num2=8;
value=295;
break;
case 229:
num=14;
num2=9;
value=340;
break;
case 230:
num=14;
num2=10;
value=325;
break;
case 231:
num=14;
num2=11;
value=435;
break;
case 232:
num=14;
num2=12;
value=445;
break;
case 233:
num=14;
num2=13;
value=440;
break;
case 234:
num=14;
num2=14;
value=325;
break;
case 235:
num=14;
num2=15;
value=325;
break;
case 236:
num=15;
num2=0;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0==23){
if(func_214(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_16);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23] * Global_296940.f_16);
}}elseif(iParam0==17){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_16);
}elseif(iParam0==28){
if(func_214(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_16);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28] * Global_296940.f_16);
}}else{
num6=iParam0;
if(num6 >=0 && num6 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6] * Global_296940.f_16);
}
if(iParam0 >=237){
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 237, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
}else{
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_177(int iParam0, Hash hParam1) // Position - 0x1DF2C{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=2;
switch (iParam0){
case 0:
num=0;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[0]);
break;
case 1:
num=1;
num2=0;
value=190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[1]);
break;
case 2:
num=1;
num2=1;
value=185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[2]);
break;
case 3:
num=1;
num2=2;
value=180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[3]);
break;
case 4:
num=1;
num2=3;
value=175;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[4]);
break;
case 5:
num=1;
num2=4;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[5]);
break;
case 6:
num=1;
num2=5;
value=0;
break;
case 7:
num=2;
num2=0;
value=580;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[6]);
break;
case 8:
num=2;
num2=1;
value=575;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[7]);
break;
case 9:
num=2;
num2=2;
value=570;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[8]);
break;
case 10:
num=2;
num2=3;
value=565;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[9]);
break;
case 11:
num=2;
num2=4;
value=560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[10]);
break;
case 12:
num=2;
num2=5;
value=0;
break;
case 13:
num=3;
num2=0;
value=1100;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[11]);
break;
case 14:
num=3;
num2=1;
value=1095;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[12]);
break;
case 15:
num=3;
num2=2;
value=1090;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[13]);
break;
case 16:
num=3;
num2=3;
value=1085;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[14]);
break;
case 17:
num=3;
num2=4;
value=1080;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[15]);
break;
case 18:
num=3;
num2=5;
value=0;
break;
case 19:
num=4;
num2=0;
value=520;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[16]);
break;
case 20:
num=4;
num2=1;
value=515;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[17]);
break;
case 21:
num=4;
num2=2;
value=510;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[18]);
break;
case 22:
num=4;
num2=3;
value=505;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[19]);
break;
case 23:
num=4;
num2=4;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[20]);
break;
case 24:
num=4;
num2=5;
value=0;
break;
case 25:
num=4;
num2=6;
value=0;
break;
case 26:
num=5;
num2=0;
value=295;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[21]);
break;
case 27:
num=5;
num2=1;
value=290;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[22]);
break;
case 28:
num=5;
num2=2;
value=285;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[23]);
break;
case 29:
num=5;
num2=3;
value=280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[24]);
break;
case 30:
num=5;
num2=4;
value=275;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[25]);
break;
case 31:
num=5;
num2=5;
value=0;
break;
case 32:
num=6;
num2=0;
value=950;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[26]);
break;
case 33:
num=6;
num2=1;
value=945;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[27]);
break;
case 34:
num=6;
num2=2;
value=940;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[28]);
break;
case 35:
num=6;
num2=3;
value=935;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[29]);
break;
case 36:
num=6;
num2=4;
value=930;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[30]);
break;
case 37:
num=6;
num2=5;
value=0;
break;
case 38:
num=7;
num2=0;
value=440;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[31]);
break;
case 39:
num=7;
num2=1;
value=435;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[32]);
break;
case 40:
num=7;
num2=2;
value=430;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[33]);
break;
case 41:
num=7;
num2=3;
value=425;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[34]);
break;
case 42:
num=7;
num2=4;
value=420;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[35]);
break;
case 43:
num=7;
num2=5;
value=0;
break;
case 44:
num=7;
num2=6;
value=0;
break;
case 45:
num=8;
num2=0;
value=1150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[36]);
break;
case 46:
num=8;
num2=1;
value=1145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[37]);
break;
case 47:
num=8;
num2=2;
value=1140;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[38]);
break;
case 48:
num=8;
num2=3;
value=1135;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[39]);
break;
case 49:
num=8;
num2=4;
value=1130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[40]);
break;
case 50:
num=9;
num2=0;
value=395;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[41]);
break;
case 51:
num=9;
num2=1;
value=390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[42]);
break;
case 52:
num=9;
num2=2;
value=385;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[43]);
break;
case 53:
num=9;
num2=3;
value=380;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[44]);
break;
case 54:
num=9;
num2=4;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[45]);
break;
case 55:
num=9;
num2=5;
value=0;
break;
case 56:
num=9;
num2=6;
value=0;
break;
case 57:
num=10;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[46]);
break;
case 58:
num=10;
num2=1;
value=495;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[47]);
break;
case 59:
num=10;
num2=2;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[48]);
break;
case 60:
num=10;
num2=3;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[49]);
break;
case 61:
num=10;
num2=4;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[50]);
break;
case 62:
num=10;
num2=5;
value=0;
break;
case 63:
num=11;
num2=0;
value=1050;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[51]);
break;
case 64:
num=11;
num2=1;
value=1045;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[52]);
break;
case 65:
num=11;
num2=2;
value=1040;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[53]);
break;
case 66:
num=11;
num2=3;
value=1035;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[54]);
break;
case 67:
num=11;
num2=4;
value=1030;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[55]);
break;
case 68:
num=11;
num2=5;
value=0;
break;
case 69:
num=12;
num2=0;
value=550;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[56]);
break;
case 70:
num=12;
num2=1;
value=545;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[57]);
break;
case 71:
num=12;
num2=2;
value=540;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[58]);
break;
case 72:
num=12;
num2=3;
value=535;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[59]);
break;
case 73:
num=12;
num2=4;
value=530;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[60]);
break;
case 74:
num=13;
num2=0;
value=1200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[61]);
break;
case 75:
num=13;
num2=1;
value=1195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[62]);
break;
case 76:
num=13;
num2=2;
value=1190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[63]);
break;
case 77:
num=13;
num2=3;
value=1185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[64]);
break;
case 78:
num=13;
num2=4;
value=1180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[65]);
break;
case 79:
num=13;
num2=5;
value=0;
break;
case 80:
num=14;
num2=0;
value=2000;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[66]);
break;
case 81:
num=14;
num2=1;
value=1995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[67]);
break;
case 82:
num=14;
num2=2;
value=1990;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[68]);
break;
case 83:
num=14;
num2=3;
value=1985;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[69]);
break;
case 84:
num=14;
num2=4;
value=1980;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[70]);
break;
case 85:
num=15;
num2=0;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[71]);
break;
case 86:
num=15;
num2=1;
value=470;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[72]);
break;
case 87:
num=15;
num2=2;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[73]);
break;
case 88:
num=15;
num2=3;
value=460;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[74]);
break;
case 89:
num=15;
num2=4;
value=455;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[75]);
break;
case 90:
num=15;
num2=5;
value=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_147(num5, iParam0, 91, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_138(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_178() // Position - 0x1EDE6{
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
return;
}
BOOL func_179() // Position - 0x1EE5E{
return func_180(PLAYER::PLAYER_ID());
}
BOOL func_180(Player plParam0) // Position - 0x1EE6E{
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0))==joaat("MP_F_Freemode_01")) return 1;
return 0;
}


void func_181(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1EE8D{
if(bParam4 || bParam1)if(iParam0 !=87 && iParam0 !=89 && iParam0 !=88 && iParam0 !=13 && iParam0 !=14 && iParam0 !=15 && iParam0 !=16)if(iParam0 !=71 && iParam0 !=72) _MPCHAR_STAT_INCREMENT_INT_BY_ONE(MP_STAT_NO_TATTOOS_UNLOCK, iParam5);
else _MPCHAR_STAT_INCREMENT_INT_BY_ONE(MP_STAT_NO_TATTOOS_UNLOCK, iParam5);
if(bParam1){
if(!func_214(iParam0, iParam5)) func_208(iParam0, true, iParam5);
if(bParam2 && iParam0 < 129){
if(func_206(iParam0)==false){
func_200(12, func_205(iParam0, 3), func_204(iParam0, 3), func_203(iParam0, 3), func_202(iParam0, 3), -1, 0, 0, 0, -1, 0);
func_199(iParam0, true);
}}
if(bParam3) func_194(iParam0, true, iParam5);
if(Global_1653913.f_1043==0) Global_1653913.f_1044=iParam0;
}else{
if(func_214(iParam0, iParam5)){
func_208(iParam0, false, iParam5);
_MPCHAR_STAT_INCREMENT_INT(MP_STAT_NO_TATTOOS_UNLOCK, -1, iParam5);
}
if(iParam0 < 129)if(func_206(iParam0)==true) func_199(iParam0, false);
if(func_190(iParam0, iParam5)) func_182(iParam0, false, iParam5);
}
return;
}


void func_182(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1EFDE{
if(bParam1)if(!func_190(iParam0, iParam2)) func_183(iParam0, true, iParam2);
elseif(func_190(iParam0, iParam2)) func_183(iParam0, false, iParam2);
return;
}


void func_183(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1F017{
int address;
int num;
eMPStat stat;
address=func_189(iParam0, iParam2);
num=iParam0;
if(num > -1){
if(bParam1) MISC::SET_BIT(&address, func_188(num));
else MISC::CLEAR_BIT(&address, func_188(num));
if(!func_187(false)){
stat=func_184(iParam0);
if(stat !=14192) _MPCHAR_STAT_SET_INT(stat, address, iParam2, true, false);
}}
return;
}
eMPStat func_184(int iParam0) // Position - 0x1F07E{
int num;
int num2;
num=iParam0;
num2=func_186(num);
if(func_102()==0 || func_185()==0 || func_102()==999 && func_185()==999){
switch (num2){
case 0:
return 1049;
case 1:
return 1050;
case 2:
return 1051;
case 3:
return 1052;
case 4:
return 1053;
case 5:
return 1054;
case 6:
return 1488;
case 7:
return 1489;
case 8:
return 1490;
case 9:
return 1491;
case 10:
return 1949;
case 11:
return 1950;
case 12:
return 1951;
case 13:
return 2425;
case 14:
return 2445;
case 15:
return 2448;
case 16:
return 2451;
case 17:
return 2615;
case 18:
return 2618;
case 19:
return 2621;
case 20:
return 3787;
case 21:
return 3790;
case 22:
return 3865;
case 23:
return 3868;
case 24:
return 3871;
case 25:
return 3874;
case 26:
return 5365;
case 27:
return 5368;
case 28:
return 5470;
case 29:
return 5473;
case 30:
return 6432;
case 31:
return 6435;
case 32:
return 7256;
case 33:
return 7259;
case 34:
return 7262;
case 35:
return 7971;
case 36:
return 7974;
case 37:
return 7977;
case 38:
return 7980;
case 39:
return 8502;
case 40:
return 8505;
case 41:
return 8508;
case 42:
return 8511;
case 43:
return 8907;
case 44:
return 8910;
case 45:
return 8913;
case 46:
return 10288;
case 47:
return 10291;
case 48:
return 10414;
case 49:
return 10417;
case 50:
return 11825;
case 51:
return 11828;
case 52:
break;
}
return 14192;
}
if(func_102()==2 && func_185()==2) return 14192;
return 14192;
}

int func_185() // Position - 0x1F401{
return Global_32164;
}

int func_186(int iParam0) // Position - 0x1F40C{
return iParam0 / 32;
}
BOOL func_187(BOOL bParam0) // Position - 0x1F419{
bParam0;
return Global_1575035;
}

int func_188(int iParam0) // Position - 0x1F42A{
return iParam0 % 32;
}

int func_189(int iParam0, int iParam1) // Position - 0x1F437{
eMPStat stat;
int num;
stat=func_184(iParam0);
if(stat==14192)if(func_102()==2 && func_185()==2) return 0;
else return 0;
num=_MPCHAR_STAT_GET_INT(stat, iParam1, 0);
return num;
}
BOOL func_190(int iParam0, int iParam1) // Position - 0x1F47E{
int num;
int num2;
if(iParam0==-1) return false;
num=func_189(iParam0, iParam1);
num2=func_188(iParam0);
if(num2 < 0 || num2 >=32) return false;
return IS_BIT_SET(num, num2);
}


void _MPCHAR_STAT_INCREMENT_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x1F4BD{
int num;
num=_MPCHAR_STAT_GET_INT(empsParam0, func_15(iParam2), 0);
num=num + iParam1;
if(!func_193(empsParam0)) _MPCHAR_STAT_SET_INT(empsParam0, num, iParam2, true, false);
else func_192(empsParam0, num, iParam2, true);
return;
}


void func_192(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1F4FF{
Hash statName;
statName=Global_2805027[empsParam0 /*3*/][func_15(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
switch (empsParam0){
case MP_STAT_BRONZE_INTCHAR_0:
Global_1665566[func_15(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_1:
Global_1665572[func_15(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_2:
Global_1665578[func_15(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_3:
Global_1665584[func_15(iParam2)]=iParam1;
break;
case MP_STAT_BRONZE_INTCHAR_4:
Global_1665590[func_15(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_0:
Global_1665536[func_15(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_1:
Global_1665542[func_15(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_2:
Global_1665548[func_15(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_3:
Global_1665554[func_15(iParam2)]=iParam1;
break;
case MP_STAT_SILVER_INTCHAR_4:
Global_1665560[func_15(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_0:
Global_1665506[func_15(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_1:
Global_1665512[func_15(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_2:
Global_1665518[func_15(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_3:
Global_1665524[func_15(iParam2)]=iParam1;
break;
case MP_STAT_GOLD_INTCHAR_4:
Global_1665530[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_0:
Global_1665596[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_1:
Global_1665602[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_2:
Global_1665608[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_3:
Global_1665614[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_INTCHAR_4:
Global_1665620[func_15(iParam2)]=iParam1;
break;
case MP_STAT_FM_CUT_DONE:
Global_1665626[func_15(iParam2)]=iParam1;
break;
case MP_STAT_FM_CUT_DONE_2:
Global_1665632[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CHAR_XP_FM:
Global_1665638[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROPERTY_HOUSE:
Global_1665644[func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_1:
Global_2851323[0 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_2:
Global_2851323[1 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_3:
Global_2851323[2 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_4:
Global_2851323[3 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_BRUISER2_LAS_HITS:
Global_2851502[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_0:
Global_1665650[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_1:
Global_1665656[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_2:
Global_1665662[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_3:
Global_1665668[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PLATINUM_BOOLCHAR_4:
Global_1665674[func_15(iParam2)]=iParam1;
break;
case MP_STAT_INSURGENT3_TURR_HITS:
Global_1665680[func_15(iParam2)]=iParam1;
break;
case MP_STAT_NO_CLOTHES_UNLOCK:
Global_1665686[func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_0:
Global_2851411[0 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_1:
Global_2851411[1 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_2:
Global_2851411[2 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_3:
Global_2851411[3 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_4:
Global_2851411[4 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT0:
Global_2851505[0 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT1:
Global_2851505[1 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT2:
Global_2851505[2 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT3:
Global_2851505[3 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_WARHOUSESLOT4:
Global_2851505[4 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE0:
Global_2851521[0 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE1:
Global_2851521[1 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE2:
Global_2851521[2 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE3:
Global_2851521[3 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CONTOTALFORWHOUSE4:
Global_2851521[4 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_VAR:
Global_2851411[5 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE:
Global_2851323[4 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_NUMBUYMISSIONSCOMPLETED:
Global_2851537[func_15(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_BUY_COMPLETE:
Global_2851546[func_15(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_BUY_UNDERTAKEN:
Global_2851540[func_15(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_SELL_COMPLETE:
Global_2851549[func_15(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_SELL_UNDERTAKEN:
Global_2851543[func_15(iParam2)]=iParam1;
break;
case MP_STAT_LIFETIME_CONTRA_EARNINGS:
Global_2851552[func_15(iParam2)]=iParam1;
break;
case MP_STAT_DELIVERY_VEH_UPGRADES:
Global_2851555[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CLUBHOUSE_VAR:
Global_2851411[6 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CLUBHOUSE:
Global_2851323[5 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_5:
Global_2851411[7 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_5:
Global_2851323[6 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR1_VAR:
Global_2851411[8 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR1:
Global_2851323[7 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR2_VAR:
Global_2851411[9 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR2:
Global_2851323[8 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR3_VAR:
Global_2851411[10 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_OFFICE_GAR3:
Global_2851323[9 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_IE_WAREHOUSE_VAR:
Global_2851411[11 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_IE_WAREHOUSE:
Global_2851323[10 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_HANGAR_VAR:
Global_2851411[12 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_HANGAR:
Global_2851323[11 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_DEFUNCBASE_VAR:
Global_2851411[13 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_DEFUNCBASE:
Global_2851323[12 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_NIGHTCLUB_VAR:
Global_2851411[14 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_NIGHTCLUB:
Global_2851323[13 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR1_VAR:
Global_2851411[15 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR1:
Global_2851323[14 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR2_VAR:
Global_2851411[16 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR2:
Global_2851323[15 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR3_VAR:
Global_2851411[17 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_MEGAWARE_GAR3:
Global_2851323[16 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR1:
Global_2851323[17 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR2:
Global_2851323[18 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARENAWARS_GAR3:
Global_2851323[19 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_CASINO_GAR1:
Global_2851323[20 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_1:
Global_2851558[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_2:
Global_2851561[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_3:
Global_2851564[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_4:
Global_2851567[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_5:
Global_2851570[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_6:
Global_2851573[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_7:
Global_2851576[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_8:
Global_2851579[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_9:
Global_2851582[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_10:
Global_2851585[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_11:
Global_2851588[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_12:
Global_2851591[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_13:
Global_2851594[func_15(iParam2)]=iParam1;
break;
case MP_STAT_CASINO_APT_DECORATION_14:
Global_2851597[func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_ARCADE_GAR1:
Global_2851323[21 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_6:
Global_2851411[23 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_6:
Global_2851323[22 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_APPARTMENT_VAR_7:
Global_2851411[24 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_MULTI_PROPERTY_7:
Global_2851323[23 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_AUTO_SHOP:
Global_2851323[24 /*3*/][func_15(iParam2)]=iParam1;
break;
case MP_STAT_PROP_SECURITY_OFFICE_GAR:
Global_2851323[25 /*3*/][func_15(iParam2)]=iParam1;
break;
case _0x2065457610:
Global_2851411[27 /*3*/][func_15(iParam2)]=iParam1;
break;
case _0x1055556065:
Global_2851323[26 /*3*/][func_15(iParam2)]=iParam1;
break;
case _0x1335233214:
Global_2851411[28 /*3*/][func_15(iParam2)]=iParam1;
break;
case _0x2129461717:
Global_2851323[27 /*3*/][func_15(iParam2)]=iParam1;
break;
default:
break;
}
return;
}
BOOL func_193(eMPStat empsParam0) // Position - 0x20033{
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


void func_194(int iParam0, BOOL bParam1, int iParam2) // Position - 0x20303{
if(bParam1)if(!func_198(iParam0)) func_195(iParam0, true, iParam2);
elseif(func_198(iParam0)) func_195(iParam0, false, iParam2);
return;
}


void func_195(int iParam0, BOOL bParam1, int iParam2) // Position - 0x20338{
int address;
int num;
address=func_197(iParam0);
num=iParam0;
if(num > -1){
if(bParam1) MISC::SET_BIT(&address, func_188(num));
else MISC::CLEAR_BIT(&address, func_188(num));
_MPCHAR_STAT_SET_INT(func_196(iParam0), address, iParam2, true, false);
}
return;
}
eMPStat func_196(int iParam0) // Position - 0x20385{
int num;
int num2;
num=iParam0;
num2=func_186(num);
if(func_102()==0 || func_185()==0 || func_102()==999 && func_185()==999){
switch (num2){
case 0:
return MP_STAT_TATTOO_FM_VIEWED_0;
case 1:
return MP_STAT_TATTOO_FM_VIEWED_1;
case 2:
return MP_STAT_TATTOO_FM_VIEWED_2;
case 3:
return MP_STAT_TATTOO_FM_VIEWED_3;
case 4:
return MP_STAT_TATTOO_FM_VIEWED_4;
case 5:
return MP_STAT_TATTOO_FM_VIEWED_5;
case 6:
return MP_STAT_TATTOO_FM_VIEWED_6;
case 7:
return MP_STAT_TATTOO_FM_VIEWED_7;
case 8:
return MP_STAT_TATTOO_FM_VIEWED_8;
case 9:
return MP_STAT_TATTOO_FM_VIEWED_9;
case 10:
return MP_STAT_TATTOO_FM_VIEWED_10;
case 11:
return MP_STAT_TATTOO_FM_VIEWED_11;
case 12:
return MP_STAT_TATTOO_FM_VIEWED_12;
case 13:
return MP_STAT_TATTOO_FM_VIEWED_13;
case 14:
return MP_STAT_TATTOO_FM_VIEWED_14;
case 15:
return MP_STAT_TATTOO_FM_VIEWED_15;
case 16:
return MP_STAT_TATTOO_FM_VIEWED_16;
case 17:
return MP_STAT_TATTOO_FM_VIEWED_17;
case 18:
return MP_STAT_TATTOO_FM_VIEWED_18;
case 19:
return MP_STAT_TATTOO_FM_VIEWED_19;
case 20:
return MP_STAT_TATTOO_FM_VIEWED_20;
case 21:
return MP_STAT_TATTOO_FM_VIEWED_21;
case 22:
return MP_STAT_TATTOO_FM_VIEWED_22;
case 23:
return MP_STAT_TATTOO_FM_VIEWED_23;
case 24:
return MP_STAT_TATTOO_FM_VIEWED_24;
case 25:
return MP_STAT_TATTOO_FM_VIEWED_25;
case 26:
return MP_STAT_TATTOO_FM_VIEWED_26;
case 27:
return MP_STAT_TATTOO_FM_VIEWED_27;
case 28:
return MP_STAT_TATTOO_FM_VIEWED_28;
case 29:
return MP_STAT_TATTOO_FM_VIEWED_29;
case 30:
return MP_STAT_TATTOO_FM_VIEWED_30;
case 31:
return MP_STAT_TATTOO_FM_VIEWED_31;
case 32:
return MP_STAT_TATTOO_FM_VIEWED_32;
case 33:
return MP_STAT_TATTOO_FM_VIEWED_33;
case 34:
return MP_STAT_TATTOO_FM_VIEWED_34;
case 35:
return MP_STAT_TATTOO_FM_VIEWED_35;
case 36:
return MP_STAT_TATTOO_FM_VIEWED_36;
case 37:
return MP_STAT_TATTOO_FM_VIEWED_37;
case 38:
return MP_STAT_TATTOO_FM_VIEWED_38;
case 39:
return MP_STAT_TATTOO_FM_VIEWED_39;
case 40:
return MP_STAT_TATTOO_FM_VIEWED_40;
case 41:
return MP_STAT_TATTOO_FM_VIEWED_41;
case 42:
return MP_STAT_TATTOO_FM_VIEWED_42;
case 43:
return MP_STAT_TATTOO_FM_VIEWED_43;
case 44:
return MP_STAT_TATTOO_FM_VIEWED_44;
case 45:
return MP_STAT_TATTOO_FM_VIEWED_45;
case 46:
return MP_STAT_TATTOO_FM_VIEWED_46;
case 47:
return MP_STAT_TATTOO_FM_VIEWED_47;
case 48:
return _0x795069581;
case 49:
return _0x1033726208;
case 50:
return MP_STAT_OPPRESSOR_MISS_ENEMY_KILLS;
case 51:
return MP_STAT_TAMPA3_MISS_SHOTS;
}}
return 14192;
}

int func_197(int iParam0) // Position - 0x206E2{
int num;
num=_MPCHAR_STAT_GET_INT(func_196(iParam0), -1, 0);
return num;
}
BOOL func_198(int iParam0) // Position - 0x206FA{
int num;
int num2;
num=func_197(iParam0);
num2=iParam0;
return IS_BIT_SET(num, func_188(num2));
}


void func_199(int iParam0, BOOL bParam1) // Position - 0x20717{
int num;
num=iParam0;
if(num > -1)if(bParam1) MISC::SET_BIT(&Global_2803653.f_1032[func_186(num)], func_188(num));
else MISC::CLEAR_BIT(&Global_2803653.f_1032[func_186(num)], func_188(num));
return;
}


void func_200(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, const char* sParam8, int iParam9, int iParam10) // Position - 0x20766{
int num;
num=func_201(&Global_1662547);
Global_1662547[num /*106*/]=iParam0;
TEXT_LABEL_ASSIGN_STRING(&(Global_1662547[num /*106*/].f_17), sParam3, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1662547[num /*106*/].f_1), sParam4, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1662547[num /*106*/].f_33), sParam1, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_1662547[num /*106*/].f_49), sParam2, 64);
Global_1662547[num /*106*/].f_97=iParam5;
Global_1662547[num /*106*/].f_104=iParam9;
Global_1662547[num /*106*/].f_105=iParam10;
iParam6 !=0;
iParam7 !=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) TEXT_LABEL_ASSIGN_STRING(&(Global_1662547[num /*106*/].f_98), sParam8, 24);
return;
}

int func_201(var uParam0) // Position - 0x20802{
int num;
int i;
for (i=0;
i <=9;
i=i + 1){
if(uParam0->[i /*106*/]==0){
num=i;
i=10;
}}
return num;
}


char* func_202(int iParam0, int iParam1) // Position - 0x20831{
char* str;
str="MPTATTOOS";
iParam0==iParam0;
iParam1==iParam1;
switch (iParam0){
case 56:
return "MPTattoos3";
case 89:
return "MPTSHIRTAWARDS";
case 88:
return "MPTSHIRTAWARDS";
case 87:
return "MPTSHIRTAWARDS";
case 57:
return "MPTattoos2";
case 58:
return "MPTattoos2";
case 59:
return "MPTattoos2";
case 60:
return "MPTattoos2";
case 12:
case 55:
case 49:
case 48:
case 46:
case 45:
case 34:
case 65:
case 25:
return "MPTattoos3";
}
return str;
}


char* func_203(int iParam0, int iParam1) // Position - 0x20916{
char* str;
str="";
iParam0==iParam0;
iParam1==iParam1;
switch (iParam0){
case 56:
return "TATTOO_WIN_PARLEY";
case 57:
return "TATTOO_HOLD_UP_SHOPS_10";
case 58:
return "TATTOO_HOLD_UP_SHOPS_25";
case 59:
return "TATTOO_HOLD_UP_SHOPS_50";
case 60:
return "TATTOO_HOLD_UP_SHOPS_100";
case 0:
return "HeadBanger";
case 1:
return "theslayer";
case 2:
return "clearout";
case 4:
return "thehustler";
case 3:
return "armoredvantakedowns";
case 54:
return "wineverymodeonce";
case 5:
return "killplayerbountyhead";
case 6:
return "holdworldrecord";
case 55:
return "MP_FM_Tat_Award_008";
case 7:
return "getrevengekills";
case 8:
return "kill3otherracers";
case 9:
return "reachrank1";
case 10:
return "reachrank2";
case 11:
return "reachrank3";
case 13:
return "HeadBanger";
case 14:
return "HeadBanger";
case 15:
return "HeadBanger";
case 16:
return "HeadBanger";
case 89:
return "RockstarVerifiied";
case 87:
return "ReachHordeModeWave";
case 12:
return "TATTOO_RACES_WON";
}
switch (iParam0){
case 17:
return "Headbanger";
case 18:
return "Headbanger";
case 19:
return "Headbanger";
case 20:
return "Headbanger";
case 21:
return "Headbanger";
case 22:
return "Headbanger";
case 23:
return "Headbanger";
case 24:
return "Headbanger";
case 25:
return "MP_FM_Tat_002";
case 26:
return "Headbanger";
case 27:
return "Headbanger";
case 28:
return "Headbanger";
case 61:
return "Headbanger";
case 62:
return "Headbanger";
case 63:
return "Headbanger";
case 64:
return "Headbanger";
case 65:
return "MP_FM_Tat_019";
case 29:
return "Headbanger";
case 30:
return "Headbanger";
case 31:
return "Headbanger";
case 66:
return "Headbanger";
case 32:
return "Headbanger";
case 33:
return "Headbanger";
case 34:
return "MP_FM_Tat_023";
case 35:
return "Headbanger";
case 36:
return "Headbanger";
case 37:
return "Headbanger";
case 38:
return "Headbanger";
case 39:
return "Headbanger";
case 40:
return "Headbanger";
case 67:
return "Headbanger";
case 41:
return "Headbanger";
case 68:
return "Headbanger";
case 42:
return "Headbanger";
case 43:
return "Headbanger";
case 44:
return "Headbanger";
case 45:
return "MP_FM_Tat_036";
case 46:
return "MP_FM_Tat_037";
case 47:
return "Headbanger";
case 48:
return "MP_FM_Tat_039";
case 49:
return "MP_FM_Tat_040";
case 50:
return "Headbanger";
case 51:
return "Headbanger";
case 52:
return "Headbanger";
case 53:
return "Headbanger";
case 69:
return "Headbanger";
}
return str;
}


char* func_204(int iParam0, int iParam1) // Position - 0x20DC2{
char* str;
str="";
iParam0==iParam0;
iParam1==iParam1;
switch (iParam0){
case 7:
return "TAT_FM_REVENKIL_D" /*Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch.*/;
case 6:
return "TAT_FM_RECHOLD_d" /*Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race.*/;
case 8:
return "TAT_FM_KIL3RACE_D" /*Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win.*/;
case 5:
return "TAT_FM_KILb_D" /*Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets.*/;
case 0:
return "TAT_FM_HEADBANG_D" /*Complete the Head Banger platinum Award. ~n~Get 500 player headshots.*/;
case 12:
return "TAT_RACE50_D" /*Complete The Champion platinum Award. ~n~Win 50 Races.*/;
case 2:
return "TAT_CLEAROUT_D" /*Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session.*/;
case 9:
return "TAT_FM_RANK1_D" /*Complete The Widow Maker silver Award. ~n~Get 250 player kills.*/;
case 10:
return "TAT_FM_RANK2_D" /*Complete The Widow Maker gold Award. ~n~Get 500 player kills.*/;
case 11:
return "TAT_FM_RANK3_D" /*Complete The Widow Maker platinum Award. ~n~Get 1000 player kills.*/;
case 4:
return "TAT_FM_HUST_D" /*Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting.*/;
case 1:
return "TAT_FM_SLAY_D" /*Complete The Slayer platinum Award. ~n~Win 50 Deathmatches.*/;
case 54:
return "TAT_FM_EVERMODE1_D" /*Complete the All Rounder platinum Award. ~n~Win every game mode.*/;
case 3:
return "TAT_FM_ARVANTAKE_D" /*Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks.*/;
case 56:
return "TAT_CHEATER_D" /*Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives.*/;
case 13:
return "TAT_CRANKA_D" /*Reached Crew Rank 26.*/;
case 14:
return "TAT_CRANKB_D" /*Reached Crew Rank 45.*/;
case 15:
return "TAT_CRANKC_D" /*Reached Crew Rank 18.*/;
case 16:
return "TAT_CRANKD_D" /*Reached Crew Rank 52.*/;
case 89:
return "TAT_FM_ROCKSTAR_D" /*Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games.*/;
case 87:
return "TAT_FM_REDSKULL_D" /*Complete The Survivor platinum Award. ~n~Complete a Survival.*/;
case 55:
return "TAT_FM_MODDED_D" /*Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle.*/;
}
switch (iParam0){
case 17:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 18:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 19:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 20:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 21:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 22:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 23:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 24:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 25:
return "TAT_TAT9U" /*Get 500 kills in Deathmatch to unlock this item.*/;
case 26:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 27:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 28:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 61:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 62:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 63:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 64:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 65:
return "TAT_TAT17U" /*Get the most kills in a 4 player Survival to unlock this item.*/;
case 29:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 30:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 31:
return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
case 66:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 32:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 33:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 34:
return "TAT_TAT24U" /*Get 25 Private Dances to unlock this item.*/;
case 35:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 36:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 37:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 38:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 39:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 40:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 67:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 41:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 68:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 42:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 43:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 44:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 45:
return "TAT_TAT37U" /*Get 500 Pistol kills to unlock this item.*/;
case 46:
return "TAT_TAT38U" /*Earn 50 MVPs in Team Deathmatch to unlock this item.*/;
case 47:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 48:
return "TAT_TAT40U" /*Get 100 Sniper kills to unlock this item.*/;
case 49:
return "TAT_TAT41U" /*Earn a 10 plus killstreak in Deathmatch to unlock this item.*/;
case 50:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 51:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 52:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 53:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 69:
return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
case 57:
return "TAT_HOLDUP1V_D" /*Complete the Armed Robber bronze Award. ~n~Hold up 5 stores.*/;
case 58:
return "TAT_HOLDUP5V_D" /*Complete the Armed Robber silver Award. ~n~Hold up 10 stores.*/;
case 59:
return "TAT_HOLDUP10V_D" /*Complete the Armed Robber gold Award. ~n~Hold up 15 stores.*/;
case 60:
return "TAT_HOLDUP20V_D" /*Complete the Armed Robber platinum Award. ~n~Hold up 20 stores.*/;
}
return str;
}


char* func_205(int iParam0, int iParam1) // Position - 0x2126E{
char* str;
str="";
iParam0==iParam0;
iParam1==iParam1;
switch (iParam0){
case 0:
return "TAT_FM_HEADBANG" /*Skull*/;
case 2:
return "TAT_CLEAROUT" /*Grim Reaper Smoking Gun*/;
case 9:
return "TAT_FM_RANK1" /*Blank Scroll*/;
case 10:
return "TAT_FM_RANK2" /*Embellished Scroll*/;
case 11:
return "TAT_FM_RANK3" /*Seven Deadly Sins*/;
case 4:
return "TAT_FM_HUST" /*Hustler*/;
case 1:
return "TAT_FM_SLAY" /*Burning Heart*/;
case 54:
return "TAT_FM_EVERMODE1" /*Angel*/;
case 3:
return "TAT_FM_ARVANTAKE" /*Blackjack*/;
case 7:
return "TAT_FM_REVENKIL" /*Dragon and Dagger*/;
case 5:
return "TAT_FM_KILb" /*Skull and Sword*/;
case 8:
return "TAT_FM_KIL3RACE" /*Ride or Die*/;
case 6:
return "TAT_FM_RECHOLD" /*Racing Blonde*/;
case 12:
return "TAT_RACE50" /*Racing Brunette*/;
case 13:
return "TAT_CRANKA" /*Crew Rank 1*/;
case 14:
return "TAT_CRANKB" /*Crew Rank 2*/;
case 15:
return "TAT_CRANKC" /*Crew Rank 3*/;
case 16:
return "TAT_CRANKD" /*Crew Rank 4*/;
case 87:
return "TAT_FM_REDSKULL" /*Red Skull T-Shirt*/;
case 88:
return "TAT_FM_BELLE" /*Los Santos Belle T-Shirt*/;
case 89:
return "TAT_FM_ROCKSTAR" /*Rockstar T-Shirt*/;
case 55:
return "TAT_FM_MODDED" /*Los Santos Customs*/;
case 17:
return "TAT_FM_TAT1" /*Tattoo 1*/;
case 18:
return "TAT_FM_TAT2" /*Tattoo 2*/;
case 19:
return "TAT_FM_TAT3" /*Tattoo 3*/;
case 20:
return "TAT_FM_TAT4" /*Tattoo 4*/;
case 21:
return "TAT_FM_TAT5" /*Tattoo 5*/;
case 22:
return "TAT_FM_TAT6" /*Tattoo 6*/;
case 56:
return "TAT_CHEATER" /*Trust No One*/;
}
switch (iParam0){
case 23:
return "TAT_FM_TAT7" /*Tattoo 7*/;
case 24:
return "TAT_FM_TAT8" /*Tattoo 8*/;
case 25:
return "TAT_FM_TAT9" /*Melting Skull*/;
case 26:
return "TAT_FM_TAT10" /*Tattoo 10*/;
case 27:
return "TAT_FM_TAT11" /*Tattoo 11*/;
case 28:
return "TAT_FM_TAT12" /*Tattoo 12*/;
case 61:
return "TAT_FM_TAT13" /*Tattoo 13*/;
case 62:
return "TAT_FM_TAT14" /*Tattoo 14*/;
case 63:
return "TAT_FM_TAT15" /*Tattoo 1*/;
case 64:
return "TAT_FM_TAT16" /*Tattoo 16*/;
case 65:
return "TAT_FM_TAT38" /*The Wages of Sin*/;
case 29:
return "TAT_FM_TAT18" /*Tattoo 19*/;
case 30:
return "TAT_FM_TAT19";
case 31:
return "TAT_FM_TAT20" /*Tattoo 20*/;
case 66:
return "TAT_FM_TAT21" /*Tattoo 21*/;
case 32:
return "TAT_FM_TAT22" /*Tattoo 22*/;
case 33:
return "TAT_FM_TAT23" /*Tattoo 23*/;
case 34:
return "TAT_FM_TAT24" /*Hottie*/;
case 35:
return "TAT_FM_TAT25" /*Tattoo 25*/;
case 36:
return "TAT_FM_TAT26" /*Tattoo 26*/;
case 37:
return "TAT_FM_TAT27" /*Tattoo 27*/;
case 38:
return "TAT_FM_TAT28" /*Tattoo 28*/;
case 39:
return "TAT_FM_TAT29" /*Tattoo 29*/;
case 40:
return "TAT_FM_TAT30" /*Tattoo 30*/;
case 67:
return "TAT_FM_TAT31" /*Tattoo 31*/;
case 41:
return "TAT_FM_TAT32" /*Tattoo 32*/;
case 68:
return "TAT_FM_TAT33" /*Tattoo 33*/;
case 42:
return "TAT_FM_TAT34" /*Tattoo 34*/;
case 43:
return "TAT_FM_TAT35" /*Tattoo 35*/;
case 44:
return "TAT_FM_TAT36" /*Tattoo 36*/;
case 45:
return "TAT_FM_TAT37" /*Way Of The Gun*/;
case 46:
return "TAT_FM_TAT41" /*Grim Reaper*/;
case 47:
return "TAT_FM_TAT39" /*Tattoo 39*/;
case 48:
return "TAT_FM_TAT40" /*Broken Skull*/;
case 49:
return "TAT_FM_TAT17" /*Flaming Skull*/;
case 50:
return "TAT_FM_TAT42" /*Tattoo 42*/;
case 51:
return "TAT_FM_TAT43" /*Tattoo 43*/;
case 52:
return "TAT_FM_TAT44" /*Tattoo 44*/;
case 53:
return "TAT_FM_TAT45" /*Tattoo 45*/;
case 69:
return "TAT_FM_TAT46" /*Tattoo 46*/;
case 57:
return "TAT_HOLDUP1V" /*Clown*/;
case 58:
return "TAT_HOLDUP5V" /*Clown and Gun*/;
case 59:
return "TAT_HOLDUP10V" /*Clown Dual Wield*/;
case 60:
return "TAT_HOLDUP20V" /*Clown Dual Wield Dollars*/;
}
return str;
}
BOOL func_206(int iParam0) // Position - 0x2172A{
int num;
int num2;
num=func_207(iParam0);
num2=iParam0;
return IS_BIT_SET(num, func_188(num2));
}

int func_207(int iParam0) // Position - 0x21747{
var unk;
unk=Global_2803653.f_1032[func_186(iParam0)];
return unk;
}


void func_208(int iParam0, BOOL bParam1, int iParam2) // Position - 0x21762{
int address;
int num;
if(func_210(iParam0)==14192) return;
address=func_209(iParam0, -1);
num=iParam0;
if(num > -1){
if(bParam1) MISC::SET_BIT(&address, func_188(num));
else MISC::CLEAR_BIT(&address, func_188(num));
_MPCHAR_STAT_SET_INT(func_210(iParam0), address, iParam2, true, false);
}
return;
}

int func_209(int iParam0, int iParam1) // Position - 0x217BF{
int num;
num=_MPCHAR_STAT_GET_INT(func_210(iParam0), iParam1, 0);
return num;
}
eMPStat func_210(int iParam0) // Position - 0x217D8{
int num;
int num2;
num=iParam0;
num2=func_186(num);
if(func_102()==0 || func_185()==0 || func_102()==999 && func_185()==999){
switch (num2){
case 0:
return MP_STAT_TATTOO_FM_UNLOCKS_0;
case 1:
return MP_STAT_TATTOO_FM_UNLOCKS_1;
case 2:
return MP_STAT_TATTOO_FM_UNLOCKS_2;
case 3:
return MP_STAT_TATTOO_FM_UNLOCKS_3;
case 4:
return MP_STAT_TATTOO_FM_UNLOCKS_4;
case 5:
return MP_STAT_TATTOO_FM_UNLOCKS_5;
case 6:
return MP_STAT_TATTOO_FM_UNLOCKS_6;
case 7:
return MP_STAT_TATTOO_FM_UNLOCKS_7;
case 8:
return MP_STAT_TATTOO_FM_UNLOCKS_8;
case 9:
return MP_STAT_TATTOO_FM_UNLOCKS_9;
case 10:
return MP_STAT_TATTOO_FM_UNLOCKS_10;
case 11:
return MP_STAT_TATTOO_FM_UNLOCKS_11;
case 12:
return MP_STAT_TATTOO_FM_UNLOCKS_12;
case 13:
return MP_STAT_TATTOO_FM_UNLOCKS_13;
case 14:
return MP_STAT_TATTOO_FM_UNLOCKS_14;
case 15:
return MP_STAT_TATTOO_FM_UNLOCKS_15;
case 16:
return MP_STAT_TATTOO_FM_UNLOCKS_16;
case 17:
return MP_STAT_TATTOO_FM_UNLOCKS_17;
case 18:
return MP_STAT_TATTOO_FM_UNLOCKS_18;
case 19:
return MP_STAT_TATTOO_FM_UNLOCKS_19;
case 20:
return MP_STAT_TATTOO_FM_UNLOCKS_20;
case 21:
return MP_STAT_TATTOO_FM_UNLOCKS_21;
case 22:
return MP_STAT_TATTOO_FM_UNLOCKS_22;
case 23:
return MP_STAT_TATTOO_FM_UNLOCKS_23;
case 24:
return MP_STAT_TATTOO_FM_UNLOCKS_24;
case 25:
return MP_STAT_TATTOO_FM_UNLOCKS_25;
case 26:
return MP_STAT_TATTOO_FM_UNLOCKS_26;
case 27:
return MP_STAT_TATTOO_FM_UNLOCKS_27;
case 28:
return MP_STAT_TATTOO_FM_UNLOCKS_28;
case 29:
return MP_STAT_TATTOO_FM_UNLOCKS_29;
case 30:
return MP_STAT_TATTOO_FM_UNLOCKS_30;
case 31:
return MP_STAT_TATTOO_FM_UNLOCKS_31;
case 32:
return MP_STAT_TATTOO_FM_UNLOCKS_32;
case 33:
return MP_STAT_TATTOO_FM_UNLOCKS_33;
case 34:
return MP_STAT_TATTOO_FM_UNLOCKS_34;
case 35:
return MP_STAT_TATTOO_FM_UNLOCKS_35;
case 36:
return MP_STAT_TATTOO_FM_UNLOCKS_36;
case 37:
return MP_STAT_TATTOO_FM_UNLOCKS_37;
case 38:
return MP_STAT_TATTOO_FM_UNLOCKS_38;
case 39:
return MP_STAT_TATTOO_FM_UNLOCKS_39;
case 40:
return MP_STAT_TATTOO_FM_UNLOCKS_40;
case 41:
return MP_STAT_TATTOO_FM_UNLOCKS_41;
case 42:
return MP_STAT_TATTOO_FM_UNLOCKS_42;
case 43:
return MP_STAT_TATTOO_FM_UNLOCKS_43;
case 44:
return MP_STAT_TATTOO_FM_UNLOCKS_44;
case 45:
return MP_STAT_TATTOO_FM_UNLOCKS_45;
case 46:
return MP_STAT_TATTOO_FM_UNLOCKS_46;
case 47:
return MP_STAT_TATTOO_FM_UNLOCKS_47;
case 48:
return _0x1336161242;
case 49:
return _0x1587587249;
case 50:
return MP_STAT_OPPRESSOR_MISS_HITS;
case 51:
return MP_STAT_TAMPA3_MISS_KILLS;
}}
return 14192;
}


void _MPCHAR_STAT_INCREMENT_INT_BY_ONE(eMPStat empsParam0, int iParam1) // Position - 0x21B35{
int num;
num=_MPCHAR_STAT_GET_INT(empsParam0, func_15(iParam1), 0);
num=num + 1;
if(!func_193(empsParam0)) _MPCHAR_STAT_SET_INT(empsParam0, num, iParam1, true, false);
else func_192(empsParam0, num, iParam1, true);
return;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0x21B76{
if(iParam2==-1) iParam2=func_16();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}
BOOL func_213(int iParam0, int iParam1) // Position - 0x21B94{
if(iParam1==-1) iParam1=func_16();
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}
BOOL func_214(int iParam0, int iParam1) // Position - 0x21BB0{
int num;
int num2;
if(func_210(iParam0)==14192) return false;
num=func_209(iParam0, iParam1);
num2=iParam0;
return IS_BIT_SET(num, func_188(num2));
}
BOOL func_215(var uParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x21BDF{
var unk;
Any* fileDict;
Any* dict;
int dict2;
int int;
int int2;
int contentRatingPositiveCount;
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
*sParam1={
unk 
};
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "gen");
if(Global_262145.f_7092==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==6){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}
if(Global_262145.f_7093==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==5){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}
if(iParam2==0 || iParam2==1 || iParam2==2){
if(Global_262145.f_7693==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==2){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}
if(Global_262145.f_7694==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==1){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}}
if(bParam3){
if(!NETWORK::UGC_GET_CONTENT_IS_PUBLISHED(uParam0->f_7)){
if(DATAFILE::DATADICT_GET_TYPE(dict2, "optbs")==2){
int=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
if(IS_BIT_SET(int, 31)){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}}
if(iParam2 !=0){
int2=DATAFILE::DATADICT_GET_INT(dict2, "rank");
if(int2 > 1000){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return false;
}}}
if(iParam4 !=0)if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0)if(DATAFILE::DATADICT_GET_INT(dict2, "subtype")==2) return false;
NETWORK::UGC_GET_CONTENT_UPDATED_DATE(uParam0->f_7, &(sParam1->f_82));
sParam1->f_56={
func_107(dict2) 
};
sParam1->f_59={
func_106(dict2, "cam") 
};
sParam1->f_62={
func_105(dict2) 
};
sParam1->f_69=DATAFILE::DATADICT_GET_INT(dict2, "min");
sParam1->f_71=DATAFILE::DATADICT_GET_INT(dict2, "num");
if(sParam1->f_71==-1) sParam1->f_71=func_104();
TEXT_LABEL_ASSIGN_STRING(&(sParam1->f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
sParam1->f_65=DATAFILE::DATADICT_GET_INT(dict2, "type");
sParam1->f_68=DATAFILE::DATADICT_GET_INT(dict2, "subtype");
sParam1->f_80=DATAFILE::DATADICT_GET_INT(dict2, "adverm");
sParam1->f_79=DATAFILE::DATADICT_GET_INT(dict2, "testcomplete");
sParam1->f_70=DATAFILE::DATADICT_GET_INT(dict2, "rank");
sParam1->f_73=func_103(NETWORK::UGC_GET_CONTENT_RATING(uParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0));
TEXT_LABEL_ASSIGN_STRING(sParam1, NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
sParam1->f_81=NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7);
sParam1->f_55=unk_0xDCE06353298ED7A3(uParam0->f_7);
if(func_102() !=2){
if(sParam1->f_71 > Global_262145.f_4606) sParam1->f_71=Global_262145.f_4606;
if(sParam1->f_69 > Global_262145.f_4606) sParam1->f_69=Global_262145.f_4606;
}
if(DATAFILE::DATADICT_GET_TYPE(dict2, "optbs")==2) sParam1->f_76=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
MISC::CLEAR_BIT(&(sParam1->f_76), 25);
if(bParam3 || bParam5)if(!NETWORK::UGC_GET_CONTENT_IS_PUBLISHED(uParam0->f_7)) MISC::SET_BIT(&(sParam1->f_76), 25);
TEXT_LABEL_ASSIGN_STRING(&(sParam1->f_6), unk_0x6FD7F673042CBB0D(uParam0->f_7), 64);
if(unk_0x0E1F9A6EAB03D77D(uParam0->f_7)) TEXT_LABEL_ASSIGN_STRING(&(sParam1->f_6), PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
if(!func_312()){
if(NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7))) sParam1->f_54=NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
else sParam1->f_54=-1;
sParam1->f_67=func_101(uParam0->f_7);
sParam1->f_66=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, sParam1->f_67);
}
if(iParam2==0 && !bParam5){
if(sParam1->f_65==2) Global_1010831.f_5527=1;
if(sParam1->f_65==1) Global_1010831.f_5526=1;
contentRatingPositiveCount=NETWORK::UGC_GET_CONTENT_RATING_POSITIVE_COUNT(uParam0->f_7, 1);
Global_1010831.f_5524=Global_1010831.f_5524 + contentRatingPositiveCount;
if(Global_1010831.f_5525 < contentRatingPositiveCount) Global_1010831.f_5525=contentRatingPositiveCount;
}
sParam1->f_75=DATAFILE::DATADICT_GET_INT(dict2, "charcon");
sParam1->f_72=DATAFILE::DATADICT_GET_INT(dict2, "tnum");
func_100(sParam1->f_65, &(sParam1->f_71), &(sParam1->f_69));
MISC::SET_BIT(&(sParam1->f_76), 13);
MISC::CLEAR_BIT(&(sParam1->f_76), 15);
MISC::CLEAR_BIT(&(sParam1->f_76), 18);
MISC::CLEAR_BIT(&(sParam1->f_76), 19);
MISC::CLEAR_BIT(&(sParam1->f_76), 29);
MISC::CLEAR_BIT(&(sParam1->f_76), 28);
func_66(MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7)), &(sParam1->f_76), &(sParam1->f_77), sParam1->f_80);
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) MISC::CLEAR_BIT(&(sParam1->f_76), 13);
if(_IS_NULL_VECTOR(sParam1->f_56)) MISC::CLEAR_BIT(&(sParam1->f_76), 13);
if(func_216(sParam1->f_56)) MISC::CLEAR_BIT(&(sParam1->f_76), 13);
if(!func_312())if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7)) MISC::SET_BIT(&(sParam1->f_76), 14);
return true;
}
BOOL func_216(var uParam0, var uParam1, var uParam2) // Position - 0x220B5{
if(uParam0.f_2 < 0f || func_218(uParam0, 999, 2f) || func_217(uParam0) || Global_4718592.f_98303[0 /*60*/].f_2 < -2f && !IS_BIT_SET(Global_4718592.f_98303[0 /*60*/].f_31, 5)) return true;
return false;
}
BOOL func_217(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2211B{
int i;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 986.86176f, 74.74512f, 112.03913f, 975.716f, 57.44831f, 118.0387f, 14.5625f, false, true)) return true;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 1093.3151f, 219.74074f, -50.989967f, 1084.5271f, 219.22704f, -45.92859f, 8.75f, false, true)) return true;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 380.203f, -70.9054f, 102.181f, 382.593f, -62.2445f, 104.988f, 21.56f, false, true)) return true;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1016f, -437.619f, 62.6791f, -1020.69f, -429.961f, 65.4861f, 21.56f, false, true)) return true;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -588.595f, -705.387f, 111.823f, -587.902f, -714.344f, 114.63f, 21.56f, false, true)) return true;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -992.769f, -760.456f, 60.7122f, -1001.73f, -761.172f, 63.5192f, 21.56f, false, true)) return true;
if(Global_2765947){
for (i=0;
i < 3;
i=i + 1){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2765947.f_1[i /*3*/], Global_2765947.f_11[i /*3*/], Global_2765947.f_21[i], false, true)) return true;
}}
return false;
}
BOOL func_218(Vector3 vParam0, var uParam1, var uParam2, int iParam3, float fParam4) // Position - 0x222A8{
int i;
var unk;
var unk11;
int j;
if(iParam3 !=999){
unk=3;
unk11=3;
for (j=0;
j < 3;
j=j + 1){
if(Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_2 > Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3.f_2){
unk[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/] 
};
unk11[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3 
};
}else{
unk[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/].f_3 
};
unk11[j /*3*/]={
Global_1312228[iParam3 /*1951*/].f_146.f_57[j /*8*/] 
};
}
unk[j /*3*/].f_2=unk[j /*3*/].f_2 + fParam4;
unk11[j /*3*/].f_2=unk11[j /*3*/].f_2 - fParam4;
}
if(Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[0 /*3*/], unk[0 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[1 /*3*/], unk[1 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true) || Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk11[2 /*3*/], unk[2 /*3*/], Global_1312228[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)) return true;
}else{
for (i=1;
i <=7;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=34;
i <=43;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=61;
i <=65;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=73;
i <=76;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=77;
i <=82;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=83;
i <=85;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=87;
i <=90;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=91;
i <=102;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
for (i=103;
i <=113;
i=i + 1){
if(func_218(vParam0, i, fParam4)) return true;
}
if(func_218(vParam0, 8, fParam4)) return true;
if(func_218(vParam0, 17, fParam4)) return true;
}
return false;
}


void func_219(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x225FC{
Any* fileDict;
Any* dict;
int dict2;
int num;
var unk;
Hash hashKey;
num=uParam1->f_9 + iParam4;
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "gen");
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
uParam0->f_1804[num /*88*/]={
unk 
};
if(!func_312()){
uParam0->f_1804[num /*88*/].f_67=func_101(uParam1->f_7);
uParam0->f_1804[num /*88*/].f_66=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam1->f_7, uParam0->f_1804[num /*88*/].f_67);
uParam0->f_28205[num /*13*/].f_6=NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7);
}
uParam0->f_1804[num /*88*/].f_56={
func_107(dict2) 
};
uParam0->f_1804[num /*88*/].f_59={
func_106(dict2, "cam") 
};
uParam0->f_1804[num /*88*/].f_62={
func_105(dict2) 
};
if(DATAFILE::DATADICT_GET_TYPE(dict2, "optbs")==2) uParam0->f_1804[num /*88*/].f_76=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
if(!func_312())if(NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7))) uParam0->f_1804[num /*88*/].f_54=NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam1->f_7);
else uParam0->f_1804[num /*88*/].f_54=-1;
uParam0->f_1804[num /*88*/].f_69=DATAFILE::DATADICT_GET_INT(dict2, "min");
uParam0->f_1804[num /*88*/].f_71=DATAFILE::DATADICT_GET_INT(dict2, "num");
if(uParam0->f_1804[num /*88*/].f_71==-1) uParam0->f_1804[num /*88*/].f_71=func_104();
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1804[num /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam1->f_7), 64);
uParam0->f_1804[num /*88*/].f_65=DATAFILE::DATADICT_GET_INT(dict2, "type");
uParam0->f_1804[num /*88*/].f_68=DATAFILE::DATADICT_GET_INT(dict2, "subtype");
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1804[num /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(uParam1->f_7), 64);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_3[num /*6*/], unk_0x6FD7F673042CBB0D(uParam1->f_7), 24);
uParam0->f_1804[num /*88*/].f_81=iParam3;
if(MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_3[num /*6*/]))if(uParam0->f_1804[num /*88*/].f_81==3 || uParam0->f_1804[num /*88*/].f_81==4) TEXT_LABEL_ASSIGN_STRING(&uParam0->f_3[num /*6*/], func_234(), 24);
else TEXT_LABEL_ASSIGN_STRING(&uParam0->f_3[num /*6*/], func_233(), 24);
uParam0->f_1804[num /*88*/].f_70=DATAFILE::DATADICT_GET_INT(dict2, "rank");
uParam0->f_28205[num /*13*/]=DATAFILE::DATADICT_GET_INT(dict2, "tnum");
if(!func_312()){
uParam0->f_1804[num /*88*/].f_73=func_103(NETWORK::UGC_GET_CONTENT_RATING(uParam1->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0));
uParam0->f_28205[num /*13*/].f_4=NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0);
}
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1804[num /*88*/], NETWORK::UGC_GET_CONTENT_ID(uParam1->f_7), 24);
hashKey=MISC::GET_HASH_KEY(&uParam0->f_1804[num /*88*/]);
uParam0->f_28205[num /*13*/].f_3=hashKey;
uParam0->f_1=uParam0->f_1 + hashKey;
uParam0->f_1804[num /*88*/].f_75=DATAFILE::DATADICT_GET_INT(dict2, "charcon");
uParam0->f_1804[num /*88*/].f_78=DATAFILE::DATADICT_GET_INT(dict2, "ltm");
func_100(uParam0->f_1804[num /*88*/].f_65, &(uParam0->f_1804[num /*88*/].f_71), &(uParam0->f_1804[num /*88*/].f_69));
MISC::SET_BIT(&(uParam0->f_1804[num /*88*/].f_76), 13);
uParam0->f_32408[uParam0->f_1804[num /*88*/].f_65]=uParam0->f_32408[uParam0->f_1804[num /*88*/].f_65] + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
if(!func_312()){
if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam1->f_7)){
MISC::SET_BIT(&(uParam0->f_1804[num /*88*/].f_76), 14);
uParam0->f_28205[num /*13*/].f_7=NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam1->f_7);
}
uParam0->f_32107[num]=unk_0xDCE06353298ED7A3(uParam1->f_7);
uParam0->f_28205[num /*13*/].f_1=MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam1->f_7));
unk_0xA64B051C7606A077(uParam0->f_28205[num /*13*/].f_1, num + 1818);
}
if(func_102() !=2){
if(uParam0->f_1804[num /*88*/].f_71 > Global_262145.f_4606) uParam0->f_1804[num /*88*/].f_71=Global_262145.f_4606;
if(uParam0->f_1804[num /*88*/].f_69 > Global_262145.f_4606) uParam0->f_1804[num /*88*/].f_69=Global_262145.f_4606;
}
if(!bParam2){
func_231(uParam0->f_1804[num /*88*/].f_65, uParam0->f_1804[num /*88*/].f_68, IS_BIT_SET(uParam0->f_1804[num /*88*/].f_76, 14), uParam0->f_1804[num /*88*/].f_70, true);
func_220(uParam0->f_1804[num /*88*/].f_65, uParam0->f_1804[num /*88*/].f_68, uParam0->f_1804[num /*88*/].f_70, true);
}
uParam1->f_9=uParam1->f_9 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_220(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x22AAB{
Hash hash;
if(func_19()){
if(iParam0==0)if(iParam1 !=6 && iParam1 !=5 && iParam1 !=4 && iParam1 !=9)if(func_227(PLAYER::PLAYER_ID()) < iParam2) return;
hash=func_226(iParam0, iParam1, bParam3);
if(hash==-1) return;
func_221(hash, 1);
}
return;
}


void func_221(Hash hParam0, int iParam1) // Position - 0x22B0F{
int num;
num=_MPPLY_STAT_GET_INT(hParam0);
num=num + iParam1;
if(!func_224(hParam0)) _MPPLY_STAT_SET_INT(hParam0, num);
else func_222(hParam0, num);
return;
}


void func_222(Hash hParam0, int iParam1) // Position - 0x22B43{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, true);
switch (hParam0){
case joaat("MPPLY_CREW_0_ID"):
Global_1665488=iParam1;
break;
case joaat("MPPLY_CREW_1_ID"):
Global_1665490=iParam1;
break;
case joaat("MPPLY_CREW_2_ID"):
Global_1665490=iParam1;
break;
case joaat("MPPLY_CREW_3_ID"):
Global_1665491=iParam1;
break;
case joaat("MPPLY_CREW_4_ID"):
Global_1665492=iParam1;
break;
case joaat("MPPLY_CREW_LOCAL_XP_0"):
Global_1665493=iParam1;
break;
case joaat("MPPLY_CREW_LOCAL_XP_1"):
Global_1665494=iParam1;
break;
case joaat("MPPLY_CREW_LOCAL_XP_2"):
Global_1665495=iParam1;
break;
case joaat("MPPLY_CREW_LOCAL_XP_3"):
Global_1665496=iParam1;
break;
case joaat("MPPLY_CREW_LOCAL_XP_4"):
Global_1665497=iParam1;
break;
case joaat("MPPLY_BECAME_CHEATER_NUM"):
Global_1665498=iParam1;
break;
case joaat("MPPLY_FRIENDLY"):
Global_1665499=iParam1;
break;
case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
Global_1665500=iParam1;
break;
case joaat("MPPLY_GRIEFING"):
Global_1665501=iParam1;
break;
case joaat("MPPLY_HELPFUL"):
Global_1665502=iParam1;
break;
case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
Global_1665503=iParam1;
break;
case joaat("MPPLY_OFFENSIVE_UGC"):
Global_1665504=iParam1;
break;
default:
break;
}
return;
}


void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x22C68{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, true);
return;
}
BOOL func_224(int iParam0) // Position - 0x22C84{
if(Global_1665487){
switch (iParam0){
case joaat("MPPLY_CREW_0_ID"):
case joaat("MPPLY_CREW_1_ID"):
case joaat("MPPLY_CREW_2_ID"):
case joaat("MPPLY_CREW_3_ID"):
case joaat("MPPLY_CREW_4_ID"):
case joaat("MPPLY_CREW_LOCAL_XP_0"):
case joaat("MPPLY_CREW_LOCAL_XP_1"):
case joaat("MPPLY_CREW_LOCAL_XP_2"):
case joaat("MPPLY_CREW_LOCAL_XP_3"):
case joaat("MPPLY_CREW_LOCAL_XP_4"):
case joaat("MPPLY_BECAME_CHEATER_NUM"):
case joaat("MPPLY_FRIENDLY"):
case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
case joaat("MPPLY_GRIEFING"):
case joaat("MPPLY_HELPFUL"):
case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
case joaat("MPPLY_OFFENSIVE_UGC"):
return true;
}}
return false;
}
int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x22D08{
Hash statHash;
int outValue;
statHash=hParam0;
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
return 0;
}
Hash func_226(int iParam0, int iParam1, BOOL bParam2) // Position - 0x22D26{
switch (iParam0){
case 2:
if(bParam2) return joaat("MPPLY_AVAILABLE_RACES_V");
else return joaat("MPPLY_AVAILABLE_RACES");
break;
case 1:
if(bParam2) return joaat("MPPLY_AVAILABLE_DMS_V");
else return joaat("MPPLY_AVAILABLE_DMS");
break;
case 8:
if(bParam2) return joaat("MPPLY_AVAILABLE_PARAS_V");
else return joaat("MPPLY_AVAILABLE_PARAS");
break;
case 3:
if(bParam2) return joaat("MPPLY_AVAILABLE_SURVIVAL_V");
else return joaat("MPPLY_AVAILABLE_SURVIVAL");
break;
case 0:
switch (iParam1){
case 6:
if(bParam2) return joaat("MPPLY_AVAILABLE_CTF_V");
else return joaat("MPPLY_AVAILABLE_CTF");
break;
case 5:
if(bParam2) return joaat("MPPLY_AVAILABLE_LTS_V");
else return joaat("MPPLY_AVAILABLE_LTS");
break;
case 4:
if(bParam2) return joaat("MPPLY_AVAILABLE_VERSUS_V");
else return joaat("MPPLY_AVAILABLE_VERSUS");
break;
case 1:
if(bParam2) return joaat("MPPLY_AVAILABLE_HEIST_FINALE_V");
else return joaat("MPPLY_AVAILABLE_HEIST_FINALE");
break;
case 7:
if(bParam2) return joaat("MPPLY_AVAILABLE_HEIST_PLANV");
else return joaat("MPPLY_AVAILABLE_HEIST_PLAN");
break;
}
if(bParam2) return joaat("MPPLY_AVAILABLE_MISSIONS_V");
else return joaat("MPPLY_AVAILABLE_MISSIONS");
break;
}
return -1;
}

int func_227(Player plParam0) // Position - 0x22E87{
int num;
num=func_229(plParam0);
if(num < 0) return 0;
return func_228(num, 0);
}

int func_228(int iParam0, int iParam1) // Position - 0x22EA8{
int i;
int value;
int value2;
int num;
float value3;
iParam1==0;
value=8000;
value2=0;
num=(value - value2) / 2;
for (i=0;
i <=100;
i=i + 1){
if(value==value2){
i=8000;
if(num==0) num=1;
return num;
}
if(Global_297010[num]==iParam0){
value=num;
value2=num;
}elseif(Global_297010[num] < iParam0){
if(value2==num) value2=value2 + 1;
else value2=num;
}elseif(value==num){
value=value - 1;
}else{
value=num;
}
value3=((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
num=SYSTEM::ROUND(value3);
}
return 8000;
}

int func_229(Player plParam0) // Position - 0x22F67{
if(Global_1574632.f_9==0)if(plParam0 > -1)if(plParam0==PLAYER::PLAYER_ID()) return Global_1665638[func_15(-1)];
elseif(func_230(plParam0)) return Global_1853910[plParam0 /*862*/].f_205.f_1;
else return Global_1665638[func_15(-1)];
return 0;
}
BOOL func_230(Player plParam0) // Position - 0x22FC4{
if(plParam0==-1) return false;
else return IS_BIT_SET(Global_2672505.f_1, plParam0);
return true;
}


void func_231(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x22FE6{
Hash hash;
if(!func_19()) return;
if(!bParam2) return;
if(iParam0==0)if(iParam1 !=6 && iParam1 !=5 && iParam1 !=4 && iParam1 !=9)if(func_227(PLAYER::PLAYER_ID()) < iParam3) return;
elseif(iParam0==2)if(iParam3 >=9999) return;
hash=func_232(iParam0, iParam1, bParam4);
if(hash==-1) return;
func_221(hash, 1);
return;
}
Hash func_232(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2306B{
switch (iParam0){
case 2:
if(bParam2) return joaat("MPPLY_UNIQUE_RACES_V");
else return joaat("MPPLY_UNIQUE_RACES");
break;
case 1:
if(bParam2) return joaat("MPPLY_UNIQUE_DMS_V");
else return joaat("MPPLY_UNIQUE_DMS");
break;
case 8:
if(bParam2) return joaat("MPPLY_UNIQUE_PARAS_V");
else return joaat("MPPLY_UNIQUE_PARAS");
break;
case 3:
if(bParam2) return joaat("MPPLY_UNIQUE_SURVIVAL_V");
else return joaat("MPPLY_UNIQUE_SURVIVAL");
break;
case 0:
switch (iParam1){
case 6:
if(bParam2) return joaat("MPPLY_UNIQUE_CTF_V");
else return joaat("MPPLY_UNIQUE_CTF");
break;
case 5:
if(bParam2) return joaat("MPPLY_UNIQUE_LTS_V");
else return joaat("MPPLY_UNIQUE_LTS");
break;
case 4:
if(bParam2) return joaat("MPPLY_UNIQUE_VERSUS_V");
else return joaat("MPPLY_UNIQUE_VERSUS");
break;
case 1:
if(bParam2) return joaat("MPPLY_UNIQUE_HEIST_FINALE_V");
else return joaat("MPPLY_UNIQUE_HEIST_FINALE");
break;
case 7:
if(bParam2) return joaat("MPPLY_UNIQUE_HEIST_PLANNING_V");
else return joaat("MPPLY_UNIQUE_HEIST_PLANNING");
break;
}
if(bParam2) return joaat("MPPLY_UNIQUE_MISSIONS_V");
else return joaat("MPPLY_UNIQUE_MISSIONS");
break;
}
return -1;
}
const 

char* func_233() // Position - 0x231CC{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_RSC" /*Rockstar*/);
}
const 

char* func_234() // Position - 0x231DC{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_RSV" /*Rockstar Verified*/);
}


void func_235(var uParam0, BOOL bParam1) // Position - 0x231EC{
Any* fileDict;
Any* dict;
int dict2;
int int;
int i;
var unk;
Hash hashKey;
BOOL flag;
int num;
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "gen");
if(func_312()){
if(func_269(NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7))){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0 && DATAFILE::DATADICT_GET_INT(dict2, "subtype")==7 && uParam0->f_9 < 1800){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
if(Global_262145.f_8186){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "subtype")==1 || DATAFILE::DATADICT_GET_INT(dict2, "subtype")==7){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
int=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
if(IS_BIT_SET(int, 4) || IS_BIT_SET(int, 12)){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}}
if(uParam0->f_9==0 && bParam1==false){
func_268();
Global_794709.f_2=0;
Global_794709.f_183668=0;
func_267();
for (i=0;
i < 13;
i=i + 1){
Global_794709.f_183683[i]=0;
Global_794709.f_183669[i]=0;
}
if(func_19()){
func_266(true);
func_266(false);
func_264(true);
}}
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
Global_794709.f_4[uParam0->f_9 /*88*/]={
unk 
};
if(!func_312()){
Global_794709.f_159989[uParam0->f_9 /*13*/].f_5=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, 0);
Global_794709.f_4[uParam0->f_9 /*88*/].f_67=func_101(uParam0->f_7);
Global_794709.f_4[uParam0->f_9 /*88*/].f_66=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, Global_794709.f_4[uParam0->f_9 /*88*/].f_67);
Global_794709.f_159989[uParam0->f_9 /*13*/].f_6=NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7);
}
Global_794709.f_4[uParam0->f_9 /*88*/].f_56={
func_107(dict2) 
};
if(DATAFILE::DATADICT_GET_TYPE(dict2, "optbs")==2) Global_794709.f_4[uParam0->f_9 /*88*/].f_76=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
MISC::CLEAR_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 15);
MISC::CLEAR_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 18);
MISC::CLEAR_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 19);
MISC::CLEAR_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 29);
MISC::CLEAR_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 28);
Global_794709.f_4[uParam0->f_9 /*88*/].f_59={
func_106(dict2, "cam") 
};
Global_794709.f_4[uParam0->f_9 /*88*/].f_62={
func_105(dict2) 
};
if(!func_312())if(NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7))) Global_794709.f_4[uParam0->f_9 /*88*/].f_54=NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
else Global_794709.f_4[uParam0->f_9 /*88*/].f_54=-1;
if(DATAFILE::DATADICT_GET_TYPE(dict2, "mgrk")==2) Global_794709.f_159989[uParam0->f_9 /*13*/].f_8=DATAFILE::DATADICT_GET_INT(dict2, "mgrk");
if(DATAFILE::DATADICT_GET_TYPE(dict2, "mght")==2) Global_794709.f_159989[uParam0->f_9 /*13*/].f_9=DATAFILE::DATADICT_GET_INT(dict2, "mght");
Global_794709.f_159989[uParam0->f_9 /*13*/].f_11=DATAFILE::DATADICT_GET_INT(dict2, "cncmbs");
Global_794709.f_4[uParam0->f_9 /*88*/].f_69=DATAFILE::DATADICT_GET_INT(dict2, "min");
Global_794709.f_4[uParam0->f_9 /*88*/].f_71=DATAFILE::DATADICT_GET_INT(dict2, "num");
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_71==-1) Global_794709.f_4[uParam0->f_9 /*88*/].f_71=func_104();
TEXT_LABEL_ASSIGN_STRING(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
Global_794709.f_4[uParam0->f_9 /*88*/].f_65=DATAFILE::DATADICT_GET_INT(dict2, "type");
if(func_312()) TEXT_LABEL_ASSIGN_STRING(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_6), func_263(), 64);
else TEXT_LABEL_ASSIGN_STRING(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7), 64);
Global_794709.f_4[uParam0->f_9 /*88*/].f_70=DATAFILE::DATADICT_GET_INT(dict2, "rank");
Global_794709.f_159989[uParam0->f_9 /*13*/]=DATAFILE::DATADICT_GET_INT(dict2, "tnum");
if(!func_312()){
Global_794709.f_4[uParam0->f_9 /*88*/].f_73=func_103(NETWORK::UGC_GET_CONTENT_RATING(uParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0));
Global_794709.f_159989[uParam0->f_9 /*13*/].f_4=NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0);
}
Global_794709.f_4[uParam0->f_9 /*88*/].f_75=DATAFILE::DATADICT_GET_INT(dict2, "charcon");
Global_794709.f_4[uParam0->f_9 /*88*/].f_78=DATAFILE::DATADICT_GET_INT(dict2, "ltm");
TEXT_LABEL_ASSIGN_STRING(&Global_794709.f_4[uParam0->f_9 /*88*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
hashKey=MISC::GET_HASH_KEY(&Global_794709.f_4[uParam0->f_9 /*88*/]);
Global_794709.f_159989[uParam0->f_9 /*13*/].f_3=hashKey;
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_65==6 && !bParam1){
if(Global_1030213.f_684 < 85){
Global_794709.f_4[uParam0->f_9 /*88*/].f_68=Global_1030213.f_684;
Global_1030213[Global_1030213.f_684 /*3*/]={
func_106(dict2, "area") 
};
if(DATAFILE::DATADICT_GET_TYPE(dict2, "rad")==2) Global_1030213.f_512[Global_1030213.f_684]=SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict2, "rad"));
else Global_1030213.f_512[Global_1030213.f_684]=DATAFILE::DATADICT_GET_FLOAT(dict2, "rad");
Global_1030213.f_256[Global_1030213.f_684 /*3*/]={
Global_794709.f_4[uParam0->f_9 /*88*/].f_56 
};
Global_1030213.f_598[Global_1030213.f_684]=hashKey;
Global_794709.f_4[uParam0->f_9 /*88*/].f_56={
Global_794709.f_4[uParam0->f_9 /*88*/].f_59 
};
Global_1030213.f_684=Global_1030213.f_684 + 1;
}}else{
Global_794709.f_4[uParam0->f_9 /*88*/].f_68=DATAFILE::DATADICT_GET_INT(dict2, "subtype");
Global_794709.f_4[uParam0->f_9 /*88*/].f_80=DATAFILE::DATADICT_GET_INT(dict2, "adverm");
}
func_100(Global_794709.f_4[uParam0->f_9 /*88*/].f_65, &(Global_794709.f_4[uParam0->f_9 /*88*/].f_71), &(Global_794709.f_4[uParam0->f_9 /*88*/].f_69));
if(func_312())if(MISC::ARE_STRINGS_EQUAL(NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ")) Global_794709.f_4[uParam0->f_9 /*88*/].f_56={
897.5109f, -2340.5986f, 29.4461f 
};
MISC::SET_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 13);
if(!func_312()){
Global_794709.f_159989[uParam0->f_9 /*13*/].f_1=MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7));
unk_0xA64B051C7606A077(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1, uParam0->f_9);
}
if(func_102() !=2) func_261(uParam0->f_9);
Global_794709.f_159989[uParam0->f_9 /*13*/].f_2=func_260(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1, true);
if(func_259(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1) || func_258(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1))if(Global_794709.f_4[uParam0->f_9 /*88*/].f_75==0) Global_794709.f_4[uParam0->f_9 /*88*/].f_75=1;
flag=func_108(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1);
num=func_257(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1);
if(num !=-1) Global_1968280[num]=uParam0->f_9;
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_65 < 13 && !bParam1 && !flag){
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_70 <=1000){
Global_794709.f_183669[Global_794709.f_4[uParam0->f_9 /*88*/].f_65]=Global_794709.f_183669[Global_794709.f_4[uParam0->f_9 /*88*/].f_65] + 1;
if(func_256(uParam0->f_9)) Global_794709.f_183669[7]=Global_794709.f_183669[7] + 1;
elseif(func_255(uParam0->f_9)) Global_794709.f_183669[4]=Global_794709.f_183669[4] + 1;
elseif(func_254(uParam0->f_9)) Global_794709.f_183669[10]=Global_794709.f_183669[10] + 1;
elseif(func_253(uParam0->f_9)) Global_794709.f_183669[12]=Global_794709.f_183669[12] + 1;
}}
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
if(!func_312()){
if(flag) Global_794709.f_4[uParam0->f_9 /*88*/].f_69=Global_794709.f_4[uParam0->f_9 /*88*/].f_71;
if(*Global_794709.f_183668 < 5 && Global_794709.f_4[uParam0->f_9 /*88*/].f_65==0 && Global_794709.f_4[uParam0->f_9 /*88*/].f_68==1){
Global_794709.f_159989[uParam0->f_9 /*13*/].f_10=*Global_794709.f_183668;
TEXT_LABEL_ASSIGN_STRING(&Global_794709.f_183637[*Global_794709.f_183668 /*6*/], NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7), 24);
Global_794709.f_183668=*Global_794709.f_183668 + 1;
}
func_66(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1, &(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), &(Global_794709.f_4[uParam0->f_9 /*88*/].f_77), Global_794709.f_4[uParam0->f_9 /*88*/].f_80);
func_249(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1, uParam0->f_9);
if(bParam1){
if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7)) MISC::SET_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 14);
}elseif(!flag){
if(func_246(Global_794709.f_159989[uParam0->f_9 /*13*/].f_1, Global_794709.f_4[uParam0->f_9 /*88*/].f_80)) Global_794709.f_183669[11]=Global_794709.f_183669[11] + 1;
if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7)){
MISC::SET_BIT(&(Global_794709.f_4[uParam0->f_9 /*88*/].f_76), 14);
if(IS_BIT_SET(Global_794709.f_4[uParam0->f_9 /*88*/].f_76, 1) || Global_794709.f_4[uParam0->f_9 /*88*/].f_68==2) Global_794709.f_183669[9]=Global_794709.f_183669[9] + 1;
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_70 <=1000)if(Global_794709.f_4[uParam0->f_9 /*88*/].f_65 < 13) Global_794709.f_183683[Global_794709.f_4[uParam0->f_9 /*88*/].f_65]=Global_794709.f_183683[Global_794709.f_4[uParam0->f_9 /*88*/].f_65] + 1;
Global_794709.f_159989[uParam0->f_9 /*13*/].f_7=NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam0->f_7);
}}}
if(!bParam1 && !flag){
if(func_19()){
func_231(Global_794709.f_4[uParam0->f_9 /*88*/].f_65, Global_794709.f_4[uParam0->f_9 /*88*/].f_68, IS_BIT_SET(Global_794709.f_4[uParam0->f_9 /*88*/].f_76, 14), Global_794709.f_4[uParam0->f_9 /*88*/].f_70, false);
func_220(Global_794709.f_4[uParam0->f_9 /*88*/].f_65, Global_794709.f_4[uParam0->f_9 /*88*/].f_68, Global_794709.f_4[uParam0->f_9 /*88*/].f_70, false);
func_244(Global_794709.f_4[uParam0->f_9 /*88*/].f_65, Global_794709.f_4[uParam0->f_9 /*88*/].f_68, Global_794709.f_4[uParam0->f_9 /*88*/].f_75, Global_794709.f_4[uParam0->f_9 /*88*/].f_70, IS_BIT_SET(Global_794709.f_4[uParam0->f_9 /*88*/].f_76, 14));
func_236(Global_794709.f_4[uParam0->f_9 /*88*/].f_65, Global_794709.f_4[uParam0->f_9 /*88*/].f_68, Global_794709.f_4[uParam0->f_9 /*88*/].f_75, Global_794709.f_4[uParam0->f_9 /*88*/].f_70);
}}
if(Global_794709.f_4[uParam0->f_9 /*88*/].f_65==6) Global_1030898[0 /*59*/]=Global_1030898[0 /*59*/] + 1;
uParam0->f_9=uParam0->f_9 + 1;
Global_794709.f_2=Global_794709.f_2 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_236(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x23E82{
var unk;
Hash hash;
if(!func_238(iParam0, iParam1, iParam2, &unk, iParam3)) return;
hash=func_237(unk);
if(hash==-1) return;
func_221(hash, 1);
return;
}
Hash func_237(int iParam0) // Position - 0x23EB7{
switch (iParam0){
case 12:
return joaat("MPPLY_TOTAL_CONTACT_0");
case 19:
return joaat("MPPLY_TOTAL_CONTACT_1");
case 86:
return joaat("MPPLY_TOTAL_CONTACT_2");
case 20:
return joaat("MPPLY_TOTAL_CONTACT_3");
case 31:
return joaat("MPPLY_TOTAL_CONTACT_4");
case 2:
return joaat("MPPLY_TOTAL_CONTACT_5");
case 18:
return joaat("MPPLY_TOTAL_CONTACT_6");
default:
}
return -1;
}
BOOL func_238(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4) // Position - 0x23F29{
int num;
if(iParam0 !=0) return false;
if(iParam1 !=2) return false;
if(func_227(PLAYER::PLAYER_ID()) < iParam4) return false;
num=func_239(iParam2);
*uParam3=145;
if(num !=0) *uParam3=num;
if(*uParam3==145) return false;
return true;
}

int func_239(int iParam0) // Position - 0x23F7B{
int num;
if(iParam0==0) return 0;
if(iParam0 > 0 && iParam0 <=200){
if(iParam0 > 90) return 0;
switch (iParam0){
case 10:
return 12;
case 17:
return 19;
case 18:
return 20;
case 28:
return 31;
case 75:
return 12;
default:
}
return iParam0;
}
num=func_240(iParam0);
if(num==145) return 0;
return num;
}

int func_240(int iParam0) // Position - 0x24003{
int i;
int num;
if(iParam0==0) return 145;
i=0;
num=145;
for (i=0;
i < 42;
i=i + 1){
num=func_242(i);
if(iParam0==func_241(num)) return num;
}
return 145;
}

int func_241(int iParam0) // Position - 0x2404A{
switch (iParam0){
case 86:
return joaat("gerald");
case 19:
return joaat("LAMAR");
case 12:
return joaat("lester");
case 31:
return joaat("martin");
case 20:
return joaat("ron");
case 18:
return joaat("simeon");
case 2:
return joaat("TREVOR");
case 76:
return joaat("AGENT14");
case 22:
return joaat("pa");
case 53:
return joaat("hao");
case 34:
return joaat("oscar");
case 152:
return joaat("lazlow");
case 85:
return joaat("merryweather");
case 84:
return joaat("brucie");
case 0:
return joaat("MICHAEL");
case 1:
return joaat("FRANKLIN");
case 153:
return joaat("englishdave");
case 151:
return joaat("tony");
case 14:
return joaat("JIMMY");
case 15:
return joaat("tracey");
case 24:
return joaat("wade");
case 30:
return joaat("dave");
case 46:
return joaat("rickie");
case 47:
return joaat("chef");
case 54:
return joaat("hunter");
case 51:
return joaat("cris");
case 60:
return joaat("marnie");
case 62:
return joaat("maude");
case 66:
return joaat("ashley");
case 69:
return joaat("omega");
case 154:
return joaat("paige");
case 82:
return joaat("ray");
case 157:
return joaat("agatha");
case 79:
return joaat("yachtcaptain");
case 167:
return joaat("miguelmadrazo");
case 169:
return joaat("pavel");
case 171:
return joaat("moodymann");
case 172:
return joaat("sessanta");
case 173:
return joaat("kdj");
case 177:
return -763093917;
case 182:
return joaat("ulp");
case 188:
return joaat("DAX");
case 145:
return 0;
default:
}
return 0;
}

int func_242(int iParam0) // Position - 0x242B0{
int num;
int num2;
num=iParam0;
num2=func_243(num);
return num2;
}

int func_243(int iParam0) // Position - 0x242C6{
switch (iParam0){
case 0:
return 86;
case 1:
return 19;
case 2:
return 12;
case 3:
return 31;
case 4:
return 20;
case 5:
return 18;
case 6:
return 2;
case 7:
return 76;
case 8:
return 22;
case 9:
return 53;
case 10:
return 34;
case 11:
return 152;
case 12:
return 85;
case 13:
return 84;
case 14:
return 0;
case 15:
return 1;
case 16:
return 153;
case 17:
return 151;
case 18:
return 14;
case 19:
return 15;
case 20:
return 24;
case 21:
return 30;
case 22:
return 46;
case 23:
return 47;
case 24:
return 54;
case 25:
return 51;
case 26:
return 60;
case 27:
return 62;
case 28:
return 66;
case 29:
return 69;
case 30:
return 154;
case 31:
return 82;
case 32:
return 157;
case 33:
return 79;
case 34:
return 167;
case 35:
return 169;
case 36:
return 171;
case 37:
return 172;
case 38:
return 173;
case 39:
return 177;
case 40:
return 182;
case 41:
return 188;
default:
}
return 19;
}


void func_244(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x244A2{
var unk;
Hash hash;
if(!bParam4) return;
if(!func_238(iParam0, iParam1, iParam2, &unk, iParam3)) return;
hash=func_245(unk);
if(hash==-1) return;
func_221(hash, 1);
return;
}
Hash func_245(int iParam0) // Position - 0x244E0{
switch (iParam0){
case 12:
return joaat("MPPLY_UNIQUE_CONTACT_0");
case 19:
return joaat("MPPLY_UNIQUE_CONTACT_1");
case 86:
return joaat("MPPLY_UNIQUE_CONTACT_2");
case 20:
return joaat("MPPLY_UNIQUE_CONTACT_3");
case 31:
return joaat("MPPLY_UNIQUE_CONTACT_4");
case 2:
return joaat("MPPLY_UNIQUE_CONTACT_5");
case 18:
return joaat("MPPLY_UNIQUE_CONTACT_6");
default:
}
return -1;
}
BOOL func_246(Hash hParam0, int iParam1) // Position - 0x24552{
if(iParam1 > 0) return true;
if(func_99(hParam0) || func_98(hParam0) || func_97(hParam0) || func_95(hParam0, true) || func_96(hParam0) || func_94(hParam0) || func_93(hParam0) || func_92(hParam0) || func_91(hParam0) || func_90(hParam0) || func_89(hParam0) || func_88(hParam0) || func_87(hParam0) || func_86(hParam0) || func_85(hParam0) || func_83(hParam0) || func_82(hParam0) || func_80(hParam0) || func_84(hParam0) || func_248(iParam1) || func_247(iParam1)) return true;
return false;
}
BOOL func_247(int iParam0) // Position - 0x24663{
return iParam0==65;
}
BOOL func_248(int iParam0) // Position - 0x24670{
return iParam0==57;
}


void func_249(Hash hParam0, int iParam1) // Position - 0x2467D{
int i;
if(iParam1 >=1800) return;
if(hParam0==0) return;
for (i=0;
i < 8;
i=i + 1){
if(hParam0==Global_262145.f_9494[i]){
Global_794709.f_183624[0 /*11*/][i]=iParam1;
Global_794709.f_4[iParam1 /*88*/].f_56={
func_252(0, i) 
};
Global_794709.f_4[iParam1 /*88*/].f_59={
func_251(0, i) 
};
Global_794709.f_4[iParam1 /*88*/].f_62={
func_250(0, i) 
};
Global_794709.f_159989[iParam1 /*13*/].f_12=0;
Global_794709.f_4[iParam1 /*88*/].f_68=8;
Global_794709.f_4[iParam1 /*88*/].f_75=0;
Global_794709.f_4[iParam1 /*88*/].f_78=16777215;
Global_794709.f_4[iParam1 /*88*/].f_73=-1;
if(Global_794709.f_183624[0 /*11*/].f_9 <=i) Global_794709.f_183624[0 /*11*/].f_9=i + 1;
}elseif(hParam0==Global_262145.f_9503[i]){
Global_794709.f_159989[iParam1 /*13*/].f_12=0;
Global_794709.f_4[iParam1 /*88*/].f_68=8;
Global_794709.f_4[iParam1 /*88*/].f_75=0;
Global_794709.f_4[iParam1 /*88*/].f_78=16777215;
Global_794709.f_4[iParam1 /*88*/].f_73=-1;
}}
return;
}


Vector3 func__250(int iParam0, int iParam1) // Position - 0x247D5{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return -15.6168f, 0.1008f, -149.8604f;
case 1:
return 3.5927f, 0.1008f, 156.3615f;
case 2:
return 3.4157f, 0.112f, 16.4938f;
case 3:
return 5.3856f, 0f, 112.9827f;
case 4:
return 4.2705f, 0f, 19.1749f;
case 5:
return -5.2724f, 0f, 42.8827f;
case 6:
return 12.4243f, 0f, 57.4707f;
case 7:
return -15.6168f, 0.1008f, -149.8604f;
default:
}
return 2.8273f, 0f, 0.0625f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__251(int iParam0, int iParam1) // Position - 0x248B2{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return -209.1766f, -1305.476f, 34.7404f;
case 1:
return -1601.5316f, -1039.5056f, 17.2286f;
case 2:
return -8.6889f, -1727.8302f, 30.3896f;
case 3:
return 1997.4958f, 3054.6897f, 54.605f;
case 4:
return 967.5151f, -1735.4604f, 32.0426f;
case 5:
return 779.6009f, -1424.6042f, 32.9774f;
case 6:
return -331.129f, -1492.0455f, 30.3228f;
case 7:
return -209.1766f, -1305.476f, 34.7404f;
default:
}
return -61.784f, -1538.7018f, 43.8935f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__252(int iParam0, int iParam1) // Position - 0x249A3{
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return -210.4709f, -1306.3175f, 30.336f;
case 1:
return -1598.3271f, -1040.5378f, 12.0183f;
case 2:
return -21.2711f, -1732.453f, 28.304f;
case 3:
return 1992.482f, 3058.0784f, 46.0576f;
case 4:
return 960.3523f, -1745.8442f, 30.2208f;
case 5:
return 775.7347f, -1367.343f, 25.5669f;
case 6:
return -321.3307f, -1495.5978f, 29.6536f;
case 7:
return -210.4709f, -1306.3175f, 30.336f;
default:
}
return -210.4709f, -1306.3175f, 30.336f;
default:
}
return 0f, 0f, 0f;
}
BOOL func_253(int iParam0) // Position - 0x24A94{
return IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 24);
}
BOOL func_254(int iParam0) // Position - 0x24AAB{
return IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 3);
}
BOOL func_255(int iParam0) // Position - 0x24AC1{
return IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 10);
}
BOOL func_256(int iParam0) // Position - 0x24AD8{
return IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 7);
}

int func_257(Hash hParam0) // Position - 0x24AEE{
int i;
if(hParam0==0) return -1;
for (i=0;
i < 16;
i=i + 1){
if(Global_262145.f_5042[i]==hParam0) return i;
}
return -1;
}

int func_258(Hash hParam0) // Position - 0x24B29{
int i;
if(hParam0 !=0){
for (i=0;
i < Global_262145.f_6211[18];
i=i + 1){
if(hParam0==Global_262145.f_5066[18 /*51*/][i]) return 1;
}}
return 0;
}

int func_259(Hash hParam0) // Position - 0x24B6C{
int i;
int j;
if(hParam0 !=0){
for (j=0;
j < 19;
j=j + 1){
if(Global_262145.f_6891[j]==251){
for (i=0;
i < Global_262145.f_6211[j];
i=i + 1){
if(hParam0==Global_262145.f_5066[j /*51*/][i]) return 1;
}}}}
return 0;
}

int func_260(Hash hParam0, BOOL bParam1) // Position - 0x24BD2{
int i;
int j;
if(hParam0 !=0){
for (j=0;
j < 19;
j=j + 1){
if(Global_262145.f_6891[j]==202 || Global_262145.f_6891[j]==203 || Global_262145.f_6891[j]==204 || bParam1 && Global_262145.f_6891[j]==224 || Global_262145.f_6891[j]==223 || Global_262145.f_6891[j]==232 || Global_262145.f_6891[j]==245 || Global_262145.f_6891[j]==246 || Global_262145.f_6891[j]==251 || Global_262145.f_6891[j]==252 || Global_262145.f_6891[j]==253 || Global_262145.f_6891[j]==161 || Global_262145.f_6891[j]==278 || Global_262145.f_6891[j]==279 || Global_262145.f_6891[j]==302 || Global_262145.f_6891[j]==303){
for (i=0;
i < Global_262145.f_6211[j];
i=i + 1){
if(hParam0==Global_262145.f_5066[j /*51*/][i]) return j;
}}}}
return -1;
}


void func_261(int iParam0) // Position - 0x24D71{
if(Global_262145.f_5059[0]==0){
Global_262145.f_5059[0]=-1031160848;
Global_262145.f_5059[1]=149899917;
Global_262145.f_5059[2]=-450959458;
Global_262145.f_5059[3]=-1871718994;
Global_262145.f_5059[4]=-1489575147;
Global_262145.f_5059[5]=-1279529723;
}
if(func_262(Global_794709.f_159989[iParam0 /*13*/].f_1)) Global_794709.f_4[iParam0 /*88*/].f_69=1;
return;
}
BOOL func_262(int iParam0) // Position - 0x24E04{
int i;
for (i=0;
i < 6;
i=i + 1){
if(Global_262145.f_5059[i]==iParam0) return true;
}
return false;
}
const 

char* func_263() // Position - 0x24E33{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_RSC" /*Rockstar*/);
}


void func_264(BOOL bParam0) // Position - 0x24E43{
_MPPLY_STAT_SET_BOOL(joaat("MPPLY_BIG_FEED_INIT"), bParam0);
return;
}


void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x24E56{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, true);
return;
}


void func_266(BOOL bParam0) // Position - 0x24E72{
if(!func_19()) return;
if(bParam0){
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_RACES"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_DMS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_PARAS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_SURVIVAL"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CTF"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_LTS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_VERSUS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_MISSIONS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_HEIST_PLANNING"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_HEIST_FINALE"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_RACES"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_DMS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_PARAS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_SURVIVAL"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_LTS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_CTF"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_VERSUS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_MISSIONS"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_HEIST_PLAN"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_HEIST_FINALE"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_0"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_1"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_2"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_3"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_4"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_5"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CONTACT_6"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_0"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_1"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_2"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_3"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_4"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_5"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_TOTAL_CONTACT_6"), 0);
}else{
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_RACES_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_DMS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_PARAS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_SURVIVAL_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_CTF_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_LTS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_VERSUS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_MISSIONS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_HEIST_PLANNING_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_UNIQUE_HEIST_FINALE_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_RACES_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_DMS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_PARAS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_SURVIVAL_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_LTS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_CTF_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_VERSUS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_MISSIONS_V"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_HEIST_PLANV"), 0);
_MPPLY_STAT_SET_INT(joaat("MPPLY_AVAILABLE_HEIST_FINALE_V"), 0);
}
return;
}


void func_267() // Position - 0x250A9{
int i;
Global_1030213.f_684=0;
for (i=0;
i <=84;
i=i + 1){
Global_1030213[i /*3*/]={
0f, 0f, 0f 
};
Global_1030213.f_256[i /*3*/]={
0f, 0f, 0f 
};
Global_1030213.f_512[i]=0f;
}
return;
}


void func_268() // Position - 0x250F5{
int i;
int j;
for (j=0;
j < 1;
j=j + 1){
Global_794709.f_183624[i /*11*/].f_9=0;
for (i=0;
i < 8;
i=i + 1){
Global_794709.f_183624[j /*11*/][i]=0;
}}
return;
}
BOOL func_269(const char* sParam0) // Position - 0x25144{
if(MISC::ARE_STRINGS_EQUAL(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "O8SUrTkPW0G7NVh-c95lPQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "Cdgvsa-E8katW71P6VWhQg") || MISC::ARE_STRINGS_EQUAL(sParam0, "W3U0oyo5okGvED-f7CPzhg") || MISC::ARE_STRINGS_EQUAL(sParam0, "7CpnaZYqMEKxxbW2rbp33A") || MISC::ARE_STRINGS_EQUAL(sParam0, "d_cLbuKs0kyVu6VWc3tfQg") || MISC::ARE_STRINGS_EQUAL(sParam0, "hCC18F4SuU254v5vlgPRmA") || MISC::ARE_STRINGS_EQUAL(sParam0, "tSm64WIuK0yqti6Po8oQCg") || MISC::ARE_STRINGS_EQUAL(sParam0, "5mwusUtO5E6AVvnUrgFZcg") || MISC::ARE_STRINGS_EQUAL(sParam0, "_dFdLIICm0OaNP3ewdkmqA") || MISC::ARE_STRINGS_EQUAL(sParam0, "cfWCTF0bH0W0JmM3kP3TPg") || MISC::ARE_STRINGS_EQUAL(sParam0, "JVlkjgsbUk6pHcrN43FPgQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "AdOvPsvI30yZ6h9HpjzcwA") || MISC::ARE_STRINGS_EQUAL(sParam0, "te4f3O-vVUOkF3YAbnzD2A") || MISC::ARE_STRINGS_EQUAL(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w") || MISC::ARE_STRINGS_EQUAL(sParam0, "gYOgjaTS7EedRGFuBasioQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "OGuQ53X7G0qx-jteU3gBkg")) return true;
return false;
}
BOOL func_270(int iParam0, Any anParam1, int iParam2, int iParam3, int iParam4, Any* panParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x2525E{
switch (iParam0){
case 0:
if(iParam3==4 || iParam8 !=-1)if(NETWORK::UGC_QUERY_MY_CONTENT(anParam1, iParam6, func_272(iParam3), 0, iParam8, iParam7)) return true;
elseif(NETWORK::UGC_GET_MY_CONTENT(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 1:
if(NETWORK::UGC_QUERY_MY_CONTENT(anParam1, iParam6, func_272(iParam3), 1, iParam8, iParam7)) return true;
break;
case 2:
if(NETWORK::UGC_QUERY_MY_CONTENT(anParam1, iParam6, func_272(iParam3), 2, iParam8, iParam7)) return true;
break;
case 3:
if(NETWORK::UGC_GET_FRIEND_CONTENT(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 4:
if(iParam4==-1) iParam4=func_271(PLAYER::PLAYER_ID());
if(NETWORK::UGC_GET_CREW_CONTENT(iParam4, anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 5:
if(iParam2==3 || iParam2==4 || iParam2==5 || iParam2==6 && bParam9)if(NETWORK::UGC_QUERY_BY_CATEGORY(iParam2, anParam1, iParam6, func_272(iParam3), 0, false)) return true;
elseif(unk_0x4844A1FB6AC1E670(iParam2, anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 6:
if(unk_0x26311323E5136ED1(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 7:
if(unk_0xE805474B68FF2DA5(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 8:
if(NETWORK::UGC_GET_BOOKMARKED_CONTENT(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
case 9:
if(iParam3==4)if(unk_0x3A2D36807D5EF95B(anParam1, iParam6, func_272(iParam3), iParam7)) return true;
elseif(NETWORK::UGC_GET_MOST_RECENTLY_CREATED_CONTENT(anParam1, iParam6, func_272(iParam3), panParam5)) return true;
break;
}
return false;
}

int func_271(Player plParam0) // Position - 0x25485{
var gamerHandle;
int clanDesc;
if(plParam0==_INVALID_PLAYER_INDEX()) return -1;
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle);
return clanDesc;
}


char* func_272(int iParam0) // Position - 0x254B2{
switch (iParam0){
case 0:
return "gta5mission";
case 1:
return "playlist";
case 2:
return "lifeinvaderpost";
case 3:
return "photo";
case 4:
return "challenge";
default:
}
return "gta5mission";
}


void func_273(var uParam0) // Position - 0x25506{
Any* fileDict;
Any* array;
int i;
var unk;
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
array=DATAFILE::DATADICT_GET_ARRAY(fileDict, "list");
uParam0->f_1864=DATAFILE::DATAARRAY_GET_COUNT(array);
if(uParam0->f_1864 > 16) uParam0->f_1864=15;
unk=16;
for (i=0;
i <=uParam0->f_1864 - 1;
i=i + 1){
unk[i]=DATAFILE::DATAARRAY_GET_DICT(array, i);
TEXT_LABEL_ASSIGN_STRING(&uParam0->[i /*16*/], DATAFILE::DATADICT_GET_STRING(unk[i], "name"), 64);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_513[i /*6*/], DATAFILE::DATADICT_GET_STRING(unk[i], "cid"), 24);
}
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void func_274() // Position - 0x255A5{
int i;
for (i=0;
i <=15;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_1053582[i /*16*/], "", 64);
TEXT_LABEL_ASSIGN_STRING(&Global_1053582.f_257[i /*6*/], "", 24);
TEXT_LABEL_ASSIGN_STRING(&Global_1053582.f_354[i /*16*/], "", 64);
Global_1053582.f_884[i]=0;
Global_1053582.f_901[i]=0;
}
Global_1053582.f_936=0;
Global_1053582.f_935=0;
return;
}


void func_275(var uParam0) // Position - 0x25618{
int i;
for (i=0;
i <=15;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&uParam0->[i /*16*/], "", 64);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_257[i /*6*/], "", 24);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_354[i /*16*/], "", 64);
uParam0->f_884[i]=0;
uParam0->f_901[i]=0;
}
uParam0->f_936=0;
uParam0->f_937=0;
uParam0->f_938=0;
return;
}


void func_276(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x25683{
int i;
var unk;
if(bParam2) *iParam0=0;
if(bParam1){
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (i=iParam3;
i <=30;
i=i + 1){
iParam0->f_33[i /*88*/]={
unk 
};
}}
return;
}


void func_277(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x256D2{
int i;
var unk;
if(bParam3){
if(bParam1){
*iParam0=0;
iParam0->f_5526=0;
iParam0->f_5527=0;
iParam0->f_5524=0;
}else{
iParam0->f_3=0;
}}
if(bParam2){
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
if(bParam5){
for (i=iParam4;
i <=61;
i=i + 1){
iParam0->f_4[i /*88*/]={
unk 
};
}}elseif(bParam1){
for (i=iParam4;
i <=30;
i=i + 1){
iParam0->f_4[i /*88*/]={
unk 
};
}}else{
for (i=iParam4 + 31;
i <=61;
i=i + 1){
iParam0->f_4[i /*88*/]={
unk 
};
}}}
return;
}


void func_278(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2579A{
int i;
var unk;
if(bParam2){
*uParam0=0;
uParam0->f_1=0;
}
if(bParam1){
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (i=iParam3;
i <=299;
i=i + 1){
uParam0->f_1804[i /*88*/]={
unk 
};
}}
return;
}


void func_279(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x257F0{
int num;
int i;
var unk;
if(bParam1){
Global_794709=0;
Global_1030898[0 /*59*/]=0;
}
num=1818;
if(func_7(PLAYER::PLAYER_ID(), true, false)) num=1800;
if(bParam0){
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (i=iParam2;
i <=num - 1;
i=i + 1){
Global_794709.f_4[i /*88*/]={
unk 
};
}}
return;
}


void func_280() // Position - 0x25863{
if(func_312()) NETWORK::UGC_CLEAR_OFFLINE_QUERY();
else NETWORK::UGC_CLEAR_QUERY_RESULTS();
return;
}


void func_281() // Position - 0x2587D{
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x25893{
uParam0->f_1=0;
return;
}


void func_283() // Position - 0x258A0{
int i;
for (i=0;
i < 62;
i=i + 1){
Global_1021887.f_5461[i]=-1;
Global_1010831.f_5461[i]=-1;
}
return;
}
BOOL func_284() // Position - 0x258D3{
if(!func_285()) return true;
return false;
}
BOOL func_285() // Position - 0x258E8{
if(func_286()) return false;
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==false) return false;
return true;
}
BOOL func_286() // Position - 0x25908{
return Global_2695031;
}
BOOL func_287(var uParam0) // Position - 0x25914{
var gamerHandle;
Any* fileDict;
int int;
switch (*uParam0){
case 0:
gamerHandle={
GET_LOCAL_GAMER_HANDLE() 
};
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&gamerHandle), 24);
func_281();
*uParam0=*uParam0 + 1;
break;
case 1:
if(unk_0x67B54D9CD7FFC6C2(&(uParam0->f_1), func_272(0))) *uParam0=*uParam0 + 1;
break;
case 2:
if(unk_0xC51548BB12D9310E()){
if(unk_0x40E000664C0FFA2C()){
if(unk_0xB964C1145A3CA708() > 0 && unk_0x51221E9783742FFC(0, 0)){
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
int=DATAFILE::DATADICT_GET_INT(fileDict, "pt");
func_289(2, int);
*uParam0=*uParam0 + 1;
}else{
*uParam0=*uParam0 + 1;
}}else{
*uParam0=*uParam0 + 1;
}}
break;
case 3:
func_281();
func_288(uParam0);
return true;
}
return false;
}


void func_288(var uParam0) // Position - 0x259E7{
var unk;
*uParam0={
unk 
};
return;
}


void func_289(int iParam0, int iParam1) // Position - 0x259F7{
Hash hash;
Hash statName;
hash=Global_1665454[iParam0];
statName=hash;
STATS::STAT_SET_INT(statName, iParam1, true);
return;
}
struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0x25A17{
var gamerHandle;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
return gamerHandle;
}


void func_291(int iParam0, var uParam1) // Position - 0x25A2C{
int i;
int j;
var unk;
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (j=0;
j <=30;
j=j + 1){
if(IS_BIT_SET(Global_1010831.f_4[j /*88*/].f_76, 13)){
for (i=iParam0;
i <=(iParam0 + uParam1) - 1;
i=i + 1){
if(i < 1800 && func_292(Global_1010831.f_4[j /*88*/].f_56, Global_794709.f_4[i /*88*/].f_56, 1082130432)) Global_1010831.f_4[j /*88*/]={
unk 
};
}
if(iParam0==0){
for (i=0;
i <=299;
i=i + 1){
if(func_292(Global_1010831.f_4[j /*88*/].f_56, Global_978406.f_1804[i /*88*/].f_56, 1082130432)) Global_1010831.f_4[j /*88*/]={
unk 
};
}}}}
return;
}
BOOL func_292(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x25B21{
if(!_IS_NULL_VECTOR(fParam3))if(fParam0 + iParam6 > fParam3 && fParam0.f_1 + iParam6 > fParam3.f_1 && fParam0 - iParam6 < fParam3 && fParam0.f_1 - iParam6 < fParam3.f_1) return true;
return false;
}
BOOL func_293(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x25B74{
var unk;
return func_46(uParam0, &unk, 0, iParam1, 0, 0, iParam2, -1, bParam3, 1, false, 0, -1);
}
BOOL func_294() // Position - 0x25B92{
BOOL num;
int profileSetting;
int profileSetting2;
int profileSetting3;
int profileSetting4;
int profileSetting5;
int profileSetting6;
num=0;
profileSetting=MISC::GET_PROFILE_SETTING(933);
profileSetting2=MISC::GET_PROFILE_SETTING(934);
profileSetting3=MISC::GET_PROFILE_SETTING(935);
profileSetting4=MISC::GET_PROFILE_SETTING(936);
profileSetting5=MISC::GET_PROFILE_SETTING(937);
profileSetting6=MISC::GET_PROFILE_SETTING(938);
if(func_213(32, -1) || profileSetting3 > 0 || profileSetting > 0 || profileSetting2 > 0 || profileSetting4 > 0 || profileSetting5 > 0 || profileSetting6 > 0) num=1;
return num;
}


void func_295(int iParam0, int iParam1) // Position - 0x25C1E{
int i;
int j;
var unk;
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (j=0;
j <=299;
j=j + 1){
if(IS_BIT_SET(Global_978406.f_1804[j /*88*/].f_76, 13)){
for (i=iParam0;
i <=iParam1 - 1;
i=i + 1){
if(IS_BIT_SET(Global_794709.f_4[i /*88*/].f_76, 13)){
if(func_292(Global_794709.f_4[i /*88*/].f_56, Global_978406.f_1804[j /*88*/].f_56, 1082130432)){
MISC::CLEAR_BIT(&(Global_978406.f_1804[j /*88*/].f_76), 13);
Global_978406.f_1804[j /*88*/]={
unk 
};
i=1800;
}}}}}
return;
}
BOOL func_296(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x25CDE{
int num;
num=5;
if(func_297()) num=6;
return func_46(uParam0, &(Global_1835433.f_1), 5, iParam1, num, iParam2, iParam3, -1, false, 1, false, 0, -1);
}
BOOL func_297() // Position - 0x25D0E{
return Global_1835433.f_2;
}
BOOL func_298(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x25D1C{
int num;
num=3;
if(func_297()) num=4;
return func_46(uParam0, &(Global_1835433.f_1), 5, iParam1, num, iParam2, iParam3, -1, false, 1, false, 0, -1);
}


void func_299() // Position - 0x25D4C{
Global_1835433.f_5=0;
return;
}


void func_300() // Position - 0x25D5B{
Global_1835433.f_5=1;
return;
}
BOOL func_301() // Position - 0x25D6A{
return Global_1835433.f_5;
}
BOOL func_302() // Position - 0x25D78{
return Global_1835433.f_7;
}
BOOL func_303(var uParam0) // Position - 0x25D86{
int i;
if(!func_312())if(func_284()) return true;
if(Global_262145.f_3778==1) return true;
switch (uParam0->f_4){
case 0:
func_280();
func_281();
func_311();
uParam0->f_12=0;
uParam0->f_9=0;
Global_786550=0;
for (i=0;
i <=63;
i=i + 1){
if(i < 35){
if(Global_786550.f_3538[i /*132*/].f_129 !=0) NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_786550.f_3538[i /*132*/].f_129);
Global_786550.f_3538[i /*132*/].f_129=0;
Global_786550.f_3538[i /*132*/].f_129.f_1=0;
Global_786550.f_3538[i /*132*/].f_129.f_2=0;
}}
func_34(uParam0, 24);
break;
case 24:
if(func_312()) NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
else NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
uParam0->f_9=0;
uParam0->f_13=0;
for (i=0;
i <=63;
i=i + 1){
if(i < 35) TEXT_LABEL_ASSIGN_STRING(&Global_1050140.f_1179[i /*6*/], "", 24);
}
for (i=0;
i <=63;
i=i + 1){
if(i < 35){
Global_1050140.f_1179[i /*6*/]={
func_310(i + uParam0->f_12) 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1050140.f_1179[i /*6*/])) uParam0->f_13=uParam0->f_13 + 1;
}}
func_34(uParam0, 1);
break;
case 1:
if(NETWORK::UGC_QUERY_BY_CONTENT_IDS(&(Global_1050140.f_1179), uParam0->f_13, true, func_272(0))) func_34(uParam0, 2);
break;
case 2:
if(NETWORK::UGC_HAS_GET_FINISHED()){
if(NETWORK::UGC_DID_GET_SUCCEED()){
*uParam0=0;
}else{
func_33(uParam0, true, true);
uParam0->f_41=NETWORK::UGC_GET_QUERY_RESULT();
*uParam0=0;
return true;
}
if(NETWORK::UGC_GET_CONTENT_NUM() > 0){
func_34(uParam0, 4);
}else{
func_33(uParam0, true, true);
*uParam0=0;
return true;
}}
break;
case 4:
if(uParam0->f_9 >=uParam0->f_13){
_STOPWATCH_RESET(&(uParam0->f_33), false, false);
func_34(uParam0, 25);
}else{
uParam0->f_7=0;
while (uParam0->f_7 < uParam0->f_13){
if(uParam0->f_9 + uParam0->f_12 < 35){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
if(DATAFILE::DATAFILE_SELECT_UGC_DATA(uParam0->f_7, 0)){
func_308(uParam0);
}
elseif(uParam0->f_8 > 200){
func_281();
uParam0->f_7=uParam0->f_7 + 1;
uParam0->f_8=0;
}}else{
uParam0->f_9=uParam0->f_9 + 1;
}
uParam0->f_7=uParam0->f_7 + 1;
}}
break;
case 25:
if(func_304(uParam0) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_33), 45000, false)){
if(uParam0->f_12==0 && uParam0->f_13 >=35){
func_34(uParam0, 24);
uParam0->f_12=uParam0->f_12 + uParam0->f_13;
return false;
}else{
func_33(uParam0, true, true);
*uParam0=1;
for (i=0;
i <=63;
i=i + 1){
if(i < 35){
if(Global_786550.f_3538[i /*132*/].f_129 !=0) NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_786550.f_3538[i /*132*/].f_129);
Global_786550.f_3538[i /*132*/].f_129=0;
Global_786550.f_3538[i /*132*/].f_129.f_1=0;
Global_786550.f_3538[i /*132*/].f_129.f_2=0;
}}
return true;
}}
break;
}
return false;
}
BOOL func_304(var uParam0) // Position - 0x260F0{
int i;
BOOL flag;
const char* text;
int position;
int lengthOfLiteralString;
int j;
BOOL flag2;
flag=true;
for (i=uParam0->f_12;
i <=uParam0->f_12 + 63;
i=i + 1){
if(i < 35)if(Global_786550.f_1[i /*88*/].f_54 !=0)if(!func_307(Global_786550.f_1[i /*88*/].f_54, &(Global_786550.f_3538[i /*132*/].f_129))) flag=false;
elseif(!Global_786550.f_3538[i /*132*/].f_129.f_2) flag=false;
}
if(flag){
for (i=uParam0->f_12;
i <=uParam0->f_12 + 63;
i=i + 1){
if(i < 35){
for (j=0;
j <=7;
j=j + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_786550.f_3538[i /*132*/][j /*16*/], "", 64);
}
position=0;
j=0;
flag2=false;
text=func_305(Global_786550.f_1[i /*88*/].f_54, 500);
lengthOfLiteralString=HUD::GET_LENGTH_OF_LITERAL_STRING(text);
while (!flag2){
if(position >=lengthOfLiteralString){
flag2=true;
}elseif(j >=8){
flag2=true;
}else{
TEXT_LABEL_ASSIGN_STRING(&Global_786550.f_3538[i /*132*/][j /*16*/], HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(text, position, lengthOfLiteralString, 63), 64);
position=position + HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_786550.f_3538[i /*132*/][j /*16*/]);
j=j + 1;
}}}}}
return flag;
}
const 

char* func_305(int iParam0, int iParam1) // Position - 0x2623C{
if(iParam0==-1) return func_306();
return NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, iParam1);
}
const 

char* func_306() // Position - 0x2625C{
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREATOR_NO_T" /*No translation.*/);
}
BOOL func_307(int iParam0, int iParam1) // Position - 0x2626C{
if(*iParam1 !=iParam0){
if(*iParam1 !=0) NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(*iParam1);
iParam1->f_2=0;
*iParam1=iParam0;
iParam1->f_1=0;
}
if(iParam0==0) return true;
if(iParam1->f_2){
return true;
}else{
if(iParam0==-1){
iParam1->f_2=1;
return true;
}
if(!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(iParam0) && iParam1->f_1==0 || iParam1->f_1==-1){
iParam1->f_1=NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
}elseif(NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(iParam0)){
if(NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(iParam0)){
iParam1->f_2=1;
return true;
}else{
iParam1->f_2=0;
return true;
}}}
return false;
}


void func_308(var uParam0) // Position - 0x26317{
Any* fileDict;
Any* dict;
int dict2;
int int;
var unk;
Hash hashKey;
fileDict=DATAFILE::DATAFILE_GET_FILE_DICT(0);
dict=DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
dict2=DATAFILE::DATADICT_GET_DICT(dict, "gen");
if(func_312()){
if(func_269(NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7))){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}
if(Global_262145.f_8186){
if(DATAFILE::DATADICT_GET_INT(dict2, "type")==0){
if(DATAFILE::DATADICT_GET_INT(dict2, "subtype")==1 || DATAFILE::DATADICT_GET_INT(dict2, "subtype")==7){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}
int=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
if(IS_BIT_SET(int, 4) || IS_BIT_SET(int, 12)){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}}}
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/]={
unk 
};
if(!func_312()){
Global_786550.f_3082[uParam0->f_9 /*13*/].f_5=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, 0);
Global_786550.f_1[uParam0->f_9 /*88*/].f_67=func_101(uParam0->f_7);
Global_786550.f_1[uParam0->f_9 /*88*/].f_66=NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam0->f_7, Global_794709.f_4[uParam0->f_9 /*88*/].f_67);
Global_786550.f_3082[uParam0->f_9 /*13*/].f_6=NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7);
}
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_56={
func_107(dict2) 
};
if(DATAFILE::DATADICT_GET_TYPE(dict2, "optbs")==2) Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76=DATAFILE::DATADICT_GET_INT(dict2, "optbs");
MISC::CLEAR_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 15);
MISC::CLEAR_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 18);
MISC::CLEAR_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 19);
MISC::CLEAR_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 29);
MISC::CLEAR_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 28);
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_59={
func_106(dict2, "cam") 
};
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_62={
func_105(dict2) 
};
if(!func_312())if(NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam0->f_7))) Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_54=NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
else Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_54=-1;
if(DATAFILE::DATADICT_GET_TYPE(dict2, "mgrk")==2) Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_8=DATAFILE::DATADICT_GET_INT(dict2, "mgrk");
if(DATAFILE::DATADICT_GET_TYPE(dict2, "mght")==2) Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_9=DATAFILE::DATADICT_GET_INT(dict2, "mght");
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_69=DATAFILE::DATADICT_GET_INT(dict2, "min");
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_71=DATAFILE::DATADICT_GET_INT(dict2, "num");
if(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_71==-1) Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_71=func_104();
TEXT_LABEL_ASSIGN_STRING(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_65=DATAFILE::DATADICT_GET_INT(dict2, "type");
if(func_312()) TEXT_LABEL_ASSIGN_STRING(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_6), func_263(), 64);
else TEXT_LABEL_ASSIGN_STRING(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(uParam0->f_7), 64);
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_70=DATAFILE::DATADICT_GET_INT(dict2, "rank");
Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/]=DATAFILE::DATADICT_GET_INT(dict2, "tnum");
if(!func_312()){
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_73=func_103(NETWORK::UGC_GET_CONTENT_RATING(uParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0));
Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_4=NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0);
}
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_75=DATAFILE::DATADICT_GET_INT(dict2, "charcon");
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_78=DATAFILE::DATADICT_GET_INT(dict2, "ltm");
Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_68=DATAFILE::DATADICT_GET_INT(dict2, "subtype");
TEXT_LABEL_ASSIGN_STRING(&Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/], NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
hashKey=MISC::GET_HASH_KEY(&Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/]);
Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_3=hashKey;
func_100(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_65, &(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_71), &(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_69));
MISC::SET_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 13);
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
if(!func_312()){
Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_1=MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam0->f_7));
if(NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7)){
MISC::SET_BIT(&(Global_786550.f_1[uParam0->f_9 + uParam0->f_12 /*88*/].f_76), 14);
Global_786550.f_3082[uParam0->f_9 + uParam0->f_12 /*13*/].f_7=NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam0->f_7);
}}
uParam0->f_9=uParam0->f_9 + 1;
Global_786550=Global_786550 + 1;
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0) DATAFILE::DATAFILE_DELETE(0);
return;
}


void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x26904{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
return;
}


struct<6> func_310(int iParam0) // Position - 0x26941{
var unk;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "hK5OgJk1BkinXGGXghhTMg", 24);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "V7yEdnL6TEyU3i-U1Rv_pQ", 24);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BWsCWtmnvEWXBrprK9hDHA", 24);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "CvGcgHoGwUuA_1hEo-f8Hg", 24);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "6k6LOpnf2E-GG38OhjS-TA", 24);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "nSWwSwAf3EaHZWsk449lBg", 24);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "qRsMyKTHCEaL0qJQJR7JKQ", 24);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "ciWN4gwmakid4lW-nSllcA", 24);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "v-8OOQYzxE-Zvqj5xO03DQ", 24);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "zCxFg29teE2ReKGnr0L4Bg", 24);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "6ClY8ZA_DkuBUdZ_fPn6Rw", 24);
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OiSO3Z0YdkCaEqVHhhkj4Q", 24);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "Cy2OZSwCt0-mSXY00o4SNw", 24);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "Y4zpRQDfvkawfFDR1Uxi2A", 24);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "7-w96-PU4kSevhtG5YwUHQ", 24);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "oSXhVwaHH0KDOzg0rfIj3Q", 24);
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "QS6WYcjJFk2YxqYDMN8mjQ", 24);
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "opjT3-kJLUOJt16LHNtbUw", 24);
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JJ9OzPbPo02eQbaniO8E3g", 24);
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "20Lu41Px20OJMPdZ6wXG3g", 24);
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "6UzZkstFeEeCkvs2lrF_6A", 24);
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "-zZdcIxFfU6zmPJyUqu6zw", 24);
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NuWMXoqFB0OxtRXY9AEOfQ", 24);
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "3tYmphlR1ka7IB37wNw45A", 24);
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "kNqG_EaEpUm-F411W5AyIQ", 24);
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "PPnsIR0v2U2COyRbED87gw", 24);
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "z49DSS9db0i_vh6A2e-Q-g", 24);
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "Fo168mMjCUCeN_IKmL4VnA", 24);
break;
}
return unk;
}


void func_311() // Position - 0x26B30{
var unk;
int i;
unk.f_65=-1;
unk.f_66=-1;
unk.f_67=2;
for (i=1800;
i <=1817;
i=i + 1){
Global_794709.f_4[i /*88*/]={
unk 
};
}
return;
}
BOOL func_312() // Position - 0x26B75{
return Global_1835433.f_4;
}
BOOL func_313(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x26B83{
int num;
num=1;
if(func_297()) num=2;
return func_46(uParam0, &Global_1835433, 5, iParam1, num, iParam2, iParam3, -1, false, 1, false, 0, -1);
}

int func_314(int iParam0) // Position - 0x26BB1{
if(MISC::IS_PS3_VERSION() || func_316() && iParam0==0)if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)==false || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)==false) return 0;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)==false) return 0;
if(func_315()==0) return 0;
return 1;
}

int func_315() // Position - 0x26C0C{
if(MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return 1;
if(MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return 1;
if(func_316() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==false && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return 1;
if(func_59() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return 1;
if(MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return 1;
return 0;
}
BOOL func_316() // Position - 0x26C84{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

int func_317(int iParam0) // Position - 0x26C9A{
if(MISC::IS_PS3_VERSION() || func_316() && iParam0==0)if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)==false || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)==false) return 0;
elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)==false) return 0;
if(func_315()==0) return 0;
return 1;
}


void func_318() // Position - 0x26CF5{
Global_2692733.f_3=1;
return;
}
BOOL func_319() // Position - 0x26D04{
SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration");
SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration_2");
if(SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration") && SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration_2")){
SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration", MICRO);
SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration_2", MICRO);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration");
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration_2");
return true;
}
return false;
}
BOOL func_320() // Position - 0x26D5F{
return Global_2692733.f_3;
}
BOOL func_321() // Position - 0x26D6D{
if(Global_1574993==68) return true;
return false;
}


void func_322() // Position - 0x26D83{
Global_2692733.f_4=1;
return;
}


void func_323() // Position - 0x26D92{
Global_1835433.f_11=0;
Global_1835433.f_13=1;
func_327();
func_32();
func_42();
func_5();
func_325();
func_324(0);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_324(int iParam0) // Position - 0x26DC5{
Global_1574546=iParam0;
return;
}


void func_325() // Position - 0x26DD3{
Global_1835433.f_10=1;
return;
}
BOOL func_326() // Position - 0x26DE2{
return Global_2692733.f_6;
}


void func_327() // Position - 0x26DF0{
Global_2692733.f_5=0;
return;
}
BOOL func_328() // Position - 0x26DFF{
return Global_2692733.f_5;
}