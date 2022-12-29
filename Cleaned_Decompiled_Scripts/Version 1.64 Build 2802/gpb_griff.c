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
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
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
Hash hLocal_36=0;
var uLocal_37=16;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
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
var uLocal_153=0;
var uLocal_154=0;
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
Ped pedLocal_240=0;
BOOL bLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
int iLocal_245=0;
int iLocal_246=0;
int iLocal_247=0;
Blip blLocal_248=0;
int iLocal_249=0;
int iLocal_250=0;
int iLocal_251=0;
int iLocal_252=0;
int iLocal_253=0;
int iLocal_254=0;
var uLocal_255=20;
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
var uLocal_276=20;
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
int iLocal_297=0;
int iLocal_298=0;
var uLocal_299=3;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
char* sLocal_303=0;
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
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=0;
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
BOOL bLocal_436=0;
BOOL bLocal_437=0;
BOOL bLocal_438=0;
BOOL bLocal_439=0;
BOOL bLocal_440=0;
BOOL bLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
int iLocal_447=0;
Object obLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
var uLocal_451=0;
int iLocal_452=0;
int iLocal_453=0;
int iLocal_454=0;
int iLocal_455=0;
var uLocal_456=0;
var uLocal_457=10;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=0;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=0;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=0;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
int iLocal_503=0;
BOOL bLocal_504=0;
BOOL bLocal_505=0;
BOOL bLocal_506=0;
var uScriptParam_0=0;
var uScriptParam_1=5;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=5;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
var uScriptParam_22=0;
#endregion

void main() // Position - 0x0{
int num;
var unk;
var unk5;
var unk9;
var animationName;
int num2;
int num3;
var unk28;
int num4;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
float num5;
int gameTimer;
BOOL flag5;
float num6;
var text;
var text2;
Vector3 entityCoords;
Hash hashKey;
int num7;
BOOL flag6;
int num8;
BOOL flag7;
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
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
TEXT_LABEL_ASSIGN_STRING(&uLocal_202, "", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_218, "", 64);
iLocal_245=-1;
iLocal_247=1;
bLocal_439=true;
iLocal_447=1;
iLocal_452=1;
iLocal_453=65;
iLocal_454=49;
iLocal_455=64;
uLocal_242={
uScriptParam_0.f_1[0 /*3*/] 
};
func_118();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)) func_113(0);
if(func_110(func_112(SCRIPT::GET_THIS_SCRIPT_NAME()))) func_113(0);
if(!func_109()) func_113(0);
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) func_113(0);
if(func_108()) func_113(0);
if(func_107()) func_113(0);
if(SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_106()) func_113(0);
if(MISC::GET_GAME_TIMER() < Global_32428 + 10000 && !func_106()) func_113(0);
TEXT_LABEL_ASSIGN_STRING(&uLocal_404, "", 64);
uLocal_299[0]=1;
uLocal_299[1]=1;
uLocal_299[2]=1;
func_105();
STREAMING::REQUEST_MODEL(hLocal_36);
while (!STREAMING::HAS_MODEL_LOADED(hLocal_36)){
SYSTEM::WAIT(0);
}
if(!bLocal_436) func_113(0);
STREAMING::REQUEST_ANIM_DICT(&uLocal_324);
STREAMING::REQUEST_ANIM_DICT(&uLocal_340);
iLocal_249=1;
while (!STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_324) || !STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_340) || !STREAMING::HAS_MODEL_LOADED(hLocal_36)){
SYSTEM::WAIT(0);
}
Global_32428=MISC::GET_GAME_TIMER();
MISC::CLEAR_AREA_OF_PEDS(uLocal_242, 0.5f, 0);
pedLocal_240=PED::CREATE_PED(PED_TYPE_SPECIAL, hLocal_36, uLocal_242, uScriptParam_0.f_17[0], false, true);
func_103();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_36);
bLocal_241=true;
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_240) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_240)){
PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_240, BF_AlwaysFlee, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_240, true);
}
iLocal_297=0;
uLocal_442=uLocal_442;
uLocal_443=uLocal_443;
uLocal_444=uLocal_444;
uLocal_445=uLocal_445;
uLocal_446=uLocal_446;
TEXT_LABEL_COPY(&uLocal_304,{
uLocal_234 
}
, 4);
TEXT_LABEL_APPEND_STRING(&uLocal_304, "AUD", 16);
TEXT_LABEL_COPY(&uLocal_308,{
uLocal_234 
}
, 4);
TEXT_LABEL_APPEND_STRING(&uLocal_308, "_RAND_", 16);
iLocal_250=0;
iLocal_298=-1;
num=1;
num3=0;
gameTimer=0;
iLocal_253=iLocal_253;
uLocal_276[0]=uLocal_276[0];
iLocal_254=iLocal_254;
iLocal_503=iLocal_503;
bLocal_504=bLocal_504;
func_101(0, false);
bLocal_505=false;
while (num==1){
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_240)){
func_97(func_112(SCRIPT::GET_THIS_SCRIPT_NAME()));
func_113(0);
}
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) func_113(1);
num6=func_96(PLAYER::PLAYER_PED_ID(), pedLocal_240);
if(num6 < 10f && func_95()) PED::SET_IK_TARGET(pedLocal_240, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
if(num6 < 8f) PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, pedLocal_240, 31086, 0f, 0f, 0f, 0, -1, -1);
if(num6 < 15f) PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_TALK, true);
if(bLocal_505){
if(bLocal_506) GRAPHICS::DRAW_DEBUG_TEXT_2D("controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
else GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
if(iLocal_245==-1) GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject OFF", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
else GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject ON", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
if(bLocal_440) GRAPHICS::DRAW_DEBUG_TEXT_2D("MONOLOGUE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
else GRAPHICS::DRAW_DEBUG_TEXT_2D("IDLE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_STRING(&text, "conversation_offset ", 64);
TEXT_LABEL_APPEND_INT(&text, Global_113593[iLocal_251], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text, 0.02f, 0.8f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_STRING(&text, "max_conversation_offset ", 64);
TEXT_LABEL_APPEND_INT(&text, iLocal_252, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text, 0.02f, 0.81f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_STRING(&text, "conversation_split_offset ", 64);
TEXT_LABEL_APPEND_INT(&text, iLocal_297, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text, 0.02f, 0.82f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_STRING(&text, "max_conversation_split_offsets[conversation_offset] ", 64);
TEXT_LABEL_APPEND_INT(&text, uLocal_255[Global_113593[iLocal_251]], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text, 0.02f, 0.83f, 0f, 0, 0, 255, 255);
}
entityCoords={
ENTITY::GET_ENTITY_COORDS(pedLocal_240, true) 
};
if(ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(pedLocal_240) && !iLocal_250==25 && !iLocal_250==5 && !iLocal_250==6){
func_94();
if(func_93()){
func_91();
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=25;
}else{
func_90();
func_91();
iLocal_250=5;
gameTimer=MISC::GET_GAME_TIMER();
}
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_240, "GENERIC_CURSE_MED", "SPEECH_PARAMS_FORCE", 1);
}
if(func_108() || MISC::GET_MISSION_FLAG() || func_107() || !func_109()){
if(!func_89() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode"))==0){
func_108();
MISC::GET_MISSION_FLAG();
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=25;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_240) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_240) && num6 < 25f && func_88(PLAYER::PLAYER_PED_ID()) !=joaat("WEAPON_UNARMED") && func_85(pedLocal_240, PLAYER::PLAYER_PED_ID(), 1126825984, 0)){
if(!func_89()){
func_91();
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=24;
}}}
if(PED::IS_PED_INJURED(pedLocal_240) || MISC::IS_BULLET_IN_AREA(entityCoords, 50f, true) || MISC::IS_BULLET_IN_AREA(entityCoords, 50f, false) || MISC::IS_PROJECTILE_IN_AREA(entityCoords, 20f, 20f, 20f, false) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, entityCoords, 50f) || GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(entityCoords, 1f)){
if(!func_89()){
func_91();
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=24;
}}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_240, PLAYER::PLAYER_PED_ID(), true)){
func_91();
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=24;
}
if(func_84(pedLocal_240, PLAYER::PLAYER_PED_ID(), true) < 25f)if(!HUD::DOES_BLIP_EXIST(blLocal_248)) func_80(&blLocal_248, &pedLocal_240, false);
elseif(HUD::DOES_BLIP_EXIST(blLocal_248)) func_79(&blLocal_248);
if(!bLocal_439){
if(!PED::IS_PED_INJURED(pedLocal_240) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_240, true)) < 16f){
hashKey=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
num7=func_78(hashKey);
if(func_77(num7))if(!func_76(num7)) func_67(hashKey, false);
}}}
switch (iLocal_250){
case 0:
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_297=0;
func_63();
iLocal_250=1;
if(!func_62()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING SET_PED_IDLING", 0.02f, 0.11f, 0f, 0, 0, 255, 255);
func_101(0, true);
}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_ANIM_TO_BE_LOADED", 0.02f, 0.15f, 0f, 0, 0, 255, 255);
flag3=_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
if(bLocal_505)if(flag3) GRAPHICS::DRAW_DEBUG_TEXT_2D("conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
else GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
if(func_60() && !flag3 && !func_59()) iLocal_250=3;
if(!func_62()) func_101(0, true);
break;
case 5:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if(MISC::GET_GAME_TIMER() - gameTimer > 1){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_240, uLocal_242, 1f, -1, 1f, 1024, uScriptParam_0.f_17[0]);
iLocal_250=6;
}
break;
case 6:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.25f, 0f, 0, 0, 255, 255);
if(TASK::GET_SCRIPT_TASK_STATUS(pedLocal_240, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) !=1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_240, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) !=0){
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION TASK_PLAY_ANIM", 0.02f, 0.26f, 0f, 0, 0, 255, 255);
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_340, "idle_intro", 4f, -4f, -1, 0, 0, false, false, false);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_240, false, false);
func_118();
iLocal_250=0;
}
break;
case 3:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(Global_3) num5=25f;
else num5=25f;
if(func_84(pedLocal_240, PLAYER::PLAYER_PED_ID(), true) < num5){
if(func_58()==1){
iLocal_250=8;
bLocal_440=false;
}}
if(!func_62()) func_101(0, true);
break;
case 7:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PRE_PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(func_60()) iLocal_250=8;
!func_62();
break;
case 8:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_252=iLocal_252;
if(func_59()){
func_91();
func_101(0, true);
iLocal_250=0;
}elseif(!func_62()){
func_54();
bLocal_440=true;
func_53();
iLocal_297=iLocal_297 + 1;
flag4=true;
if(num6 > 15f){
flag4=false;
func_91();
func_101(1, false);
}
if(iLocal_297 < uLocal_255[Global_113593[iLocal_251]] && flag4){
func_63();
iLocal_250=7;
}else{
iLocal_250=9;
}}elseif(bLocal_440==true){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_240, &uLocal_372, &uLocal_356, 3)) func_52(Global_113593[iLocal_251], iLocal_297, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_240, &uLocal_372, &uLocal_356));
}
break;
case 9:
GRAPHICS::DRAW_DEBUG_TEXT_2D("MOVE_TO_NEXT_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
flag=_CONVERSATION_IS_DIALOGUE_IN_PROGRESS();
flag2=func_62();
func_51(Global_113593[iLocal_251]);
if(!flag2 && !flag || bLocal_437){
if(bLocal_504) Global_113593[iLocal_251]=iLocal_503;
else Global_113593[iLocal_251]=Global_113593[iLocal_251] + 1;
if(!Global_113593[iLocal_251] < iLocal_252) Global_113593[iLocal_251]=0;
func_101(0, true);
iLocal_250=0;
}elseif(!flag2 && flag){
GRAPHICS::DRAW_DEBUG_TEXT_2D("CONVERSATION STILL RUNNING", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
if(!func_62()) func_101(0, true);
}
break;
case 13:
GRAPHICS::DRAW_DEBUG_TEXT_2D("NEWSTATE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_50(&unk);
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_37, 0, PLAYER::PLAYER_PED_ID(), &unk, 0, 1);
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_37, 3, pedLocal_240, &uLocal_236, 0, 1);
func_48(&unk5);
if(_CONVERSATION_ADD_LINE(&uLocal_37, &uLocal_304, &unk5, 3, 0, 0, 0)) iLocal_250=14;
func_32();
break;
case 14:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_TO_START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
num2=num2;
flag5=false;
if(bLocal_440==false){
func_32();
flag5=true;
}else{
if(!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()) flag5=true;
func_32();
}
if(flag5){
iLocal_246=iLocal_247;
if(!bLocal_438){
func_31(&unk9);
func_50(&unk);
}else{
func_30();
func_29(&unk9);
}
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_37, 0, PLAYER::PLAYER_PED_ID(), &unk, 0, 1);
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_37, 3, pedLocal_240, &uLocal_236, 0, 1);
Global_113593[iLocal_251]=Global_113593[iLocal_251] + 1;
if(!Global_113593[iLocal_251] < iLocal_252) Global_113593[iLocal_251]=0;
iLocal_250=10;
}
break;
case 10:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_LOADING_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!bLocal_438){
func_27(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}else{
func_25(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}
STREAMING::REQUEST_ANIM_DICT(&uLocal_404);
num4=0;
if(STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_404)){
if(bLocal_437) num4=1;
elseif(_CONVERSATION_ADD_LINE(&uLocal_37, &uLocal_304, &unk9, 3, 0, 0, 0)) num4=1;
if(num4==1) iLocal_250=11;
}
func_32();
break;
case 11:
GRAPHICS::DRAW_DEBUG_TEXT_2D("CHECK_FOR_LOADED_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(AUDIO::IS_SCRIPTED_CONVERSATION_LOADED()){
func_23(&animationName);
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_404, &animationName, 2f, -2f, -1, 0, 0, false, false, false);
iLocal_250=12;
}else{
func_32();
}
break;
case 12:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_246=iLocal_246 + 1;
uLocal_420={
uLocal_404 
};
if(!iLocal_246 < func_15() || num6 > 10f){
if(num6 > 10f && _CONVERSATION_IS_DIALOGUE_IN_PROGRESS()) func_13();
iLocal_250=16;
}else{
if(!bLocal_438){
func_27(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}else{
func_25(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}
STREAMING::REQUEST_ANIM_DICT(&uLocal_404);
iLocal_250=15;
}
break;
case 15:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_SECTION_OVER", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_STRING(&text2, "talking offset:", 64);
TEXT_LABEL_APPEND_INT(&text2, iLocal_246, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text2, 0.02f, 0.9f, 0f, 0, 0, 255, 255);
TEXT_LABEL_ASSIGN_INT(&text2, func_15(), 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&text2, 0.03f, 0.9f, 0f, 0, 0, 255, 255);
if(STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_404)){
GRAPHICS::DRAW_DEBUG_TEXT_2D("HAS_ANIM_DICT_LOADED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if(!func_62()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT IS_ANIM_PLAYING_ON_PED", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
STREAMING::REMOVE_ANIM_DICT(&uLocal_420);
if(!bLocal_438){
func_27(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}
else{
func_25(&uLocal_404);
func_26(iLocal_246, &unk28);
TEXT_LABEL_APPEND_STRING(&uLocal_404, &unk28, 64);
}
func_23(&animationName);
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_404, &animationName, 1000f, -1000f, -1, 0, 0, false, false, false);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_240, false, false);
iLocal_250=12;
}}else{
!func_62();
}
break;
case 16:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_TO_END", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!func_62()){
func_12(&uLocal_37, 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), false);
STREAMING::REMOVE_ANIM_DICT(&uLocal_420);
func_11();
func_101(0, true);
iLocal_250=0;
}
break;
case 24:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_FLEEING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
SYSTEM::WAIT(1000);
func_10();
num=0;
break;
case 25:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_WANDERING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_8();
num=0;
break;
}
flag6=SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 0;
!flag6;
if(iLocal_250==0 || iLocal_250==1 || iLocal_250==3 || iLocal_250==8 || iLocal_250==9 || iLocal_250==7 && func_84(pedLocal_240, PLAYER::PLAYER_PED_ID(), true) < 5f && bLocal_436==true && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && num3==0 && bLocal_439==true && !Global_3 && func_7() && flag6){
if(iLocal_298==-1) _CONTEXT_ADD_HELP_TEXT(&iLocal_298, 4, sLocal_303, 0, 0, 0, 0);
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(func_4(iLocal_298, true)){
func_50(&unk);
func_48(&unk5);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), true);
func_91();
func_101(1, true);
num3=1;
iLocal_250=13;
num2=0;
num8=func_78(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()));
if(func_77(num8))if(!func_76(num8)) func_67(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()), false);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_298);
}}elseif(iLocal_298 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_298);
}
func_1();
SYSTEM::WAIT(0);
}
if(iLocal_298 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_298);
if(HUD::DOES_BLIP_EXIST(blLocal_248)) func_79(&blLocal_248);
flag7=false;
while (true){
GRAPHICS::DRAW_DEBUG_TEXT_2D("do_monologue=FALSE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(bLocal_505) GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING TO CLEAN UP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_240)){
if(!bLocal_441) func_97(func_112(SCRIPT::GET_THIS_SCRIPT_NAME()));
func_113(0);
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_240, PLAYER::PLAYER_PED_ID(), true) && !flag7){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_240, false);
TASK::CLEAR_PED_TASKS(pedLocal_240);
TASK::TASK_SMART_FLEE_PED(pedLocal_240, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
PED::SET_PED_KEEP_TASK(pedLocal_240, true);
flag7=true;
}
if(ENTITY::IS_ENTITY_OCCLUDED(pedLocal_240) && func_84(pedLocal_240, PLAYER::PLAYER_PED_ID(), true) > 50f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) func_113(1);
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0x11FC{
return;
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x1204{
int num;
if(*uParam0==-1) return;
num=func_3(*uParam0);
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

int func_3(int iParam0) // Position - 0x125B{
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
BOOL func_4(int iParam0, BOOL bParam1) // Position - 0x1296{
int num;
num=func_3(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_5(0)) return false;
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
BOOL func_5(int iParam0) // Position - 0x134E{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x13A5{
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
BOOL func_7() // Position - 0x14D0{
return true;
}


void func_8() // Position - 0x14D9{
func_9();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_240) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_240, false);
TASK::TASK_WANDER_STANDARD(pedLocal_240, 1193033728, 0);
PED::SET_PED_KEEP_TASK(pedLocal_240, true);
}
return;
}


void func_9() // Position - 0x1515{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_448)){
ENTITY::DETACH_ENTITY(obLocal_448, true, true);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_448);
}
return;
}


void func_10() // Position - 0x1537{
func_9();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_240) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_240, false);
TASK::TASK_SMART_FLEE_PED(pedLocal_240, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
PED::SET_PED_KEEP_TASK(pedLocal_240, true);
func_91();
}
return;
}


void func_11() // Position - 0x157D{
return;
}


void func_12(var uParam0, int iParam1) // Position - 0x1585{
if(uParam0->[iParam1 /*10*/].f_7==1) uParam0->[iParam1 /*10*/].f_7=0;
return;
}


void func_13() // Position - 0x15A2{
Global_20591=0;
func_14();
return;
}


void func_14() // Position - 0x15B2{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9 || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}
return;
}

int func_15() // Position - 0x1609{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_TREVOR) return 7;
elseif(character==CHAR_MICHAEL) return 5;
return 9;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1630{
func_17();
return Global_113648.f_2365.f_539.f_4321;
}


void func_17() // Position - 0x1649{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_19(character) && !func_18(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_19(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_18(int iParam0) // Position - 0x1746{
return Global_43257==iParam0;
}
BOOL func_19(eCharacter echParam0) // Position - 0x1754{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1760{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x179D{
if(func_19(character)) return func_22(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_22(eCharacter echParam0) // Position - 0x17C2{
return Global_2028[echParam0 /*29*/];
}


void func_23(char* sParam0) // Position - 0x17D1{
var unk;
func_24(&unk);
*sParam0={
unk 
};
TEXT_LABEL_APPEND_STRING(sParam0, "_", 64);
TEXT_LABEL_APPEND_INT(sParam0, iLocal_246, 64);
return;
}


void func_24(char* sParam0) // Position - 0x17F7{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_TREVOR) TEXT_LABEL_ASSIGN_STRING(sParam0, "convo_trevor_whatareyoudoing", 64);
elseif(character==CHAR_MICHAEL) TEXT_LABEL_ASSIGN_STRING(sParam0, "convo_michael_heyheymanthankgod", 64);
elseif(character==CHAR_FRANKLIN) TEXT_LABEL_ASSIGN_STRING(sParam0, "convo_franklin_heywhatsuphomie", 64);
return;
}


void func_25(char* sParam0) // Position - 0x1835{
int num;
num=iLocal_254 + 1;
*sParam0={
uLocal_202 
};
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
TEXT_LABEL_APPEND_STRING(sParam0, "CONVO_", 64);
TEXT_LABEL_APPEND_INT(sParam0, num, 64);
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
TEXT_LABEL_APPEND_STRING(sParam0, "CONVO_", 64);
TEXT_LABEL_APPEND_INT(sParam0, num, 64);
return;
}


void func_26(int iParam0, char* sParam1) // Position - 0x1879{
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "A", 16);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam1, "B", 16);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam1, "C", 16);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "D", 16);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "E", 16);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "F", 16);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(sParam1, "G", 16);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam1, "H", 16);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam1, "I", 16);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "J", 16);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(sParam1, "K", 16);
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(sParam1, "L", 16);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(sParam1, "M", 16);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(sParam1, "N", 16);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(sParam1, "O", 16);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(sParam1, "P", 16);
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(sParam1, "Q", 16);
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(sParam1, "R", 16);
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(sParam1, "S", 16);
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(sParam1, "T", 16);
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(sParam1, "U", 16);
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(sParam1, "V", 16);
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(sParam1, "W", 16);
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(sParam1, "X", 16);
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(sParam1, "Y", 16);
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(sParam1, "Z", 16);
break;
}
return;
}


void func_27(char* sParam0) // Position - 0x1A42{
var unk;
*sParam0={
uLocal_202 
};
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
func_28(&unk);
TEXT_LABEL_APPEND_STRING(sParam0, &unk, 64);
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
TEXT_LABEL_APPEND_STRING(sParam0, &unk, 64);
return;
}


void func_28(char* sParam0) // Position - 0x1A76{
var unk;
func_50(&unk);
*sParam0={
unk 
};
TEXT_LABEL_APPEND_STRING(sParam0, "_", 16);
TEXT_LABEL_APPEND_INT(sParam0, uLocal_299[_GET_CURRENT_PLAYER_CHARACTER()], 16);
return;
}


void func_29(char* sParam0) // Position - 0x1AA1{
TEXT_LABEL_COPY(sParam0,{
uLocal_234 
}
, 4);
TEXT_LABEL_APPEND_STRING(sParam0, "_CONV_", 16);
TEXT_LABEL_APPEND_INT(sParam0, iLocal_254 + 1, 16);
return;
}


void func_30() // Position - 0x1AC2{
iLocal_254=MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_253);
return;
}


void func_31(char* sParam0) // Position - 0x1AD3{
eCharacter character;
TEXT_LABEL_COPY(sParam0,{
uLocal_234 
}
, 4);
TEXT_LABEL_APPEND_STRING(sParam0, "_CONV_", 16);
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_TREVOR) TEXT_LABEL_APPEND_STRING(sParam0, "T", 16);
elseif(character==CHAR_MICHAEL) TEXT_LABEL_APPEND_STRING(sParam0, "M", 16);
else TEXT_LABEL_APPEND_STRING(sParam0, "F", 16);
TEXT_LABEL_APPEND_INT(sParam0, uLocal_299[_GET_CURRENT_PLAYER_CHARACTER()], 16);
return;
}


void func_32() // Position - 0x1B29{
if(!func_62()) func_101(1, true);
return;
}
BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1B3F{
func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7)if(iParam3 < 12) iParam3=7;
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_34(sParam2, iParam3, false);
}

int func_34(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1B8D{
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=false;
Global_20382=0;
}else{
func_14();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return 0;
if(func_46(8, -1)) return 0;
Global_21801={
Global_21795 
};
func_45();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3) return 0;
}
if(Global_20349==1) return 0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) return 0;
if(func_43()) return 0;
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) return 0;
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"))) return 0;
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) return 0;
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)) return 0;
}}
if(func_42()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
case 8:
return 0;
case 9:
break;
case 10:
break;
default:
break;
}
if(IS_BIT_SET(Global_8253, 9)) return 0;
}
func_41();
Global_21735=bParam2;
}
Global_21727=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
Global_20591=0;
func_40();
func_35();
return 1;
}
if(Global_21725==5) return 0;
if(iParam1 < Global_21727 || iParam1==Global_21727) return 0;
if(iParam1==2){}else{
func_14();
}
return 0;
}


void func_35() // Position - 0x1E5B{
if(!func_36()) return;
if(Global_21731){
TEXT_LABEL_COPY(&(Global_1977511.f_1),{
Global_21344 
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}
return;
}
BOOL func_36() // Position - 0x1E92{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_37(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_37(Player plParam0) // Position - 0x1EF5{
return func_38(plParam0, 20);
}
BOOL func_38(Player plParam0, int iParam1) // Position - 0x1F05{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Player _INVALID_PLAYER_INDEX() // Position - 0x1F1D{
return -1;
}


void func_40() // Position - 0x1F26{
int i;
for (i=0;
i <=69;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=1;
return;
}


void func_41() // Position - 0x1F56{
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
return;
}
BOOL func_42() // Position - 0x1FEB{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}
BOOL func_43() // Position - 0x2012{
int num;
int weaponHash;
if(Global_78558){
num=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_REMOTESNIPER")) num=1;
if(CAM::IS_AIM_CAM_ACTIVE() && num==1) return true;
else return false;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)) return true;
else return false;
return true;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x20AB{
if(func_18(14)){
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


void func_45() // Position - 0x214D{
int i;
for (i=0;
i <=15;
i=i + 1){
Global_21014[i /*10*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
Global_21014[i /*10*/].f_7=0;
Global_21014[i /*10*/].f_8=0;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
return;
}
BOOL func_46(int iParam0, int iParam1) // Position - 0x21A3{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x21DB{
Global_21179={
*uParam0 
};
Global_7569=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
Global_22714=iParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}
return;
}


void func_48(var uParam0) // Position - 0x2231{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_TREVOR) *uParam0={
uLocal_316 
};
elseif(character==CHAR_MICHAEL) *uParam0={
uLocal_312 
};
else *uParam0={
uLocal_320 
};
return;
}


void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x226C{
uParam0->[iParam1 /*10*/].f_7==1;
uParam0->[iParam1 /*10*/]=pedParam2;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
uParam0->[iParam1 /*10*/].f_7=1;
uParam0->[iParam1 /*10*/].f_8=iParam4;
uParam0->[iParam1 /*10*/].f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_8==0) PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
else PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_9==0) TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
else TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
}
return;
}


void func_50(char* sParam0) // Position - 0x2307{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(character==CHAR_TREVOR) TEXT_LABEL_ASSIGN_STRING(sParam0, "TREVOR", 16);
elseif(character==CHAR_MICHAEL) TEXT_LABEL_ASSIGN_STRING(sParam0, "MICHAEL", 16);
else TEXT_LABEL_ASSIGN_STRING(sParam0, "FRANKLIN", 16);
return;
}


void func_51(int iParam0) // Position - 0x233F{
return;
}


void func_52(int iParam0, int iParam1, float fParam2) // Position - 0x2347{
return;
}


void func_53() // Position - 0x234F{
STREAMING::REMOVE_ANIM_DICT(&uLocal_388);
return;
}


void func_54() // Position - 0x235E{
var unk;
var animationName;
func_57(Global_113593[iLocal_251] + 1, &unk, &animationName);
TEXT_LABEL_APPEND_STRING(&animationName, "_", 64);
TEXT_LABEL_APPEND_INT(&animationName, iLocal_297, 64);
uLocal_356={
animationName 
};
uLocal_372={
uLocal_388 
};
func_56(&uLocal_356);
TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_388, &animationName, 1000f, -8f, -1, 0, 0, false, false, false);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_240, false, false);
func_55(Global_113593[iLocal_251]);
return;
}


void func_55(int iParam0) // Position - 0x23D4{
return;
}


void func_56(const char* sParam0) // Position - 0x23DC{
MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
return;
}


void func_57(int iParam0, char* sParam1, char* sParam2) // Position - 0x23EF{
TEXT_LABEL_ASSIGN_STRING(sParam1, "Special_Ped@griff", 32);
switch (iParam0){
case 1:
TEXT_LABEL_ASSIGN_STRING(sParam2, "IAmNotARacist", 64);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(sParam2, "America_is_not", 64);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam2, "America_is_for_the_americans", 64);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam2, "this_is_the_land", 64);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam2, "this_is_the_land_opportunity", 64);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(sParam2, "keep_america_clean", 64);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(sParam2, "e_pluribus_unum", 64);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(sParam2, "let_me_be_clear", 64);
break;
}
return;
}

int func_58() // Position - 0x248E{
var unk;
int num;
unk={
uLocal_308 
};
TEXT_LABEL_APPEND_INT(&unk, Global_113593[iLocal_251] + 1, 16);
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_37, 3, pedLocal_240, &uLocal_236, 0, 1);
if(bLocal_437) num=true;
else num=_CONVERSATION_ADD_LINE(&uLocal_37, &uLocal_304, &unk, 3, 0, 0, 0);
uLocal_499={
unk 
};
return num;
}
BOOL func_59() // Position - 0x24E2{
return Global_100733.f_387 > 0;
}
BOOL func_60() // Position - 0x24F3{
BOOL hasAnimDictLoaded;
hasAnimDictLoaded=STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_388);
return hasAnimDictLoaded;
}
BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x2506{
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return 1;
return 0;
}
BOOL func_62() // Position - 0x2528{
if(TASK::GET_SCRIPT_TASK_STATUS(pedLocal_240, SCRIPT_TASK_PLAY_ANIM) !=1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_240, SCRIPT_TASK_PLAY_ANIM) !=0) return false;
return true;
}


void func_63() // Position - 0x2557{
var animDict;
func_64(&animDict);
STREAMING::REQUEST_ANIM_DICT(&animDict);
uLocal_388={
animDict 
};
return;
}


void func_64(char* sParam0) // Position - 0x2576{
var unk;
*sParam0={
uLocal_202 
};
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
func_66(&unk);
TEXT_LABEL_APPEND_STRING(sParam0, &unk, 64);
TEXT_LABEL_APPEND_STRING(sParam0, "@", 64);
TEXT_LABEL_APPEND_STRING(sParam0, &unk, 64);
func_65(&unk);
TEXT_LABEL_APPEND_STRING(sParam0, &unk, 64);
return;
}


void func_65(char* sParam0) // Position - 0x25B6{
func_26(iLocal_297, sParam0);
return;
}


void func_66(char* sParam0) // Position - 0x25C7{
TEXT_LABEL_ASSIGN_STRING(sParam0, "MONOLOGUE_", 16);
TEXT_LABEL_APPEND_INT(sParam0, Global_113593[iLocal_251] + 1, 16);
return;
}


void func_67(Hash hParam0, BOOL bParam1) // Position - 0x25E5{
int num;
num=func_78(hParam0);
if(func_77(num)) func_68(num, bParam1);
return;
}


void func_68(int iParam0, BOOL bParam1) // Position - 0x2606{
int offset;
offset=iParam0;
if(offset >=0 && offset <=31){
if(func_77(iParam0)){
if(!func_75(iParam0)){
MISC::SET_BIT(&(Global_113648.f_26436.f_2), offset);
if(!bParam1){
func_73(func_74(iParam0));
if(!func_72(70)) func_69("DI_HLP_SPCL" /*Unique characters become available in Rockstar Editor's 'Director Mode' as you meet them around Los Santos.*/, 2, 0, 20000, 10000, 7, 0, 210, 0);
}}}}
return;
}


void func_69(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x2677{
func_70(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
return;
}


void func_70(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x2697{
int i;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")) return;
if(iParam3 < 0) return;
if(iParam5 < 500 && iParam5 !=-1) return;
if(iParam4 < 0 && iParam4 !=-1) return;
if(iParam6 < 1 || iParam6 > 7) return;
if(iParam7==235) return;
if(iParam8==235) return;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0)) return;
}
if(Global_113648.f_20412.f_145 < 9){
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=MISC::GET_GAME_TIMER() + iParam3;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=iParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=iParam9;
if(iParam4 !=-1) Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=MISC::GET_GAME_TIMER() + iParam3 + iParam4;
else Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 + 1;
func_71();
}
return;
}


void func_71() // Position - 0x2869{
int i;
for (i=0;
i < 3;
i=i + 1){
Global_113648.f_20412.f_146[i]=0;
}
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0]) Global_113648.f_20412.f_146[0]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1]) Global_113648.f_20412.f_146[1]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2]) Global_113648.f_20412.f_146[2]=Global_113648.f_20412[i /*16*/].f_12;
}
return;
}
BOOL func_72(int iParam0) // Position - 0x2980{
int num;
int i;
num=iParam0;
for (i=0;
num > 31;
i=i + 1){
num=num - 32;
}
if(i < 3) return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);
return false;
}


void func_73(char* sParam0) // Position - 0x29C0{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /*Director Mode Actor Unlock*/, sParam0);
return;
}


char* func_74(int iParam0) // Position - 0x29E3{
switch (iParam0){
case 0:
return "CM_SPEAND" /*Andy Moon*/;
case 1:
return "CM_SPEBAY" /*Baygor*/;
case 2:
return "CM_SPEBIL" /*Bill Binder*/;
case 3:
return "CM_SPECLI" /*Clinton*/;
case 4:
return "CM_SPEGRI" /*Griff*/;
case 5:
return "CM_SPEJAN" /*Jane*/;
case 6:
return "CM_SPEJER" /*Jerome*/;
case 7:
return "CM_SPEJES" /*Jesse*/;
case 8:
return "CM_SPEMAN" /*Mani*/;
case 9:
return "CM_SPEMIM" /*Mime*/;
case 10:
return "CM_SPEPAM" /*Pamela Drake*/;
case 11:
return "CM_SPEIMP" /*Impotent Rage*/;
case 12:
return "CM_SPEZOM" /*Zombie*/;
}
return "ERROR!";
}
BOOL func_75(int iParam0) // Position - 0x2AC6{
if(func_77(iParam0)) return IS_BIT_SET(Global_113648.f_26436.f_2, iParam0);
return false;
}
BOOL func_76(int iParam0) // Position - 0x2AEA{
int num;
num=iParam0;
if(num >=0 && num <=31) return IS_BIT_SET(Global_113648.f_26436.f_2, num);
return false;
}
BOOL func_77(int iParam0) // Position - 0x2B1A{
if(iParam0==-1 || iParam0==13 || iParam0==9) return false;
return true;
}

int func_78(Hash hParam0) // Position - 0x2B44{
switch (hParam0){
case joaat("gpb_andymoon"):
return 0;
case joaat("gpb_baygor"):
return 1;
case joaat("gpb_billbinder"):
return 2;
case joaat("gpb_clinton"):
return 3;
case joaat("gpb_griff"):
return 4;
case joaat("gpb_jane"):
return 5;
case joaat("gpb_jerome"):
return 6;
case joaat("gpb_jesse"):
return 7;
case joaat("gpb_mani"):
return 8;
case joaat("gpb_mime"):
return 9;
case joaat("gpb_pameladrake"):
return 10;
case joaat("gpb_superhero"):
return 11;
case joaat("gpb_zombie"):
return 12;
}
return -1;
}


void func_79(Blip* pblParam0) // Position - 0x2C02{
if(iLocal_447==1)if(HUD::DOES_BLIP_EXIST(*pblParam0)) HUD::REMOVE_BLIP(pblParam0);
return;
}


void func_80(var uParam0, var uParam1, BOOL bParam2) // Position - 0x2C21{
if(iLocal_447==1){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(!PED::IS_PED_INJURED(*uParam1)){
*uParam0=func_81(*uParam1, bParam2, 145);
if(bParam2==false) HUD::SET_BLIP_PRIORITY(*uParam0, 7);
HUD::SET_BLIP_COLOUR(*uParam0, 3);
}}}}
return;
}
Blip func_81(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x2C74{
Blip blip;
blip=func_82(eParam0, !bParam1, false);
if(iParam2 !=145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3))) HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));
return blip;
}
Blip func_82(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2CBE{
Blip blip;
if(!ENTITY::DOES_ENTITY_EXIST(eParam0)) return 0;
blip=HUD::ADD_BLIP_FOR_ENTITY(eParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(eParam0)){
HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f :
1f);
if(!bParam2) HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
else HUD::SET_BLIP_COLOUR(blip, 2);
}elseif(ENTITY::IS_ENTITY_A_PED(eParam0)){
HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f :
0.7f);
HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(eParam0)){
HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f :
0.7f);
}
return blip;
}


var func__83(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2D62{
if(bParam0) return uParam1;
return uParam2;
}


float func_84(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x2D79{
Vector3 entityCoords;
Vector3 entityCoords2;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
if(!ENTITY::IS_ENTITY_DEAD(pedParam1, false)) entityCoords2={
ENTITY::GET_ENTITY_COORDS(pedParam1, true) 
};
else entityCoords2={
ENTITY::GET_ENTITY_COORDS(pedParam1, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}
BOOL func_85(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0x2DD7{
var unk;
var entityForwardVector;
float num;
unk={
func_87(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) 
};
if(iParam2 < 0.1f || iParam2 > 360f) return true;
if(iParam3==0) entityForwardVector={
ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) 
};
else entityForwardVector={
func_87(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) 
};
num=func_86(entityForwardVector, unk);
if(num <=SYSTEM::COS(iParam2 / 2f)) return false;
return true;
}


float func_86(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2E68{
return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}


Vector3 func__87(float fParam0, var uParam1, var uParam2) // Position - 0x2E89{
float num;
float num2;
num=SYSTEM::VMAG(fParam0);
if(num !=0f){
num2=1f / num;
fParam0={
fParam0 *{
num2, num2, num2 
}};
}else{
fParam0=0f;
fParam0.f_1=0f;
fParam0.f_2=0f;
}
return fParam0;
}

int func_88(Ped pedParam0) // Position - 0x2EC8{
int weaponHash;
WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
return weaponHash;
}
BOOL func_89() // Position - 0x2EDC{
if(iLocal_250==24 || iLocal_250==25) return true;
return false;
}


void func_90() // Position - 0x2EFC{
if(iLocal_245 !=-1){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_245)) PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_245);
iLocal_245=-1;
}
return;
}


void func_91() // Position - 0x2F1C{
Global_20591=0;
func_92();
return;
}


void func_92() // Position - 0x2F2C{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
}
return;
}
BOOL func_93() // Position - 0x2F4D{
return true;
}


void func_94() // Position - 0x2F56{
return;
}
BOOL func_95() // Position - 0x2F5E{
return true;
}


float func_96(Ped pedParam0, Ped pedParam1) // Position - 0x2F67{
return func_84(pedParam0, pedParam1, true);
}


void func_97(int iParam0) // Position - 0x2F78{
int num;
func_100(&(Global_113648.f_20119), iParam0);
num=func_98(iParam0);
if(func_77(num)) func_68(func_98(iParam0), false);
return;
}

int func_98(int iParam0) // Position - 0x2FA9{
int i;
int num;
for (i=0;
i < 13;
i=i + 1){
num=i;
if(func_99(num, true)==iParam0) return num;
}
return -1;
}

int func_99(int iParam0, BOOL bParam1) // Position - 0x2FDA{
if(!func_77(iParam0)){
!bParam1;
return 0;
}
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
case 2:
return 4;
case 3:
return 8;
case 4:
return 16;
case 5:
return 64;
case 6:
return 128;
case 7:
return 256;
case 8:
return 512;
case 10:
return 2048;
case 11:
return 4096;
case 12:
return 8192;
default:
}
!bParam1;
return 0;
}


void func_100(int iParam0, int iParam1) // Position - 0x308D{
*iParam0=*iParam0 || iParam1;
return;
}


void func_101(int iParam0, BOOL bParam1) // Position - 0x309E{
if(iParam0==1) TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 2f, -2f, -1, 0, 0, false, false, false);
else TASK::TASK_PLAY_ANIM(pedLocal_240, &uLocal_324, &uLocal_218, 1000f, 1000f, -1, 0, 0, false, false, false);
uLocal_356={
uLocal_218 
};
if(bParam1)if(!PED::IS_PED_INJURED(pedLocal_240) && !PED::IS_PED_DEAD_OR_DYING(pedLocal_240, true)) PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_240, false, false);
return;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x3110{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}


void func_103() // Position - 0x3131{
func_104();
return;
}


void func_104() // Position - 0x313D{
PED::SET_PED_COMPONENT_VARIATION(pedLocal_240, PV_COMP_BERD, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedLocal_240, PV_COMP_JBIB, 0, 0, 0);
PED::SET_PED_PROP_INDEX(pedLocal_240, 1, 0, 0, false, 1);
PED::SET_PED_PROP_INDEX(pedLocal_240, 0, 0, 0, false, 1);
obLocal_448=OBJECT::CREATE_OBJECT(joaat("prop_cs_protest_sign_01"), ENTITY::GET_ENTITY_COORDS(pedLocal_240, true), true, true, false);
ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_448, pedLocal_240, PED::GET_PED_BONE_INDEX(pedLocal_240, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
return;
}


void func_105() // Position - 0x31A5{
hLocal_36=joaat("U_M_M_Griff_01");
TEXT_LABEL_ASSIGN_STRING(&uLocal_234, "PBGR", 8);
TEXT_LABEL_ASSIGN_STRING(&uLocal_236, "GRIFF", 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_202, "Special_Ped@griff", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_218, "Base", 64);
bLocal_436=!Global_3;
iLocal_252=8;
sLocal_303="PBGR_INTERACT" /*Press ~INPUT_CONTEXT~ to talk to Griff.*/;
TEXT_LABEL_ASSIGN_STRING(&uLocal_312, "PBGR_CONV_GM", 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_316, "PBGR_CONV_GT", 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_320, "PBGR_CONV_GF", 16);
TEXT_LABEL_ASSIGN_STRING(&uLocal_324, "special_ped@griff@base", 64);
TEXT_LABEL_ASSIGN_STRING(&uLocal_340, "special_ped@griff@intro", 64);
iLocal_251=4;
uLocal_255[0]=8;
uLocal_255[1]=7;
uLocal_255[2]=8;
uLocal_255[3]=10;
uLocal_255[4]=10;
uLocal_255[5]=8;
uLocal_255[6]=11;
uLocal_255[7]=11;
return;
}
BOOL func_106() // Position - 0x324D{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_107() // Position - 0x326A{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_108() // Position - 0x328D{
if(Global_43257==15) return false;
return true;
}
BOOL func_109() // Position - 0x32A2{
return true;
}
BOOL func_110(int iParam0) // Position - 0x32AB{
return func_111(Global_113648.f_20119, iParam0);
}
BOOL func_111(int iParam0, int iParam1) // Position - 0x32C0{
return iParam0 && iParam1 !=false;
}

int func_112(const char* sParam0) // Position - 0x32CF{
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)) return 0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_AndyMoon")) return 1;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Baygor")) return 2;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_BillBinder")) return 4;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Clinton")) return 8;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Griff")) return 16;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jane")) return 64;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jerome")) return 128;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jesse")) return 256;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mani")) return 512;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mime")) return 1024;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_PamelaDrake")) return 2048;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Superhero")) return 4096;
elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Zombie")) return 8192;
return 0;
}


void func_113(int iParam0) // Position - 0x33F6{
var string1;
func_116();
if(bLocal_241){
TEXT_LABEL_COPY(&string1,{
func_115() 
}
, 4);
if(MISC::ARE_STRINGS_EQUAL(&string1, &uLocal_499)) func_13();
if(iParam0==1) PED::DELETE_PED(&pedLocal_240);
else ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_240);
bLocal_241=false;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_404)) STREAMING::REMOVE_ANIM_DICT(&uLocal_404);
if(iLocal_249==1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_324))if(STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_324)) STREAMING::REMOVE_ANIM_DICT(&uLocal_324);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_340))if(STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_340)) STREAMING::REMOVE_ANIM_DICT(&uLocal_340);
}
if(iLocal_298 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_298);
if(HUD::DOES_BLIP_EXIST(blLocal_248)) func_114(&blLocal_248);
func_90();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), false);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_114(Blip* pblParam0) // Position - 0x34C5{
if(HUD::DOES_BLIP_EXIST(*pblParam0)){
HUD::SET_BLIP_ROUTE(*pblParam0, false);
HUD::REMOVE_BLIP(pblParam0);
}
return;
}


struct<6> func_115() // Position - 0x34E5{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);
if(Global_21725==4) return Global_21344;
return unk;
}


void func_116() // Position - 0x3509{
func_117();
return;
}


void func_117() // Position - 0x3515{
if(ENTITY::DOES_ENTITY_EXIST(obLocal_448)) OBJECT::DELETE_OBJECT(&obLocal_448);
return;
}


void func_118() // Position - 0x352E{
if(iLocal_245==-1) iLocal_245=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uLocal_242, 2f, 2f, 2f, 0f, false, 1);
return;
}