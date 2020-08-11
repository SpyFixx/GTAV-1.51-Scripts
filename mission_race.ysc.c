#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	vector3 vLocal_18 = { 0f, 0f, 0f };
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	vector3 vLocal_25 = { 0f, 0f, 0f };
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 10;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	vector3 vLocal_94 = { 0f, 0f, 0f };
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	struct<45> Local_119 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 4;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 2;
	var uLocal_233 = 0;
	var uLocal_234 = 4;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 4;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 12;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 3;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559 = 0;
	bool bLocal_560 = false;
	bool bLocal_561 = false;
	bool bLocal_562 = false;
	bool bLocal_563 = false;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	struct<6> Local_580 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<12> Local_586 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	struct<250> Local_598 = { 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	struct<18> Local_851[15];
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	bool bLocal_1132 = false;
	float fLocal_1133 = 0f;
	int iLocal_1134 = 0;
	int iLocal_1135 = 0;
	bool bLocal_1136 = false;
	int iLocal_1137[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_1146 = { 0f, 0f, 0f };
	vector3 vLocal_1149 = { 0f, 0f, 0f };
	vector3 vLocal_1152 = { 0f, 0f, 0f };
	vector3 vLocal_1155 = { 0f, 0f, 0f };
	vector3 vLocal_1158 = { 0f, 0f, 0f };
	vector3 vLocal_1161 = { 0f, 0f, 0f };
	vector3 vLocal_1164 = { 0f, 0f, 0f };
	vector3 vLocal_1167 = { 0f, 0f, 0f };
	vector3 vLocal_1170 = { 0f, 0f, 0f };
	vector3 vLocal_1173 = { 0f, 0f, 0f };
	vector3 vLocal_1176 = { 0f, 0f, 0f };
	vector3 vLocal_1179 = { 0f, 0f, 0f };
	vector3 vLocal_1182 = { 0f, 0f, 0f };
	vector3 vLocal_1185 = { 0f, 0f, 0f };
	vector3 vLocal_1188 = { 0f, 0f, 0f };
	vector3 vLocal_1191 = { 0f, 0f, 0f };
	vector3 vLocal_1194 = { 0f, 0f, 0f };
	vector3 vLocal_1197 = { 0f, 0f, 0f };
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	struct<15> Local_1205 = { 0, 4200, 3600, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1220 = 0;
	var uLocal_1221 = 8;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 4;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 4;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 4;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 4;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 4;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 4;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 4;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 4;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 8;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 8;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	int iLocal_1394[2] = { 0, 0 };
	bool bLocal_1397 = false;
	int iLocal_1398 = 0;
	int iLocal_1399 = 0;
	bool bLocal_1400 = false;
	bool bLocal_1401 = false;
	bool bLocal_1402 = false;
	bool bLocal_1403 = false;
	vector3 vLocal_1404 = { 0f, 0f, 0f };
	vector3 vLocal_1407 = { 0f, 0f, 0f };
	vector3 vLocal_1410 = { 0f, 0f, 0f };
	bool bLocal_1413 = false;
	vector3 vLocal_1414 = { 0f, 0f, 0f };
	bool bLocal_1417 = false;
	bool bLocal_1418 = false;
	bool bLocal_1419 = false;
	vector3 vLocal_1420 = { 0f, 0f, 0f };
	bool bLocal_1423 = false;
	vector3 vLocal_1424 = { 0f, 0f, 0f };
	bool bLocal_1427 = false;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	bool bLocal_1430 = false;
	int iLocal_1431 = 0;
	vector3 vLocal_1432 = { 0f, 0f, 0f };
	vector3 vLocal_1435 = { 0f, 0f, 0f };
	bool bLocal_1438 = false;
	int iLocal_1439 = 0;
	int iLocal_1440 = 0;
	int iLocal_1441 = 0;
	var uLocal_1442 = 16;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	int iLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	int iLocal_1611 = 0;
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	char cLocal_1614[48] = "";
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 8;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 4;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 4;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 4;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 4;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 4;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 4;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 4;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 4;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	int iLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	bool bLocal_1769 = false;
	bool bLocal_1770 = false;
	bool bLocal_1771 = false;
	bool bLocal_1772 = false;
	bool bLocal_1773 = false;
	bool bLocal_1774 = false;
	bool bLocal_1775 = false;
	bool bLocal_1776 = false;
	bool bLocal_1777 = false;
	bool bLocal_1778 = false;
	bool bLocal_1779 = false;
	bool bLocal_1780 = false;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 3;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 1;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 2;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 13;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 13;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 13;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 13;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 13;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 13;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 13;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	bool bLocal_2358 = false;
	vector3 vLocal_2359 = { 0f, 0f, 0f };
	vector3 vLocal_2362 = { 0f, 0f, 0f };
	bool bLocal_2365 = false;
	vector3 vLocal_2366 = { 0f, 0f, 0f };
	vector3 vLocal_2369 = { 0f, 0f, 0f };
	bool bLocal_2372 = false;
	vector3 vLocal_2373 = { 0f, 0f, 0f };
	vector3 vLocal_2376 = { 0f, 0f, 0f };
	bool bLocal_2379 = false;
	vector3 vLocal_2380 = { 0f, 0f, 0f };
	vector3 vLocal_2383 = { 0f, 0f, 0f };
	struct<6> ScriptParam_0 = { 10, 0, -1, 1000, -1, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	vLocal_94 = { 500f, 500f, 500f };
	fLocal_115 = ((0.05f + 0.275f) - 0.01f);
	bLocal_560 = -1;
	bLocal_561 = -1;
	bLocal_563 = true;
	iLocal_578 = -1;
	iLocal_1126 = -1;
	iLocal_1127 = -1;
	iLocal_1134 = -1;
	iLocal_1201 = UNK_0xD68EA767274B7444();
	bLocal_1403 = "random@street_race";
	bLocal_1417 = true;
	bLocal_1418 = true;
	iLocal_1428 = -1;
	vLocal_1432 = { 0f, 0f, 0f };
	vLocal_1435 = { 0f, 0f, 0f };
	bLocal_1438 = 0f;
	iLocal_1611 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_1612 = UNK_0x817B3657F78A517A();
	iLocal_1613 = -1;
	StringCopy(&cLocal_1614, "", 24);
	iLocal_1620 = -1;
	iLocal_1621 = -1;
	bLocal_1772 = true;
	bLocal_1773 = true;
	bLocal_1777 = true;
	bLocal_1779 = true;
	bLocal_1780 = true;
	vLocal_2359 = { -1107.184f, -1170.247f, 1.15909f };
	vLocal_2362 = { 0.01f, -0.01f, -44.69f };
	vLocal_2366 = { -1105.14f, -1171.53f, 1.16f };
	vLocal_2369 = { -0.13f, -0.21f, -65.97f };
	vLocal_2373 = { -928.3082f, -1070.008f, 1.155174f };
	vLocal_2376 = { -0.06f, 0.07f, -42.91f };
	vLocal_2380 = { -1104.51f, -1173.58f, 1.15f };
	vLocal_2383 = { 0f, 0f, -46.41f };
	Local_580 = { ScriptParam_0 };
	if (UNK_0x2EBF608FFE6CA406(83))
	{
		Local_586.f_11 = 99;
		func_569(0);
	}
	UNK_0x7798376279BB5369(1);
	if (Local_580.f_1 == 3)
	{
		func_568(7);
		func_567(7);
	}
	else
	{
		func_568(8);
		func_567(8);
	}
	switch (Local_580)
	{
		case 0:
			iLocal_1620 = 1;
			break;
		case 1:
			iLocal_1620 = 2;
			break;
		case 2:
			iLocal_1620 = 4;
			break;
		case 3:
			iLocal_1620 = 5;
			break;
		case 4:
			iLocal_1620 = 6;
			break;
		case 5:
			iLocal_1620 = 1;
			break;
		case 6:
			iLocal_1620 = 2;
			break;
		case 7:
			iLocal_1620 = 3;
			break;
		case 8:
			iLocal_1620 = 4;
			break;
	}
	func_557(0, 1);
	func_556(1);
	func_555(1);
	if (Local_580 == 4)
	{
		UNK_0x523BCC9DC80CD82F(joaat("PROP_DUMPSTER_02A"));
	}
	while (true)
	{
		switch (iLocal_574)
		{
			case 0:
				func_526();
				break;
			case 1:
				func_488();
				break;
			case 2:
				func_404();
				break;
			case 3:
				func_238();
				break;
			case 4:
				func_184();
				break;
			case 5:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	UNK_0xF3D5CA5E09CE41C7();
	switch (iLocal_575)
	{
		case 0:
			if (func_183())
			{
				func_181();
			}
			func_179(1);
			if (Local_580.f_1 == 3)
			{
				UNK_0x8910D3D58E0132B8("SEA_RACE_DURING_RACE");
			}
			else
			{
				UNK_0x8910D3D58E0132B8("STREET_RACE_DURING_RACE");
			}
			if (func_178(vLocal_18.x))
			{
				UNK_0x7B4256FB57F5E15D(vLocal_18.x, 0);
			}
			UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, false);
			UNK_0x38C3A68D7861DCFD(1, 80, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			func_173(0);
			bLocal_1769 = "";
			switch (iLocal_573)
			{
				case 0:
					break;
				case 1:
					if (func_167() == 1)
					{
						bLocal_1769 = "RACES_R_INJ";
					}
					else if (func_167() == 0)
					{
						bLocal_1769 = "RACES_R_INJ_M";
					}
					else
					{
						bLocal_1769 = "RACES_R_INJ_T";
					}
					break;
				case 2:
					bLocal_1769 = "RACES_R_DEAD";
					break;
				case 3:
					if (func_167() == 1)
					{
						bLocal_1769 = "RACES_WRECK";
					}
					else if (func_167() == 0)
					{
						bLocal_1769 = "RACES_WRECK_M";
					}
					else
					{
						bLocal_1769 = "RACES_WRECK_T";
					}
					break;
				case 4:
					if (func_167() == 1)
					{
						bLocal_1769 = "RACES_ABAND";
					}
					else if (func_167() == 0)
					{
						bLocal_1769 = "RACES_ABAND_M";
					}
					else
					{
						bLocal_1769 = "RACES_ABAND_T";
					}
					break;
				case 5:
					if (func_167() == 1)
					{
						bLocal_1769 = "RACES_MISS";
					}
					else if (func_167() == 0)
					{
						bLocal_1769 = "RACES_MISS_M";
					}
					else
					{
						bLocal_1769 = "RACES_MISS_T";
					}
					break;
				case 6:
					if (func_167() == 1)
					{
						bLocal_1769 = "RACES_COPS";
					}
					else if (func_167() == 0)
					{
						bLocal_1769 = "RACES_COPS_M";
					}
					else
					{
						bLocal_1769 = "RACES_COPS_T";
					}
					break;
			}
			if (UNK_0xEA6BC48857E0AC4C(bLocal_1769))
			{
				func_569(0);
			}
			else
			{
				iLocal_1613 = UNK_0x1C0640BA9A7327B3() + 4000;
				iLocal_575 = 1;
			}
			break;
		case 1:
			if (func_149(&iLocal_1764, &uLocal_1625, "SPR_UI_FAILD", bLocal_1769, &bLocal_1770, 78, 7, 1, 1097859072 /* Float: 15f */, 1))
			{
				if (bLocal_1770)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					SYSTEM::WAIT(0);
					func_2(0);
				}
				else
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					SYSTEM::WAIT(0);
					Local_586.f_11 = 99;
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
					func_569(0);
				}
			}
			break;
	}
}

void func_2(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0)
	{
		UNK_0x3FC8DBCC154CA56B();
		func_148(500, 0);
	}
	else
	{
		func_148(500, 1);
	}
	if (Local_580.f_1 == 1)
	{
		UNK_0x28F5E4DA506AC0CA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, 0, 0, 0, 0, false, 0);
		func_147(&vLocal_18);
		func_146(&(vLocal_18.f_1));
	}
	if (Local_580.f_1 == 2)
	{
		if (!func_145())
		{
			func_37(&bVar0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 0f, 1, 1, 0, 0, 1, joaat("BUFFALO"), 0, 145, 1);
			vLocal_18.x = bVar0;
		}
	}
	else if (Local_580.f_1 == 1)
	{
		if (!func_35())
		{
			func_37(&bVar0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 0f, 1, 1, 0, 0, 1, joaat("BATI"), 0, 145, 1);
			vLocal_18.x = bVar0;
		}
	}
	else if (Local_580.f_1 == 3)
	{
		if (!func_34())
		{
			func_37(&bVar0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 0f, 1, 1, 0, 0, 1, joaat("SEASHARK"), 0, 145, 1);
			vLocal_18.x = bVar0;
		}
	}
	UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f, 0);
	UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f);
	UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
	UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
	Local_586.f_6 = 0;
	func_179(1);
	func_32(1);
	func_31(&bLocal_1419);
	func_557(0, 1);
	UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), Local_598.f_181[Local_598.f_249 /*3*/], 1, 0, 0, 1);
	UNK_0x9E632F16E887F781(Local_598.f_181[Local_598.f_249 /*3*/], 500f, 0);
	bVar1 = true;
	iVar2 = UNK_0x1C0640BA9A7327B3() + 30000;
	while (bVar1)
	{
		if (UNK_0x68367101660E33F0())
		{
			bVar1 = false;
		}
		if (UNK_0x1C0640BA9A7327B3() > iVar2)
		{
			bVar1 = false;
		}
		SYSTEM::WAIT(0);
	}
	func_29();
	func_24(0, 0);
	SYSTEM::WAIT(1000);
	func_23();
	func_11();
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	SYSTEM::WAIT(0);
	UNK_0x28F5E4DA506AC0CA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 500f, 0, 0, 0, 0, false, 0);
	UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
	UNK_0x2FB9A57162E54BAB(0f);
	Local_586.f_1 = 0;
	iVar3 = 0;
	while (iVar3 <= (Local_598.f_249 - 1))
	{
		if (func_9(Local_851[iVar3 /*18*/].f_3))
		{
			UNK_0xA3BF0AA5A2608191(Local_851[iVar3 /*18*/].f_3);
		}
		if (func_178(Local_851[iVar3 /*18*/].f_6))
		{
			UNK_0xE0C0351D5B931E37(Local_851[iVar3 /*18*/].f_6, 0.1f, 1, 0);
			func_7(Local_851[iVar3 /*18*/].f_6, Local_598.f_181[iVar3 /*3*/]);
			UNK_0xD8F6A53F4799FAFE(Local_851[iVar3 /*18*/].f_6, Local_598.f_230[iVar3]);
		}
		iVar3++;
	}
	SYSTEM::WAIT(500);
	if (Local_580 == 1)
	{
		SYSTEM::WAIT(1000);
	}
	func_6(500, 1);
	UNK_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
	func_3(&(Local_586.f_2));
	UNK_0xEAB026E686C0D991(1, 80, 1);
	UNK_0xEAB026E686C0D991(0, 80, 1);
	iLocal_574 = 1;
	iLocal_575 = 0;
}

void func_3(bool bParam0)
{
	func_4(bParam0, 0f);
}

void func_4(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_5(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

void func_6(int iParam0, bool bParam1)
{
	if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
	{
		if (!UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

Vector3 func_7(bool bParam0, vector3 vParam1)
{
	var uVar0;

	vParam1.f_2 = (vParam1.z + 0.15f);
	if (UNK_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.f_2 = uVar0;
	}
	if (func_8(bParam0))
	{
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_8(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

bool func_9(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_10(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_11()
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	if (UNK_0xE1DBBD6CE209517C(bVar0))
	{
		UNK_0x98E4DC66A651C9FA(bVar0, false, 16);
		UNK_0x98E4DC66A651C9FA(bVar0, false, 32);
		UNK_0x67F91979413C5D76(bVar0, 0, 0);
		UNK_0x56EA5D248F36A081(bVar0, 0);
		UNK_0xBC03DF6093E8E71F(bVar0, 1);
	}
	func_13(1, 1, 0, 0, 0, 0);
	UNK_0x536F1BE96C726C4B(func_12(bVar0), 50f, 1, 0, 0, false);
	UNK_0x28F5E4DA506AC0CA(func_12(bVar0), 500f, 0, 0, 0, 0, false, 0);
	UNK_0x745CE398A4B0A3C6(func_12(bVar0), 500f, 0);
	UNK_0xF48790410026514E(0);
	UNK_0x52D3C9744D7CF20D();
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	UNK_0x790015DC92C918E2();
	UNK_0xA37A90C62806D848(1);
}

Vector3 func_12(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_13(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_22(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_21())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_20(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_22(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_20(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_18(UNK_0xD803B885F5E47A62())) && !func_15(UNK_0xD803B885F5E47A62(), 0)) && !func_14()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_18(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_14()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_15(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[bParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			bVar0 = UNK_0x08067D4957B73C02(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1312745;
}

bool func_18(bool bParam0)
{
	if (func_15(bParam0, 0))
	{
		return true;
	}
	if (func_19())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_19()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_20(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_21()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_23()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		}
		if (UNK_0xC844350D5D58C99A(vLocal_18.x))
		{
			if (UNK_0xDF1306B443CD3D15(vLocal_18.x, 0))
			{
				UNK_0xA47B46945FF6DE74(vLocal_18.x, Local_598.f_181[Local_598.f_249 /*3*/], 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(vLocal_18.x, Local_598.f_230[Local_598.f_249]);
				UNK_0xB9FD7450C0DAB575(vLocal_18.x, 1084227584 /* Float: 5f */);
			}
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
			UNK_0x4A4806F9D471E491(vLocal_18.x, true, 0);
		}
	}
}

void func_24(bool bParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = (Local_598.f_249 - 1);
	if ((func_9(bParam0) && func_178(bParam1)) && !UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6))
	{
		Local_851[iVar0 /*18*/].f_6 = bParam1;
		Local_851[iVar0 /*18*/].f_5 = UNK_0x134B62B726CEC8E6(bParam1);
		Local_851[iVar0 /*18*/].f_3 = bParam0;
		Local_851[iVar0 /*18*/].f_4 = UNK_0x134B62B726CEC8E6(bParam0);
		func_28(iVar0);
	}
	func_27(1);
	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		while (!UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6))
		{
			if (UNK_0xB87F6CF6E5628C67(Local_851[iVar0 /*18*/].f_5))
			{
				vVar1 = { Local_598.f_181[iVar0 /*3*/] };
				if (Local_580.f_1 == 3)
				{
					vVar1.x = (vVar1.x + UNK_0x79833B02DBD2A244(-1f, 1f));
					vVar1.f_1 = (vVar1.y + UNK_0x79833B02DBD2A244(-1f, 1f));
				}
				else
				{
					vVar1 = { UNK_0x8A5E176FF719A014(Local_598.f_181[iVar0 /*3*/], Local_598.f_230[iVar0], 0f, -3f, 0f) };
				}
				Local_851[iVar0 /*18*/].f_6 = UNK_0x122AAB0B1D6F55AD(Local_851[iVar0 /*18*/].f_5, vVar1, Local_598.f_230[iVar0], true, true, false);
				if (Local_580.f_1 == 3)
				{
					UNK_0xB9FD7450C0DAB575(Local_851[iVar0 /*18*/].f_6, 1084227584 /* Float: 5f */);
					UNK_0x657C23FBB4F6EEA5(Local_851[iVar0 /*18*/].f_6, 0f);
					UNK_0x104763F18983A32D(Local_851[iVar0 /*18*/].f_6, 1);
					UNK_0xE52EED22AB2D2450(Local_851[iVar0 /*18*/].f_6, 1);
					if (UNK_0x6AC695D09170F27D(Local_851[iVar0 /*18*/].f_6))
					{
						UNK_0xB078AFA7242F1F7B(Local_851[iVar0 /*18*/].f_6, true);
					}
					UNK_0xEF190091B5B9F5EB(Local_851[iVar0 /*18*/].f_6, 0);
				}
				else
				{
					UNK_0xB9FD7450C0DAB575(Local_851[iVar0 /*18*/].f_6, 1084227584 /* Float: 5f */);
				}
				UNK_0xAB8E2DDC7AF955E0(Local_851[iVar0 /*18*/].f_5, true);
			}
			SYSTEM::WAIT(0);
		}
		func_26();
		if (func_9(bParam0))
		{
			Local_851[(Local_598.f_249 - 1) /*18*/].f_1 = 2;
		}
		while (!UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_3))
		{
			if ((UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6) && UNK_0xDF1306B443CD3D15(Local_851[iVar0 /*18*/].f_6, 0)) && UNK_0xB87F6CF6E5628C67(Local_851[iVar0 /*18*/].f_4))
			{
				Local_851[iVar0 /*18*/].f_3 = UNK_0x852A19533F896693(Local_851[iVar0 /*18*/].f_6, 26, Local_851[iVar0 /*18*/].f_4, -1, 1, true);
				if (Local_580.f_1 != 3)
				{
					UNK_0x8BE2A14C28ED9A87(Local_851[iVar0 /*18*/].f_6, 1);
					vVar4 = { UNK_0x8A5E176FF719A014(Local_598.f_181[iVar0 /*3*/], Local_598.f_230[iVar0], 0f, 2.3f, 0f) };
					if (iVar0 == 0)
					{
						UNK_0xDD353D0E9C789D0E(&iVar7);
						UNK_0x78A77CDD64392938(false, 2800);
						UNK_0xE9362E4D600DD12A(false, Local_851[iVar0 /*18*/].f_6, vVar4, 1.5f, 0, Local_851[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						UNK_0x75ABDC5F81978924(iVar7);
						UNK_0x78ADC381772E3D54(Local_851[iVar0 /*18*/].f_3, iVar7);
						UNK_0xF82EA857DA10E0CD(&iVar7);
					}
					else if (iVar0 == 1)
					{
						UNK_0xDD353D0E9C789D0E(&iVar7);
						UNK_0x78A77CDD64392938(false, 3300);
						UNK_0xE9362E4D600DD12A(false, Local_851[iVar0 /*18*/].f_6, vVar4, 1.2f, 0, Local_851[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						UNK_0x75ABDC5F81978924(iVar7);
						UNK_0x78ADC381772E3D54(Local_851[iVar0 /*18*/].f_3, iVar7);
						UNK_0xF82EA857DA10E0CD(&iVar7);
					}
					else
					{
						UNK_0xDD353D0E9C789D0E(&iVar7);
						UNK_0x78A77CDD64392938(false, (5500 + iVar0 * 100));
						UNK_0xE9362E4D600DD12A(false, Local_851[iVar0 /*18*/].f_6, vVar4, 0.8f, 0, Local_851[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						UNK_0x75ABDC5F81978924(iVar7);
						UNK_0x78ADC381772E3D54(Local_851[iVar0 /*18*/].f_3, iVar7);
						UNK_0xF82EA857DA10E0CD(&iVar7);
					}
				}
				if (Local_580.f_1 == 1)
				{
					UNK_0x83F619A03CDDE284(Local_851[iVar0 /*18*/].f_3, 1, 4096, -1);
				}
				func_25(iVar0);
				if (func_9(Local_851[iVar0 /*18*/].f_3))
				{
					func_28(iVar0);
				}
			}
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	if (func_9(bParam0))
	{
		Local_851[(Local_598.f_249 - 1) /*18*/].f_1 = 2;
	}
	func_27(0);
	switch (Local_580)
	{
		case 0:
			bLocal_1430 = "CityRace0_route1";
			break;
		case 1:
			bLocal_1430 = "CityRace1_route1";
			break;
		case 2:
			bLocal_1430 = "CityRace3_route1";
			break;
		case 3:
			bLocal_1430 = "CityRace4_route1";
			break;
		case 4:
			bLocal_1430 = "CityRace5_route1";
			break;
		case 5:
			bLocal_1430 = "SeaRace0_route1";
			break;
		case 6:
			bLocal_1430 = "SeaRace1_route1";
			break;
		case 7:
			bLocal_1430 = "SeaRace2_route1";
			break;
		case 8:
			bLocal_1430 = "SeaRace3_route1";
			break;
	}
	UNK_0x29398344B9E5B8A7(bLocal_1430);
	while (!UNK_0x1C2E18E9C63BEB77(bLocal_1430))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x51FE1B68F2818389(bLocal_1430, &iLocal_1607);
	iLocal_1607 = (iLocal_1607 - 1);
	if (Local_598.f_247 == 0)
	{
		iLocal_1123 = 0;
	}
	else
	{
		iLocal_1123 = 1;
	}
}

void func_25(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(Local_851[iParam0 /*18*/].f_6) && !UNK_0x437347B10A200C4B(Local_851[iParam0 /*18*/].f_6, 0))
	{
		UNK_0xC6A6B4DDD6DC073A(Local_851[iParam0 /*18*/].f_6, UNK_0x09AC81E49EA267F7(false, UNK_0x792D3ECFF774F662(Local_851[iParam0 /*18*/].f_6)));
		if (UNK_0x40B3F576B41FA183(Local_851[iParam0 /*18*/].f_6) > 0)
		{
			UNK_0xF95FF0A179413A39(Local_851[iParam0 /*18*/].f_6, 0);
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 0) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 0, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 0)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 1) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 1, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 1)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 2) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 2, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 2)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 3) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 3, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 3)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 4) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 4, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 4)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 5) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 5, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 5)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 6) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 6, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 6)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 8) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 8, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 8)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 9) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 9, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 9)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 11) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 11, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 11)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 12) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 12, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 12)), false);
			}
			if (UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 13) > 0)
			{
				UNK_0xEE6A1776A67F70C1(Local_851[iParam0 /*18*/].f_6, 13, UNK_0x09AC81E49EA267F7(false, UNK_0x461CAC843A21E4B6(Local_851[iParam0 /*18*/].f_6, 13)), false);
			}
			UNK_0x73BEC6F1685574E6(Local_851[iParam0 /*18*/].f_6, 18, true);
			UNK_0x73BEC6F1685574E6(Local_851[iParam0 /*18*/].f_6, 17, true);
			UNK_0x73BEC6F1685574E6(Local_851[iParam0 /*18*/].f_6, 22, true);
		}
	}
}

void func_26()
{
	if (Local_580 == 3)
	{
		Local_851[0 /*18*/].f_1 = 2;
		Local_851[1 /*18*/].f_1 = 2;
		Local_851[2 /*18*/].f_1 = 2;
		Local_851[3 /*18*/].f_1 = 1;
		Local_851[4 /*18*/].f_1 = 1;
		Local_851[5 /*18*/].f_1 = 0;
		Local_851[6 /*18*/].f_1 = 0;
	}
	else if (Local_580 == 7)
	{
		Local_851[0 /*18*/].f_1 = 2;
		Local_851[1 /*18*/].f_1 = 1;
		Local_851[2 /*18*/].f_1 = 0;
	}
	else
	{
		Local_851[0 /*18*/].f_1 = 2;
		Local_851[1 /*18*/].f_1 = 2;
		Local_851[2 /*18*/].f_1 = 1;
		Local_851[3 /*18*/].f_1 = 1;
		Local_851[4 /*18*/].f_1 = 0;
		Local_851[5 /*18*/].f_1 = 0;
		Local_851[6 /*18*/].f_1 = 0;
	}
}

void func_27(int iParam0)
{
	int iVar0;

	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_598.f_249 - 1))
		{
			if (Local_851[iVar0 /*18*/].f_4 == 0 || Local_851[iVar0 /*18*/].f_4 == 0)
			{
			}
			UNK_0x523BCC9DC80CD82F(Local_851[iVar0 /*18*/].f_4);
			UNK_0x523BCC9DC80CD82F(Local_851[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Local_598.f_249 - 1))
		{
			UNK_0x71199B01895C6202(Local_851[iVar0 /*18*/].f_4);
			UNK_0x71199B01895C6202(Local_851[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
}

void func_28(int iParam0)
{
	if (func_9(Local_851[iParam0 /*18*/].f_3))
	{
		UNK_0x11AD11297DC58CC7(Local_851[iParam0 /*18*/].f_3, true);
		UNK_0xB8E3D4F5062815C2(Local_851[iParam0 /*18*/].f_6, 1);
		UNK_0x05EC10F460C3A4AF(Local_851[iParam0 /*18*/].f_6, 0);
		UNK_0x56FDC9ADE35F7DB0(Local_851[iParam0 /*18*/].f_6, true, true, 0);
		UNK_0x7980D72D61BEF4D5(Local_851[iParam0 /*18*/].f_3, true);
		UNK_0x7980D72D61BEF4D5(Local_851[iParam0 /*18*/].f_6, true);
		UNK_0xD5A0214B20BCBAD8(Local_851[iParam0 /*18*/].f_6, 1);
		UNK_0x44A200C9B6E1CEA6(Local_851[iParam0 /*18*/].f_6, true);
		UNK_0xA22F71BBC8173C39(Local_851[iParam0 /*18*/].f_6, false);
		UNK_0x4E885A246A9D983A(Local_851[iParam0 /*18*/].f_3, 32, false);
		UNK_0x4E885A246A9D983A(Local_851[iParam0 /*18*/].f_3, 29, false);
		UNK_0x4E885A246A9D983A(Local_851[iParam0 /*18*/].f_3, 116, false);
		UNK_0x4E885A246A9D983A(Local_851[iParam0 /*18*/].f_3, 118, false);
		UNK_0x4E885A246A9D983A(Local_851[iParam0 /*18*/].f_3, 26, true);
		UNK_0xE8832A9E16A57A1F(Local_851[iParam0 /*18*/].f_6, true, 1);
		UNK_0xFCCF7611216AE801(Local_851[iParam0 /*18*/].f_3, 0);
		if (Local_580.f_1 == 3)
		{
			UNK_0x120A395B0ECB8EA5(Local_851[iParam0 /*18*/].f_6, false);
			UNK_0x545E1397F38D9D5A(Local_851[iParam0 /*18*/].f_3, 3);
		}
		Local_851[iParam0 /*18*/] = 0;
	}
}

void func_29()
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(vLocal_18.x))
		{
			if (UNK_0xDF1306B443CD3D15(vLocal_18.x, 0))
			{
				if (!UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), vLocal_18.x) && UNK_0xBBA8A868118C90ED(vLocal_18.x, -1, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), vLocal_18.x, -1);
				}
				bVar0 = UNK_0xA30EC016B12C03E4();
				UNK_0x536F1BE96C726C4B(func_12(bVar0), 50f, 1, 0, 0, false);
				UNK_0x28F5E4DA506AC0CA(func_12(bVar0), 500f, 0, 0, 0, 0, false, 0);
				UNK_0x745CE398A4B0A3C6(func_12(bVar0), 500f, 0);
				vVar1 = { UNK_0x8A5E176FF719A014(Local_598.f_181[Local_598.f_249 /*3*/], Local_598.f_230[Local_598.f_249], 0f, -15f, 1f) };
				func_30(&vVar1, 0);
				bVar4 = Local_598.f_230[Local_598.f_249];
				if (Local_580 == 2)
				{
					vVar1 = { -825.03f, -2575.13f, 13.25f };
					bVar4 = 334.98f;
				}
				else if (Local_580 == 4)
				{
					vVar1 = { -1093.493f, -1173.161f, 2.4978f };
				}
				else if (Local_580.f_1 == 3)
				{
					vVar1 = { Local_598.f_181[Local_598.f_249 /*3*/] };
				}
				if (Local_580.f_1 == 1)
				{
					vVar5 = { UNK_0x8A5E176FF719A014(Local_598.f_181[Local_598.f_249 /*3*/], Local_598.f_230[Local_598.f_249], 0f, -1f, 0f) };
					bVar8 = 7f;
				}
				else
				{
					vVar5 = { UNK_0x8A5E176FF719A014(Local_598.f_181[Local_598.f_249 /*3*/], Local_598.f_230[Local_598.f_249], 0f, 2.3f, 0f) };
					bVar8 = 3f;
				}
				UNK_0x56FDC9ADE35F7DB0(vLocal_18.x, true, true, 0);
				UNK_0xD8F6A53F4799FAFE(vLocal_18.x, bVar4);
				func_7(vLocal_18.x, vVar1);
				UNK_0x05CA0E7946B27A19(vLocal_18.x, 1);
				UNK_0xB8E3D4F5062815C2(vLocal_18.x, 1);
				if (Local_580.f_1 == 3)
				{
					UNK_0xB9FD7450C0DAB575(vLocal_18.x, 1084227584 /* Float: 5f */);
					UNK_0x657C23FBB4F6EEA5(vLocal_18.x, 0f);
					UNK_0x104763F18983A32D(vLocal_18.x, 1);
					UNK_0xE52EED22AB2D2450(vLocal_18.x, 1);
					if (UNK_0x6AC695D09170F27D(vLocal_18.x))
					{
						UNK_0xB078AFA7242F1F7B(vLocal_18.x, true);
					}
				}
				else
				{
					UNK_0xE9362E4D600DD12A(UNK_0x16F2683693E537C9(), vLocal_18.x, vVar5, bVar8, 0, UNK_0x134B62B726CEC8E6(vLocal_18.x), 17039360, 0.5f, 15f);
					UNK_0x1AEF7184B203A58D(vLocal_18.x, bVar8);
					UNK_0x295ACC5727E47CB7(vLocal_18.x);
				}
				UNK_0x4A4806F9D471E491(vLocal_18.x, true, 0);
				UNK_0xD5A0214B20BCBAD8(vLocal_18.x, 1);
				UNK_0x44A200C9B6E1CEA6(vLocal_18.x, true);
				if ((Local_580.f_1 == 3 && func_9(UNK_0x16F2683693E537C9())) && UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x545E1397F38D9D5A(UNK_0x16F2683693E537C9(), 3);
				}
			}
		}
		UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
	}
}

int func_30(var uParam0, float fParam1)
{
	float fVar0;

	fVar0 = 0f;
	if (UNK_0xE82754C349C7B581(*uParam0, &fVar0, 0, 0))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 1;
	}
	return 0;
}

void func_31(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < Local_598.f_249)
		{
			UNK_0xAB8E2DDC7AF955E0(Local_851[iVar0 /*18*/].f_5, false);
		}
		if (iParam0 == 1)
		{
			if (UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_3))
			{
				UNK_0xEBA53F35D0085654(&(Local_851[iVar0 /*18*/].f_3));
			}
			if (UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6))
			{
				UNK_0xA954465BA6FDEFE2(&(Local_851[iVar0 /*18*/].f_6));
			}
		}
		else
		{
			if (UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_3))
			{
				if (!UNK_0x437347B10A200C4B(Local_851[iVar0 /*18*/].f_3, 0))
				{
					UNK_0xFADC0A217229F6B5(Local_851[iVar0 /*18*/].f_3, true);
					if (UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6) && !UNK_0x437347B10A200C4B(Local_851[iVar0 /*18*/].f_6, 0))
					{
						UNK_0x7980D72D61BEF4D5(Local_851[iVar0 /*18*/].f_3, false);
						UNK_0xE8832A9E16A57A1F(Local_851[iVar0 /*18*/].f_6, false, 1);
						if (Local_580 == 8)
						{
							UNK_0xDD353D0E9C789D0E(&iVar1);
							UNK_0xE9362E4D600DD12A(false, Local_851[iVar0 /*18*/].f_6, 380.1007f, -3498.078f, -29.3627f, 20f, 0, UNK_0x134B62B726CEC8E6(Local_851[iVar0 /*18*/].f_6), 786603, 10f, 5f);
							UNK_0xE072601B4380E9DF(false, Local_851[iVar0 /*18*/].f_6, 20f, 786603);
							UNK_0x75ABDC5F81978924(iVar1);
							UNK_0x78ADC381772E3D54(Local_851[iVar0 /*18*/].f_3, iVar1);
						}
						else
						{
							UNK_0xE072601B4380E9DF(Local_851[iVar0 /*18*/].f_3, Local_851[iVar0 /*18*/].f_6, 20f, 786603);
						}
					}
				}
				func_33(&(Local_851[iVar0 /*18*/].f_3), 1, 0, 1);
			}
			if (UNK_0xC844350D5D58C99A(Local_851[iVar0 /*18*/].f_6))
			{
				if (!UNK_0x437347B10A200C4B(Local_851[iVar0 /*18*/].f_6, 0))
				{
					UNK_0x7980D72D61BEF4D5(Local_851[iVar0 /*18*/].f_6, false);
					UNK_0xD5A0214B20BCBAD8(Local_851[iVar0 /*18*/].f_6, 0);
					UNK_0x44A200C9B6E1CEA6(Local_851[iVar0 /*18*/].f_6, false);
					UNK_0xA22F71BBC8173C39(Local_851[iVar0 /*18*/].f_6, true);
				}
				UNK_0x046C362CF15F1935(&(Local_851[iVar0 /*18*/].f_6));
			}
		}
		iVar0++;
	}
}

void func_33(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

bool func_34()
{
	int iVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bLocal_1136 = UNK_0x728870EB733D12A1();
		if (func_178(bLocal_1136))
		{
			iVar0 = UNK_0x134B62B726CEC8E6(bLocal_1136);
			if (iVar0 == joaat("SEASHARK") || iVar0 == joaat("SEASHARK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_35()
{
	bool bVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bLocal_1136 = UNK_0x728870EB733D12A1();
		if (func_178(bLocal_1136))
		{
			bVar0 = UNK_0x134B62B726CEC8E6(bLocal_1136);
			if ((UNK_0x7D8B2A8F9EA82DB7(bVar0) && !UNK_0xAD09C9A4B56FA133(bVar0)) && !func_36(bVar0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_36(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

void func_37(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13)
{
	int iVar0;

	iVar0 = 1;
	if (!func_144() || !func_143())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_141(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_139();
		while (!func_138())
		{
			SYSTEM::WAIT(0);
		}
		*bParam0 = func_119(vParam1, bParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_118(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { Global_105187.f_2890 };
			bParam4 = Global_105187.f_2890.f_6;
		}
		UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
		func_109(vParam1, 5f, 0);
		if (func_108(iParam12))
		{
			func_106(iParam12, 0);
			while (!func_38(bParam0, iParam12, vParam1, bParam4, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			UNK_0x523BCC9DC80CD82F(bParam10);
			while (!UNK_0xB87F6CF6E5628C67(bParam10))
			{
				SYSTEM::WAIT(0);
			}
			*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam10, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0) && !UNK_0x437347B10A200C4B(*bParam0, 0))
			{
				if (bParam11 == 0)
				{
					UNK_0xC6A6B4DDD6DC073A(*bParam0, false);
				}
				else if (bParam11 > 0)
				{
					UNK_0xC002508A277213DE(*bParam0, bParam11, bParam11);
				}
			}
			UNK_0x71199B01895C6202(bParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((UNK_0xC844350D5D58C99A(*bParam0) && !UNK_0x437347B10A200C4B(*bParam0, 0)) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), *bParam0, -1);
			UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
		}
	}
}

bool func_38(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;

	if (func_108(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_105(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return true;
		}
		if (UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (UNK_0x134B62B726CEC8E6(*bParam0) != Var5)
			{
			}
			return true;
		}
		if ((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131])
		{
			Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var5)
		{
			UNK_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (UNK_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/], vParam2, bParam5, false, false, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar103 + 1, !Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_104(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				UNK_0x85654A532F20966B(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_100(bParam0, &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_98(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_97(*bParam0, iParam1);
				return true;
			}
		}
		else if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var5)
		{
			UNK_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (UNK_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/], vParam2, bParam5, false, false, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar104 + 1, !Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_104(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				UNK_0x85654A532F20966B(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_100(bParam0, &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_98(bParam0);
					}
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_97(*bParam0, iParam1);
				return true;
			}
		}
		else
		{
			UNK_0x523BCC9DC80CD82F(Var5);
			if (UNK_0xB87F6CF6E5628C67(Var5))
			{
				bVar105 = true;
				*bParam0 = UNK_0x122AAB0B1D6F55AD(Var5, vParam2, bParam5, true, true, false);
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				UNK_0x316958DDB94DF3FC(*bParam0, 0);
				UNK_0x626D5ADA3EFAE431(*bParam0, 0);
				UNK_0x44A200C9B6E1CEA6(*bParam0, true);
				StringCopy(&cVar106, UNK_0x7888A5D2621AAF2D(*bParam0), 16);
				UNK_0xD458AC1C1D29C3B4(*bParam0, 1250, false);
				UNK_0x5DAB50E08C3C504A(*bParam0, 1250f);
				UNK_0xDC544F7DF5E5164D(*bParam0, 1250f);
				Var5.f_3 = 1250;
				UNK_0xC002508A277213DE(*bParam0, Var5.f_5, Var5.f_6);
				UNK_0x58A0C35FA7CA6162(*bParam0, Var5.f_7, Var5.f_8);
				UNK_0xCCD53AC1B5D5E456(*bParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					UNK_0xD3421E391490133B(*bParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					UNK_0xDE00FFD6DD02A48E(*bParam0, Var5.f_24);
				}
				if (func_104(&uVar1, &bVar0))
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &uVar1);
					UNK_0xA22B35B584F0580A(*bParam0, bVar0);
				}
				else
				{
					UNK_0x55A3C4ED4728EA42(*bParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < UNK_0xBCB9B04D4DA658DF())
					{
						UNK_0xA22B35B584F0580A(*bParam0, Var5.f_26);
					}
				}
				UNK_0x9F0DB8A295EA8513(*bParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				UNK_0xA22F71BBC8173C39(*bParam0, Var5.f_88);
				UNK_0x8BF0BEF985EB6D43(*bParam0, Var5.f_87);
				UNK_0x85654A532F20966B(*bParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				UNK_0x7726E33AC3B60544(*bParam0, 2, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 28));
				UNK_0x7726E33AC3B60544(*bParam0, 3, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 29));
				UNK_0x7726E33AC3B60544(*bParam0, 0, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 30));
				UNK_0x7726E33AC3B60544(*bParam0, 1, UNK_0xEAE0D21A50E6C7F4(Var5.f_92, 31));
				if (UNK_0x579935D850368851(*bParam0) > 1 && Var5.f_89 >= 0)
				{
					UNK_0x446EA2500F021666(*bParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(*bParam0)))
					{
						if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*bParam0)))
						{
							if (Var5.f_90 == 6)
							{
								UNK_0x920DACD685EA4957(*bParam0, Var5.f_90);
							}
						}
						else
						{
							UNK_0x920DACD685EA4957(*bParam0, Var5.f_90);
						}
					}
				}
				func_100(bParam0, &(Var5.f_31), &(Var5.f_81));
				UNK_0x0947AEED9914905B(*bParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BAGGER") && !Global_111638.f_9080.f_99.f_58[118])
					{
						UNK_0x55A3C4ED4728EA42(*bParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (UNK_0x134B62B726CEC8E6(*bParam0) == joaat("BODHI2"))
					{
						func_98(bParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131]) && UNK_0x134B62B726CEC8E6(*bParam0) == joaat("TAILGATER"))
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, 6, true, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 14, 7, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 11, 2, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 2, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 7, 5, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 0, false, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 3, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 13, true, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 4, 3, false);
					UNK_0xEE6A1776A67F70C1(*bParam0, 12, 2, false);
					UNK_0x73BEC6F1685574E6(*bParam0, 22, true);
					UNK_0x920DACD685EA4957(*bParam0, 2);
					UNK_0xEE6A1776A67F70C1(*bParam0, 23, 11, false);
					UNK_0x8BF0BEF985EB6D43(*bParam0, 2);
					Global_111638.f_2358.f_539.f_4316 = 1;
					func_39(iParam1, bParam0, 0, 1);
				}
				if (bParam6)
				{
					UNK_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_97(*bParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_39(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if ((func_108(iParam0) && UNK_0xC844350D5D58C99A(*bParam1)) && UNK_0xDF1306B443CD3D15(*bParam1, 0))
	{
		if (iParam2 > Global_111638.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_75(*bParam1, iParam0);
		}
		if (UNK_0x40B3F576B41FA183(*bParam1) != 0)
		{
			UNK_0xF95FF0A179413A39(*bParam1, 0);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = UNK_0x134B62B726CEC8E6(*bParam1);
		if (UNK_0x565509D116400807(*bParam1, &bVar1))
		{
			Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = UNK_0x134B62B726CEC8E6(bVar1);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = UNK_0xA471721ED5268046(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = UNK_0x7F6DC62EA9922664(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = UNK_0xDD62D560CFE11A27(*bParam1, true);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = UNK_0xDD62D560CFE11A27(*bParam1, 2);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = UNK_0xDD62D560CFE11A27(*bParam1, 3);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = UNK_0xDD62D560CFE11A27(*bParam1, 4);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = UNK_0xDD62D560CFE11A27(*bParam1, 5);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = UNK_0xDD62D560CFE11A27(*bParam1, 6);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = UNK_0xDD62D560CFE11A27(*bParam1, 7);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = UNK_0xDD62D560CFE11A27(*bParam1, 8);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = UNK_0xDD62D560CFE11A27(*bParam1, 9);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = UNK_0xDD62D560CFE11A27(*bParam1, 10);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = UNK_0xDD62D560CFE11A27(*bParam1, 11);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = UNK_0xDD62D560CFE11A27(*bParam1, 12);
		if (UNK_0x587993B327460A82(*bParam1, 0))
		{
			iVar2 = UNK_0x74A7D92E3874B5C7(*bParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = UNK_0xFC21F7E0F4D92523();
		StringCopy(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), UNK_0x7888A5D2621AAF2D(*bParam1), 16);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = UNK_0x4EB64970EC291A00(*bParam1);
		UNK_0x9412F17E127D9759(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		UNK_0xD00EA977553939A7(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		UNK_0x4D842A28A29F18F6(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = UNK_0x616632A7E7824A9A(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = UNK_0x214BEAD64D777E8F(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = UNK_0xF22DC2D0CA24A151(*bParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = UNK_0x8EF9B42D5496EC5A(*bParam1);
		UNK_0xE04A80C505823410(*bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (UNK_0x812A93B166D97C60(*bParam1, 2))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 3))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (UNK_0x812A93B166D97C60(*bParam1, 1))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_111638.f_2358.f_539.f_4317[iParam0] = 10;
		if (UNK_0x67303E186EA6C9A0(*bParam1) >= 0 && func_44(*bParam1, 0, &uVar0))
		{
			func_43(bParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_111638.f_20113[iParam0 /*43*/].f_40 = 1;
				Global_111638.f_20113[iParam0 /*43*/] = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_111638.f_20113[iParam0 /*43*/].f_3 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_111638.f_20113[iParam0 /*43*/].f_4 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_111638.f_20113[iParam0 /*43*/].f_5 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_111638.f_20113[iParam0 /*43*/].f_6 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_111638.f_20113[iParam0 /*43*/].f_10 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_111638.f_20113[iParam0 /*43*/].f_16 = !Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_111638.f_20113[iParam0 /*43*/].f_19 = { Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_111638.f_20113[iParam0 /*43*/].f_23 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_111638.f_20113[iParam0 /*43*/].f_7 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_111638.f_20113[iParam0 /*43*/].f_8 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_111638.f_20113[iParam0 /*43*/].f_9 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_111638.f_20113[iParam0 /*43*/].f_11 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_111638.f_20113[iParam0 /*43*/].f_12 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_111638.f_20113[iParam0 /*43*/].f_13 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_111638.f_20113[iParam0 /*43*/].f_14 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_111638.f_20113[iParam0 /*43*/].f_15 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_111638.f_20113[iParam0 /*43*/].f_18 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_111638.f_20113[iParam0 /*43*/].f_17 = Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_111638.f_20113[iParam0 /*43*/].f_24 = UNK_0x461CAC843A21E4B6(*bParam1, 11) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_25 = UNK_0x461CAC843A21E4B6(*bParam1, 12) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_26 = UNK_0x461CAC843A21E4B6(*bParam1, 4) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_27 = UNK_0x461CAC843A21E4B6(*bParam1, 23) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_28 = UNK_0x461CAC843A21E4B6(*bParam1, 14) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_29 = UNK_0x461CAC843A21E4B6(*bParam1, 16) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_30 = UNK_0x461CAC843A21E4B6(*bParam1, 15) + 1;
				Global_111638.f_20113[iParam0 /*43*/].f_32 = UNK_0xBB3F1A6E0A9B6511(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[0] = UNK_0xC34A9D742FC099DC(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[1] = UNK_0xEE936CC771514B50(*bParam1, 14, 0);
				Global_111638.f_20113[iParam0 /*43*/].f_33[2] = UNK_0xEE936CC771514B50(*bParam1, 14, 1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[3] = UNK_0xEE936CC771514B50(*bParam1, 14, 2);
				Global_111638.f_20113[iParam0 /*43*/].f_33[4] = UNK_0xEE936CC771514B50(*bParam1, 14, 3);
				Global_111638.f_20113[iParam0 /*43*/].f_39 = UNK_0xFF4012C9B4D4F728(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_31 = func_42(*bParam1);
				Global_111638.f_20113[iParam0 /*43*/].f_33[0] = UNK_0x80A2B6C1AD8E56D5(*bParam1);
				UNK_0xF3400BB226B5BB56(*bParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_40(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0 /*43*/].f_1));
				UNK_0xB0010FD150C8A58B(*bParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_40(Global_111638.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_40(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_41(iVar0, &uVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

float func_42(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x67303E186EA6C9A0(bParam0) >= 0)
	{
		if (UNK_0xFF4012C9B4D4F728(bParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 0)
		{
			if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_43(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_44(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;

	*uParam2 = 0;
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return false;
	}
	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if ((!func_73(bVar0, bParam1, uParam2) && !func_72(UNK_0xD803B885F5E47A62())) && !func_55(bParam0))
	{
		return false;
	}
	if (func_72(UNK_0xD803B885F5E47A62()))
	{
		if (func_54(bVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bVar1 = false;
	if (func_53(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bVar0) || UNK_0xC41A9202669A24C4(bVar0)))
	{
		bVar1 = true;
	}
	if (((UNK_0x56E1CD81AE700E98(bParam0) && !func_51(bParam0)) && !bVar1) && !(func_50(UNK_0x134B62B726CEC8E6(bParam0)) && func_46(UNK_0xD803B885F5E47A62())))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			default:
				*uParam2 = 2;
				break;
		}
		return false;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if ((func_45(bParam0) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("SENTINEL2")) && UNK_0x134B62B726CEC8E6(bParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_45(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_46(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
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
	}
	return -1;
}

bool func_48(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int func_49()
{
	return -1;
}

bool func_50(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_51(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return true;
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_52(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
			break;
		case -1254331310:
		case joaat("BURRITO2"):
			return true;
	}
	return false;
}

bool func_52(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_53(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_54(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return true;
	}
	return false;
}

bool func_55(bool bParam0)
{
	if (func_71(UNK_0xD803B885F5E47A62()) || func_70(UNK_0xD803B885F5E47A62()))
	{
		if (func_56(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_56(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_59(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_57(bParam0))
			{
				return true;
			}
			switch (UNK_0x134B62B726CEC8E6(bParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
				case 1416466158:
					return true;
			}
		}
	}
	return false;
}

bool func_57(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return true;
	}
	return false;
}

bool func_59(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_61(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_60(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_60(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_61(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_69(iParam0, 0))
		{
			return true;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_68();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_67();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_67();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_67();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_67();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_67();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_66();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_65();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_65();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_65();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_65();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_65();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_65();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_65();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_64();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_64();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_63();
		case joaat("GLENDALE"):
			if (func_63() || func_62())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_63();
		case joaat("ISSI3"):
			return func_63();
		case joaat("GARGOYLE"):
			return func_63();
		case joaat("DOMINATOR"):
			return func_63();
		case joaat("DOMINATOR2"):
			return func_63();
		case joaat("IMPERATOR"):
			return func_63();
		case joaat("IMPERATOR2"):
			return func_63();
		case joaat("IMPERATOR3"):
			return func_63();
		case joaat("DEATHBIKE"):
			return func_63();
		case joaat("DEATHBIKE2"):
			return func_63();
		case joaat("DEATHBIKE3"):
			return func_63();
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_63();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_62();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_62();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_62();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_62();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_62();
			}
			break;
	}
	return false;
}

bool func_62()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_63()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_64()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_65()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_66()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_67()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_68()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_69(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

bool func_70(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_49())
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_71(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_49())
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_72(bool bParam0)
{
	if (bParam0 != func_49())
	{
		if (func_48(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_47(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_73(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;

	if (!bParam1)
	{
		if ((((((((((((((bParam0 == joaat("POLICE") || bParam0 == joaat("POLICEOLD1")) || bParam0 == joaat("POLICEOLD2")) || bParam0 == joaat("POLICE2")) || bParam0 == joaat("POLICE3")) || bParam0 == joaat("POLICE4")) || bParam0 == joaat("FBI")) || bParam0 == joaat("FBI2")) || bParam0 == joaat("POLMAV")) || bParam0 == joaat("POLICEB")) || bParam0 == joaat("POLICET")) || bParam0 == joaat("RIOT")) || bParam0 == joaat("SHERIFF")) || bParam0 == joaat("PRANGER")) || bParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((bParam0 == joaat("AMBULANCE") || bParam0 == joaat("FIRETRUK")) || bParam0 == joaat("TAXI")) || bParam0 == joaat("LGUARD")) || bParam0 == joaat("RIPLEY")) || bParam0 == joaat("DILETTANTE2")) || bParam0 == joaat("AIRBUS")) || bParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("BURRITO") || bParam0 == joaat("RUMPO2")) || bParam0 == joaat("SPEEDO")) || bParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((bParam0 == joaat("SCORCHER") || bParam0 == joaat("BMX")) || bParam0 == joaat("CRUISER")) || bParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((bParam0 == joaat("CADDY") || bParam0 == joaat("FORKLIFT")) || bParam0 == joaat("CADDY2")) || bParam0 == joaat("CRUSADER")) || bParam0 == joaat("TRIBIKE")) || bParam0 == joaat("TRIBIKE2")) || bParam0 == joaat("TRIBIKE3")) || bParam0 == joaat("TRACTOR")) || bParam0 == joaat("TRACTOR2")) || bParam0 == joaat("MOWER")) || bParam0 == joaat("TORNADO4")) || bParam0 == joaat("DOCKTUG")) || bParam0 == joaat("STRETCH")) || bParam0 == joaat("BISON2")) || bParam0 == joaat("BISON3")) || bParam0 == joaat("BENSON")) || bParam0 == joaat("POUNDER")) || bParam0 == joaat("SUBMERSIBLE")) || bParam0 == joaat("EMPEROR3")) || bParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return false;
	}
	bVar0 = false;
	if (func_53(UNK_0xD803B885F5E47A62()) && (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!UNK_0x8E39AC3C76C8AA58(bParam0) && !UNK_0x7D8B2A8F9EA82DB7(bParam0)) && bParam0 != joaat("BLAZER")) && bParam0 != joaat("BLAZER2")) && bParam0 != joaat("BLAZER3")) && bParam0 != joaat("BLAZER4")) && bParam0 != joaat("BLAZER5")) && bParam0 != joaat("CHIMERA")) && bParam0 != joaat("TRAILERLARGE")) && bParam0 != joaat("TRAILERSMALL2")) && bParam0 != 916547552) && bParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return false;
	}
	if (bParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((bParam0 == joaat("INSURGENT") || bParam0 == joaat("TECHNICAL")) || bParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_74(bParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if (bParam0 == joaat("INSURGENT") || bParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_74(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return true;
	}
	return false;
}

void func_75(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_80(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_76(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_76(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_79(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_78(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_43(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

bool func_78(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_79(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

bool func_80(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_95(bParam0, 0, 0)) || func_95(bParam0, 1, 0)) || func_95(bParam0, 2, 0)) || func_94(bParam0) != 145) || func_93(bParam0)) || func_92(bParam0)) || func_45(bParam0)) || func_91(bParam0)) || !func_81(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_92(bParam0))
		{
		}
		if (func_92(bParam0))
		{
		}
		if (func_95(bParam0, 0, 0))
		{
		}
		if (func_95(bParam0, 1, 0))
		{
		}
		if (func_95(bParam0, 2, 0))
		{
		}
		if (func_94(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_81(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_82(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}
	return true;
}

bool func_82(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_90())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_89() && !func_88()) && !func_87()) && !func_86()) && !func_90())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_87())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_85(bParam0))
		{
			return false;
		}
	}
	if (!func_83(bParam0))
	{
		return false;
	}
	return true;
}

bool func_83(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_84())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_84()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_85(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_86()
{
	return false;
}

bool func_87()
{
	return true;
}

bool func_88()
{
	return true;
}

bool func_89()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_90()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_91(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_82(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_92(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_93(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_94(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_95(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_96(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_96(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_97(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = bParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = UNK_0x134B62B726CEC8E6(bParam0);
			if (UNK_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96123[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_98(bool bParam0)
{
	if (!func_99(*bParam0))
	{
		UNK_0xD3421E391490133B(*bParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_99(bool bParam0)
{
	return UNK_0xDD62D560CFE11A27(bParam0, 5);
}

int func_100(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	UNK_0xF95FF0A179413A39(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			UNK_0x73BEC6F1685574E6(*bParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, 255);
				}
				else
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, false);
			}
		}
		else if (UNK_0x0ECB5CA5140957AD(*bParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			UNK_0x7AFDC9F56E7BB635(*bParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_69(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_103(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_103(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_102(bParam0);
	if (func_101(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_101(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (UNK_0x0ECB5CA5140957AD(bParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, UNK_0xAE6250B518DF3C3B(bParam0, iVar1, UNK_0x0ECB5CA5140957AD(bParam0, iVar1)), 16);
				iVar2 = UNK_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == UNK_0x12AB0310C2281427("MNU_CAGE") || iVar2 == UNK_0x12AB0310C2281427("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_102(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(*bParam0))
	{
		case joaat("STARLING"):
			if (UNK_0x0ECB5CA5140957AD(*bParam0, 4) == 0)
			{
				UNK_0xEE6A1776A67F70C1(*bParam0, 13, false, false);
			}
			else
			{
				UNK_0x7AFDC9F56E7BB635(*bParam0, 13);
			}
			break;
	}
}

int func_103(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
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
						return 4;
				}
				break;
			case joaat("FACTION3"):
				return 3;
		}
		iVar0 = UNK_0x461CAC843A21E4B6(bParam0, 38);
		iVar1 = UNK_0x461CAC843A21E4B6(bParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

bool func_104(var uParam0, bool bParam1)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*bParam1 = Global_111638.f_20113.f_271;
		return true;
	}
	return false;
}

void func_105(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_107(iParam0, iParam1))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						UNK_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						UNK_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_107(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_108(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_105(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_108(bool bParam0)
{
	return bParam0 < 3;
}

void func_109(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_117(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_110(iVar0);
			}
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_117(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				UNK_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_116(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_114(0, Global_75441.f_555[0 /*21*/].f_12) || !func_114(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_113(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_111(iParam0, 0);
		}
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_116(iParam0, 0))
		{
			func_112(iParam0, 1, 0);
			func_112(iParam0, 2, 0);
			func_112(iParam0, 3, 0);
			func_112(iParam0, 4, 0);
			func_112(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_112(iParam0, 0, 0);
	}
}

void func_112(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

void func_113(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

bool func_114(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_115(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_82(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_115(var uParam0)
{
	return *uParam0;
}

bool func_116(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

bool func_117(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_90())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_90())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_118(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_118(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_118(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_118(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_119(vector3 vParam0, bool bParam3)
{
	return func_120(&(Global_105187.f_2890), vParam0, bParam3, 0);
}

bool func_120(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_137(uParam0))
	{
		if (func_118(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			bParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("MONSTER") || uParam0->f_12.f_66 == joaat("MARSHALL"))
		{
			if (UNK_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				bParam4 = 89.5f;
			}
		}
		if (func_136(uParam0))
		{
			UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_109(vParam1, 5f, 0);
			bVar0 = UNK_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					UNK_0x08841CDB215AE18F(bVar0, vParam1, 0, 0, 1);
				}
				func_125(bVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (UNK_0xA7082C42B8809BF2(uParam0->f_12.f_66) || UNK_0x83496B932152D4D4(uParam0->f_12.f_66))
				{
					if (!UNK_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_106(uParam0->f_11, 1);
						}
						else if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_106(uParam0->f_11, 2);
						}
					}
					UNK_0x316958DDB94DF3FC(bVar0, 0);
					UNK_0x626D5ADA3EFAE431(bVar0, 0);
					UNK_0x44A200C9B6E1CEA6(bVar0, true);
					func_97(bVar0, uParam0->f_11);
				}
				else if ((!func_122(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_121(bVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_110(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (UNK_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_111(24, 0);
							func_110(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_75(bVar0, uParam0->f_11);
				}
				UNK_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

int func_121(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]) && !UNK_0x437347B10A200C4B(Global_75441.f_484[iVar0], 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[iVar0], 0))
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar1, &iVar2);
			UNK_0x9412F17E127D9759(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(Global_75441.f_484[iVar0]) && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_122(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_124(bParam0, Global_75441.f_139[38], 0))
			{
				func_110(38);
				return true;
			}
			break;
		case joaat("FIRETRUK"):
			if (func_124(bParam0, Global_75441.f_139[43], 1))
			{
				func_110(43);
				return true;
			}
			break;
		case joaat("CUBAN800"):
			iVar5 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_124(bParam0, uVar1[iVar6], 1) && func_123(UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_118(vParam1, 0f, 0f, 0f, 0)) || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 1) < 10f)
					{
						UNK_0xA954465BA6FDEFE2(&bParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		case joaat("LUXOR2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[14]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[14], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[14]) == joaat("LUXOR2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[14]))
				{
					func_110(14);
					return true;
				}
			}
			break;
		case joaat("SWIFT2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("SWIFT2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_110(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_123(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_124(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0)) && UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		if (bParam2)
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar0, &iVar1);
			UNK_0x9412F17E127D9759(bParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_125(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_129(bParam0))
		{
			if (UNK_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				UNK_0x55A3C4ED4728EA42(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < UNK_0xBCB9B04D4DA658DF())
			{
				UNK_0xA22B35B584F0580A(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_77(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 10) != 0)
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), false);
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			UNK_0xF4FAAFEE2CE3B86C(bParam0, 0);
			if (UNK_0x0ECB5CA5140957AD(bParam0, 5) != -1)
			{
				UNK_0xF4FAAFEE2CE3B86C(bParam0, 1);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			UNK_0xBC3B1E7E1CC2D15C(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0x231087BDB2AEBD55(bParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			UNK_0xAA443C33B073D88B(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0xC15818BDC09EC354(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			UNK_0xC002508A277213DE(bParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		UNK_0x58A0C35FA7CA6162(bParam0, uParam1->f_7, uParam1->f_8);
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_128(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_127())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		UNK_0x9F0DB8A295EA8513(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_78(uParam1->f_66))
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
		}
		else
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
			UNK_0x8BF0BEF985EB6D43(bParam0, uParam1->f_65);
		}
		UNK_0xA22F71BBC8173C39(bParam0, !UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			UNK_0x71EDC33E5A423750(bParam0, uParam1->f_70);
		}
		UNK_0x85654A532F20966B(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		UNK_0x7726E33AC3B60544(bParam0, 2, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		UNK_0x7726E33AC3B60544(bParam0, 3, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		UNK_0x7726E33AC3B60544(bParam0, 0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		UNK_0x7726E33AC3B60544(bParam0, 1, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		UNK_0x750A9DEB80D6992C(bParam0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (UNK_0x579935D850368851(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			UNK_0x446EA2500F021666(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_126(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_126(bParam0, uParam1->f_69);
				}
			}
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				UNK_0x429C172A00A5F89B(bParam0, 1);
			}
			else
			{
				UNK_0x821D9A7077DBCDBC(bParam0, 1);
			}
		}
		if (bParam3)
		{
			func_100(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_77(iVar5 + 1)))
				{
					if (!UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
					{
						UNK_0xD3421E391490133B(bParam0, iVar5 + 1, false);
					}
				}
				else if (UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
				{
					UNK_0xD3421E391490133B(bParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((UNK_0x134B62B726CEC8E6(bParam0) == joaat("SHEAVA") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("OMNIS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("LE7B"))
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 0) == -1)
			{
				UNK_0xD3421E391490133B(bParam0, true, false);
			}
		}
		if (((UNK_0xC41A9202669A24C4(uParam1->f_66) && UNK_0xE7BF3A9C4976022F(bParam0)) && !UNK_0x4906F8A34E9F4814(bParam0, joaat("AVENGER"))) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					UNK_0xB58CA658A628ED02(bParam0, 2);
				}
				else
				{
					UNK_0xB58CA658A628ED02(bParam0, 3);
				}
			}
			else
			{
				UNK_0xB58CA658A628ED02(bParam0, 4);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_126(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		bVar0 = UNK_0x0ECB5CA5140957AD(bParam0, 24);
		iVar1 = UNK_0x3A5601978F787E51(bParam0, 24);
		UNK_0x920DACD685EA4957(bParam0, iParam1);
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("TORNADO6") || UNK_0x134B62B726CEC8E6(bParam0) == -1804415708)
		{
			return;
		}
		if (bVar0 == -1)
		{
			UNK_0x7AFDC9F56E7BB635(bParam0, 24);
		}
		else
		{
			UNK_0xEE6A1776A67F70C1(bParam0, 24, bVar0, iVar1 == 1);
		}
	}
}

bool func_127()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_128(bool bParam0)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (UNK_0x30F813723591D02E(bParam0, "MPBitset"))
				{
					bVar0 = UNK_0x1E2DFB0EF4BB4566(bParam0, "MPBitset");
				}
				return UNK_0xEAE0D21A50E6C7F4(bVar0, 4);
			}
		}
	}
	return false;
}

bool func_129(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_135(UNK_0xD803B885F5E47A62(), -1))
		{
			bParam0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_131(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_130(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_130(bool bParam0)
{
	if (UNK_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (UNK_0x30F813723591D02E(bParam0, "FMDeliverableID"))
		{
			return UNK_0x1E2DFB0EF4BB4566(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_131(int iParam0)
{
	if (func_134(iParam0) == 233)
	{
		return func_132(iParam0);
	}
	return -1;
}

int func_132(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_133(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_134(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_135(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_48(bParam0, 1, 1))
	{
		if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bParam0), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bParam0), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x16F2683693E537C9() == UNK_0xA30B8362589C124A(bVar0, bParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_136(var uParam0)
{
	if (func_137(uParam0))
	{
		if (UNK_0xB87F6CF6E5628C67(uParam0->f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_137(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_82(uParam0->f_12.f_66, 0))
	{
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_123(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return false;
	}
	return true;
}

bool func_138()
{
	return func_136(&(Global_105187.f_2890));
}

void func_139()
{
	func_140(&(Global_105187.f_2890));
}

void func_140(var uParam0)
{
	if (func_137(uParam0))
	{
		UNK_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

bool func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (UNK_0xA7082C42B8809BF2(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam1 == 0 && UNK_0xAFB8495D36825275(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam2 == 0 && func_36(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam3 == 0 && UNK_0xC41A9202669A24C4(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_142())
		{
			return false;
		}
	}
	return true;
}

bool func_142()
{
	float fVar0;

	if (!func_143())
	{
		return false;
	}
	if ((UNK_0xA7082C42B8809BF2(Global_105187.f_2890.f_12.f_66) || UNK_0xC41A9202669A24C4(Global_105187.f_2890.f_12.f_66)) || UNK_0xA7D7011F9888A365(Global_105187.f_2890.f_12.f_66))
	{
		return false;
	}
	fVar0 = UNK_0x8B8E112F7172CF29(Global_105187.f_2890.f_12.f_66);
	if (fVar0 < 37f)
	{
		return false;
	}
	return true;
}

bool func_143()
{
	return func_137(&(Global_105187.f_2890));
}

bool func_144()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

bool func_145()
{
	bool bVar0;
	int iVar1;
	int iVar2[89];

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bLocal_1136 = UNK_0x728870EB733D12A1();
		if (func_178(bLocal_1136))
		{
			bVar0 = UNK_0x134B62B726CEC8E6(bLocal_1136);
			if (func_36(bVar0))
			{
				return false;
			}
			if (((((((bVar0 == joaat("POLICE4") || bVar0 == joaat("POLICEOLD1")) || bVar0 == joaat("POLICEOLD2")) || bVar0 == joaat("FBI")) || bVar0 == joaat("FBI2")) || bVar0 == joaat("LGUARD")) || bVar0 == joaat("SHERIFF")) || bVar0 == joaat("SHERIFF2"))
			{
				return false;
			}
			if (((UNK_0x7D8B2A8F9EA82DB7(bVar0) || UNK_0xA7082C42B8809BF2(bVar0)) || UNK_0xAFB8495D36825275(bVar0)) || UNK_0xC41A9202669A24C4(bVar0))
			{
				return false;
			}
			iVar2[0] = joaat("AMBULANCE");
			iVar2[1] = joaat("BENSON");
			iVar2[2] = joaat("BIFF");
			iVar2[3] = joaat("BUS");
			iVar2[4] = joaat("FIRETRUK");
			iVar2[5] = joaat("FORKLIFT");
			iVar2[6] = joaat("MULE");
			iVar2[7] = joaat("MULE2");
			iVar2[8] = joaat("PACKER");
			iVar2[9] = joaat("PHANTOM");
			iVar2[10] = joaat("MOWER");
			iVar2[11] = joaat("STOCKADE");
			iVar2[12] = joaat("SQUALO");
			iVar2[13] = joaat("MAVERICK");
			iVar2[14] = joaat("POLMAV");
			iVar2[15] = joaat("AIRTUG");
			iVar2[16] = joaat("PRANGER");
			iVar2[17] = joaat("ANNIHILATOR");
			iVar2[18] = joaat("DINGHY");
			iVar2[19] = joaat("POLICE");
			iVar2[20] = joaat("RIPLEY");
			iVar2[21] = joaat("TRASH");
			iVar2[22] = joaat("BURRITO");
			iVar2[23] = joaat("PONY");
			iVar2[24] = joaat("SPEEDO");
			iVar2[25] = joaat("MARQUIS");
			iVar2[26] = joaat("SANCHEZ");
			iVar2[27] = joaat("AIRTUG");
			iVar2[28] = joaat("TACO");
			iVar2[29] = joaat("BARRACKS");
			iVar2[30] = joaat("ROMERO");
			iVar2[31] = joaat("BLAZER");
			iVar2[32] = joaat("BLAZER2");
			iVar2[33] = joaat("BODHI2");
			iVar2[34] = joaat("BOXVILLE2");
			iVar2[35] = joaat("BULLDOZER");
			iVar2[36] = joaat("CADDY");
			iVar2[37] = joaat("CADDY2");
			iVar2[38] = joaat("CAMPER");
			iVar2[39] = joaat("TIPTRUCK");
			iVar2[40] = joaat("TOURBUS");
			iVar2[41] = joaat("TOWTRUCK");
			iVar2[42] = joaat("TOWTRUCK2");
			iVar2[43] = joaat("TRACTOR");
			iVar2[44] = joaat("TRACTOR2");
			iVar2[45] = joaat("UTILLITRUCK");
			iVar2[46] = joaat("UTILLITRUCK2");
			iVar2[47] = joaat("UTILLITRUCK3");
			iVar2[48] = joaat("RATLOADER");
			iVar2[49] = joaat("DLOADER");
			iVar2[50] = joaat("DOCKTUG");
			iVar2[51] = joaat("DUMP");
			iVar2[52] = joaat("GBURRITO");
			iVar2[53] = joaat("HANDLER");
			iVar2[54] = joaat("HAULER");
			iVar2[55] = joaat("JOURNEY");
			iVar2[56] = joaat("RENTALBUS");
			iVar2[57] = joaat("MIXER");
			iVar2[58] = joaat("RHINO");
			iVar2[59] = joaat("CUTTER");
			iVar2[60] = joaat("POUNDER");
			iVar2[61] = joaat("TIPTRUCK2");
			iVar2[62] = joaat("MIXER2");
			iVar2[63] = joaat("RUBBLE");
			iVar2[64] = joaat("SCRAP");
			iVar2[65] = joaat("ARMYTANKER");
			iVar2[66] = joaat("BARRACKS2");
			iVar2[67] = joaat("AIRBUS");
			iVar2[68] = joaat("COACH");
			iVar2[69] = joaat("PBUS");
			iVar2[70] = joaat("RIOT");
			iVar2[71] = joaat("BOXVILLE3");
			iVar2[72] = joaat("STOCKADE3");
			iVar2[73] = joaat("FLATBED");
			iVar2[74] = joaat("BOXVILLE");
			iVar2[75] = joaat("BURRITO2");
			iVar2[76] = joaat("BURRITO3");
			iVar2[77] = joaat("BURRITO4");
			iVar2[78] = joaat("RUMPO");
			iVar2[79] = joaat("SPEEDO2");
			iVar2[80] = joaat("BLIMP");
			iVar2[81] = joaat("BLIMP2");
			iVar2[82] = joaat("SUBMERSIBLE");
			iVar2[83] = joaat("SUBMERSIBLE2");
			iVar2[84] = joaat("BLAZER3");
			iVar2[85] = joaat("PONY2");
			iVar2[86] = joaat("RUMPO2");
			iVar2[87] = joaat("TAXI");
			iVar2[88] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (bVar0 == iVar2[iVar1])
				{
					return false;
				}
				iVar1++;
			}
			return true;
		}
	}
	return false;
}

void func_146(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_147(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_178(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_10(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_10(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

void func_148(int iParam0, bool bParam1)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if (!UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!UNK_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

bool func_149(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(2500);
				UNK_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(true);
			}
			UNK_0x9A82EEAF6CA12AEE(0.2f);
			if (func_166(iParam5, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			UNK_0x7ACC3006A87F8B39("STRING");
			UNK_0x3A820E495A7BA3E5(6);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
			func_165(bParam3);
			UNK_0x3CAEA85DA607305E(100);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7A8BB56B212464AC();
			if (func_166(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_166(iParam5, 1))
			{
				UNK_0x5EEBDFEE72949D59(0);
			}
			func_164(&(uParam1->f_10), 0, 1, 1, 1);
			func_163(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_163(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_166(iParam5, 4))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_166(iParam5, 8))
			{
				switch (func_167())
				{
					case 0:
						UNK_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					case 1:
						UNK_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					case 2:
						UNK_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
				}
			}
			if (!func_162(&(uParam1->f_1)))
			{
				func_161(&(uParam1->f_1));
			}
			if (func_166(iParam5, 2))
			{
				if (!func_162(&(uParam1->f_4)))
				{
					func_161(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			UNK_0xBD706C594F6DCD4A();
			if (func_166(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			UNK_0xD9ACBBA59FD5A09E(iParam6);
			func_159(iParam0, 0, 0);
			if (!func_166(iParam5, 16) && (func_157(&(uParam1->f_1)) >= uParam1->f_135 || UNK_0x757EF87A33649210()))
			{
				func_151(&(uParam1->f_10), 1128792064 /* Float: 200f */, iParam6, bParam7, 1, 1065353216 /* Float: 1f */);
				UNK_0x5D80F91A16C40CDE();
				if (UNK_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_166(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_150(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
				else if (UNK_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_166(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_150(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			if (func_166(iParam5, 2))
			{
				if (func_157(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_166(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_150(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			break;
		case 3:
			func_159(iParam0, 0, 0);
			UNK_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((UNK_0x7F8A39872A07D2CE("stunt_plane_races", UNK_0xBB0808A181D4745C()) || UNK_0x7F8A39872A07D2CE("pilot_school", UNK_0xBB0808A181D4745C())) || (UNK_0x7F8A39872A07D2CE("bj", UNK_0xBB0808A181D4745C()) && UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))))
			{
				UNK_0x82E51BCA72537B6C(2500);
			}
			if (func_166(iParam5, 64) && uParam1->f_138)
			{
				UNK_0x53491B90E4FD0E56(500);
			}
			func_3(&(uParam1->f_4));
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (func_157(&(uParam1->f_4)) <= 0.1f)
			{
				func_159(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return true;
			}
			break;
	}
	return false;
}

void func_150(int iParam0)
{
	if (*iParam0 != 0)
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_151(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;

	if (((UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749()) || UNK_0x757EF87A33649210()) || UNK_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_156(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_166(uParam0->f_1, 256) || (func_166(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		UNK_0x7C19E5E4784BD7CF(bParam1);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bParam5);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x7E60D21B163E9D56();
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(func_166(uParam0->f_1, 4096));
			UNK_0x7E60D21B163E9D56();
		}
		bVar5 = false;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				case 1:
					bVar4 = UNK_0x91E3F625EF57450D(2);
					break;
				case 2:
					bVar4 = !UNK_0x91E3F625EF57450D(2);
					break;
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					UNK_0x3CAEA85DA607305E(bVar5);
					bVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							bVar3 = UNK_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							bVar3 = UNK_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!UNK_0xEA6BC48857E0AC4C(bVar3))
						{
							func_155(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_165(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_166(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								UNK_0x1200CC973A2399C8(true);
								UNK_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								UNK_0x1200CC973A2399C8(false);
								UNK_0x3CAEA85DA607305E(-1);
							}
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		bVar8 = func_154(bParam4, func_154(func_166(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_153(&(uParam0->f_1), 256);
		func_152(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_156(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_153(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

float func_157(var uParam0)
{
	if (func_162(uParam0))
	{
		if (func_158(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_158(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

int func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_162(&(iParam0->f_2)))
	{
		func_3(&(iParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_157(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		func_160(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_160(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_161(bool bParam0)
{
	if (!func_162(bParam0))
	{
		func_3(bParam0);
	}
}

bool func_162(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

int func_163(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_153(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_153(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_153(&(uParam0->f_1), 8192);
	}
}

void func_165(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_166(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_167()
{
	func_168();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_168()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_171(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_170(UNK_0x16F2683693E537C9());
			if (func_108(iVar0) && (!func_169(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_108(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_169(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_170(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_171(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_171(int iParam0)
{
	if (func_108(iParam0))
	{
		return func_172(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_172(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_173(int iParam0)
{
	if (func_177())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_176())
		{
			func_174(1, 1);
		}
		else
		{
			func_174(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_21())
	{
		Global_19486.f_1 = 3;
	}
}

void func_174(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_175(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_175(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_176()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_177()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_178(bool bParam0)
{
	if (func_10(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_179(int iParam0)
{
	int iVar0;

	func_180();
	if (iParam0 == 1 && UNK_0xE4EDC4B0E92C078B(vLocal_18.y))
	{
		UNK_0x142CC44DB769B57E(&(vLocal_18.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		func_146(&(Local_851[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_180()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_1128))
	{
		UNK_0x142CC44DB769B57E(&iLocal_1128);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_1129))
	{
		UNK_0x142CC44DB769B57E(&iLocal_1129);
	}
	if (iLocal_1130 != 0)
	{
		UNK_0xE223EB8FE6F8CC15(iLocal_1130);
	}
}

void func_181()
{
	Global_19671 = 0;
	func_182();
}

void func_182()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_183()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_184()
{
	int iVar0;

	UNK_0xF3D5CA5E09CE41C7();
	UNK_0xD60411959D5D930B(0f);
	switch (iLocal_575)
	{
		case 0:
			UNK_0x3FC8DBCC154CA56B();
			if (func_9(bLocal_1419) && func_9(UNK_0x16F2683693E537C9()))
			{
				UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_1419, -1, 2050, 4);
			}
			SYSTEM::WAIT(0);
			UNK_0x3FC8DBCC154CA56B();
			func_237(&Local_1205, 1, 0);
			func_224(&uLocal_1781, &(iLocal_1394[0]));
			func_150(&(Local_1205.f_14));
			iLocal_1621 = UNK_0x1C0640BA9A7327B3() + 2500;
			bLocal_1779 = true;
			bLocal_1780 = true;
			iLocal_575 = 1;
			break;
		case 1:
			UNK_0x3FC8DBCC154CA56B();
			if (func_223(&Local_1205))
			{
				iLocal_575 = 2;
			}
			if (func_9(bLocal_1419))
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_1621)
				{
					func_222();
				}
				if ((bLocal_1780 && UNK_0xB4ECF989E2C1DAC8(bLocal_1419, bLocal_1403, "_grid_girl_end", 3)) && UNK_0x8CA9406E01C7EE58(bLocal_1419, bLocal_1403, "_grid_girl_end") > 0.165f)
				{
					UNK_0xCEAA091B490F8407(-1, "KISS", bLocal_1419, "ROAD_RACE_SOUNDSET", 0, 0);
					bLocal_1780 = false;
				}
			}
			break;
		case 2:
			func_186();
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			if (func_9(UNK_0x16F2683693E537C9()))
			{
				UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
			}
			func_185(&Local_1205);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (UNK_0x9F4FE516EAACCFC5(Local_1205.f_5[iVar0]))
				{
					UNK_0x9A8DDC7C522F5BF5(Local_1205.f_5[iVar0], 0);
				}
				iVar0++;
			}
			if (Local_580.f_1 == 3)
			{
				func_569(0);
			}
			else
			{
				func_569(1);
			}
			break;
	}
}

void func_185(var uParam0)
{
	if (UNK_0x9F4FE516EAACCFC5(uParam0->f_5[2]))
	{
		*uParam0 = 0;
		UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
	}
}

void func_186()
{
	float fVar0;

	if (Local_580.f_1 != 3)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_580.f_3);
		if (Local_586.f_11 == 1)
		{
			fVar0 = (fVar0 * 4.5f);
			func_187(1, 1, SYSTEM::ROUND(fVar0), 0, 0);
		}
		else if (Local_586.f_11 == 2)
		{
			func_187(1, 1, SYSTEM::ROUND(fVar0), 0, 0);
		}
		else if (Local_586.f_11 == 3)
		{
			fVar0 = (fVar0 * 0.5f);
			func_187(1, 1, SYSTEM::ROUND(fVar0), 0, 0);
		}
	}
}

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_221(iParam0) == 3)
	{
		return;
	}
	if (func_221(iParam0) == 4)
	{
		return;
	}
	func_188(func_221(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_188(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_220();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_219(99, 1);
					func_218(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_218(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_218(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_203(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_198(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_218(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_218(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_198(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_218(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_218(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_218(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_218(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_218(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_218(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_218(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_218(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_218(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_218(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_198(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_218(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_218(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_218(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_218(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_197(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_219(95, iParam3);
					break;
				case 1:
					func_219(97, iParam3);
					break;
				case 2:
					func_219(96, iParam3);
					break;
			}
			func_219(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_191(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_191(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_218(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_218(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_218(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_190(iParam0);
	if (Global_41431 == 15)
	{
		func_189(0);
	}
	return 1;
}

void func_189(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_190(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_191(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_196(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_196(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_196(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_196(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_194(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_194(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_194(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_194(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_194(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_194(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_193() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_193() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_192(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_192(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_193()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_194(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
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

	if (bParam2 == -1)
	{
		bParam2 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam2);
		iVar1 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam2);
		iVar1 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
		iVar1 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
		iVar1 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam2);
		iVar1 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
		iVar1 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_197(int iParam0)
{
	func_219(93, iParam0);
	func_219(29, iParam0);
	func_219(30, iParam0);
}

bool func_198(bool bParam0)
{
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

	if (bParam0 == 8)
	{
		return func_200(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_200(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_200(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_200(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_199(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_199(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_199(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_199(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_199(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_199(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_193() /*10930*/].f_6174.f_10, bParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_195(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_200(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_17();
	}
	iVar1 = func_202(iParam0, bParam1);
	iVar2 = func_201(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_201(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_202(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_203(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_217(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_204(27, 1);
	return 1;
}

int func_204(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_205(iParam0, iParam1);
}

int func_205(int iParam0, int iParam1)
{
	if (func_169(14) && !func_216(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_215(&Global_4270065))
	{
		if (func_213(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_206(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_206(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_169(14) && !func_216(iParam1))
	{
		return false;
	}
	if (func_213(uParam0, iParam1))
	{
		return false;
	}
	if (func_212(uParam0) < 0f)
	{
		func_211(uParam0, 0);
	}
	func_209(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_207(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_207(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_169(14) && !func_216(iParam1))
	{
		return 0;
	}
	if (func_213(uParam0, iParam1))
	{
		return 0;
	}
	if (func_212(uParam0) < 0f)
	{
		func_211(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_208(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_208(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_209(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_210(uParam0, iVar0);
		iVar0++;
	}
	func_211(uParam0, (Global_4270064 - 0.5f));
}

void func_210(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_211(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_212(var uParam0)
{
	return uParam0->f_80;
}

bool func_213(var uParam0, int iParam1)
{
	return func_214(uParam0, iParam1) != -1;
}

int func_214(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_215(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_216(int iParam0)
{
	switch (iParam0)
	{
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
			return true;
		default:
			break;
	}
	return false;
}

int func_217(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = UNK_0xBD47F720AB99D749(iParam0);
	if (bParam1 > iVar0)
	{
		return UNK_0x12ABC45272B87562(iParam0, bParam1);
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_219(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_220()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_221(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_222()
{
	vector3 vVar0;
	int iVar3;

	if (bLocal_1779)
	{
		if (func_9(bLocal_1419))
		{
			if (Local_580 == 0)
			{
				vVar0 = { -193.8895f, -1608.292f, 32.9962f };
			}
			else if (Local_580 == 1)
			{
				vVar0 = { 315.519f, 334.9548f, 104.469f };
			}
			else if (Local_580 == 2)
			{
				vVar0 = { -679.8616f, -2360.6f, 12.86522f };
			}
			else if (Local_580 == 3)
			{
				vVar0 = { 816.6395f, -1170.496f, 27.6677f };
			}
			else if (Local_580 == 4)
			{
				vVar0 = { -997.5678f, -1153.997f, 1.15735f };
			}
			else
			{
				vVar0 = { UNK_0x8A5E176FF719A014(UNK_0x68F4C0EC296D3901(bLocal_1419, true), UNK_0xD9522BA9E27E1349(bLocal_1419), 0f, 5f, 0f) };
			}
			UNK_0xDD353D0E9C789D0E(&iVar3);
			UNK_0x96167B03C5A77156(false, vVar0, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			if (Local_580 == 2)
			{
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(false, bLocal_1427, 0);
			}
			UNK_0x75ABDC5F81978924(iVar3);
			if (UNK_0xB4ECF989E2C1DAC8(bLocal_1419, bLocal_1403, "_grid_girl_end", 3))
			{
				UNK_0xFB131B855F2FD560(bLocal_1419, bLocal_1403, "_grid_girl_end", -8f);
			}
			UNK_0xA3BF0AA5A2608191(bLocal_1419);
			UNK_0x78ADC381772E3D54(bLocal_1419, iVar3);
			UNK_0xBD453909DC26A85D(bLocal_1419, joaat("MOTIONSTATE_WALK"), false, 0, 1);
			UNK_0xF82EA857DA10E0CD(&iVar3);
			bLocal_1779 = false;
		}
	}
}

bool func_223(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (UNK_0x9F4FE516EAACCFC5(uParam0->f_5[4]))
			{
				if (!UNK_0xFA06B985B30FB0FC(uParam0->f_5[4]))
				{
					uParam0->f_5[5] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_138[5 /*3*/], uParam0->f_163[5 /*3*/], 25.3742f, 0, 2);
					UNK_0xF1E4C781086FABC1(uParam0->f_5[5], uParam0->f_5[4], 4500, 0, 1);
					UNK_0x91F5B0244AAE6222(uParam0->f_5[5], "HAND_SHAKE", 0.3f);
					UNK_0x9A8DDC7C522F5BF5(uParam0->f_5[4], 0);
					UNK_0x4D7F4CC43D4D0DE3(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
			}
			else if (UNK_0x9F4FE516EAACCFC5(uParam0->f_5[5]))
			{
				if (!UNK_0xFA06B985B30FB0FC(uParam0->f_5[5]))
				{
					uParam0->f_5[6] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_138[6 /*3*/], uParam0->f_163[6 /*3*/], 50f, 0, 2);
					uParam0->f_5[7] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_138[7 /*3*/], uParam0->f_163[7 /*3*/], 50f, 0, 2);
					UNK_0xE3BB8E05FCEB3FBE(uParam0->f_5[6], true);
					UNK_0xF1E4C781086FABC1(uParam0->f_5[7], uParam0->f_5[6], 2000, 3, 1);
					UNK_0x91F5B0244AAE6222(uParam0->f_5[7], "HAND_SHAKE", 0.3f);
					UNK_0x9A8DDC7C522F5BF5(uParam0->f_5[5], 0);
				}
			}
			else if (UNK_0x9F4FE516EAACCFC5(uParam0->f_5[7]))
			{
				if (!UNK_0xFA06B985B30FB0FC(uParam0->f_5[7]))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_224(var uParam0, var uParam1)
{
	if (UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E())
	{
		func_236(*uParam1);
		func_228(&Local_119, 0);
	}
	func_225(uParam0);
}

void func_225(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_227(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_226(0);
}

void func_226(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_227(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_234(uParam0);
		func_233(uParam0);
		func_232(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_230();
	}
	if (UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		UNK_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (UNK_0x58424C49F8924842())
	{
		func_229(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_229(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_230()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_231(&(Global_1835392.f_2780));
	func_229(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_229(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_229(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_231(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_232(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_229(&(Global_1835392.f_2830));
}

void func_233(var uParam0)
{
	int iVar0;
	struct<13> Var1;

	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_229(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_234(var uParam0)
{
	int iVar0;
	struct<35> Var1;

	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_235(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_229(&(Global_1835008.f_1));
	UNK_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, -1);
}

void func_236(var uParam0)
{
	UNK_0xE17FDF9E3068281B(&uParam0);
}

void func_237(int iParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (UNK_0x9F4FE516EAACCFC5(iParam0->f_5[2]))
	{
		*iParam0 = 0;
		UNK_0x9A1335ECD7BD117F("MinigameTransitionIn");
		UNK_0x4D7F4CC43D4D0DE3(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
		if (bParam1)
		{
			iParam0->f_5[3] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), iParam0->f_138[3 /*3*/], iParam0->f_163[3 /*3*/], 25.3742f, 0, 2);
			UNK_0xE3BB8E05FCEB3FBE(iParam0->f_5[3], true);
			iParam0->f_5[4] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), iParam0->f_138[4 /*3*/], iParam0->f_163[4 /*3*/], 25.3742f, 0, 2);
			UNK_0xF1E4C781086FABC1(iParam0->f_5[4], iParam0->f_5[3], 600, 1, 1);
			UNK_0xDE0127155AF9E64F(iParam0->f_5[3], 1f);
			UNK_0x91F5B0244AAE6222(iParam0->f_5[3], "HAND_SHAKE", 0.3f);
			UNK_0xDE0127155AF9E64F(iParam0->f_5[4], 1f);
			UNK_0x91F5B0244AAE6222(iParam0->f_5[4], "HAND_SHAKE", 0.3f);
		}
		else
		{
			vVar0 = { UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0f, -5f, 1f) };
			vVar3 = { UNK_0x835730A2D89F6093(UNK_0x16F2683693E537C9(), 2) };
			iParam0->f_5[3] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0 + Vector(20f, 0f, 0f), vVar3 + Vector(0f, 0f, 55f), 50f, 0, 2);
			UNK_0xE3BB8E05FCEB3FBE(iParam0->f_5[3], true);
			iParam0->f_5[4] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, 50f, 0, 2);
			UNK_0xF1E4C781086FABC1(iParam0->f_5[4], iParam0->f_5[3], 600, 1, 1);
			UNK_0xDE0127155AF9E64F(iParam0->f_5[3], 1f);
			UNK_0xDE0127155AF9E64F(iParam0->f_5[4], 1f);
			UNK_0x9A8DDC7C522F5BF5(iParam0->f_5[2], 0);
			iParam2 = iParam2;
		}
		UNK_0x82A772610883F395("MinigameTransitionOut", 0, 0);
	}
}

void func_238()
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	UNK_0xF3D5CA5E09CE41C7();
	UNK_0xD60411959D5D930B(0f);
	switch (iLocal_575)
	{
		case 0:
			func_403(joaat("A_F_Y_GENHOT_01"));
			UNK_0x3F423BF5B8125A50(bLocal_1403);
			bLocal_1397 = (UNK_0x1C0640BA9A7327B3() - Local_586.f_5);
			iLocal_1398 = -1;
			iLocal_1624 = UNK_0x1C0640BA9A7327B3() + 1000;
			bLocal_1773 = true;
			bLocal_1774 = false;
			bLocal_1775 = false;
			bLocal_1777 = true;
			if (Local_598.f_247 < 2)
			{
				Local_586.f_10 = bLocal_1397;
			}
			UNK_0xA37A90C62806D848(1);
			bLocal_563 = true;
			func_392(Local_580);
			func_389(&Local_1205);
			bLocal_1776 = UNK_0x1963B11DE70153E0();
			func_384(&uLocal_1781, Local_580, Local_586.f_11, Local_598.f_249 + 1, bLocal_1397);
			if (func_178(vLocal_18.x))
			{
				UNK_0x7B4256FB57F5E15D(vLocal_18.x, 0);
			}
			bVar0 = UNK_0xA30EC016B12C03E4();
			if (UNK_0xE1DBBD6CE209517C(bVar0))
			{
				UNK_0x98E4DC66A651C9FA(bVar0, false, false);
			}
			if (Local_580.f_1 == 3)
			{
				UNK_0x11E0F00830F70E15((UNK_0x1C0640BA9A7327B3() - iLocal_1622), 7, Local_580);
			}
			else
			{
				UNK_0x11E0F00830F70E15((UNK_0x1C0640BA9A7327B3() - iLocal_1622), 8, Local_580);
				fVar1 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
				fVar2 = func_383(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[0 /*3*/]);
				fVar3 = (fVar1 - fVar2);
				if (fVar3 < 20f && fVar3 > -20f)
				{
					UNK_0xE9362E4D600DD12A(UNK_0x16F2683693E537C9(), vLocal_18.x, Local_598[0 /*3*/], 25f, 1, UNK_0x134B62B726CEC8E6(vLocal_18.x), 17563684, 3f, 5f);
				}
			}
			iLocal_575 = 1;
			break;
		case 1:
			UNK_0x3FC8DBCC154CA56B();
			func_392(Local_580);
			if (UNK_0x91E3F625EF57450D(2))
			{
				UNK_0x5D80F91A16C40CDE();
			}
			if (iLocal_1131 != 0)
			{
				if (UNK_0x9F4FE516EAACCFC5(Local_1205.f_5[0]))
				{
					UNK_0xE223EB8FE6F8CC15(iLocal_1131);
					iLocal_1131 = 0;
				}
			}
			if (func_178(vLocal_18.x))
			{
				if (func_381(&vLocal_18, &Local_1205, Local_580))
				{
					if (func_368())
					{
						if (Local_580.f_1 == 3 && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
						{
							if (func_178(vLocal_18.x))
							{
								if (func_366(vLocal_18.x, 20f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0) && UNK_0x6AC695D09170F27D(vLocal_18.x))
								{
									UNK_0xB078AFA7242F1F7B(vLocal_18.x, true);
								}
							}
						}
						if (iLocal_1398 < 0)
						{
							iLocal_1398 = UNK_0x1C0640BA9A7327B3() + 2000;
							if (Local_580 == 4 && Local_586.f_11 != 1)
							{
								UNK_0xA47B46945FF6DE74(vLocal_18.x, -1051.519f, -1147.217f, 1.0868f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(vLocal_18.x, 303.3337f);
								UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
								UNK_0x1AEF7184B203A58D(vLocal_18.x, 0f);
							}
						}
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0) && UNK_0xBBA8A868118C90ED(vLocal_18.x, -1, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), vLocal_18.x, -1);
						}
						if (Local_580.f_1 == 3)
						{
							func_365();
						}
						else
						{
							func_32(1);
						}
						if (Local_1205 == 3)
						{
							func_363(vLocal_18.x);
						}
						if (((UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E()) && iLocal_1398 > 0) && UNK_0x1C0640BA9A7327B3() > iLocal_1398)
						{
							if (bLocal_1774)
							{
								if (UNK_0xBFC0798A6E3417F9(2, 202))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
									func_150(&(Local_1205.f_14));
									func_389(&Local_1205);
									bLocal_1774 = false;
								}
								else if (bLocal_1775)
								{
									if (func_362(&Local_119))
									{
										func_150(&(Local_1205.f_14));
										func_164(&(Local_1205.f_14), 0, 0, 1, 1);
										func_163(&(Local_1205.f_14), "HUD_INPUT43", 2, 202, 1, 1, 0);
										func_163(&(Local_1205.f_14), "SCLB_PROFILE", 2, 217, 1, 1, 0);
										bLocal_1775 = false;
									}
								}
							}
							else if (UNK_0xBFC0798A6E3417F9(2, 211))
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								func_150(&(Local_1205.f_14));
								func_164(&(Local_1205.f_14), 0, 0, 1, 1);
								func_163(&(Local_1205.f_14), "HUD_INPUT43", 2, 202, 1, 1, 0);
								if (func_362(&Local_119))
								{
									func_163(&(Local_1205.f_14), "SCLB_PROFILE", 2, 217, 1, 1, 0);
									bLocal_1775 = false;
								}
								else
								{
									bLocal_1775 = true;
								}
								bLocal_1774 = true;
							}
						}
						if (bLocal_1777)
						{
							if (Local_586.f_11 <= 1)
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 1);
							}
							else
							{
								UNK_0x4D7F4CC43D4D0DE3(-1, "RACE_PLACED", "HUD_AWARDS", 1);
							}
							bLocal_1777 = false;
						}
						if (bLocal_1774)
						{
							if (UNK_0x1963B11DE70153E0())
							{
								func_287(&iLocal_1394);
								func_151(&(Local_1205.f_14), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
							}
							else if (func_275(&iLocal_1623, 0))
							{
								iLocal_1623 = 0;
								func_150(&(Local_1205.f_14));
								func_389(&Local_1205);
								bLocal_1774 = false;
								bLocal_1776 = false;
							}
						}
						else
						{
							func_274(&uLocal_1781);
							if (UNK_0x1963B11DE70153E0() != bLocal_1776)
							{
								func_150(&(Local_1205.f_14));
								func_389(&Local_1205);
								bLocal_1776 = UNK_0x1963B11DE70153E0();
							}
							if (UNK_0x1C0640BA9A7327B3() > iLocal_1398)
							{
								func_151(&(Local_1205.f_14), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
								if (UNK_0xBFC0798A6E3417F9(2, 215))
								{
									func_273(&uLocal_1781);
									UNK_0x98868AF51859FC75(vLocal_18.x, 1);
									iLocal_575 = 2;
								}
								else if (UNK_0xBFC0798A6E3417F9(2, 216))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
									SYSTEM::WAIT(0);
									UNK_0x3FC8DBCC154CA56B();
									func_224(&uLocal_1781, &(iLocal_1394[0]));
									func_186();
									func_150(&(Local_1205.f_14));
									func_270();
									if (func_178(vLocal_18.x))
									{
										UNK_0x98868AF51859FC75(vLocal_18.x, 1);
									}
									if (Local_580.f_1 == 3)
									{
										if (func_178(vLocal_18.x))
										{
											UNK_0xB078AFA7242F1F7B(vLocal_18.x, false);
										}
									}
									func_2(1);
									func_237(&Local_1205, 0, 0);
								}
							}
						}
					}
				}
				else
				{
					func_368();
					func_266(&uLocal_1781, 0, 0);
				}
			}
			if (bLocal_1773)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_1624)
				{
					func_392(Local_580);
					bLocal_1773 = false;
				}
			}
			break;
		case 2:
			UNK_0x3FC8DBCC154CA56B();
			if (func_240(&uLocal_1781, 0, 1065353216 /* Float: 1f */, 0, 0, 0))
			{
				if (Local_580.f_1 == 3)
				{
					if (func_178(vLocal_18.x))
					{
						UNK_0xB078AFA7242F1F7B(vLocal_18.x, false);
					}
				}
				if (func_239())
				{
					if (func_9(bLocal_1419))
					{
						UNK_0xC6EB89C59F2AF6B8(bLocal_1419, bLocal_1403, "_grid_girl_end", 1000f, -8f, 5500, 0, false, 0, 0, 0);
					}
					iLocal_574 = 4;
					iLocal_575 = 0;
				}
				else
				{
					func_224(&uLocal_1781, &(iLocal_1394[0]));
					func_150(&(Local_1205.f_14));
					func_237(&Local_1205, 0, 1);
					if (UNK_0x9F4FE516EAACCFC5(Local_1205.f_5[4]))
					{
						if (!UNK_0xFA06B985B30FB0FC(Local_1205.f_5[4]))
						{
							if (UNK_0x9F4FE516EAACCFC5(Local_1205.f_5[3]))
							{
								UNK_0xDE0127155AF9E64F(Local_1205.f_5[3], 0f);
							}
							UNK_0xDE0127155AF9E64F(Local_1205.f_5[4], 0f);
							SYSTEM::WAIT(0);
							UNK_0x3FC8DBCC154CA56B();
							UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < 8)
							{
								if (UNK_0x9F4FE516EAACCFC5(Local_1205.f_5[iVar4]))
								{
									UNK_0x9A8DDC7C522F5BF5(Local_1205.f_5[iVar4], 0);
								}
								iVar4++;
							}
							iLocal_574 = 4;
							iLocal_575 = 2;
						}
					}
					else
					{
						iLocal_574 = 4;
						iLocal_575 = 2;
					}
				}
			}
			break;
	}
}

bool func_239()
{
	if (Local_586.f_11 == 1)
	{
		if ((((Local_580 == 0 || Local_580 == 1) || Local_580 == 2) || Local_580 == 3) || Local_580 == 4)
		{
			return true;
		}
	}
	return false;
}

bool func_240(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	if (UNK_0xF4CCC8CB6DE7F1AE() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = UNK_0xF4CCC8CB6DE7F1AE();
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0x28072FDD60CE3A6E(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), 1))
		{
			uParam0->f_575 = 1;
			return true;
		}
		if (UNK_0x946BFA82EB988C81(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			uParam0->f_575 = 1;
			return true;
		}
	}
	if (!uParam0->f_564)
	{
		if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x31A33F7BCB08CB80(true);
			uParam0->f_564 = 1;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
			}
		}
	}
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(19);
	UNK_0x38C3A68D7861DCFD(2, 19, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 28, 1);
	UNK_0x38C3A68D7861DCFD(0, 29, 1);
	UNK_0x38C3A68D7861DCFD(0, 171, 1);
	func_265(0);
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (UNK_0xBB16188FFCC4B1B5() || (UNK_0x757EF87A33649210() && !UNK_0x7BCE0E6DD4A1F749()))
		{
			UNK_0x5D80F91A16C40CDE();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_170(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
		{
			case 1:
				UNK_0x82A772610883F395("SuccessFranklin", 1000, 0);
				break;
			case 2:
				UNK_0x82A772610883F395("SuccessTrevor", 1000, 0);
				break;
			default:
				UNK_0x82A772610883F395("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (bParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_264(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_264(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_264((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_264(30f) - func_264(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_226(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_243(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_242(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_242(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			UNK_0x7E60D21B163E9D56();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_242(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (UNK_0xB8E3620B82AD47D7(2))
			{
				if (UNK_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_241(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (UNK_0xBFC0798A6E3417F9(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && UNK_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_241(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					UNK_0x7E60D21B163E9D56();
				}
				uParam0->f_559 = func_242((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_242((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_242((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_242((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (UNK_0xBFC0798A6E3417F9(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_226(0);
			}
			return !bVar0;
		}
	}
	func_226(0);
	return true;
}

void func_241(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_155(UNK_0xF59058FCB716F903(2, 215, true));
	func_165("ES_HELP");
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x1200CC973A2399C8(true);
		UNK_0x3CAEA85DA607305E(215);
	}
	UNK_0x7E60D21B163E9D56();
	if (bParam1)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		UNK_0x3CAEA85DA607305E(true);
		func_155(UNK_0xF59058FCB716F903(2, 216, true));
		func_165("ES_XPAND");
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x1200CC973A2399C8(true);
			UNK_0x3CAEA85DA607305E(216);
		}
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

float func_242(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_243(var uParam0, float fParam1, bool bParam2)
{
	bool bVar0;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	var uVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;

	bVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_263() * 0.25f);
	if (UNK_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_165(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_262(&(uParam0->f_13));
				}
				else
				{
					func_165(&(uParam0->f_13));
				}
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0x3CAEA85DA607305E(150);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(100);
				}
				UNK_0x1200CC973A2399C8(true);
				if (uParam0->f_556 == 4)
				{
					UNK_0x3CAEA85DA607305E((uParam0->f_56 - 1));
				}
				else
				{
					UNK_0x3CAEA85DA607305E(uParam0->f_56);
				}
				UNK_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					UNK_0x3CAEA85DA607305E(2);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(69);
				}
				UNK_0x7E60D21B163E9D56();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				UNK_0x7C19E5E4784BD7CF(0.15f);
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
				uParam0->f_3 = 1;
			}
		}
		func_261();
		UNK_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_264((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_263());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_260(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (UNK_0x33D480CCE15C991A(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_260(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_263()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	UNK_0x558EC149EB2BC0A2(2, 215);
	UNK_0x558EC149EB2BC0A2(2, 216);
	UNK_0x558EC149EB2BC0A2(2, 200);
	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_257((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (UNK_0x757EF87A33649210())
			{
				UNK_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x6567AE843FADBA94(uParam0->f_4, 255, 255, 255, bVar0, 0);
			}
			if (uParam0->f_567)
			{
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				UNK_0x38C3A68D7861DCFD(2, 188, 1);
				if (UNK_0xD245978525608929(2, 188))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 187, 1);
				if (UNK_0xD245978525608929(2, 187))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				UNK_0x38C3A68D7861DCFD(2, 202, 1);
				if (UNK_0xD245978525608929(2, 202))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				UNK_0x3584F71E5CA29322(7);
				UNK_0x3584F71E5CA29322(8);
				UNK_0x3584F71E5CA29322(9);
				UNK_0x3584F71E5CA29322(6);
				UNK_0x38C3A68D7861DCFD(0, 140, 1);
				UNK_0x38C3A68D7861DCFD(0, 141, 1);
				UNK_0x38C3A68D7861DCFD(0, 142, 1);
				if (UNK_0xBFC0798A6E3417F9(2, 215) || UNK_0xD245978525608929(2, 200))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					UNK_0x4D7F4CC43D4D0DE3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	UNK_0xA402F6C87C08815C(true, &iVar13, &iVar14, &iVar15, &iVar16);
	UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, bVar0);
	UNK_0xF1F881BAAAFB43B1(fVar9, fVar10);
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_264(6f));
	fVar1 = (fVar1 + (func_264(30f) - func_264((2f * 2f))));
	fVar11 = (fVar2 - func_264((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
		func_261();
		UNK_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_264((2f - 0.5f)) - 0.001388889f)), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_264((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_242((fVar11 / (0.8f * func_264(25f))), 0f, 1f);
			func_253(uParam0, iVar17, (fVar1 + func_264(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_264(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_264((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_264(2f));
					fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
					func_261();
					UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_264((2f * 0.5f))), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_264((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_264((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_264(2f));
			fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
			func_261();
			UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_264((2f * 0.5f))), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_242((fVar11 / (0.8f * func_264(25f))), 0f, 1f);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			func_246(7, 0, 1, &fVar18, &uVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_263()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_263()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_263()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_263()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
				UNK_0xEEF67251E263A87F(1);
			}
			else
			{
				fVar20 = 0.5f;
				UNK_0xEEF67251E263A87F(0);
			}
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			func_245(&(uParam0->f_550), fVar20, (fVar1 + func_264((2f * 2f))), 0, 0, 0);
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
			UNK_0xEEF67251E263A87F(2);
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			UNK_0xAAE406A7DA443B93(0);
			func_261();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar22);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UNK_0x070005E852D4C0E9("PERCENTAGE");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0);
					break;
				case 1:
					UNK_0x070005E852D4C0E9("FO_TWO_NUM");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0x6D99DF8263D35CE5(uParam0->f_555);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0);
					break;
				case 2:
					UNK_0x070005E852D4C0E9("MTPHPER_XPNO");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0);
					break;
				case 5:
					UNK_0x070005E852D4C0E9("ESDOLLA");
					UNK_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				bVar38 = bVar0;
				switch (uParam0->f_557)
				{
					case 1:
						UNK_0xA402F6C87C08815C(107, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 3:
						UNK_0xA402F6C87C08815C(109, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
					case 2:
						UNK_0xA402F6C87C08815C(108, &iVar35, &iVar36, &iVar37, &bVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_244(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_264(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				UNK_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))), 0);
			}
			fVar1 = (fVar1 + (func_264(30f) - 2f));
		}
	}
}

float func_244(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_245(bool bParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UNK_0xAAE406A7DA443B93(iParam3);
	UNK_0x7BBAC160090910C3(iParam5);
	func_261();
	if (bParam4)
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(bParam0);
	}
	else
	{
		UNK_0x070005E852D4C0E9(bParam0);
	}
	UNK_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

int func_246(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_252(iParam0), 64);
	StringCopy(&cVar16, func_249(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_248())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_248())
			{
				fVar34 = 1f;
			}
			if (UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
			{
				UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { UNK_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_247(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_247(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!UNK_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_247(int iParam0)
{
	switch (iParam0)
	{
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

bool func_248()
{
	int iVar0;
	int iVar1;
	float fVar2;

	UNK_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

var func_249(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_251(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_250(&uVar3);
			}
		}
		else
		{
			return func_250(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_250(var uParam0)
{
	return uParam0;
}

struct<13> func_251(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_252(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_251(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_250(&uVar0);
		}
		else
		{
			return func_250(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &uVar3);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	UNK_0xF1F881BAAAFB43B1(fParam3, fParam4);
	UNK_0xEEF67251E263A87F(1);
	UNK_0xD3539A877EC25E86(1f, func_255(14f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_261();
	if (uParam0->f_531[iParam1])
	{
		UNK_0x070005E852D4C0E9("STRING");
		UNK_0xD06AC7C87A34A6AD(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		UNK_0x070005E852D4C0E9(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UNK_0x6D99DF8263D35CE5(uParam0->f_489[iParam1]);
		}
	}
	UNK_0xE0026608C37C7C41(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		case 1:
			func_246(7, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_249(7, 0), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 2:
			func_246(5, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_249(5, 0), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 3:
			func_246(6, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_249(6, 0), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UNK_0xEEF67251E263A87F(1);
	}
	else
	{
		UNK_0xEEF67251E263A87F(2);
	}
	UNK_0xD3539A877EC25E86(1f, func_255(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	func_254(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_254(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = true;
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_261();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_255(18f));
			UNK_0x7BBAC160090910C3(4);
			if (bParam0 < 0)
			{
				UNK_0xBBA442527B4BB1A6("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			else
			{
				UNK_0xBBA442527B4BB1A6("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
				fVar1 = UNK_0x79E367314AFBB5CA(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UNK_0xD3539A877EC25E86(1f, func_255(14f));
			break;
	}
	UNK_0x3A820E495A7BA3E5(bVar0);
	switch (iParam5)
	{
		case 11:
			UNK_0x070005E852D4C0E9("PERCENTAGE");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 1:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 2:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("FO_TWO_NUM");
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 4:
		case 5:
			UNK_0xD3539A877EC25E86(1f, func_255(18f));
		case 3:
			if (bParam0 < 0)
			{
				UNK_0x070005E852D4C0E9("ESMINDOLLA");
				UNK_0xCBD015EC7E4226BC((-1 * bParam0), 1);
			}
			else
			{
				UNK_0x070005E852D4C0E9("ESDOLLA");
				UNK_0xCBD015EC7E4226BC(bParam0, 1);
			}
			break;
		case 6:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
		case 7:
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0xD06AC7C87A34A6AD(bParam4);
			Jump @837; //curOff = 654
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 14);
			Jump @837; //curOff = 678
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 6);
			Jump @837; //curOff = 701
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			Jump @837; //curOff = 726
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			Jump @837; //curOff = 751
			UNK_0x070005E852D4C0E9("AHD_DIST");
			UNK_0x6D99DF8263D35CE5(bParam0);
			Jump @837; //curOff = 768
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			Jump @837; //curOff = 789
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			Jump @837; //curOff = 810
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam1);
			Jump @837; //curOff = 825
			UNK_0x070005E852D4C0E9(bParam4);
			if (iParam5 != 17)
			{
				if (iParam5 == 4 || iParam5 == 5)
				{
					UNK_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0);
					UNK_0xD3539A877EC25E86(1f, func_255(14f));
				}
				else
				{
					UNK_0xE0026608C37C7C41(fParam2, fParam3, 0);
				}
			}
		}

float func_255(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_256(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_257(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_259(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_258(7, bVar0);
		Global_1378678.f_4562[bVar0] = bParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = bParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_258(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_259(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

float func_260(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return (UNK_0x79E367314AFBB5CA(1) / 2f);
}

void func_261()
{
	UNK_0xD9ACBBA59FD5A09E(1);
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x757EF87A33649210())
	{
		UNK_0xD9ACBBA59FD5A09E(7);
	}
	UNK_0x5DD950F92F816F03(0);
}

void func_262(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

float func_263()
{
	float fVar0;

	fVar0 = 1f;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_264(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_265(int iParam0)
{
	if (func_177())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_175(0))
		{
			func_173(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

int func_266(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_269(uParam0);
	func_268(uParam0);
	if (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "SPR_RESULT") || (UNK_0x7F8A39872A07D2CE(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
		UNK_0x0D3BE1DE0262A012("MPLeaderboard", 0);
		UNK_0x0D3BE1DE0262A012("MPHud", 0);
		uParam0->f_1 = UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = UNK_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!UNK_0x83D8570832F172A7(uParam0->f_1) || !UNK_0x27117E2CDD4D67C3("CommonMenu")) || !UNK_0x27117E2CDD4D67C3("MPLeaderboard")) || !UNK_0x27117E2CDD4D67C3("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_267(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_241(uParam0, 1);
		}
		else
		{
			func_241(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_267(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	UNK_0x7E60D21B163E9D56();
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(2);
	func_155(UNK_0xF59058FCB716F903(2, 188, true));
	func_165("ES_HELP_TU");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(true);
	func_155(UNK_0xF59058FCB716F903(2, 187, true));
	func_165("ES_HELP_TD");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_155(UNK_0xF59058FCB716F903(2, 202, true));
	func_165("ES_HELP_AB");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

void func_268(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, func_255(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UNK_0xBBA442527B4BB1A6("STRING");
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
		else
		{
			UNK_0xBBA442527B4BB1A6(&(uParam0->f_13));
			fVar0 = UNK_0x79E367314AFBB5CA(1);
		}
	}
	else
	{
		UNK_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UNK_0x6D99DF8263D35CE5(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				case 1:
					UNK_0x6B012227B3921E18(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				case 2:
					UNK_0xD06AC7C87A34A6AD(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UNK_0x79E367314AFBB5CA(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_269(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_270()
{
	struct<68> Var0;

	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_272(&(Global_1835013.f_73));
	func_272(&(Global_1835013.f_142));
	func_272(&(Global_1835013.f_211));
	func_272(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_271(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_271(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_272(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_273(var uParam0)
{
	uParam0->f_562 = 0;
	uParam0->f_561 = 0;
	uParam0->f_558 = uParam0->f_572 + 500;
}

void func_274(var uParam0)
{
	func_240(uParam0, 0, 1065353216 /* Float: 1f */, 0, 0, 0);
}

bool func_275(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < UNK_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_229(&Global_1840924);
		func_229(&(Global_1840924.f_49));
		*bParam0 = 0;
		Global_1840924.f_2 = 0;
		func_286(0);
	}
	Global_1840924.f_2 = UNK_0xF4CCC8CB6DE7F1AE();
	iVar1 = -1;
	if (UNK_0x33A494591F2C1975())
	{
		if (UNK_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = UNK_0xFBB4B649DD3EA6F0();
		}
	}
	if ((UNK_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_284() && UNK_0x58424C49F8924842()))
	{
		if (UNK_0xACED3FBF20B322FA())
		{
			func_281(&(Global_1840924.f_3), func_283(&(Global_1840924.f_3)));
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_279(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (!func_284())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, false, true, 0);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
			{
				if (!UNK_0x06F8112AA79C53D9(2, 201))
				{
					UNK_0x5D96D8530B3D0904(bParam0, false);
				}
			}
			else if (UNK_0xB9132A06AE472728(2, 201))
			{
				func_229(&(Global_1840924.f_49));
				func_229(&Global_1840924);
				*bParam0 = 0;
				Global_1840924.f_2 = 0;
				func_286(0);
				return true;
			}
		}
	}
	else
	{
		func_281(&(Global_1840924.f_3), func_283(&(Global_1840924.f_3)));
		if ((func_278(&(Global_1840924.f_49)) && !func_276(&(Global_1840924.f_49), 2000, 1)) && !UNK_0x58424C49F8924842())
		{
			UNK_0x5D96D8530B3D0904(bParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_279(&(Global_1840924.f_3), 0);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, true))
			{
				UNK_0xB0A3CB46BE5B746A(0);
				UNK_0x5D96D8530B3D0904(bParam0, true);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_279(&(Global_1840924.f_3), 0);
			}
		}
		if (func_278(&Global_1840924))
		{
			if (!func_276(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!UNK_0x58424C49F8924842())
				{
					if (UNK_0x1E517F9E1F09160C())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
					}
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
						{
							if (!UNK_0x06F8112AA79C53D9(2, 201))
							{
								UNK_0x5D96D8530B3D0904(bParam0, false);
							}
						}
						else if (UNK_0xB9132A06AE472728(2, 201))
						{
							func_229(&Global_1840924);
							*bParam0 = 0;
							Global_1840924.f_2 = 0;
							func_286(0);
							return true;
						}
					}
				}
				else
				{
					func_229(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_286(0);
					return true;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
				{
					if (!UNK_0x06F8112AA79C53D9(2, 201))
					{
						UNK_0x5D96D8530B3D0904(bParam0, false);
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201))
				{
					func_229(&(Global_1840924.f_49));
					func_229(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_286(0);
					return true;
				}
			}
			else
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0x1A72D8C9F025E5E3())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
					{
						if (!UNK_0x06F8112AA79C53D9(2, 201))
						{
							UNK_0x5D96D8530B3D0904(bParam0, false);
						}
					}
					else if (UNK_0xB9132A06AE472728(2, 201))
					{
						func_229(&(Global_1840924.f_49));
						func_229(&Global_1840924);
						*bParam0 = 0;
						Global_1840924.f_2 = 0;
						func_286(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_276(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_277(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_277(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_278(var uParam0)
{
	return uParam0->f_1;
}

void func_279(var uParam0, bool bParam1)
{
	func_280(uParam0);
	if (bParam1)
	{
		func_286(0);
	}
	uParam0->f_35 = 1;
}

void func_280(var uParam0)
{
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_281(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_282(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x164431059FF80580(uParam0->f_33, 70);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_282(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_283(var uParam0)
{
	return uParam0->f_35;
}

bool func_284()
{
	if (func_285())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_285()
{
	return Global_2461181;
}

void func_286(bool bParam0)
{
	UNK_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		UNK_0xA3B57116ADBCDF5F();
	}
}

void func_287(int iParam0)
{
	if (UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E())
	{
		func_288(&Local_119, iParam0);
	}
}

void func_288(var uParam0, int iParam1)
{
	if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()) && !UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x3584F71E5CA29322(2);
	}
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 143, 1);
	UNK_0x38C3A68D7861DCFD(0, 16, 1);
	UNK_0x38C3A68D7861DCFD(0, 17, 1);
	UNK_0x38C3A68D7861DCFD(0, 14, 1);
	UNK_0x38C3A68D7861DCFD(0, 15, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 12, 1);
	UNK_0x38C3A68D7861DCFD(0, 13, 1);
	UNK_0x38C3A68D7861DCFD(0, 45, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
	UNK_0x38C3A68D7861DCFD(0, 0, 1);
	if (UNK_0x91E3F625EF57450D(2))
	{
		UNK_0x38C3A68D7861DCFD(0, 200, 1);
	}
	Global_2537071.f_3967 = 1;
	Global_1653488 = 1;
	func_289(iParam1[0], uParam0);
}

void func_289(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	var uVar25;
	int iVar27[3];
	bool bVar31;
	struct<13> Var32;
	var uVar45;
	vector3 vVar51[24];
	vector3 vVar57[24];
	bool bVar63;

	func_361(&(Global_1840924.f_49), 1, 0);
	UNK_0xE19C2AAC820D8ED5();
	func_360();
	func_265(0);
	UNK_0x3FC8DBCC154CA56B();
	func_358(1);
	UNK_0x3584F71E5CA29322(10);
	func_357(1);
	func_356(1);
	if (!func_353())
	{
		if (!UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			UNK_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 3))
	{
		*uParam0 = func_352();
		UNK_0x5D96D8530B3D0904(&(uParam1->f_42), 3);
	}
	Var32 = { func_251(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
		{
			if (!UNK_0x1963B11DE70153E0())
			{
				if (Global_1835392.f_2829 != 2)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())
			{
				if (Global_1835392.f_2829 != 3)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!UNK_0x999A3BFD3E9B5D2C())
			{
				if (Global_1835392.f_2829 != 4)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
			{
				UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				UNK_0x7E60D21B163E9D56();
				func_351(*uParam0, Global_1835392.f_2780);
				if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_350(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_348(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 4);
				func_347(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 5);
				func_347(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 6);
				func_347(*uParam0, &bVar6, bVar31, 1, 1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
				func_346(*uParam0);
				UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				UNK_0xA37A90C62806D848(1);
			}
			else
			{
				func_346(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				Global_1835392.f_2829 = 1;
			}
			if (!func_313(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, false))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_351(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_350(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_348(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), false);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				}
				bVar6 = false;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&cVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_312(*uParam0, bVar6, bVar31, &cVar51);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_229(&(Global_1835392.f_2823));
				}
				else if (func_276(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&cVar57, "SC_LB_DL", 24);
					StringIntConCat(&cVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_347(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_312(*uParam0, bVar6, bVar31, &cVar57);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_229(&(Global_1835392.f_2823));
				}
				func_346(*uParam0);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), false);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_351(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_350(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_349(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_348(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 6))
					{
						func_232(&Global_1839723);
						func_308(uParam1, &Global_1839723);
						func_307(uParam1, &Global_1839723);
					}
					bVar6 = false;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_350(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 4);
									func_347(*uParam0, &bVar6, bVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_350(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_347(*uParam0, &bVar6, bVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_347(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 6);
									if (!UNK_0xC2F420D189FDB329())
									{
										bVar63 = true;
									}
									else if (!UNK_0xB0D6327A81292879())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_350(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_347(*uParam0, &bVar6, bVar31, 1, 0);
									}
									else
									{
										func_347(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_306(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_350(uParam1->f_44))
								{
									UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &uVar45);
									if (!Global_1839723[iVar0 /*100*/].f_74 && UNK_0x7F8A39872A07D2CE(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									bVar31 = false;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_305(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
										{
											UNK_0x5D96D8530B3D0904(&bVar31, true);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												UNK_0x5D96D8530B3D0904(&bVar31, 3);
											}
										}
									}
									if (func_350(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!UNK_0xEA6BC48857E0AC4C(&(Global_1839723[iVar0 /*100*/].f_84)) && !UNK_0x7F8A39872A07D2CE(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_304(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_304(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2770, bVar1))
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2754[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_298(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_298(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2761[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_295(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_295(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_294();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											UNK_0x5D96D8530B3D0904(&bVar31, 2);
											UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_293(*uParam0, (bVar6 - 1), bVar31);
										}
									}
									bVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 4);
						func_347(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 5);
						func_347(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 6);
						func_347(*uParam0, &bVar6, bVar31, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
					func_346(*uParam0);
					UNK_0xA37A90C62806D848(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_293(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_346(*uParam0);
					func_290(uParam0, uParam1);
				}
			}
		}
	}
}

void func_290(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;

	iVar1 = uParam1->f_246.f_1;
	if (UNK_0x91E3F625EF57450D(2))
	{
		UNK_0x5D80F91A16C40CDE();
		UNK_0x558EC149EB2BC0A2(2, 239);
		UNK_0x558EC149EB2BC0A2(2, 240);
		UNK_0x558EC149EB2BC0A2(2, 237);
		UNK_0x558EC149EB2BC0A2(2, 238);
		UNK_0x38C3A68D7861DCFD(2, 200, 1);
		if (UNK_0x7FEE810EE9E768EB(2, 241))
		{
			UNK_0x3D9702C33283E122(2, 188, 1f);
		}
		if (UNK_0x7FEE810EE9E768EB(2, 242))
		{
			UNK_0x3D9702C33283E122(2, 187, 1f);
		}
		if (UNK_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					UNK_0x3D9702C33283E122(2, 217, 1f);
				}
			}
		}
	}
	if (!UNK_0x91E3F625EF57450D(2))
	{
		func_292(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, false))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 188) || UNK_0x7FEE810EE9E768EB(2, 188)) || iVar6 < -100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), false);
				func_229(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_291(uParam1, 188))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), false);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, true))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 187) || UNK_0x7FEE810EE9E768EB(2, 187)) || iVar6 > 100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), true);
				func_229(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_291(uParam1, 187))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 3))
	{
		if ((UNK_0x06F8112AA79C53D9(2, 204) || UNK_0xD245978525608929(2, 204)) || UNK_0xBFC0798A6E3417F9(2, 237))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 3);
			func_229(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_291(uParam1, 204))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_293(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_293(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
		}
		if (func_306(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 2))
			{
				if (UNK_0x06F8112AA79C53D9(2, 217) || UNK_0xD245978525608929(2, 217))
				{
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 2);
						UNK_0x7DA6B436D3570520(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!UNK_0x06F8112AA79C53D9(2, 217))
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246), 2);
			}
		}
	}
}

bool func_291(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam1 == 188 || iParam1 == 187)
	{
		func_292(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_276(&(uParam0->f_246.f_3), 250, 0))
		{
			return true;
		}
	}
	else if ((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) || func_276(&(uParam0->f_246.f_3), 250, 0))
	{
		return true;
	}
	return false;
}

void func_292(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_293(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7E60D21B163E9D56();
}

void func_294()
{
	UNK_0x7E60D21B163E9D56();
}

void func_295(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45)
{
	switch (Param0.f_29[bParam43])
	{
		case 4:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 12:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(SYSTEM::FLOOR(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 18 || Param0.f_29[bParam43] == 20)
				{
					bParam44 = (bParam44 * -1f);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 19 || Param0.f_29[bParam43] == 20)
					{
						bParam44 = func_297(bParam44);
					}
					else
					{
						bParam44 = func_296(bParam44);
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

float func_296(bool bParam0)
{
	return (bParam0 / 0.3048f);
}

float func_297(bool bParam0)
{
	return (bParam0 / 1609.344f);
}

void func_298(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;

	if (bParam44 == 2147483647 || bParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam43])
	{
		case 5:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 7:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(-bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 11 && bParam44 < 0)
				{
					bParam44 = (bParam44 * -1);
				}
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 9)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 6:
			if (bParam45)
			{
				if (bParam44 == 2147483647)
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 2:
		case 10:
			if (bParam45)
			{
				bParam44 = (bParam44 * -1);
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 10)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 3:
			if (bParam46)
			{
				if (UNK_0x3FC14104C3FD24D5(bParam44))
				{
					UNK_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					UNK_0x6B012227B3921E18(UNK_0x1739BA50603D849C(bParam44));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
			}
			else if (UNK_0x3FC14104C3FD24D5(bParam44))
			{
				UNK_0x7ACC3006A87F8B39(UNK_0x1739BA50603D849C(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 8:
			if (func_303(bParam44) != 0)
			{
				UNK_0x7ACC3006A87F8B39(func_300(func_303(bParam44), 0));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 14 || Param0.f_29[bParam43] == 16)
				{
					bParam44 = (bParam44 * -1);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 15 || Param0.f_29[bParam43] == 16)
					{
						bParam44 = SYSTEM::FLOOR(func_297(SYSTEM::TO_FLOAT(bParam44)));
					}
					else
					{
						bParam44 = SYSTEM::FLOOR(func_296(SYSTEM::TO_FLOAT(bParam44)));
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 21:
			if (bParam44 > 20)
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_299(bParam44) };
				UNK_0x7ACC3006A87F8B39(&Var0);
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

struct<4> func_299(bool bParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (bParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	StringIntConCat(&Var0, bParam0, 16);
	return Var0;
}

char* func_300(int iParam0, bool bParam1)
{
	struct<32> Var0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE";
		case -159960575:
			return "WT_VEH_WEP";
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		default:
			if (func_302(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_301(&(Var0.f_31));
				}
				else
				{
					return func_301(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_301(var uParam0)
{
	return uParam0;
}

int func_302(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_303(bool bParam0)
{
	if (bParam0 == 600)
	{
		return joaat("WEAPON_RAILGUN");
	}
	else if (bParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (bParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (bParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (bParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (bParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (bParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (bParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (bParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (bParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (bParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (bParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (bParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (bParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (bParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (bParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (bParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (bParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (bParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (bParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_304(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bParam3 > 0)
	{
		UNK_0x7ACC3006A87F8B39("NUMBER");
		UNK_0x6D99DF8263D35CE5(bParam3);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x045A0775396CC970(bParam4);
	UNK_0x045A0775396CC970(bParam5);
}

bool func_305(var uParam0, var uParam1)
{
	if (!func_306(*uParam0))
	{
		return false;
	}
	if (!func_306(*uParam1))
	{
		return false;
	}
	if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_306(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

void func_307(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_308(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_311(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_311(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_311(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_309(uParam1);
	}
}

void func_309(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_251(UNK_0xD803B885F5E47A62()) };
	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar16 = UNK_0x9B6FABF659F515A2(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_310(&Global_1839593);
				iVar2 = 0;
				UNK_0xAB008D43188476FB(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, true))
				{
					iVar2 = 1;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, false))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_305(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_1839593.f_62)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_1839593.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_1839593.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_310(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

bool func_311(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return true;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return true;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_251(UNK_0xD803B885F5E47A62()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return true;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	*uParam2++;
	return false;
}

void func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	UNK_0x5D96D8530B3D0904(&bParam2, 7);
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7ACC3006A87F8B39(bParam3);
	UNK_0x0EF1238B8EFD4D04();
	UNK_0x7E60D21B163E9D56();
}

bool func_313(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_278(&(Global_1835392.f_2827)))
		{
			func_277(&(Global_1835392.f_2827), 1, 0);
			return false;
		}
		else if (!func_276(&(Global_1835392.f_2827), 1000, 1))
		{
			return false;
		}
	}
	if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_42), 4);
		return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 4))
	{
		func_345(uParam0);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 4);
		return false;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return true;
	}
	if (!func_343(uParam0))
	{
		return false;
	}
	if (!func_341(uParam0))
	{
		return false;
	}
	if (!func_328(uParam0))
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		func_232(&Global_1839723);
		func_308(uParam0, &Global_1839723);
		func_307(uParam0, &Global_1839723);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 6);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 7))
	{
		if (!func_278(&(Global_1835392.f_2830)))
		{
			func_277(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_276(&(Global_1835392.f_2830), 30000, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
		}
		if (func_325(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_322(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_317(&Global_1839723))
		{
			func_314(&Global_1839723);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
			func_314(&Global_1839723);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_314(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_316(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_315(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_310(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (UNK_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_306((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), false);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1839593.f_61), false);
			}
			UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_1839593.f_62)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
				{
					Global_1839593.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_1839593.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			UNK_0x724501B3F806735C(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_12(UNK_0xD803B885F5E47A62()) };
}

void func_315(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iParam1]))
		{
			UNK_0xCA6EE3119323E45C(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(iParam0))
		{
			UNK_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iVar0]))
		{
			iVar3 = UNK_0x4F4FEC8CCCE2C7B1(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_317(var uParam0)
{
	int iVar0;
	int iVar1;

	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_321(uParam0);
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_306((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_320(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		case 1:
			if (func_318(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_306((uParam0[iVar0 /*100*/])->f_32) && func_306(Global_1841022[iVar1 /*13*/]))
					{
						if (UNK_0x4F18738E5BDE9AC9(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_318(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;

	switch (*uParam0)
	{
		case 0:
			if (UNK_0x0742540F16CEE0F4())
			{
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
				UNK_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!UNK_0x0742540F16CEE0F4())
			{
				if (UNK_0x812FCD8C479A4733())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (UNK_0x794D5DBA715427A2(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_319(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (UNK_0x0742540F16CEE0F4())
			{
				UNK_0x47B6D760F5574870();
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
			}
			*uParam0 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_319(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

bool func_320(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_306(*(uParam1[iVar0 /*13*/])))
		{
			if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0 /*13*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_321(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_271(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!UNK_0x0742540F16CEE0F4())
		{
			UNK_0x7BF88BC97F9C422A();
		}
	}
	if (UNK_0x0742540F16CEE0F4())
	{
		UNK_0x47B6D760F5574870();
	}
	Global_1841022.f_206 = 0;
}

bool func_322(var uParam0)
{
	int iVar0;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return true;
	}
	else if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		if (!func_324(uParam0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_323(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_323(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_306(*uParam1))
			{
				if (!UNK_0x60F025D317CE2512(uParam1))
				{
					if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (UNK_0xA3F916BCE430ED26())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(uParam1))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return true;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_271(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_306((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = UNK_0x3F4BBF0887AB451C(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_306((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return true;
	}
	return false;
}

bool func_325(var uParam0)
{
	int iVar0;

	if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_327(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return false;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_326(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_326(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;

	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_306(Var0))
			{
				if (!UNK_0x60F025D317CE2512(&Var0))
				{
					if ((UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E()) || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(&Var0))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_327(var uParam0, bool bParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(bParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_306(Var1[0 /*13*/]))
			{
				if (!UNK_0x60F025D317CE2512(&(Var1[0 /*13*/])))
				{
					*uParam4 = UNK_0x3F4BBF0887AB451C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			*uParam4 = -1;
			return true;
	}
	return false;
}

bool func_328(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;

	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	bVar113 = 2;
	Var116 = { func_251(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar113])
	{
		case 0:
			Global_1835392.f_2775[bVar113] = -1;
			Global_1835392.f_2704[bVar113] = 0;
			Global_1835013.f_374 = -1;
			if (UNK_0x080E9D045AEE5605())
			{
				if (UNK_0xF2EC2A39FF9E838D(&Var116))
				{
					if (UNK_0xD9DA83C40D038174(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[bVar113] = 1;
						return false;
					}
				}
				else
				{
					(*uParam0)[bVar113] = 3;
					return true;
				}
			}
			else
			{
				(*uParam0)[bVar113] = 3;
				return true;
			}
			break;
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_340(), 0, 0, 0))
			{
				func_338(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_340())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								UNK_0xBC584396476EE48A(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_305(&Var0, &Var116) || func_305(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar111, false))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar111, false))
									{
										iVar109 = iVar111;
									}
								}
								func_337(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_340() && iVar109 == 0)
								{
									func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[bVar113] = 0;
									Global_1835392.f_2704[bVar113]++;
								}
								if (func_340() && (func_305(&Var0, &Var116) || func_305(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_305(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[bVar113] = 0;
									}
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									if (func_335(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_350(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[bVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						if (!func_340())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_337(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar111, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_340() && iVar109 == iVar111)
								{
									if (!func_305(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_340() && (func_305(&Var0, &Var116) || func_305(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									if (func_306(Var0) && !func_305(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_305(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[bVar113] < 0)
											{
												Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
											}
										}
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
										if (func_335(uParam0->f_44))
										{
											iVar108 = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_350(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_337(&Var0);
							iVar111++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[bVar113] == -1 && func_340())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[bVar113] = 3;
						}
						else
						{
							(*uParam0)[bVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar113] = -1;
						(*uParam0)[bVar113] = 2;
					}
				}
				else
				{
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar113] = -1;
					(*uParam0)[bVar113] = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
				}
			}
			break;
		case 2:
			if (Global_1835392.f_2775[bVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_330(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_338(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							UNK_0xBC584396476EE48A(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[bVar113] < 11 || bVar114)
							{
								if (func_340() && (func_305(&Var0, &Var116) || func_305(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_335(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_350(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[bVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[bVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									if (func_335(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_350(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_337(&Var0);
							iVar106++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar113] = 3;
				}
				else
				{
					UNK_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
					Global_1835392.f_2704[bVar113] = 0;
					(*uParam0)[bVar113] = 3;
				}
				if (Global_1835392.f_2775[bVar113] == -1 && func_340())
				{
					if (Global_1835392.f_2704[bVar113] >= 1)
					{
						func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
					Global_1835392.f_2704[bVar113]++;
				}
			}
			break;
		case 3:
			func_329(bVar113, Global_1835013.f_374);
			(*uParam0)[bVar113] = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_329(bool bParam0, int iParam1)
{
	int iVar0;

	if ((func_340() && Global_1835392.f_2704[bParam0] > Global_1835392.f_2775[bParam0]) && Global_1835392.f_2775[bParam0] >= 0)
	{
		if (iParam1 != Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[bParam0])
			{
				if (iVar0 != Global_1835392.f_2775[bParam0])
				{
					if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
					{
						if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_340())
		{
		}
		if (Global_1835392.f_2704[bParam0] <= Global_1835392.f_2775[bParam0])
		{
		}
		if (Global_1835392.f_2775[bParam0] < 0)
		{
		}
	}
}

bool func_330(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
				if (UNK_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_331(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_361(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

bool func_332()
{
	if (UNK_0x798A3F1296751F46() && !func_353())
	{
		return true;
	}
	return false;
}

bool func_333()
{
	if (UNK_0xA9C9C7E04514E320() || Global_1835008)
	{
		func_334();
		return true;
	}
	return false;
}

void func_334()
{
	if (func_276(&(Global_1835008.f_1), 120000, 1))
	{
		UNK_0x8EFB4731C3DCDA55(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_229(&(Global_1835008.f_1));
	}
}

bool func_335(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return true;
	}
	return false;
}

void func_336(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_350(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
		sParam1->f_32 = { func_251(UNK_0xD803B885F5E47A62()) };
	}
	sParam1->f_59 = iParam2;
	if (func_335(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_337(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_338(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

bool func_339(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1835013.f_211.f_36[0];
	iVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		iVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
				if (bParam5)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
					{
						if (UNK_0xBED23E8D17964CE1(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (UNK_0xDA5E71D84C8C1F25(uParam2, iVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (UNK_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_340()
{
	if (Global_1835388 && Global_1835389)
	{
		return true;
	}
	return false;
}

bool func_341(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	struct<13> Var114;

	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	bVar113 = true;
	Var114 = { func_251(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = UNK_0xB552DC43762F9C85();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[bVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_340())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_342(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_338(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
					{
						if (func_340())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									UNK_0xBC584396476EE48A(iVar110, &Var0);
									if (func_350(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_305(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar110, false))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar110, false))
									{
										iVar108 = iVar110;
									}
									func_337(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_340() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								Global_1835392.f_2775[bVar113] = 0;
								Global_1835392.f_2704[bVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							UNK_0xBC584396476EE48A(0, &Var0);
							if (func_340() && (func_305(&Var0, &Var114) || func_305(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_306(Var0) && Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_305(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = 1;
								if (func_335(uParam0->f_44))
								{
									iVar111 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_350(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_337(&Var0);
								UNK_0xC4492EA0CF4852F9();
								func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[bVar113] == -1 && func_340())
								{
									if (Global_1835392.f_2704[bVar113] >= 1)
									{
										func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
									Global_1835392.f_2704[bVar113]++;
								}
								return false;
							}
							func_337(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_337(&Var0);
							UNK_0xC4492EA0CF4852F9();
							func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[bVar113] == -1 && func_340())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[1] = 1;
							return false;
						}
						if (!func_340())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar110, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_340() && iVar108 == iVar110)
								{
									if (!func_305(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_340() && (func_305(&Var0, &Var114) || func_305(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_306(Var0) && !func_305(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_305(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_335(uParam0->f_44))
										{
											iVar111 = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_350(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_337(&Var0);
							iVar110++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[bVar113] == -1 && func_340())
						{
							if (Global_1835392.f_2704[bVar113] >= 1)
							{
								func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_336(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
							Global_1835392.f_2704[bVar113]++;
						}
						return false;
					}
					else
					{
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), true);
						return false;
					}
				}
			}
			else
			{
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return false;
			}
			break;
		case 1:
			func_329(bVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_342(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_343(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	int iVar128;

	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	bVar126 = false;
	Var0 = { func_251(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar126])
	{
		case 0:
			Global_1835392.f_2775[bVar126] = -1;
			Global_1835392.f_2704[bVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_344(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_340(), 0, 0, 0))
			{
				func_338(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_340())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								UNK_0xBC584396476EE48A(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_305(&Var13, &Var0) || func_305(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar124, false))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar124, false))
									{
										iVar122 = iVar124;
									}
								}
								func_337(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						UNK_0xBC584396476EE48A(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar126] < 11)
							{
								if (func_340() && iVar122 == 0)
								{
									func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[bVar126] = 0;
									Global_1835392.f_2704[bVar126]++;
								}
								if (func_340() && (func_305(&Var13, &Var0) || func_305(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_305(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[bVar126] = 0;
									}
									MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
									if (func_335(uParam0->f_44))
									{
										iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_350(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[bVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						if (!func_340())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_337(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar124, &Var13);
							if (Global_1835392.f_2704[bVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_340() && iVar122 == iVar124)
								{
									if (!func_305(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
										Global_1835392.f_2704[bVar126]++;
									}
								}
								if (func_340() && (func_305(&Var13, &Var0) || func_305(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar126] < 11)
								{
									if (func_306(Var13) && !func_305(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_305(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[bVar126] < 0)
											{
												Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
											}
										}
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										if (func_335(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_350(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[bVar126]++;
									}
								}
							}
							func_337(&Var13);
							iVar124++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[bVar126] == -1 && func_340())
							{
								if (Global_1835392.f_2704[bVar126] >= 1)
								{
									func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
								Global_1835392.f_2704[bVar126]++;
							}
							(*uParam0)[bVar126] = 2;
						}
						else
						{
							(*uParam0)[bVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar126] = -1;
						(*uParam0)[bVar126] = 1;
					}
				}
				else
				{
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar126] = -1;
					(*uParam0)[bVar126] = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
				}
			}
			break;
		case 1:
			if (Global_1835392.f_2775[bVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_330(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_338(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							UNK_0xBC584396476EE48A(iVar119, &Var13);
							if (func_340() && (func_305(&Var13, &Var0) || func_305(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[bVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_335(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_350(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[bVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[bVar126]++;
											}
										}
										else if (Global_1835392.f_2704[bVar126] == 1 && Global_1835392.f_2775[bVar126] == -1)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
									else if (Global_1835392.f_2704[bVar126] < 11)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										if (func_335(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_350(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
								}
							}
							func_337(&Var13);
							iVar119++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar126] = 2;
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[bVar126] = 0;
					(*uParam0)[bVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[bVar126] == -1 && func_340())
			{
				if (Global_1835392.f_2704[bVar126] >= 1)
				{
					func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_336(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
				Global_1835392.f_2704[bVar126]++;
			}
			break;
		case 2:
			func_329(bVar126, Global_1835013.f_374);
			(*uParam0)[bVar126] = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_344(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;

	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return false;
						}
						iVar0++;
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_345(var uParam0)
{
	int iVar0;

	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar0 = UNK_0x4F4FEC8CCCE2C7B1(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 5);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_42), 5);
			func_315(Global_1835392.f_2826, -1);
		}
	}
}

void func_346(int iParam0)
{
	if (UNK_0x83D8570832F172A7(iParam0))
	{
		UNK_0x6567AE843FADBA94(iParam0, 255, 255, 255, false, 0);
	}
}

void func_347(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	bool bVar66;
	struct<13> Var67;
	bool bVar80;

	bVar0 = "";
	if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
	{
		bVar0 = "SCLB_GLOBAL";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
	{
		*bParam1++;
		bVar0 = "SCLB_FRIENDS";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
	{
		*bParam1++;
		if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
		{
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				bVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_251(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var53))
				{
					UNK_0xD9DA83C40D038174(&Var1, 35, &Var53);
					if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						bVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						bVar0 = "SCLB_CREW";
					}
				}
				else
				{
					bVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			bVar0 = "SCLB_CREW";
		}
	}
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(*bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bVar52)
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0D45A7AB73600CFA(&Var36);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x7E60D21B163E9D56();
	*bParam1++;
	if (bParam4)
	{
		bVar66 = false;
		UNK_0x5D96D8530B3D0904(&bVar66, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar66);
		if (!UNK_0x58424C49F8924842())
		{
			bVar0 = "SCLB_NOT_ONL";
		}
		else if (!UNK_0x999A3BFD3E9B5D2C())
		{
			bVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			bVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			bVar0 = "HUD_PERM";
		}
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0EF1238B8EFD4D04();
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
	else if (bParam3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
		{
			bVar0 = "SCLB_NO_GLOBAL";
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
		{
			if (UNK_0xB552DC43762F9C85() > 0)
			{
				bVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				bVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
		{
			if (UNK_0xC2F420D189FDB329())
			{
				if (UNK_0xB0D6327A81292879())
				{
					if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
					{
						if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
						{
							bVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_251(UNK_0xD803B885F5E47A62()) };
							if (UNK_0xF2EC2A39FF9E838D(&Var67))
							{
								UNK_0xD9DA83C40D038174(&Var1, 35, &Var67);
								if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									bVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									bVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								bVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						bVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					bVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				bVar0 = "SCLB_NO_CREWd";
			}
		}
		bVar80 = false;
		UNK_0x5D96D8530B3D0904(&bVar80, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar80);
		if (bVar52)
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0D45A7AB73600CFA(&Var36);
			UNK_0x0EF1238B8EFD4D04();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0EF1238B8EFD4D04();
		}
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
}

void func_348(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;

	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	UNK_0x779B34565F4D71B1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		UNK_0x7ACC3006A87F8B39(uParam2[iVar0 /*6*/]);
		UNK_0x779B34565F4D71B1();
		iVar0++;
	}
	UNK_0x7E60D21B163E9D56();
}

void func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	if (!UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	if (bParam5 == -1)
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam5);
	}
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
}

bool func_350(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return true;
	}
	return false;
}

void func_351(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

int func_352()
{
	return UNK_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

int func_353()
{
	return func_354(UNK_0xD803B885F5E47A62());
}

int func_354(int iParam0)
{
	switch (func_355(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_355(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

void func_356(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_357(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		func_360();
	}
	func_359(4, -1);
	func_359(6, -1);
	func_359(7, -1);
	func_359(3, -1);
	func_359(1, -1);
	func_359(2, -1);
	func_359(11, -1);
	func_359(13, -1);
	func_359(14, -1);
	func_359(16, -1);
}

void func_359(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1377170.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_360()
{
	Global_2537071.f_4532 = 0;
}

void func_361(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = UNK_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

bool func_362(var uParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, true) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return true;
	}
	return false;
}

void func_363(bool bParam0)
{
	if (func_239())
	{
		if (!func_9(bLocal_1419))
		{
			if (UNK_0xB87F6CF6E5628C67(joaat("A_F_Y_GENHOT_01")))
			{
				if (func_178(bParam0))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					UNK_0x1AEF7184B203A58D(bParam0, 0f);
					UNK_0xA47B46945FF6DE74(bParam0, vLocal_1420, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bParam0, bLocal_1423);
				}
				func_32(1);
				bLocal_1419 = UNK_0x36F2404464202779(5, joaat("A_F_Y_GENHOT_01"), vLocal_1424, bLocal_1427, 1, true);
				func_364(&uLocal_1442, 3, bLocal_1419, "StrRaceGirl", 1, 1);
				UNK_0x33CE5A9E32EA10B2(bLocal_1419, 1);
				UNK_0x71199B01895C6202(joaat("A_F_Y_GENHOT_01"));
			}
		}
	}
}

void func_364(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

void func_365()
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;

	vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	switch (Local_580)
	{
		case 5:
			bVar4 = 180.8171f;
			break;
		case 6:
			bVar4 = 49.2605f;
			break;
		case 7:
			bVar4 = 69.4601f;
			break;
		case 8:
			bVar4 = 191.0019f;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		if (func_9(Local_851[iVar0 /*18*/].f_3) && func_178(Local_851[iVar0 /*18*/].f_6))
		{
			UNK_0xA3BF0AA5A2608191(Local_851[iVar0 /*18*/].f_3);
			UNK_0xD8F6A53F4799FAFE(Local_851[iVar0 /*18*/].f_3, bVar4);
			switch (iVar0)
			{
				case 0:
					if (Local_580 == 8)
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -10f, 10f), 1, 0, 0, 1);
					}
					else
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 0f, 10f), 1, 0, 0, 1);
					}
					break;
				case 1:
					if (Local_580 == 8)
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -10f, 0f), 1, 0, 0, 1);
					}
					else
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 10f, 0f), 1, 0, 0, 1);
					}
					break;
				case 2:
					if (Local_580 == 8)
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -12f, -10f), 1, 0, 0, 1);
					}
					else
					{
						UNK_0xA47B46945FF6DE74(Local_851[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 10f, 10f), 1, 0, 0, 1);
					}
					break;
				default:
					func_31(&(Local_851[iVar0 /*18*/].f_3));
					func_147(&(Local_851[iVar0 /*18*/].f_6));
					break;
			}
		}
		iVar0++;
	}
}

bool func_366(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_367(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_367(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

bool func_368()
{
	if ((UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E()) && Local_119.f_44 > 0)
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_377(Local_580, Local_586.f_11, bLocal_1397, Local_586.f_10, vLocal_18.x);
			Global_1835013.f_2 = 1;
		}
		if (func_369(&Local_119))
		{
			Global_1835388 = 1;
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_369(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	bool bVar188;

	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_350(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_251(UNK_0xD803B885F5E47A62()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_376(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_338(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(uParam0->f_44, 0);
				bVar188 = false;
				while (bVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_375(uParam0->f_44, bVar188))
					{
						if (func_374(uParam0->f_44, 4, bVar188))
						{
							UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar188);
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar188);
						}
					}
					bVar188++;
				}
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_306(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							bVar188 = false;
							while (bVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_375(uParam0->f_44, bVar188))
								{
									if (func_374(uParam0->f_44, 4, bVar188))
									{
										Global_1835013.f_73.f_36[bVar188] = UNK_0x14B893B11D05C490(0, bVar188);
										if (Global_1835013.f_73.f_36[bVar188] == -1)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[bVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[bVar188] = UNK_0x1969161BAC0006D6(0, bVar188);
										if (Global_1835013.f_73.f_3[bVar188] == -1f)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[bVar188] = 0f;
											}
										}
									}
								}
								bVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_373();
				if (Global_1835013.f_4)
				{
					if (func_372(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		case 2:
			UNK_0x56218E3881C1B187(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 4:
			if (UNK_0x8CD06866876216F2() && func_371())
			{
				if (func_370())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return true;
				}
			}
			else
			{
				Global_1835013 = 999;
				return true;
			}
			break;
		case 99:
			if (func_372(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				UNK_0x56218E3881C1B187(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 100:
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_338(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (UNK_0x7F8A39872A07D2CE(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 999:
			return true;
	}
	return false;
}

bool func_370()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, true);
}

bool func_371()
{
	return Global_2458936.f_3;
}

bool func_372(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return true;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return true;
	}
	return false;
}

void func_373()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_374(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 190)
	{
		if (bParam2 == 0)
		{
			return false;
		}
	}
	if (iParam0 == 203)
	{
		if (bParam2 == 3 || bParam2 == 6)
		{
			return false;
		}
	}
	if (iParam0 == 912)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 791)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	if (iParam0 == 780)
	{
		if (bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 777)
	{
		if (bParam2 == 3 || bParam2 == 7)
		{
			return false;
		}
	}
	if (iParam0 == 1200)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	iVar0 = UNK_0xE847F6F326D1C162(iParam0, iParam1, bParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return true;
	}
	return false;
}

bool func_375(int iParam0, bool bParam1)
{
	if (UNK_0xD3D4B12287A02195(iParam0, 4, bParam1) == 156)
	{
		return true;
	}
	switch (iParam0)
	{
		case 912:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
		case 780:
			if (bParam1 == 4)
			{
				return true;
			}
			break;
		case 1200:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_376(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
				if (UNK_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;

	if (UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E())
	{
		StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
		StringCopy(&(Var0[1 /*8*/]), "Location", 32);
		StringCopy(&(Var0[2 /*8*/]), "Type", 32);
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
		switch (iParam0)
		{
			case 0:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_1", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			case 1:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_2", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			case 2:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_4", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			case 3:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_5", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			case 4:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_6", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			case 5:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_1", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			case 6:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_2", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			case 7:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_3", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			case 8:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_4", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			default:
				break;
		}
		func_380();
		if (func_379(817, &Var25, &Var0, 3, -1, 1, 0))
		{
			func_378(817, 131, -bParam2, 0f, 0);
			func_378(817, 2, bParam3, 0f, 0);
			func_378(817, 147, bParam2, 0f, 0);
			func_378(817, 149, UNK_0x134B62B726CEC8E6(bParam4), 0f, 0);
			func_378(817, 148, 0, 0f, 0);
			func_378(817, 109, 1, 0f, 0);
			bVar44 = false;
			bVar45 = false;
			bVar46 = false;
			bVar47 = false;
			if (iParam1 == 1)
			{
				bVar44 = true;
				bVar47 = 3;
			}
			else if (iParam1 == 2)
			{
				bVar45 = true;
				bVar47 = 2;
			}
			else if (iParam1 == 3)
			{
				bVar46 = true;
				bVar47 = true;
			}
			UNK_0x6106B2DBBCB1AA39(86, bVar44, 0f);
			UNK_0x6106B2DBBCB1AA39(158, bVar45, 0f);
			UNK_0x6106B2DBBCB1AA39(157, bVar46, 0f);
			UNK_0x6106B2DBBCB1AA39(96, bVar47, 0f);
		}
	}
}

void func_378(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;

	if (!bParam4)
	{
		UNK_0x6106B2DBBCB1AA39(iParam1, bParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(Global_1835013.f_142, 0);
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (bVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_374(iParam0, 4, bVar1))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar1);
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
				}
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == UNK_0xD3D4B12287A02195(iParam0, 4, bVar1))
		{
			bVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_1835013.f_142.f_36[bVar0] = bParam2;
	Global_1835013.f_142.f_3[bVar0] = fParam3;
	if (bParam2 != 0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar0);
	}
	else if (fParam3 != 0f)
	{
		UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar0);
	}
}

bool func_379(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;

	if (!UNK_0x58424C49F8924842())
	{
	}
	if ((!UNK_0x28B41A2A2556BCF3() && (UNK_0x8BB6DE13A9F3105E() || !UNK_0x9AE561F9BC3F06D8())) && UNK_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (UNK_0x080E9D045AEE5605())
			{
				Var69 = { func_251(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var69))
				{
					if (UNK_0xD9DA83C40D038174(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (UNK_0x8CD06866876216F2() && Global_2458936.f_3)
			{
				UNK_0x14388B84A94BC0BD(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				UNK_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return true;
	}
	if (UNK_0x28B41A2A2556BCF3())
	{
	}
	if (!UNK_0x8BB6DE13A9F3105E())
	{
	}
	if (UNK_0x9AE561F9BC3F06D8())
	{
	}
	if (!UNK_0x393EAEC306A49C71())
	{
	}
	return false;
}

void func_380()
{
	int iVar0;

	UNK_0x035C78C5D5EB800E();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

bool func_381(bool bParam0, var uParam1, int iParam2)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		return false;
	}
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0x9F4FE516EAACCFC5(uParam1->f_5[0]))
			{
				func_382(uParam1, iParam2);
				uParam1->f_5[0] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam1->f_138[0 /*3*/], uParam1->f_163[0 /*3*/], uParam1->f_188, 0, 2);
				uParam1->f_5[1] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam1->f_138[1 /*3*/], uParam1->f_163[1 /*3*/], uParam1->f_188, 0, 2);
			}
			else if (!UNK_0xFBB4F23D534EB790(uParam1->f_5[0]))
			{
				UNK_0xE3BB8E05FCEB3FBE(uParam1->f_5[0], true);
				UNK_0xF1E4C781086FABC1(uParam1->f_5[1], uParam1->f_5[0], 2000, 0, 1);
				UNK_0x82A772610883F395("MinigameEndFranklin", 0, 0);
				UNK_0x4D7F4CC43D4D0DE3(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				UNK_0x66472309FEEB3793(1);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0x91F5B0244AAE6222(uParam1->f_5[1], "HAND_SHAKE", 0.3f);
			}
			else
			{
				UNK_0x98868AF51859FC75(*bParam0, 0);
				uParam1->f_3 = (UNK_0x1C0640BA9A7327B3() + uParam1->f_1);
				uParam1->f_4 = (UNK_0x1C0640BA9A7327B3() + uParam1->f_2);
				*uParam1 = 2;
			}
			break;
		case 2:
			if (UNK_0x9F4FE516EAACCFC5(uParam1->f_5[1]))
			{
				if (!UNK_0xFA06B985B30FB0FC(uParam1->f_5[1]))
				{
					uParam1->f_5[2] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam1->f_138[2 /*3*/], uParam1->f_163[2 /*3*/], uParam1->f_188, 0, 2);
					UNK_0xF1E4C781086FABC1(uParam1->f_5[2], uParam1->f_5[1], 600, 1, 1);
					UNK_0xDE0127155AF9E64F(uParam1->f_5[2], 1f);
					UNK_0x9A1335ECD7BD117F("MinigameEndFranklin");
					UNK_0x82A772610883F395("MinigameTransitionIn", 0, 1);
					UNK_0x4D7F4CC43D4D0DE3(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					UNK_0x9A8DDC7C522F5BF5(uParam1->f_5[0], 0);
					UNK_0x9A8DDC7C522F5BF5(uParam1->f_5[1], 0);
				}
			}
			else if (UNK_0x9F4FE516EAACCFC5(uParam1->f_5[2]))
			{
				if (!UNK_0xFA06B985B30FB0FC(uParam1->f_5[2]))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					*uParam1 = 3;
				}
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_382(var uParam0, int iParam1)
{
	int iVar0;

	if (func_178(vLocal_18.x))
	{
		iVar0 = UNK_0x134B62B726CEC8E6(vLocal_18.x);
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_138[0 /*3*/] = { -165.9996f, -1593.64f, 36.05082f };
			uParam0->f_163[0 /*3*/] = { -1.140186f, 0f, -18.93413f };
			uParam0->f_138[1 /*3*/] = { -166.1385f, -1593.818f, 36.05508f };
			uParam0->f_163[1 /*3*/] = { -1.140186f, 0f, -18.47817f };
			uParam0->f_138[2 /*3*/] = { -166.1385f, -1593.818f, 46.05508f };
			uParam0->f_163[2 /*3*/] = { 52.671f, 0f, -18.56f };
			uParam0->f_138[3 /*3*/] = { -167.6591f, -1578.87f, 45.29414f };
			uParam0->f_163[3 /*3*/] = { 52.671f, -0.1338f, 10.8626f };
			if (iVar0 == UNK_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { -167.5634f, -1578.09f, 36.15f };
				uParam0->f_163[4 /*3*/] = { -5.9218f, -0.0947f, 21.8453f };
				uParam0->f_138[5 /*3*/] = { -166.1911f, -1577.527f, 36.0991f };
				uParam0->f_163[5 /*3*/] = { -7.2671f, -0.0947f, 44.6906f };
			}
			else if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { -172.7921f, -1581.98f, 36.2618f };
				uParam0->f_163[4 /*3*/] = { -4.0569f, -0.1415f, -22.1047f };
				uParam0->f_138[5 /*3*/] = { -172.311f, -1582.164f, 36.2613f };
				uParam0->f_163[5 /*3*/] = { -4.0569f, -0.1415f, -19.9102f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { -167.6591f, -1578.87f, 35.29414f };
				uParam0->f_163[4 /*3*/] = { -2.670335f, -0.13378f, 10.86258f };
				uParam0->f_138[5 /*3*/] = { -167.4883f, -1578.681f, 35.28797f };
				uParam0->f_163[5 /*3*/] = { -2.670335f, -0.133781f, 12.42358f };
			}
			if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { -166.3731f, -1571.645f, 37.2137f };
				uParam0->f_163[6 /*3*/] = { -10.5428f, -0.1337f, 132.3746f };
				uParam0->f_138[7 /*3*/] = { -164.2483f, -1569.826f, 37.7305f };
				uParam0->f_163[7 /*3*/] = { -10.5428f, -0.1337f, 142.4265f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { -165.8132f, -1572.278f, 35.57696f };
				uParam0->f_163[6 /*3*/] = { -6.502827f, -0.133783f, 134.8512f };
				uParam0->f_138[7 /*3*/] = { -165.6579f, -1571.71f, 35.63565f };
				uParam0->f_163[7 /*3*/] = { -6.502827f, -0.133782f, 138.7487f };
			}
			uParam0->f_188 = 25f;
			break;
		case 1:
			uParam0->f_138[0 /*3*/] = { 345.9444f, 326.0113f, 104.2977f };
			uParam0->f_163[0 /*3*/] = { -2.2338f, 0.0066f, -123.2325f };
			uParam0->f_138[1 /*3*/] = { 345.6188f, 325.8368f, 104.3046f };
			uParam0->f_163[1 /*3*/] = { -2.2338f, 0.0066f, -125.4908f };
			uParam0->f_138[2 /*3*/] = { 345.6188f, 325.8368f, 114.3046f };
			uParam0->f_163[2 /*3*/] = { 61.4186f, 0.0066f, -125.2516f };
			uParam0->f_138[3 /*3*/] = { 349.7675f, 318.5139f, 114.5701f };
			uParam0->f_163[3 /*3*/] = { 61.4186f, 0.0683f, -51.2922f };
			if (iVar0 == UNK_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { 350.6226f, 319.2393f, 105.5075f };
				uParam0->f_163[4 /*3*/] = { -14.1152f, 0.0341f, -34.8046f };
				uParam0->f_138[5 /*3*/] = { 352.4439f, 318.4305f, 105.5037f };
				uParam0->f_163[5 /*3*/] = { -14.1153f, 0.0341f, -13.9017f };
			}
			else if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { 345.9572f, 322.6875f, 105.8543f };
				uParam0->f_163[4 /*3*/] = { -10.7212f, 0.079f, -88.9707f };
				uParam0->f_138[5 /*3*/] = { 346.243f, 322.2848f, 105.8016f };
				uParam0->f_163[5 /*3*/] = { -9.6145f, 0.079f, -87.2469f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { 349.7675f, 318.5139f, 104.5701f };
				uParam0->f_163[4 /*3*/] = { -6.4077f, 0.0685f, -51.2659f };
				uParam0->f_138[5 /*3*/] = { 349.9963f, 318.3574f, 104.561f };
				uParam0->f_163[5 /*3*/] = { -6.4077f, 0.0685f, -46.9079f };
			}
			if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { 357.8919f, 321.2549f, 105.4607f };
				uParam0->f_163[6 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
				uParam0->f_138[7 /*3*/] = { 359.4669f, 319.8764f, 105.6448f };
				uParam0->f_163[7 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { 356.9244f, 319.9118f, 104.1889f };
				uParam0->f_163[6 /*3*/] = { -3.2411f, 0.0035f, 62.3779f };
				uParam0->f_138[7 /*3*/] = { 357.7713f, 320.1022f, 104.2291f };
				uParam0->f_163[7 /*3*/] = { -3.2411f, 0.0035f, 74.7132f };
			}
			uParam0->f_188 = 25f;
			break;
		case 2:
			uParam0->f_138[0 /*3*/] = { -796.1253f, -2532.318f, 13.7076f };
			uParam0->f_163[0 /*3*/] = { 3.1635f, -0.0349f, 129.4171f };
			uParam0->f_138[1 /*3*/] = { -796.1734f, -2532.26f, 13.7076f };
			uParam0->f_163[1 /*3*/] = { 3.1635f, -0.0349f, 123.6241f };
			uParam0->f_138[2 /*3*/] = { -796.1734f, -2532.26f, 23.7076f };
			uParam0->f_163[2 /*3*/] = { 53.9221f, -0.0349f, 122.1631f };
			uParam0->f_138[3 /*3*/] = { -796.4111f, -2523.561f, 23.9621f };
			uParam0->f_163[3 /*3*/] = { 53.9221f, -0.0707f, -153.6631f };
			if (iVar0 == UNK_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { -796.4529f, -2524.616f, 15.041f };
				uParam0->f_163[4 /*3*/] = { -7.1159f, 0.0458f, -134.7064f };
				uParam0->f_138[5 /*3*/] = { -797.3875f, -2525.879f, 15.0393f };
				uParam0->f_163[5 /*3*/] = { -7.1159f, 0.0458f, -115.5518f };
			}
			else if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { -791.3419f, -2519.918f, 15.0172f };
				uParam0->f_163[4 /*3*/] = { -2.267f, 0.0182f, 170.5412f };
				uParam0->f_138[5 /*3*/] = { -791.8328f, -2519.838f, 15.0171f };
				uParam0->f_163[5 /*3*/] = { -2.267f, 0.0182f, 171.6637f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { -796.4111f, -2523.561f, 13.9621f };
				uParam0->f_163[4 /*3*/] = { -2.3601f, -0.0691f, -153.523f };
				uParam0->f_138[5 /*3*/] = { -796.5952f, -2523.708f, 13.9597f };
				uParam0->f_163[5 /*3*/] = { -2.5866f, -0.0094f, -153.6361f };
			}
			if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { -795.2563f, -2531.812f, 15.4606f };
				uParam0->f_163[6 /*3*/] = { -7.3224f, -0.0241f, -23.3218f };
				uParam0->f_138[7 /*3*/] = { -797.5802f, -2532.983f, 15.7165f };
				uParam0->f_163[7 /*3*/] = { -7.3224f, -0.0241f, -24.3511f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { -797.7468f, -2530.266f, 14.2931f };
				uParam0->f_163[6 /*3*/] = { -7.1993f, -0.0094f, -44.5229f };
				uParam0->f_138[7 /*3*/] = { -796.9835f, -2531.192f, 14.3335f };
				uParam0->f_163[7 /*3*/] = { -8.966f, -0.0094f, -29.9138f };
			}
			uParam0->f_188 = 25f;
			break;
		case 3:
			uParam0->f_138[0 /*3*/] = { 750.5599f, -1140.983f, 30.1426f };
			uParam0->f_163[0 /*3*/] = { 0.0483f, 0.0013f, -107.741f };
			uParam0->f_138[1 /*3*/] = { 750.0837f, -1141.155f, 30.1422f };
			uParam0->f_163[1 /*3*/] = { 0.0483f, 0.0013f, -117.1716f };
			uParam0->f_138[2 /*3*/] = { 750.0837f, -1141.155f, 40.1422f };
			uParam0->f_163[2 /*3*/] = { 46.0912f, 0.0013f, -117.2112f };
			uParam0->f_138[3 /*3*/] = { 813.1603f, -1161.749f, 38.7039f };
			uParam0->f_163[3 /*3*/] = { 11.999f, 0.0201f, -83.4509f };
			if (iVar0 == UNK_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { 815.0908f, -1162.677f, 29.812f };
				uParam0->f_163[4 /*3*/] = { -13.5952f, 0.056f, -61.7062f };
				uParam0->f_138[5 /*3*/] = { 817.5979f, -1163.707f, 29.4702f };
				uParam0->f_163[5 /*3*/] = { -13.1626f, 0.056f, -11.7796f };
			}
			else if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { 810.162f, -1160.633f, 30.37f };
				uParam0->f_163[4 /*3*/] = { -12.1619f, 0.0081f, -85.475f };
				uParam0->f_138[5 /*3*/] = { 810.3062f, -1160.876f, 30.3431f };
				uParam0->f_163[5 /*3*/] = { -11.7112f, 0.0081f, -83.0783f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { 813.1603f, -1161.749f, 28.7039f };
				uParam0->f_163[4 /*3*/] = { -2.9712f, 0.0059f, -83.4627f };
				uParam0->f_138[5 /*3*/] = { 813.6791f, -1162.024f, 28.6743f };
				uParam0->f_163[5 /*3*/] = { -3.9024f, 0.0059f, -79.3115f };
			}
			if (iVar0 == UNK_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { 822.7552f, -1160.912f, 29.7837f };
				uParam0->f_163[6 /*3*/] = { -11.332f, 0.004f, 86.003f };
				uParam0->f_138[7 /*3*/] = { 824.2561f, -1162.348f, 30.0892f };
				uParam0->f_163[7 /*3*/] = { -6.1371f, 0.004f, 85.1825f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { 821.5195f, -1163.616f, 28.5451f };
				uParam0->f_163[6 /*3*/] = { -4.4063f, -0.0244f, 60.9237f };
				uParam0->f_138[7 /*3*/] = { 822.8655f, -1162.841f, 28.6227f };
				uParam0->f_163[7 /*3*/] = { -0.9147f, -0.0244f, 75.4051f };
			}
			uParam0->f_188 = 25f;
			break;
		case 4:
			uParam0->f_138[0 /*3*/] = { -1051.948f, -1152.604f, 1.7317f };
			uParam0->f_163[0 /*3*/] = { 4.3072f, -0.0727f, 97.2603f };
			uParam0->f_138[1 /*3*/] = { -1051.808f, -1152.268f, 1.7187f };
			uParam0->f_163[1 /*3*/] = { 4.3072f, -0.0727f, 90.129f };
			uParam0->f_138[2 /*3*/] = { -1051.808f, -1152.268f, 11.7187f };
			uParam0->f_163[2 /*3*/] = { 52.162f, -0.0727f, 90.129f };
			uParam0->f_138[3 /*3*/] = { -1023.002f, -1126.407f, 12.5596f };
			uParam0->f_163[3 /*3*/] = { 52.162f, -0.0315f, 151.2765f };
			uParam0->f_138[4 /*3*/] = { -1023.002f, -1126.407f, 2.5596f };
			uParam0->f_163[4 /*3*/] = { -2.9801f, -0.0213f, 151.248f };
			uParam0->f_138[5 /*3*/] = { -1023.498f, -1126.546f, 2.5418f };
			uParam0->f_163[5 /*3*/] = { -2.9801f, -0.0213f, 155.1694f };
			uParam0->f_138[6 /*3*/] = { -1028.427f, -1130.713f, 2.3506f };
			uParam0->f_163[6 /*3*/] = { 4.2629f, -0.0213f, -73.0231f };
			uParam0->f_138[7 /*3*/] = { -1028.617f, -1131.717f, 2.6039f };
			uParam0->f_163[7 /*3*/] = { -1.0784f, -0.0213f, -61.3829f };
			uParam0->f_188 = 25f;
			break;
		case 5:
			uParam0->f_138[0 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_163[0 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_138[1 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_163[1 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_138[2 /*3*/] = { 3006.734f, 1170.372f, 22.51514f };
			uParam0->f_163[2 /*3*/] = { 54.30347f, 0f, -20.7533f };
			uParam0->f_188 = 35f;
			break;
		case 6:
			uParam0->f_138[0 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_163[0 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_138[1 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_163[1 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_138[2 /*3*/] = { 3595.856f, 5136.728f, 24.00473f };
			uParam0->f_163[2 /*3*/] = { 50.18856f, 0f, -162.0384f };
			uParam0->f_188 = 35f;
			break;
		case 7:
			uParam0->f_138[0 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_163[0 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_138[1 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_163[1 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_138[2 /*3*/] = { -1466.864f, 2631.414f, 22.13051f };
			uParam0->f_163[2 /*3*/] = { 53.07509f, -0.03981f, -114.1416f };
			uParam0->f_188 = 35f;
			break;
		case 8:
			uParam0->f_138[0 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_163[0 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_138[1 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_163[1 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_138[2 /*3*/] = { 406.0171f, -2727.061f, 21.92501f };
			uParam0->f_163[2 /*3*/] = { 52.28332f, 0.014f, -41.70963f };
			uParam0->f_188 = 35f;
			break;
	}
}

int func_383(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_384(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	func_388(uParam0);
	iVar0 = 0;
	sVar1 = "";
	switch (iParam2)
	{
		case 1:
			iVar0 = 3;
			sVar1 = "SPR_1stpl";
			break;
		case 2:
			iVar0 = 2;
			sVar1 = "SPR_2ndpl";
			break;
		case 3:
			iVar0 = 1;
			sVar1 = "SPR_3rdpl";
			break;
		case 4:
			iVar0 = 0;
			sVar1 = "SPR_4thpl";
			break;
		case 5:
			iVar0 = 0;
			sVar1 = "SPR_5thpl";
			break;
		case 6:
			iVar0 = 0;
			sVar1 = "SPR_6thpl";
			break;
		case 7:
			iVar0 = 0;
			sVar1 = "SPR_7thpl";
			break;
		case 8:
			iVar0 = 0;
			sVar1 = "SPR_8thpl";
			break;
	}
	switch (iParam1)
	{
		case 0:
			sVar2 = "SLOSSANTOS";
			break;
		case 1:
			sVar2 = "CITYCIRCUIT";
			break;
		case 2:
			sVar2 = "AIRPORTR";
			break;
		case 3:
			sVar2 = "FREEWAY";
			break;
		case 4:
			sVar2 = "VERSPUCCI";
			break;
		case 5:
			sVar2 = "NORTHCOAST";
			break;
		case 6:
			sVar2 = "SOUTHCOAST";
			break;
		case 7:
			sVar2 = "CANYON";
			break;
		case 8:
			sVar2 = "LOSSANTOS";
			break;
	}
	func_387(uParam0, sVar1, sVar2, 0);
	func_386(uParam0, 18, "SPR_TIME", "", bParam4, 0, 0, 0);
	uParam0->f_561 = 1;
	if ((bLocal_562 && UNK_0x1963B11DE70153E0()) && UNK_0x8BB6DE13A9F3105E())
	{
		if (bLocal_561 > bParam4 || bLocal_561 <= 0)
		{
			bLocal_561 = bParam4;
		}
		func_386(uParam0, 18, "SPR_BESTTIME", "", bLocal_561, 0, 0, 0);
		if (bLocal_560 > bParam4 || bLocal_560 <= 0)
		{
			bLocal_560 = bParam4;
		}
		func_386(uParam0, 18, "LOB_SPLIT_0", "", bLocal_560, 0, 0, 0);
	}
	if (iParam2 <= 3)
	{
		func_385(uParam0, 1, "SPR_RESULT", iParam2, uParam3, 1, iVar0, 0);
	}
	else
	{
		func_385(uParam0, 0, "SPR_RESULT", iParam2, uParam3, 1, iVar0, 0);
	}
}

void func_385(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = uParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_386(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = bParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_387(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_388(var uParam0)
{
	func_269(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_389(int iParam0)
{
	func_164(&(iParam0->f_14), 0, 0, 1, 1);
	func_163(&(iParam0->f_14), "SPR_CONT2", 2, 215, 1, 1, 0);
	func_163(&(iParam0->f_14), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
	if (UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E())
	{
		func_163(&(iParam0->f_14), "HUD_INPUT68", 2, 211, 1, 1, 0);
	}
	func_391(&(iParam0->f_14), 1);
	func_390(&(iParam0->f_14), 1);
}

void func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 16);
	}
	else
	{
		func_152(&(uParam0->f_1), 16);
	}
}

void func_391(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 1024);
	}
	else
	{
		func_152(&(uParam0->f_1), 1024);
	}
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((UNK_0x1963B11DE70153E0() && UNK_0x8BB6DE13A9F3105E()) && bLocal_563)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 2;
				break;
			case 1:
				iVar0 = 1;
				iVar1 = 1;
				break;
			case 2:
				iVar0 = 2;
				iVar1 = 2;
				break;
			case 3:
				iVar0 = 3;
				iVar1 = 2;
				break;
			case 4:
				iVar0 = 4;
				iVar1 = 2;
				break;
			case 5:
				iVar0 = 5;
				iVar1 = 0;
				break;
			case 6:
				iVar0 = 6;
				iVar1 = 0;
				break;
			case 7:
				iVar0 = 7;
				iVar1 = 0;
				break;
			case 8:
				iVar0 = 8;
				iVar1 = 0;
				break;
			default:
				break;
		}
		func_393(&Local_119, 91, "", "", iVar0, iVar1, 0, 0);
		bLocal_563 = false;
	}
}

void func_393(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	bool bVar16;
	struct<6> Var17;

	if (!UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_402())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_402())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_402())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_402())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_402())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_402())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_402())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		case 38:
		case 39:
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
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_401(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_227 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_400(Global_4456448.f_232883) || func_397(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_396(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2768), true);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						case 9:
							uParam0->f_44 = 966;
							break;
						case 4:
							uParam0->f_44 = 967;
							break;
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						case 2:
							uParam0->f_44 = 970;
							break;
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				default:
					break;
			}
			break;
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_395(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[bVar16]))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2770), bVar16);
		}
		bVar16++;
	}
	Global_1835392.f_2826 = func_394(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_394(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];

	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_350(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

struct<6> func_395(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		default:
			break;
	}
	return Var0;
}

bool func_396(int iParam0)
{
	return iParam0 == 74;
}

bool func_397(int iParam0)
{
	return (func_399(iParam0) || func_398(iParam0));
}

bool func_398(int iParam0)
{
	return iParam0 == 44;
}

bool func_399(int iParam0)
{
	return iParam0 == 45;
}

bool func_400(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_401(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

bool func_402()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return true;
	}
	return false;
}

bool func_403(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	UNK_0x523BCC9DC80CD82F(bParam0);
	return UNK_0xB87F6CF6E5628C67(bParam0);
}

void func_404()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	vector3 vVar4;
	bool bVar7;

	UNK_0xF3D5CA5E09CE41C7();
	func_487();
	func_485(Local_580);
	if (Local_580 == 1)
	{
		if ((Local_586.f_6 > 7 && Local_586.f_6 < 17) || (Local_586.f_8 == 1 && Local_586.f_6 < 2))
		{
			UNK_0xD60411959D5D930B(0f);
		}
		else if (Local_586.f_6 < 8)
		{
			UNK_0xD60411959D5D930B(0.4f);
		}
		else
		{
			UNK_0xD60411959D5D930B(0.1f);
		}
	}
	else if (Local_586.f_8 == 1 && Local_586.f_6 < 3)
	{
		UNK_0xD60411959D5D930B(0f);
	}
	else
	{
		UNK_0xD60411959D5D930B(0.1f);
	}
	switch (iLocal_575)
	{
		case 0:
			if (Local_580.f_1 == 3)
			{
				UNK_0x55D0A2DB35045A35(iLocal_1201);
				UNK_0x8C26F31DFF77D124();
			}
			iLocal_576 = 0;
			iLocal_1441 = -1;
			iLocal_1622 = UNK_0x1C0640BA9A7327B3();
			iLocal_1613 = -1;
			func_484();
			bLocal_1772 = true;
			func_474(1);
			iLocal_1124 = Local_586.f_11;
			iLocal_1125 = UNK_0x1C0640BA9A7327B3() + 7500;
			if (Local_580.f_1 != 3 && Global_111638.f_24974.f_5 < 3)
			{
				func_473("FM_IHELP_SLP", -1);
				Global_111638.f_24974.f_5++;
			}
			iLocal_575 = 1;
			break;
		case 1:
			func_447(1, 0);
			func_446();
			func_430();
			func_423();
			func_421();
			if (iLocal_579 > UNK_0x1C0640BA9A7327B3())
			{
				UNK_0x9501364A300048C6();
			}
			if (func_420())
			{
				iLocal_573 = 4;
				iLocal_574 = 5;
				iLocal_575 = 0;
			}
			if (func_407() && func_474(1))
			{
				if (Local_580.f_1 == 3)
				{
					UNK_0xAD4193DCC43BF34B("RADIO_16_SILVERLAKE");
					UNK_0x8910D3D58E0132B8("SEA_RACE_DURING_RACE");
					UNK_0x8BC9595FD2792B5D("SEA_RACES_OUTRO");
				}
				else
				{
					UNK_0x8910D3D58E0132B8("STREET_RACE_DURING_RACE");
					UNK_0x8BC9595FD2792B5D("STREET_RACE_OUTRO");
				}
				vVar4 = { Local_598[(Local_598.f_248 - 1) /*3*/] };
				UNK_0xA402F6C87C08815C(true, &bVar0, &bVar1, &bVar2, &uVar3);
				if (iLocal_1131 != 0)
				{
					UNK_0xE223EB8FE6F8CC15(iLocal_1131);
				}
				iLocal_1131 = UNK_0x1B26E47E3E30075B(10, vVar4 + Vector(6f, 0f, 0f), Local_598[0 /*3*/], (8.5f * 1.333f), bVar0, bVar1, bVar2, 180, 0);
				iLocal_575 = 2;
			}
			break;
		case 2:
			bVar7 = UNK_0xA30EC016B12C03E4();
			if (UNK_0xE1DBBD6CE209517C(bVar7))
			{
				if (UNK_0x3114787DB5A129EF(bVar7, 0))
				{
					UNK_0x0D00405AED37B7C4(bVar7, 0);
				}
			}
			if (func_175(0))
			{
				func_173(0);
			}
			func_406();
			iLocal_574 = 3;
			iLocal_575 = 0;
			break;
	}
	func_405();
}

void func_405()
{
	switch (iLocal_577)
	{
		case 0:
			if (iLocal_578 > 0)
			{
				if (UNK_0x1C0640BA9A7327B3() < iLocal_578)
				{
					if (UNK_0xBFC0798A6E3417F9(0, 71))
					{
						if (func_178(vLocal_18.x) && UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), vLocal_18.x))
						{
							if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(vLocal_18.x)))
							{
								UNK_0x26174EF2CA74767F(vLocal_18.x, 1);
							}
							UNK_0x82A772610883F395("RaceTurbo", 0, 0);
							iLocal_578 = UNK_0x1C0640BA9A7327B3() + 2000;
							iLocal_577 = 1;
						}
					}
				}
				else
				{
					iLocal_577 = 2;
				}
			}
			break;
		case 1:
			if (UNK_0x1C0640BA9A7327B3() > iLocal_578)
			{
				if (func_178(vLocal_18.x) && UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), vLocal_18.x))
				{
					if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(vLocal_18.x)))
					{
						UNK_0x26174EF2CA74767F(vLocal_18.x, 0);
					}
					iLocal_577 = 2;
				}
			}
			else if (func_178(vLocal_18.x) && UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), vLocal_18.x))
			{
				UNK_0xDFC6BA855748EB10(vLocal_18.x, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

void func_406()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_146(&(Local_851[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

int func_407()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			iLocal_573 = 6;
			iLocal_574 = 5;
			iLocal_575 = 0;
			return 0;
		}
	}
	if (UNK_0xC844350D5D58C99A(vLocal_18.x))
	{
		if (UNK_0xDF1306B443CD3D15(vLocal_18.x, 0) && !func_419())
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0))
			{
				func_417();
				func_410();
				return 1;
			}
			else if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				iLocal_573 = 4;
				iLocal_574 = 5;
				iLocal_575 = 0;
			}
			else
			{
				func_179(0);
				if (func_409("RACES_RHELP") && UNK_0x1C0640BA9A7327B3() > iLocal_1399)
				{
					UNK_0xA37A90C62806D848(1);
				}
				if (!UNK_0xE4EDC4B0E92C078B(vLocal_18.y) && !(Local_580.f_1 == 2 && (UNK_0x7B5606C651AB51B5(vLocal_18.x, 0, 1000) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 1, 1000))))
				{
					vLocal_18.f_1 = UNK_0x5C3B41825F6AC5A0(vLocal_18.x);
					UNK_0x321E019A46034F39(vLocal_18.y, true);
					UNK_0x516E63E474722206(vLocal_18.y, 1f);
					if (Local_580.f_1 == 3)
					{
						UNK_0xC92DB9682A650680("MGSR_FELL_OFF");
					}
					if (vLocal_18.z == 0)
					{
						vLocal_18.f_2 = 1;
						switch (Local_580.f_1)
						{
							case 1:
								func_408("BIKE_BACK", 7500, 1);
								break;
							case 2:
								func_408("CAR_BACK", 7500, 1);
								break;
							case 3:
								func_408("SEA_BACK", 7500, 1);
								break;
						}
					}
				}
			}
		}
		else
		{
			func_417();
			iLocal_573 = 3;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
	}
	return 0;
}

void func_408(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_409(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_410()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (func_9(UNK_0x16F2683693E537C9()))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 272, true);
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0))
			{
				iLocal_1440 = 1;
				iLocal_576 = 3;
			}
			if (!func_409("RACES_RHELP"))
			{
				if (!func_416())
				{
					func_415("RACES_RHELP");
					iLocal_1399 = UNK_0x1C0640BA9A7327B3() + 1000;
				}
				if (((UNK_0x7B5606C651AB51B5(vLocal_18.x, 2, 30000) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 3, 60000)) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 0, 20000)) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 1, 3000))
				{
					func_415("RACES_RHELP");
					iLocal_1399 = UNK_0x1C0640BA9A7327B3() + 1000;
				}
			}
			else if (UNK_0x1C0640BA9A7327B3() > iLocal_1399)
			{
				if ((((func_416() || UNK_0x7B5606C651AB51B5(vLocal_18.x, 2, 30000)) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 3, 60000)) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 0, 20000)) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 1, 3000))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
		}
	}
	if ((UNK_0x06F8112AA79C53D9(0, 75) || UNK_0x7FEE810EE9E768EB(0, 75)) || iLocal_1440 == 1)
	{
		switch (iLocal_576)
		{
			case 0:
				iLocal_1441 = UNK_0x1C0640BA9A7327B3();
				iLocal_576 = 1;
				break;
			case 1:
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_1441) > 500)
				{
					iLocal_1441 = UNK_0x1C0640BA9A7327B3();
					iLocal_576 = 2;
				}
				break;
			case 2:
				func_414((UNK_0x1C0640BA9A7327B3() - iLocal_1441), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_1441) >= 400)
				{
					UNK_0x38C3A68D7861DCFD(0, 75, 1);
				}
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_1441) >= 1500)
				{
					iLocal_576 = 3;
				}
				break;
			case 3:
				UNK_0x38C3A68D7861DCFD(0, 75, 1);
				if (UNK_0xC844350D5D58C99A(vLocal_18.x))
				{
					if (Local_586.f_6 > 0)
					{
						vVar8 = { Local_598[(Local_586.f_6 - 1) /*3*/] };
					}
					else
					{
						vVar8 = { Local_598.f_181[Local_598.f_249 /*3*/] };
					}
					UNK_0x9414396734E14897(bLocal_1430, vVar8, &iVar0);
					iVar1 = iVar0 + 1;
					if (iVar1 >= iLocal_1607)
					{
						iVar1 = 0;
					}
					UNK_0xEF8F639897C675D5(bLocal_1430, iVar0, &vVar2);
					UNK_0xEF8F639897C675D5(bLocal_1430, iVar1, &vVar5);
					if (!UNK_0x558ADED8B93EA0F6(vVar2, 5f) || func_413(vLocal_18.x, vVar2, 1) < 5f)
					{
						UNK_0xA47B46945FF6DE74(vLocal_18.x, vVar2, 1, 0, 0, 1);
						func_411(vLocal_18.x, vVar5);
						UNK_0x51B954DAB1BCAF73(vLocal_18.x);
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), vLocal_18.x, -1);
						}
						UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						UNK_0x2FB9A57162E54BAB(0f);
						if (func_409("RACES_RHELP"))
						{
							UNK_0xA37A90C62806D848(1);
						}
						iLocal_576 = 4;
					}
				}
				break;
			case 4:
				UNK_0x38C3A68D7861DCFD(0, 75, 1);
				if (!UNK_0x06F8112AA79C53D9(0, 75) && !UNK_0x7FEE810EE9E768EB(0, 75))
				{
					UNK_0xEAB026E686C0D991(0, 75, 1);
					iLocal_1441 = -1;
					iLocal_1440 = 0;
					iLocal_576 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_1441 = -1;
		iLocal_1440 = 0;
		iLocal_576 = 0;
	}
}

void func_411(bool bParam0, vector3 vParam1)
{
	bool bVar0;

	bVar0 = func_412(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, 1);
	UNK_0xD8F6A53F4799FAFE(bParam0, bVar0);
}

float func_412(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = UNK_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_413(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

void func_414(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_259(0, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_258(0, bVar0);
		Global_1378678.f_1135[bVar0] = iParam0;
		Global_1378678.f_1135.f_11[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[bVar0] = iParam3;
		Global_1378678.f_1135.f_183[bVar0] = iParam4;
		Global_1378678.f_1135.f_216[bVar0] = iParam5;
		Global_1378678.f_1135.f_227[bVar0 /*3*/] = fParam6;
		Global_1378678.f_1135.f_227[bVar0 /*3*/].f_1 = fParam7;
		Global_1378678.f_1135.f_258[bVar0] = iParam8;
		Global_1378678.f_1135.f_269[bVar0] = iParam9;
		Global_1378678.f_1135.f_312[bVar0] = iParam10;
		Global_1378678.f_1135.f_323[bVar0] = iParam11;
		Global_1378678.f_1135.f_334[bVar0] = iParam12;
		Global_1378678.f_1135.f_345[bVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[bVar0] = iParam14;
		Global_1378678.f_1135.f_367[bVar0] = iParam15;
		Global_1378678.f_1135.f_378[bVar0] = iParam16;
		Global_1378678.f_1135.f_389[bVar0] = iParam17;
		Global_1378678.f_1135.f_400[bVar0] = iParam18;
		Global_1378678.f_1135.f_411[bVar0] = iParam19;
		Global_1378678.f_1135.f_422[bVar0] = iParam20;
		Global_1378678.f_1135.f_433[bVar0] = iParam21;
		Global_1378678.f_1135.f_444[bVar0] = iParam22;
		Global_1378678.f_1135.f_455[bVar0] = iParam23;
		Global_1378678.f_1135.f_466[bVar0] = iParam24;
		Global_1378678.f_1135.f_205[bVar0] = iParam25;
		Global_1378678.f_1135.f_477[bVar0] = iParam26;
		Global_1378678.f_1135.f_488[bVar0] = iParam27;
		Global_1378678.f_1135.f_499[bVar0] = iParam28;
		Global_1378678.f_1135.f_510[bVar0] = iParam29;
		Global_1378678.f_1135.f_521[bVar0] = iParam30;
		Global_1378678.f_1135.f_532[bVar0] = iParam31;
		Global_1378678.f_1135.f_543[bVar0] = iParam32;
		Global_1378678.f_1135.f_554[bVar0] = iParam33;
	}
}

void func_415(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_416()
{
	if (UNK_0x70EED0761B82965E(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
	{
		if (Local_580.f_1 == 2 || Local_580.f_1 == 1)
		{
			return false;
		}
		else if (iLocal_1428 >= 0)
		{
			iLocal_1428 = -1;
		}
	}
	else if (Local_580.f_1 == 3)
	{
		if (UNK_0xE934758D273C899A(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
		{
			iLocal_1428 = -1;
			return true;
		}
		if (iLocal_1428 < 0)
		{
			iLocal_1428 = UNK_0x1C0640BA9A7327B3() + 2000;
		}
		else if (UNK_0x1C0640BA9A7327B3() > iLocal_1428)
		{
			return false;
		}
	}
	return true;
}

void func_417()
{
	if (UNK_0xE4EDC4B0E92C078B(vLocal_18.y))
	{
		UNK_0x142CC44DB769B57E(&(vLocal_18.f_1));
		if (Local_580.f_1 == 3)
		{
			UNK_0xC92DB9682A650680("MGSR_BACK_ON");
		}
	}
	if ((func_418("CAR_BACK", 0, 0) || func_418("BIKE_BACK", 0, 0)) || func_418("SEA_BACK", 0, 0))
	{
		UNK_0x790015DC92C918E2();
	}
}

var func_418(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

bool func_419()
{
	if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0) && Local_580.f_1 == 2)
	{
		if (UNK_0x7B5606C651AB51B5(vLocal_18.x, 0, 1000) || UNK_0x7B5606C651AB51B5(vLocal_18.x, 1, 1000))
		{
			return true;
		}
	}
	return false;
}

bool func_420()
{
	int iVar0;

	if (iLocal_1613 < 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_598.f_249 - 1))
		{
			if (Local_851[iVar0 /*18*/].f_9 > Local_598.f_247)
			{
				iLocal_1613 = (UNK_0x1C0640BA9A7327B3() + 120000);
			}
			iVar0++;
		}
	}
	if (iLocal_1613 > 0)
	{
		if (UNK_0x1C0640BA9A7327B3() > iLocal_1613)
		{
			return true;
		}
	}
	return false;
}

void func_421()
{
	int iVar0;

	if (bLocal_1772 && Local_580 == 1)
	{
		UNK_0x9414396734E14897(bLocal_1430, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &iVar0);
		if (iVar0 > 50 && iVar0 < 70)
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_1771))
			{
				UNK_0x523BCC9DC80CD82F(joaat("BALLER"));
				if (UNK_0xB87F6CF6E5628C67(joaat("BALLER")))
				{
					bLocal_1771 = UNK_0x122AAB0B1D6F55AD(joaat("BALLER"), -1080.728f, 454.4489f, 76.54124f, -32.27425f, true, true, false);
				}
			}
		}
		else if (iVar0 > 90)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_1771))
			{
				UNK_0x71199B01895C6202(joaat("BALLER"));
				func_422(&bLocal_1771);
				bLocal_1772 = false;
			}
		}
	}
}

void func_422(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

void func_423()
{
	if (func_167() == 1)
	{
		if (Local_586.f_11 < iLocal_1124)
		{
			if (UNK_0x1C0640BA9A7327B3() > iLocal_1125 && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0))
			{
				func_428(UNK_0x16F2683693E537C9(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
				iLocal_1124 = Local_586.f_11;
				iLocal_1125 = UNK_0x1C0640BA9A7327B3() + 7500;
			}
			else
			{
				iLocal_1124 = Local_586.f_11;
			}
		}
		else if (Local_586.f_11 > iLocal_1124)
		{
			if (UNK_0x1C0640BA9A7327B3() > iLocal_1125 && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0))
			{
				func_428(UNK_0x16F2683693E537C9(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
				iLocal_1124 = Local_586.f_11;
				iLocal_1125 = UNK_0x1C0640BA9A7327B3() + 7500;
			}
			else
			{
				iLocal_1124 = Local_586.f_11;
			}
		}
		if (func_178(vLocal_18.x))
		{
			if (UNK_0x1C0640BA9A7327B3() > iLocal_1125 && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), vLocal_18.x, 0))
			{
				if (func_427())
				{
					func_428(UNK_0x16F2683693E537C9(), "RACE_CRASH", "FRANKLIN_NORMAL", 10);
					iLocal_1125 = UNK_0x1C0640BA9A7327B3() + 7500;
				}
			}
		}
	}
	if (Local_580.f_1 != 3)
	{
		if (func_426(UNK_0x16F2683693E537C9()))
		{
			if (iLocal_1126 < 0)
			{
				iLocal_1126 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(2500, 5000));
			}
			else if (UNK_0x1C0640BA9A7327B3() > iLocal_1126)
			{
				UNK_0xCEAA091B490F8407(iLocal_1127, "DISTANT_RACERS", Local_851[func_424() /*18*/].f_6, "ROAD_RACE_SOUNDSET", 0, 0);
				iLocal_1126 = -1;
			}
		}
		else if (iLocal_1126 > 0)
		{
			iLocal_1126 = -1;
		}
	}
}

int func_424()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		if (func_178(Local_851[iVar0 /*18*/].f_6))
		{
			fVar1 = func_425(UNK_0x16F2683693E537C9(), Local_851[iVar0 /*18*/].f_6, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_425(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

bool func_426(bool bParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_427()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		if (func_178(Local_851[iVar0 /*18*/].f_6))
		{
			if (UNK_0x1B3D109B39CC2C89(vLocal_18.x, Local_851[iVar0 /*18*/].f_6))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_428(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_429(iParam3), 0);
}

int func_429(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_430()
{
	if ((((Local_580 == 5 || Local_580 == 6) || Local_580 == 7) || Local_580 == 8) || Local_580 == 1)
	{
		func_445();
		func_444((UNK_0x1C0640BA9A7327B3() - Local_586.f_5), 0, "", Local_586.f_11, Local_598.f_249 + 1, "", 0, 1, Local_586.f_6, Local_586.f_7, "", 1, 1, -1, "", -1f, 1, -1f, bLocal_560, 0, -1, -1, 0);
	}
	else
	{
		func_443();
		func_359(1, -1);
		if (UNK_0x06F8112AA79C53D9(0, 20))
		{
			if (!Global_1574184)
			{
				Global_1574184 = 1;
			}
		}
		else if (Global_1574184)
		{
			Global_1574184 = 0;
		}
		func_445();
		func_431((UNK_0x1C0640BA9A7327B3() - Local_586.f_5), 0, "", Local_586.f_8, Local_598.f_247, "", Local_586.f_11, Local_598.f_249 + 1, "", 0, 1, Local_586.f_6, Local_586.f_7, "", 1, -1, -1, "", 6, Local_586.f_10, "", (UNK_0x1C0640BA9A7327B3() - Local_586.f_9), "", 0, 1, -1, "", -1f, 1, 1, -1f, bLocal_560, 0, -1, -1, 0, 0);
	}
}

void func_431(bool bParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, bool bParam19, bool bParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, bool bParam31, bool bParam32, int iParam33, int iParam34, bool bParam35, bool bParam36)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	char* sVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if (bParam24)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam34 != -1)
	{
		func_257(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	func_442();
	if (fParam27 > -1f)
	{
		func_439(0, "", iParam25, iParam28, 10, 0, sParam26, 1, fParam27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam15 > -1)
	{
		bVar1 = sParam17;
		if (func_438(bVar1))
		{
			bVar1 = "TIM_DAMAGE";
		}
		func_414(iParam15, iParam16, bVar1, iParam18, iParam25, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
	}
	if (!bParam32 || func_437())
	{
		if (iParam6 > -1 && iParam7 > 0)
		{
			bVar2 = sParam8;
			if (func_438(bVar2))
			{
				bVar2 = "TIM_POSIT";
			}
			func_436(iParam6, iParam7, bVar2, iParam10, iParam25, 7, 0, 0, 0, iParam10, 0);
		}
	}
	if (iParam3 > -1)
	{
		bVar3 = sParam5;
		if (func_438(bVar3))
		{
			bVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_1574184)
		{
			if (func_435())
			{
				func_434(iParam3, iParam4, bVar3, iParam25, 1, 8, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
			}
		}
	}
	if (iParam11 > -1 && iParam12 > -1)
	{
		bVar4 = sParam13;
		if (func_438(bVar4))
		{
			bVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_1574184)
		{
			func_436(iParam11, iParam12, bVar4, iParam14, iParam25, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_439(0, sVar5, -1, 1, 7, 0, sVar6, 1, fParam30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (bParam19 > -1)
	{
		bVar7 = bParam20;
		if (func_438(bVar7))
		{
			bVar7 = "TIMER_BESLAP";
		}
	}
	if ((((Global_4456448.f_75705 != 1 && Global_4456448.f_75705 != 3) && Global_4456448.f_75705 != 5) && Global_4456448.f_75705 != 7) && Global_4456448.f_75705 != 19)
	{
		if (iParam21 > -1)
		{
			if (!func_18(UNK_0xD803B885F5E47A62()))
			{
				bVar8 = sParam22;
				if (func_438(bVar8))
				{
					bVar8 = "TIMER_CURLAP";
				}
				func_257(iParam21, bVar8, 0, 1, iParam25, iParam23, 6, 0, iParam29, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	if (func_438(bVar9))
	{
		bVar9 = func_433(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_1574184) || func_432() == 2)
		{
			if (bParam32)
			{
				if (Global_1574184 && !UNK_0xEA6BC48857E0AC4C(bParam35))
				{
					func_257(bParam31, bParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, bParam31 <= 0, 0, 0, 0, 0, 0, -1);
				}
				else if (bParam31 <= 0)
				{
					func_257(bParam31, bVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_257(bParam31, bVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			else if (func_432() == 2 && !UNK_0xEA6BC48857E0AC4C(bParam35))
			{
				func_257(bParam31, bParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, bParam31 <= 0, 0, 0, 0, 0, 0, -1);
			}
			else if (bParam31 <= 0)
			{
				func_257(bParam31, bVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_257(bParam31, bVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	else if (Global_1574184 || func_432() == 2)
	{
		if (bParam19 <= 0)
		{
			func_257(bParam19, bParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_257(bParam19, bParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	bVar10 = sParam2;
	if (func_438(bVar10))
	{
		bVar10 = "TIMER_TIME_RCE";
	}
	if (bParam0 > -1)
	{
		func_257(bParam0, bVar10, iParam9, iVar0, iParam25, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (func_438(bVar11))
	{
		bVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_432()
{
	return Global_1377170.f_68;
}

char* func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TIMER_WORLDTIME";
		case 1:
			return "FRIEND_WORLDTIME";
		case 2:
			return "CREW_WORLDTIME";
		case 3:
			return "PERS_WORLDTIME";
	}
	return "";
}

void func_434(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_259(4, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_258(4, bVar0);
		Global_1378678.f_3272[bVar0] = iParam0;
		Global_1378678.f_3272.f_172[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3272.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3272.f_183[bVar0] = iParam3;
		Global_1378678.f_3272.f_216[bVar0] = iParam5;
		Global_1378678.f_3272.f_194[bVar0] = iParam4;
		Global_1378678.f_3272.f_227[bVar0] = iParam6;
		Global_1378678.f_3272.f_270[bVar0] = iParam7;
		Global_1378678.f_3272.f_281[bVar0] = iParam8;
		Global_1378678.f_3272.f_292[bVar0] = iParam9;
		Global_1378678.f_3272.f_303[bVar0] = iParam10;
		Global_1378678.f_3272.f_314[bVar0] = iParam11;
		Global_1378678.f_3272.f_325[bVar0] = iParam13;
		Global_1378678.f_3272.f_336[bVar0] = iParam14;
		Global_1378678.f_3272.f_347[bVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && UNK_0x0EFF6B4415DAF4A1()) && bParam12)
		{
			Global_1378678.f_1130 = 1;
		}
	}
}

bool func_435()
{
	return true;
	return false;
}

void func_436(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_259(5, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_258(5, bVar0);
		Global_1378678.f_3630[bVar0] = iParam0;
		Global_1378678.f_3630.f_172[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3630.f_194[bVar0] = iParam3;
		Global_1378678.f_3630.f_183[bVar0] = iParam4;
		Global_1378678.f_3630.f_216[bVar0] = iParam5;
		Global_1378678.f_3630.f_227[bVar0] = iParam6;
		Global_1378678.f_3630.f_270[bVar0] = iParam7;
		Global_1378678.f_3630.f_281[bVar0] = iParam8;
		Global_1378678.f_3630.f_292[bVar0] = iParam9;
		Global_1378678.f_3630.f_303[bVar0] = iParam10;
	}
}

bool func_437()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_142, 2);
}

bool func_438(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

void func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_259(6, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_258(6, bVar0);
		Global_1378678.f_3944[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[bVar0] = iParam3;
		Global_1378678.f_3944.f_172[bVar0] = iParam2;
		Global_1378678.f_3944.f_260[bVar0] = iParam4;
		Global_1378678.f_3944.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[bVar0] = iParam7;
		Global_1378678.f_3944.f_454[bVar0] = fParam8;
		Global_1378678.f_3944.f_497[bVar0] = iParam9;
		Global_1378678.f_3944.f_508[bVar0] = iParam10;
		Global_1378678.f_3944.f_205[bVar0] = iParam11;
		Global_1378678.f_3944.f_216[bVar0] = iParam12;
		Global_1378678.f_3944.f_227[bVar0] = iParam13;
		Global_1378678.f_3944.f_238[bVar0] = iParam14;
		Global_1378678.f_3944.f_249[bVar0] = iParam15;
		Global_1378678.f_3944.f_519[bVar0] = iParam16;
		Global_1378678.f_3944.f_530[bVar0] = iParam17;
		Global_1378678.f_3944.f_541[bVar0] = iParam18;
		Global_1378678.f_3944.f_552[bVar0] = iParam19;
		Global_1378678.f_3944.f_563[bVar0] = iParam20;
		Global_1378678.f_3944.f_574[bVar0] = iParam21;
		Global_1378678.f_3944.f_585[bVar0] = iParam22;
		Global_1378678.f_3944.f_596[bVar0] = iParam23;
		Global_1378678.f_3944.f_607[bVar0] = iParam24;
		Global_1378678.f_3944.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_441())
		{
			Global_1378678.f_1130 = 1;
		}
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			bVar2 = false;
			UNK_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_440())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_440()
{
	int iVar0;
	var uVar1;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_441()
{
	if (((UNK_0xB3260A60545D3F11() == 8 || UNK_0xB3260A60545D3F11() == 9) || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 12)
	{
		return true;
	}
	return false;
}

void func_442()
{
	char* sVar0;
	int iVar1;

	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 1;
		}
		else if (Global_1312330 == 1)
		{
			switch (Global_1312330.f_1)
			{
				case 0:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET";
					break;
				case 1:
					iVar1 = 3;
					sVar0 = "HUD_ROCKET_H";
					break;
				case 2:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_1312319.f_3 == 1)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 4;
		}
		func_439(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	else if (Global_1312346 == 1)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 9;
		func_439(Global_1312346.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

void func_443()
{
	switch (iLocal_1202)
	{
		case 1:
			iLocal_1203 = UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
			if (UNK_0x83D8570832F172A7(iLocal_1203))
			{
				iLocal_1202 = 2;
			}
			break;
		case 2:
			UNK_0x7E60C62A7CE58FC8(iLocal_1203, "SHOW_SHARD_MIDSIZED_MESSAGE");
			UNK_0x7ACC3006A87F8B39("BM_LAP_STR");
			UNK_0x3A820E495A7BA3E5(true);
			UNK_0x6B012227B3921E18("BM_LAP");
			UNK_0x3A820E495A7BA3E5(true);
			UNK_0x6D99DF8263D35CE5(Local_586.f_8);
			UNK_0x3A820E495A7BA3E5(true);
			UNK_0x6D99DF8263D35CE5(Local_598.f_247);
			UNK_0x779B34565F4D71B1();
			UNK_0x7A8BB56B212464AC();
			iLocal_1204 = UNK_0x1C0640BA9A7327B3() + 3000;
			iLocal_1202 = 3;
			break;
		case 3:
			if (UNK_0x1C0640BA9A7327B3() < (iLocal_1204 - 500))
			{
				if (UNK_0x83D8570832F172A7(iLocal_1203))
				{
					UNK_0x6567AE843FADBA94(iLocal_1203, 255, 255, 255, 255, 0);
					UNK_0xD9ACBBA59FD5A09E(4);
				}
			}
			else
			{
				UNK_0x7E60C62A7CE58FC8(iLocal_1203, "SHARD_ANIM_OUT");
				UNK_0x3CAEA85DA607305E(true);
				UNK_0x7C19E5E4784BD7CF(0.33f);
				UNK_0x7E60D21B163E9D56();
				iLocal_1202 = 4;
			}
			break;
		case 4:
			if (UNK_0x1C0640BA9A7327B3() < iLocal_1204)
			{
				if (UNK_0x83D8570832F172A7(iLocal_1203))
				{
					UNK_0x6567AE843FADBA94(iLocal_1203, 255, 255, 255, 255, 0);
					UNK_0xD9ACBBA59FD5A09E(4);
				}
			}
			else
			{
				if (UNK_0x83D8570832F172A7(iLocal_1203))
				{
					UNK_0xE17FDF9E3068281B(&iLocal_1203);
				}
				iLocal_1202 = 0;
			}
			break;
	}
}

void func_444(bool bParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, float fParam15, int iParam16, float fParam17, bool bParam18, bool bParam19, int iParam20, bool bParam21, bool bParam22)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	if (bParam12)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam21 != -1)
	{
		func_257(bParam21, "TIMER_CHALLTIME", iParam6, iVar0, iParam13, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	func_442();
	if (fParam15 > -1f)
	{
		func_439(0, "", iParam13, iParam16, 8, 0, sParam14, 1, fParam15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (!bParam19 || func_437())
	{
		if (iParam3 > -1 && iParam4 > 0)
		{
			bVar1 = sParam5;
			if (func_438(bVar1))
			{
				bVar1 = "TIM_POSIT";
			}
			func_436(iParam3, iParam4, bVar1, iParam7, iParam13, 7, 0, 0, 0, iParam7, 0);
		}
	}
	if (iParam8 > -1 && iParam9 > -1)
	{
		bVar2 = sParam10;
		if (func_438(bVar2))
		{
			bVar2 = "TIM_CHECKPOIN";
		}
		iParam11 = iParam11;
		if (Global_1574184)
		{
			func_436(iParam8, iParam9, bVar2, iParam11, iParam13, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam17 > -1f)
	{
		sVar3 = "TIM_DISTANCE";
		sVar4 = "FMMC_LENGTHM";
		func_439(0, sVar3, -1, 1, 6, 0, sVar4, 1, fParam17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	bVar5 = sParam2;
	if (func_438(bVar5))
	{
		bVar5 = "TIMER_TIME_RCE";
	}
	func_257(bParam0, bVar5, iParam6, iVar0, iParam13, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (func_438(bVar6))
	{
		bVar6 = func_433(iParam1);
	}
	if ((bParam19 || Global_1574184) || func_432() == 2)
	{
		if (bParam19)
		{
			if (Global_1574184 && !UNK_0xEA6BC48857E0AC4C(bParam22))
			{
				func_257(bParam18, bParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, bParam18 <= 0, 0, 0, 0, 0, 0, -1);
			}
			else if (bParam18 <= 0)
			{
				func_257(bParam18, bVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_257(bParam18, bVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else if (func_432() == 2 && !UNK_0xEA6BC48857E0AC4C(bParam22))
		{
			func_257(bParam18, bParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, bParam18 <= 0, 0, 0, 0, 0, 0, -1);
		}
		else if (bParam18 <= 0)
		{
			func_257(bParam18, bVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_257(bParam18, bVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	if (func_438(bVar7))
	{
		bVar7 = "TIMER_CHALLTIME";
	}
	iParam20 = iParam20;
}

void func_445()
{
	Global_1378678.f_1130 = 1;
}

void func_446()
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		Local_586.f_11 = 1;
		iVar0 = Local_586.f_6;
		fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[Local_586.f_6 /*3*/], 1);
		if (fVar1 > (fLocal_1133 + 100f))
		{
			iVar2 = Local_586.f_6 + 1;
			if (iVar2 >= Local_598.f_248)
			{
				iVar2 = 0;
			}
			fVar3 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[iVar2 /*3*/], 1);
			fVar4 = (UNK_0x0EB28750412C3A5A(Local_598[iVar2 /*3*/], Local_598[Local_586.f_6 /*3*/], 1) + 20f);
			if (fVar3 < fVar4)
			{
				iLocal_573 = 5;
			}
			else
			{
				iLocal_573 = 4;
			}
			iLocal_574 = 5;
			iLocal_575 = 0;
			return;
		}
		else if (fVar1 > (fLocal_1133 + 7.5f))
		{
			iVar5 = 0;
			fVar6 = 9999f;
			iVar5 = 0;
			while (iVar5 < Local_598.f_248)
			{
				if (iVar5 < Local_586.f_6)
				{
					fVar7 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[iVar5 /*3*/], 1);
					if (fVar7 < fVar6)
					{
						fVar6 = fVar7;
						iVar0 = iVar5;
					}
				}
				iVar5++;
			}
		}
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < Local_598.f_249)
		{
			if (func_10(Local_851[iVar9 /*18*/].f_3))
			{
				if (Local_851[iVar9 /*18*/] == 3)
				{
					Local_586.f_11++;
				}
				else if (Local_851[iVar9 /*18*/].f_9 > Local_586.f_8)
				{
					Local_586.f_11++;
				}
				else if (Local_851[iVar9 /*18*/].f_9 == Local_586.f_8)
				{
					if (Local_851[iVar9 /*18*/].f_8 > iVar0)
					{
						Local_586.f_11++;
					}
					else if (Local_851[iVar9 /*18*/].f_8 == iVar0)
					{
						fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[iVar0 /*3*/], 1);
						fVar8 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Local_851[iVar9 /*18*/].f_6, true), Local_598[Local_851[iVar9 /*18*/].f_8 /*3*/], 1);
						if (fVar8 < fVar1)
						{
							Local_586.f_11++;
						}
					}
				}
			}
			iVar9++;
		}
	}
}

void func_447(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		func_449(iVar0, bParam0, bParam1);
		iVar0++;
	}
	func_448();
}

void func_448()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (UNK_0x1C0640BA9A7327B3() > iLocal_1135)
	{
		fVar1 = 1E+07f;
		iVar3 = 0;
		while (iVar3 <= (Local_598.f_249 - 1))
		{
			if (func_178(Local_851[iVar3 /*18*/].f_6))
			{
				fVar0 = func_425(UNK_0x16F2683693E537C9(), Local_851[iVar3 /*18*/].f_6, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (Local_580.f_1 == 3)
		{
			if (iLocal_1134 > -1 && func_178(Local_851[iLocal_1134 /*18*/].f_6))
			{
				UNK_0x06FF977AA95DCCE3(Local_851[iLocal_1134 /*18*/].f_6, 0);
				UNK_0x2E1E5367A885F9B7(Local_851[iLocal_1134 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			if (func_178(Local_851[iVar2 /*18*/].f_6))
			{
				UNK_0x2E1E5367A885F9B7(Local_851[iVar2 /*18*/].f_6, "SEA_RACE_DURING_RACE_COLSEST_NPC", 0);
			}
		}
		else
		{
			if (iLocal_1134 > -1 && func_178(Local_851[iLocal_1134 /*18*/].f_6))
			{
				UNK_0x06FF977AA95DCCE3(Local_851[iLocal_1134 /*18*/].f_6, 0);
				UNK_0x2E1E5367A885F9B7(Local_851[iLocal_1134 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
			if (func_178(Local_851[iVar2 /*18*/].f_6))
			{
				UNK_0x2E1E5367A885F9B7(Local_851[iVar2 /*18*/].f_6, "STREET_RACE_NPC_CLOSEST", 0);
			}
		}
		iLocal_1134 = iVar2;
		iLocal_1135 = UNK_0x1C0640BA9A7327B3() + 2000;
	}
}

void func_449(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (iParam0 >= 0 || iParam0 < Local_598.f_249)
	{
		if (func_465(iParam0))
		{
			func_461(iParam0, bParam2);
			if (!UNK_0xC42A92762C58E1B9(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 0))
			{
				if (!UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), 3f))
				{
					func_460(iParam0);
				}
				else
				{
					func_459(iParam0);
				}
			}
			else if (func_458(iParam0))
			{
				if (!UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), 3f))
				{
					func_460(iParam0);
				}
			}
			else
			{
				func_457(iParam0);
				func_456(iParam0);
				switch (Local_851[iParam0 /*18*/])
				{
					case 0:
						Local_851[iParam0 /*18*/].f_8 = 0;
						Local_851[iParam0 /*18*/].f_9 = 1;
						if (Local_580.f_1 == 2)
						{
							if (bParam1 || iParam0 != 6)
							{
								UNK_0xD1F0F33C375B8446(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 30, iParam0 + 1 * 100);
							}
						}
						Local_851[iParam0 /*18*/] = 1;
						break;
					case 1:
						if (((UNK_0x1C0640BA9A7327B3() - Local_586.f_5) > iParam0 + 1 * 100 || Local_580.f_1 != 2) && UNK_0x1C2E18E9C63BEB77(bLocal_1430))
						{
							Local_851[iParam0 /*18*/].f_2 = func_455(iParam0);
							if ((((Local_580 == 0 || Local_580 == 1) || Local_580 == 2) || Local_580 == 3) || Local_580 == 4)
							{
								if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 4)
								{
									iVar0 = 0;
								}
								else
								{
									iVar0 = 1;
								}
								vVar1 = { UNK_0x68E4ADDDDCD7BDDE(Local_851[iVar0 /*18*/].f_6, 0f, 20f, 0f) };
								fVar4 = func_413(Local_851[iParam0 /*18*/].f_6, vVar1, 1);
								UNK_0xDD353D0E9C789D0E(&iVar5);
								UNK_0xE9362E4D600DD12A(false, Local_851[iParam0 /*18*/].f_6, vVar1, Local_851[iParam0 /*18*/].f_2, 1, UNK_0x134B62B726CEC8E6(Local_851[iParam0 /*18*/].f_6), 17563684, 3f, fVar4);
								UNK_0x1B901F542DF070CF(false, Local_851[iParam0 /*18*/].f_6, bLocal_1430, 786468, 0, 24, -1, Local_851[iParam0 /*18*/].f_2, iLocal_1123, 1073741824 /* Float: 2f */);
								UNK_0x75ABDC5F81978924(iVar5);
								UNK_0x78ADC381772E3D54(Local_851[iParam0 /*18*/].f_3, iVar5);
								UNK_0xF82EA857DA10E0CD(&iVar5);
							}
							else
							{
								UNK_0x1B901F542DF070CF(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, bLocal_1430, 786468, 0, 16, -1, Local_851[iParam0 /*18*/].f_2, iLocal_1123, 1073741824 /* Float: 2f */);
							}
							Local_851[iParam0 /*18*/] = 2;
						}
						break;
					case 2:
						if (func_454(iParam0) && Local_851[iParam0 /*18*/].f_15 != 1)
						{
							func_452(iParam0);
						}
						Local_851[iParam0 /*18*/].f_10 = 0;
						break;
					case 3:
						break;
				}
			}
			func_450(&(Local_851[iParam0 /*18*/].f_7), Local_851[iParam0 /*18*/].f_6, 1, 1092616192 /* Float: 10f */, 1);
		}
	}
}

void func_450(var uParam0, bool bParam1, bool bParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iParam4 == 1 && !UNK_0xE4EDC4B0E92C078B(*uParam0))
	{
		*uParam0 = func_451(UNK_0x68F4C0EC296D3901(bParam1, true), 0);
		if (bParam2)
		{
			UNK_0x61755AC17D8F538E(*uParam0, 3);
			UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			UNK_0x61755AC17D8F538E(*uParam0, true);
			UNK_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_ENEMY");
		}
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			UNK_0x516E63E474722206(*uParam0, 0.7f);
		}
	}
	if (UNK_0xE4EDC4B0E92C078B(*uParam0))
	{
		vVar0 = { UNK_0xAC14F6E4B17D7835(*uParam0) };
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		vVar0.x = (vVar0.x + ((vVar3.x - vVar0.x) / fParam3));
		vVar0.f_1 = (vVar0.y + ((vVar3.y - vVar0.y) / fParam3));
		vVar0.f_2 = (vVar0.z + ((vVar3.z - vVar0.z) / fParam3));
		UNK_0x2F9282246F89FFD1(*uParam0, vVar0);
	}
}

int func_451(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_154(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_452(int iParam0)
{
	int iVar0;

	if (Local_598.f_247 == 0)
	{
		iVar0 = (Local_598.f_248 - 2);
	}
	else
	{
		iVar0 = (Local_598.f_248 - 1);
	}
	if (Local_851[iParam0 /*18*/].f_8 == iVar0)
	{
		Local_851[iParam0 /*18*/].f_8 = 0;
		Local_851[iParam0 /*18*/].f_9++;
		if (Local_851[iParam0 /*18*/].f_9 > Local_598.f_247)
		{
			UNK_0xE072601B4380E9DF(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 30f, 786468);
		}
	}
	else
	{
		Local_851[iParam0 /*18*/].f_8++;
	}
	if (Local_851[iParam0 /*18*/] == 2)
	{
		func_453(iParam0);
	}
}

void func_453(int iParam0)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_455(iParam0);
	fVar1 = func_425(Local_851[iParam0 /*18*/].f_6, UNK_0x16F2683693E537C9(), 1);
	if ((Local_851[iParam0 /*18*/].f_8 - 1) < Local_586.f_6)
	{
		if (fVar1 > 50f)
		{
			bVar0 = (bVar0 + (bVar0 * 1f));
		}
		else if (fVar1 > 25f)
		{
			bVar0 = (bVar0 + (bVar0 * 0.7f));
		}
		else
		{
			bVar0 = (bVar0 + (bVar0 * 0.3f));
		}
	}
	else if (fVar1 > 100f)
	{
		bVar0 = (bVar0 - (bVar0 * 0.3f));
	}
	else if (fVar1 > 25f)
	{
		bVar0 = (bVar0 - (bVar0 * 0.1f));
	}
	if (Local_851[iParam0 /*18*/].f_2 != bVar0)
	{
		Local_851[iParam0 /*18*/].f_2 = bVar0;
		UNK_0x06736587AE5BE33B(Local_851[iParam0 /*18*/].f_3, bVar0);
	}
}

bool func_454(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true) };
	if (UNK_0x0EB28750412C3A5A(vVar0, Local_598[Local_851[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
	{
		return true;
	}
	iVar4 = 0;
	UNK_0x9414396734E14897(bLocal_1430, UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), &iVar3);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		if ((iVar3 - iVar4) > 0)
		{
			UNK_0xEF8F639897C675D5(bLocal_1430, (iVar3 - iVar4), &vVar0);
			if (UNK_0x0EB28750412C3A5A(vVar0, Local_598[Local_851[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

float func_455(int iParam0)
{
	var uVar0;

	switch (Local_851[iParam0 /*18*/].f_1)
	{
		case 0:
			uVar0 = Local_598.f_250;
			break;
		case 1:
			uVar0 = Local_598.f_251;
			break;
		case 2:
			uVar0 = Local_598.f_252;
			break;
	}
	return uVar0;
}

void func_456(int iParam0)
{
	if (func_178(vLocal_18.x) && func_9(UNK_0x16F2683693E537C9()))
	{
		if (Local_851[iParam0 /*18*/].f_13)
		{
			if (UNK_0x1B3D109B39CC2C89(vLocal_18.x, Local_851[iParam0 /*18*/].f_6))
			{
				Local_851[iParam0 /*18*/].f_13 = 0;
				Local_851[iParam0 /*18*/].f_14 = UNK_0x1C0640BA9A7327B3() + 4000;
			}
		}
		else if (Local_851[iParam0 /*18*/].f_14 > UNK_0x1C0640BA9A7327B3())
		{
			UNK_0x50155CDC2C5335FC(Local_851[iParam0 /*18*/].f_3, 1, UNK_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			Local_851[iParam0 /*18*/].f_13 = 1;
		}
	}
}

void func_457(int iParam0)
{
	vector3 vVar0;

	switch (Local_851[iParam0 /*18*/].f_11)
	{
		case 0:
			vVar0 = { UNK_0x5293C88BD2F4DE13(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true)) };
			if ((vVar0.x > -2f && vVar0.x < 2f) || iParam0 == 0)
			{
				Local_851[iParam0 /*18*/].f_12 = UNK_0x1C0640BA9A7327B3() + 2000;
				Local_851[iParam0 /*18*/].f_11 = 1;
			}
			else
			{
				Local_851[iParam0 /*18*/].f_11 = 2;
			}
			break;
		case 1:
			if (UNK_0x1C0640BA9A7327B3() > Local_851[iParam0 /*18*/].f_12)
			{
				Local_851[iParam0 /*18*/].f_11 = 2;
			}
			else
			{
				UNK_0xDFC6BA855748EB10(Local_851[iParam0 /*18*/].f_6, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

bool func_458(int iParam0)
{
	if (Local_580.f_1 == 2)
	{
		if ((UNK_0x377BE9A1BF38C7CE(Local_851[iParam0 /*18*/].f_6) || UNK_0x7B5606C651AB51B5(Local_851[iParam0 /*18*/].f_6, 0, 7000)) || UNK_0x7B5606C651AB51B5(Local_851[iParam0 /*18*/].f_6, 1, 40000))
		{
			return true;
		}
	}
	if (UNK_0x70EED0761B82965E(Local_851[iParam0 /*18*/].f_6))
	{
		if (Local_580.f_1 == 2 || Local_580.f_1 == 1)
		{
			return true;
		}
	}
	if (UNK_0x7B5606C651AB51B5(Local_851[iParam0 /*18*/].f_6, 2, 30000) || UNK_0x7B5606C651AB51B5(Local_851[iParam0 /*18*/].f_6, 3, 30000))
	{
		return true;
	}
	return false;
}

void func_459(int iParam0)
{
	int iVar0;

	if (Local_851[iParam0 /*18*/].f_10 == 0)
	{
		UNK_0x9414396734E14897(bLocal_1430, UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), &iVar0);
		UNK_0xDD353D0E9C789D0E(&iLocal_1431);
		UNK_0x5B1D360B9C6F0A09(false, Local_851[iParam0 /*18*/].f_6, 10000, -1, 2f, 1, 0);
		UNK_0x1B901F542DF070CF(false, Local_851[iParam0 /*18*/].f_6, bLocal_1430, 786468, iVar0, 16, -1, (func_455(iParam0) * 2f), iLocal_1123, 1073741824 /* Float: 2f */);
		UNK_0x75ABDC5F81978924(iLocal_1431);
		UNK_0x78ADC381772E3D54(Local_851[iParam0 /*18*/].f_3, iLocal_1431);
		UNK_0xF82EA857DA10E0CD(&iLocal_1431);
		Local_851[iParam0 /*18*/].f_10 = 1;
	}
}

void func_460(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	UNK_0x9414396734E14897(bLocal_1430, UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), &iVar0);
	UNK_0xEF8F639897C675D5(bLocal_1430, iVar0, &vVar1);
	UNK_0xEF8F639897C675D5(bLocal_1430, iVar0 + 1, &vVar4);
	if (!UNK_0x8E28E832BEAC3DCE(vVar1, 3f))
	{
		if (!UNK_0x558ADED8B93EA0F6(vVar1, 5f) || func_413(Local_851[iParam0 /*18*/].f_6, vVar1, 1) < 5f)
		{
			UNK_0xA47B46945FF6DE74(Local_851[iParam0 /*18*/].f_6, vVar1, 1, 0, 0, 1);
			func_411(Local_851[iParam0 /*18*/].f_6, vVar4);
			if (!UNK_0xC42A92762C58E1B9(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 0))
			{
				UNK_0xF821F915BC24D246(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, -1);
			}
			UNK_0x1B901F542DF070CF(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, bLocal_1430, 786468, iVar0, 16, -1, (func_455(iParam0) * 2f), iLocal_1123, 1073741824 /* Float: 2f */);
			iLocal_579 = UNK_0x1C0640BA9A7327B3() + 1500;
			iLocal_579 = iLocal_579;
		}
	}
}

void func_461(int iParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;

	if (bParam1 && iParam0 == (Local_598.f_249 - 1))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 30f;
	}
	switch (Local_851[iParam0 /*18*/].f_15)
	{
		case 0:
			if (((func_464(iParam0, bParam1) && UNK_0xC42A92762C58E1B9(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 0)) && UNK_0xDD4B920CF5E7E9EC(Local_851[iParam0 /*18*/].f_6)) && UNK_0x1C2E18E9C63BEB77(bLocal_1430))
			{
				iVar1 = UNK_0x6B63E065F442DAD2(Local_851[iParam0 /*18*/].f_6);
				if (iVar1 < 1)
				{
					iVar1 = 1;
				}
				if (iVar1 < iLocal_1607)
				{
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar3 = 1;
				}
				if ((UNK_0x9414396734E14897(bLocal_1430, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &iVar2) && UNK_0xEF8F639897C675D5(bLocal_1430, iVar3, &vVar5)) && UNK_0xEF8F639897C675D5(bLocal_1430, iVar2, &vVar8))
				{
					fVar4 = UNK_0x0EB28750412C3A5A(vVar8, vVar5, 1);
					if (((((fVar4 > 40f || Local_851[iParam0 /*18*/].f_9 < Local_586.f_8) && !func_463(UNK_0x16F2683693E537C9(), Local_851[iParam0 /*18*/].f_6, fVar0, 1)) && !func_462(UNK_0x16F2683693E537C9(), vVar5, fVar0)) && !UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), 5f)) && !UNK_0x8E28E832BEAC3DCE(vVar5, 5f))
					{
						if (bParam1 && iParam0 == (Local_598.f_249 - 1))
						{
							Local_851[iParam0 /*18*/].f_17 = UNK_0x1C0640BA9A7327B3() + 90;
						}
						else
						{
							Local_851[iParam0 /*18*/].f_17 = (UNK_0x1C0640BA9A7327B3() + 100 + iParam0 * 10);
						}
						Local_851[iParam0 /*18*/].f_16 = iVar3;
						Local_851[iParam0 /*18*/].f_15 = 1;
					}
				}
			}
			break;
		case 1:
			if (Local_851[iParam0 /*18*/].f_16 < iLocal_1607)
			{
				iVar11 = Local_851[iParam0 /*18*/].f_16 + 1;
			}
			else
			{
				iVar11 = 1;
			}
			if (UNK_0xEF8F639897C675D5(bLocal_1430, Local_851[iParam0 /*18*/].f_16, &vVar12))
			{
				if (((((func_463(UNK_0x16F2683693E537C9(), Local_851[iParam0 /*18*/].f_6, fVar0, 1) || func_462(UNK_0x16F2683693E537C9(), vVar12, fVar0)) || UNK_0x8E28E832BEAC3DCE(UNK_0x68F4C0EC296D3901(Local_851[iParam0 /*18*/].f_6, true), 5f)) || UNK_0x8E28E832BEAC3DCE(vVar12, 5f)) || (Local_851[iParam0 /*18*/].f_9 == Local_586.f_8 && Local_851[iParam0 /*18*/].f_8 >= Local_586.f_6)) || Local_851[iParam0 /*18*/].f_9 > Local_586.f_8)
				{
					UNK_0x1B901F542DF070CF(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, bLocal_1430, 786468, iVar11, 16, -1, func_455(iParam0), iLocal_1123, 1073741824 /* Float: 2f */);
					if (Local_580.f_1 == 3)
					{
						UNK_0x1AEF7184B203A58D(Local_851[iParam0 /*18*/].f_6, (func_455(iParam0) * 0.25f));
					}
					else
					{
						UNK_0x1AEF7184B203A58D(Local_851[iParam0 /*18*/].f_6, (func_455(iParam0) * 0.5f));
					}
					Local_851[iParam0 /*18*/].f_15 = 0;
				}
				else if (UNK_0x1C0640BA9A7327B3() > Local_851[iParam0 /*18*/].f_17)
				{
					if (!UNK_0x558ADED8B93EA0F6(vVar12, 5f) || func_462(Local_851[iParam0 /*18*/].f_6, vVar12, 5f))
					{
						if (UNK_0xEF8F639897C675D5(bLocal_1430, iVar11, &vVar15))
						{
							UNK_0xA47B46945FF6DE74(Local_851[iParam0 /*18*/].f_6, vVar12, 1, 0, 0, 1);
							func_411(Local_851[iParam0 /*18*/].f_6, vVar15);
							if (UNK_0x0EB28750412C3A5A(vVar12, Local_598[Local_851[iParam0 /*18*/].f_8 /*3*/], 0) <= (12f * 2f))
							{
								func_452(iParam0);
							}
							Local_851[iParam0 /*18*/].f_16 = iVar11;
							Local_851[iParam0 /*18*/].f_17 = (UNK_0x1C0640BA9A7327B3() + 100 + iParam0 * 10);
							if (!UNK_0xC42A92762C58E1B9(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, 0))
							{
								UNK_0xF821F915BC24D246(Local_851[iParam0 /*18*/].f_3, Local_851[iParam0 /*18*/].f_6, -1);
							}
							iLocal_579 = UNK_0x1C0640BA9A7327B3() + 1500;
							iLocal_579 = iLocal_579;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_462(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

bool func_463(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, bParam3), UNK_0x68F4C0EC296D3901(bParam1, bParam3)) <= (fParam2 * fParam2);
}

bool func_464(int iParam0, bool bParam1)
{
	if (Local_851[iParam0 /*18*/].f_9 < Local_586.f_8)
	{
		return true;
	}
	if (Local_851[iParam0 /*18*/].f_9 > Local_586.f_8)
	{
		return false;
	}
	if (Local_851[iParam0 /*18*/].f_9 == Local_586.f_8 && Local_851[iParam0 /*18*/].f_8 >= Local_586.f_6)
	{
		return false;
	}
	if (bParam1 == 0)
	{
		return true;
	}
	if (bParam1 && iParam0 != (Local_598.f_249 - 1))
	{
		return true;
	}
	if ((bParam1 && iParam0 == (Local_598.f_249 - 1)) && Local_851[iParam0 /*18*/].f_8 > 1)
	{
		return true;
	}
	return false;
}

bool func_465(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(Local_851[iParam0 /*18*/].f_3))
	{
		if (UNK_0x437347B10A200C4B(Local_851[iParam0 /*18*/].f_3, 0))
		{
			iLocal_573 = 2;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
		else if (UNK_0xEB6A8945D1AC98A1(Local_851[iParam0 /*18*/].f_3))
		{
			iLocal_573 = 2;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
		else if (func_466(Local_851[iParam0 /*18*/].f_3, 1, 0, 0, 0))
		{
			iLocal_573 = 1;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_851[iParam0 /*18*/].f_6))
	{
		if (UNK_0x437347B10A200C4B(Local_851[iParam0 /*18*/].f_6, 0))
		{
			iLocal_573 = 2;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
		else if (UNK_0xB87D13D0C064E9D1(Local_851[iParam0 /*18*/].f_6, UNK_0x16F2683693E537C9(), 0))
		{
			iLocal_573 = 1;
			iLocal_574 = 5;
			iLocal_575 = 0;
		}
	}
	if (func_10(Local_851[iParam0 /*18*/].f_3) && func_10(Local_851[iParam0 /*18*/].f_6))
	{
		return true;
	}
	return false;
}

bool func_466(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	fVar0 = 8f;
	bVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		bVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(UNK_0x16F2683693E537C9()) && func_10(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_472(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_467(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
		else
		{
			if (UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fVar0, true))
					{
						return true;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					bVar1 = 1.86f;
				}
				if (func_472(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_467(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_467(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - bParam1);
	vVar0.f_1 = (vVar0.y - bParam1);
	vVar0.f_2 = (vVar0.z - bParam1);
	vVar3.x = (vVar3.x + bParam1);
	vVar3.f_1 = (vVar3.y + bParam1);
	vVar3.f_2 = (vVar3.z + bParam1);
	if (bParam2)
	{
		if (((UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_GRENADE"), bParam1, 1) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_MOLOTOV"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_SMOKEGRENADE"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_468(bParam0, bParam1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_468(bParam0, bParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_468(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_469(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_469(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_471(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_471(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_470(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

float func_470(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_471(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_472(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (bParam1)
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bParam3, bParam3, bParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam2, true))
	{
		return true;
	}
	return false;
}

void func_473(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_474(bool bParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		func_476(bParam0);
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[Local_586.f_6 /*3*/], 1) <= 12f)
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
			if (Local_586.f_6 == (Local_586.f_7 - 1))
			{
				iVar0 = (UNK_0x1C0640BA9A7327B3() - Local_586.f_9);
				if (Local_586.f_10 < 0 || Local_586.f_10 > iVar0)
				{
					Local_586.f_10 = iVar0;
				}
				Local_586.f_9 = UNK_0x1C0640BA9A7327B3();
				if (Local_586.f_8 == Local_598.f_247)
				{
					func_180();
					return 1;
				}
				else
				{
					Local_586.f_8++;
					Local_586.f_6 = 0;
					iLocal_1202 = 1;
				}
			}
			else
			{
				Local_586.f_6++;
			}
			func_475();
			func_180();
		}
	}
	return 0;
}

void func_475()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		fLocal_1133 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_598[Local_586.f_6 /*3*/], 1);
	}
}

void func_476(bool bParam0)
{
	int iVar0;

	iVar0 = Local_586.f_6 + 1;
	if (Local_580.f_5)
	{
		if (Local_586.f_6 == (Local_598.f_248 - 1))
		{
			func_478((Local_598.f_248 - 1), 1, bParam0);
		}
		else
		{
			func_478(Local_586.f_6, 0, bParam0);
			if (iVar0 == (Local_598.f_248 - 1))
			{
				func_477(Local_598[iVar0 /*3*/], 1);
			}
			else
			{
				func_477(Local_598[iVar0 /*3*/], 0);
			}
		}
	}
	else if (Local_586.f_6 == (Local_598.f_248 - 1))
	{
		if (Local_586.f_8 == Local_598.f_247)
		{
			func_478(Local_586.f_6, 1, bParam0);
		}
		else
		{
			func_478(Local_586.f_6, 0, bParam0);
			func_477(Local_598[0 /*3*/], 0);
		}
	}
	else
	{
		func_478(Local_586.f_6, 0, bParam0);
		if (iVar0 == (Local_598.f_248 - 1))
		{
			func_477(Local_598[iVar0 /*3*/], 1);
		}
		else
		{
			func_477(Local_598[iVar0 /*3*/], 0);
		}
	}
}

void func_477(vector3 vParam0, bool bParam3)
{
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_1129))
	{
		iLocal_1129 = UNK_0x6CC513A908911CF0(vParam0);
		UNK_0xF2D30B8ACAF12A39(iLocal_1129, false);
		if (!bParam3)
		{
			UNK_0x61755AC17D8F538E(iLocal_1129, 5);
			UNK_0x516E63E474722206(iLocal_1129, 0.7f);
		}
		else if (Local_586.f_8 == Local_598.f_247)
		{
			UNK_0xBC8E0A7390523199(iLocal_1129, 38);
			UNK_0x516E63E474722206(iLocal_1129, 1.2f);
		}
		UNK_0xDC5B2F9D0CCE3A10(iLocal_1129, "BLIP_CPOINT");
	}
}

void func_478(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	float fVar23;
	float fVar24;
	bool bVar25;

	iVar9 = func_483(iParam0);
	UNK_0xA402F6C87C08815C(13, &bVar0, &bVar1, &bVar2, &bVar3);
	UNK_0xA402F6C87C08815C(134, &bVar4, &bVar5, &bVar6, &uVar7);
	bVar3 = func_482(iParam0);
	if (UNK_0xE4EDC4B0E92C078B(iLocal_1128))
	{
		if (iLocal_1130 != 0)
		{
			UNK_0xF0B0A50DF3EA0E70(iLocal_1130, bVar0, bVar1, bVar2, bVar3);
			UNK_0xF08C5AE8AC5C7427(iLocal_1130, bVar4, bVar5, bVar6, bVar3);
		}
	}
	else
	{
		vVar10 = { Local_598[iParam0 /*3*/] };
		vVar19 = { vVar10 };
		vVar19.f_2 = (vVar19.z + 20f);
		bVar25 = false;
		if (UNK_0xE82754C349C7B581(vVar19, &fVar24, 0, 0))
		{
			if (fVar24 > (vVar10.z + 1f))
			{
				bVar22 = ((7.5f * 1f) * 0.66f);
				fVar23 = 2f;
				bVar25 = true;
			}
			else
			{
				bVar22 = (8.5f * 1.333f);
				fVar23 = 6f;
			}
		}
		else
		{
			bVar22 = (8.5f * 1.333f);
			fVar23 = 6f;
		}
		if (iParam0 == (Local_598.f_248 - 1))
		{
			vVar13 = { Local_598[0 /*3*/] };
		}
		else
		{
			vVar13 = { Local_598[iParam0 + 1 /*3*/] };
		}
		iVar8 = (iParam0 - 1);
		if (iVar8 < 0)
		{
			iVar8 = (Local_598.f_248 - 1);
		}
		vVar16 = { Local_598[iVar8 /*3*/] };
		iLocal_1128 = UNK_0x6CC513A908911CF0(vVar10);
		UNK_0xF2D30B8ACAF12A39(iLocal_1128, false);
		if (!bParam1)
		{
			UNK_0x61755AC17D8F538E(iLocal_1128, 5);
			UNK_0x516E63E474722206(iLocal_1128, 1.2f);
			UNK_0x2A065371C9D96655(iLocal_1128, 9);
			if (bVar25)
			{
				switch (iVar9)
				{
					case 19:
					case 8:
						iVar9 = 14;
						break;
					case 18:
					case 7:
						iVar9 = 13;
						break;
					case 17:
					case 6:
						iVar9 = 12;
						break;
				}
			}
			iLocal_1130 = UNK_0x1B26E47E3E30075B(iVar9, vVar10 + Vector(fVar23, 0f, 0f), vVar13, bVar22, bVar0, bVar1, bVar2, bVar3, 0);
			UNK_0xF08C5AE8AC5C7427(iLocal_1130, bVar4, bVar5, bVar6, bVar3);
			func_479(iLocal_1130, vVar10);
		}
		else
		{
			UNK_0xBC8E0A7390523199(iLocal_1128, 38);
			UNK_0x2A065371C9D96655(iLocal_1128, 7);
			UNK_0x516E63E474722206(iLocal_1128, 1.2f);
			iLocal_1130 = UNK_0x1B26E47E3E30075B(10, vVar10 + Vector(fVar23, 0f, 0f), vVar13, bVar22, bVar0, bVar1, bVar2, bVar3, 0);
			UNK_0xF08C5AE8AC5C7427(iLocal_1130, bVar4, bVar5, bVar6, bVar3);
			func_479(iLocal_1130, vVar10);
		}
		if (bParam2)
		{
			iVar9 = func_483(iVar8);
			UNK_0xA402F6C87C08815C(true, &bVar0, &bVar1, &bVar2, &bLocal_1132);
			bLocal_1132 = 180;
			if (iLocal_1131 != 0)
			{
				UNK_0xE223EB8FE6F8CC15(iLocal_1131);
			}
			iLocal_1131 = UNK_0x1B26E47E3E30075B(iVar9, vVar16 + Vector(fVar23, 0f, 0f), vVar10, bVar22, bVar0, bVar1, bVar2, bLocal_1132, 0);
		}
		if (Local_580.f_1 == 3)
		{
			UNK_0x39BB9CA9BC90525F(iLocal_1130, 16f, 16f, 100f);
			UNK_0x39BB9CA9BC90525F(iLocal_1131, 16f, 16f, 100f);
		}
		else
		{
			UNK_0x39BB9CA9BC90525F(iLocal_1130, 9.5f, 9.5f, 100f);
			UNK_0x39BB9CA9BC90525F(iLocal_1131, 9.5f, 9.5f, 100f);
		}
		UNK_0xDC5B2F9D0CCE3A10(iLocal_1128, "BLIP_CPOINT");
	}
	if (iLocal_1131 != 0)
	{
		bLocal_1132 = (bLocal_1132 - 25);
		if (bLocal_1132 > 0)
		{
			UNK_0xA402F6C87C08815C(true, &bVar0, &bVar1, &bVar2, &bVar3);
			UNK_0xF0B0A50DF3EA0E70(iLocal_1131, bVar0, bVar1, bVar2, bLocal_1132);
		}
		else
		{
			UNK_0xE223EB8FE6F8CC15(iLocal_1131);
		}
	}
}

void func_479(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1[8];
	float fVar26;
	vector3 vVar27;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		vVar1[iVar0 /*3*/] = { vParam1 + func_481(iVar0) };
		UNK_0xE82754C349C7B581(vVar1[iVar0 /*3*/], &fVar26, 0, 0);
		if (fVar26 < (vParam1.z - 2f) || fVar26 > (vParam1.z + 2f))
		{
			vVar1[iVar0 /*3*/].f_2 = vParam1.z;
		}
		else
		{
			vVar1[iVar0 /*3*/].f_2 = fVar26;
		}
		iVar0++;
	}
	vVar27 = { func_480(&vVar1) };
	UNK_0x94BC93E0CAEF9AB6(iParam0, vParam1 - Vector(0.3f, 0f, 0f), vVar27);
}

Vector3 func_480(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar1 = { *(uParam0[iVar0 /*3*/]) };
		vVar4 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		vVar7.x = (vVar7.x + ((vVar1.y - vVar4.y) * (vVar1.z + vVar4.z)));
		vVar7.f_1 = (vVar7.y + ((vVar1.z - vVar4.z) * (vVar1.x + vVar4.x)));
		vVar7.f_2 = (vVar7.z + ((vVar1.x - vVar4.x) * (vVar1.y + vVar4.y)));
		iVar0++;
	}
	return func_471(vVar7);
}

Vector3 func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1f;
		case 1:
			return (7.5f / 2f), 0f, 1f;
		case 2:
			return (-7.5f / 2f), 0f, 1f;
		case 3:
			return 0f, (7.5f / 2f), 1f;
		case 4:
			return 0f, (-7.5f / 2f), 1f;
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_482(int iParam0)
{
	float fVar0;
	int iVar1;

	iVar1 = 240;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		fVar0 = UNK_0x0EB28750412C3A5A(Local_598[iParam0 /*3*/], UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_483(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	vVar0 = { Local_598[iParam0 /*3*/] };
	if (iParam0 + 1 == Local_598.f_248)
	{
		vVar3 = { Local_598[0 /*3*/] };
	}
	else
	{
		vVar3 = { Local_598[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		vVar6 = { Local_598[(iParam0 - 1) /*3*/] };
	}
	vVar9 = { vVar6 - vVar0 };
	vVar12 = { vVar3 - vVar0 };
	fVar15 = UNK_0x07AB02F3C4AE2B04(vVar9.x, vVar9.y, vVar12.x, vVar12.y);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fLocal_34)
	{
		return 8;
	}
	else if (fVar15 < fLocal_35)
	{
		return 7;
	}
	else if (fVar15 < fLocal_36)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

void func_484()
{
	iLocal_1127 = UNK_0xD68EA767274B7444();
	iLocal_1126 = -1;
}

void func_485(int iParam0)
{
	if ((!bLocal_562 && UNK_0x1963B11DE70153E0()) && UNK_0x8BB6DE13A9F3105E())
	{
		switch (iParam0)
		{
			case 0:
				iLocal_559 = 0;
				break;
			case 1:
				iLocal_559 = 1;
				break;
			case 2:
				iLocal_559 = 2;
				break;
			case 3:
				iLocal_559 = 3;
				break;
			case 4:
				iLocal_559 = 4;
				break;
			case 5:
				iLocal_559 = 5;
				break;
			case 6:
				iLocal_559 = 6;
				break;
			case 7:
				iLocal_559 = 7;
				break;
			case 8:
				iLocal_559 = 8;
				break;
		}
		bLocal_562 = func_486(&uLocal_556, &uLocal_557, &uLocal_558, iLocal_559, &bLocal_560, &bLocal_561);
	}
}

int func_486(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<69> Var0;
	struct<69> Var69;
	struct<13> Var138;
	struct<4> Var236;
	struct<13> Var244;

	Var0.f_3.f_1 = 4;
	Var69.f_3.f_1 = 4;
	Var138.f_19.f_1 = 4;
	Var244 = { func_251(UNK_0xD803B885F5E47A62()) };
	Var0 = 817;
	Var0.f_1 = 5;
	Var0.f_3 = 3;
	StringCopy(&(Var0.f_3.f_1[0 /*16*/]), "GameType", 32);
	StringCopy(&(Var0.f_3.f_1[1 /*16*/]), "Location", 32);
	StringCopy(&(Var0.f_3.f_1[2 /*16*/]), "Type", 32);
	StringCopy(&(Var0.f_3.f_1[0 /*16*/].f_8), "SP", 32);
	switch (iParam3)
	{
		case 0:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 1:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 2:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 4:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 5:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 6:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 7:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 8:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 100:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_01", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 101:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_02", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 102:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_03", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 103:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_04", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 104:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_05", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 105:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_06", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		default:
			break;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_330(uParam1, uParam2, &Var0, 1, 1))
			{
				func_338(&Var236, &Var0);
				if (*uParam2 && UNK_0x54F772BC86327092(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var138);
						if (!func_306(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*bParam4 = UNK_0x14B893B11D05C490(0, 3);
							*uParam0 = 1;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					*uParam0 = 2;
				}
				func_235(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		case 1:
			if (func_376(uParam1, uParam2, &Var0, &Var244))
			{
				func_338(&Var236, &Var0);
				if (*uParam2 && UNK_0x54F772BC86327092(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var138);
						if (!func_306(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*bParam5 = UNK_0x14B893B11D05C490(0, 3);
							*uParam0 = 2;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					*uParam0 = 2;
				}
				func_235(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_487()
{
	Global_22211.f_6 = 1;
}

void func_488()
{
	int iVar0;
	int iVar1;

	UNK_0xD60411959D5D930B(0f);
	func_525();
	func_487();
	func_508();
	func_485(Local_580);
	switch (iLocal_575)
	{
		case 0:
			func_6(500, 1);
			func_507(&Local_586);
			UNK_0xAE317D00A5A55DF6("HUD_321_GO", 1, -1);
			iLocal_1122 = 0;
			iLocal_578 = -1;
			iLocal_577 = 0;
			func_505(&(Local_586.f_1), 8);
			func_505(&(Local_586.f_1), 4);
			func_505(&(Local_586.f_1), 2);
			func_505(&(Local_586.f_1), 1);
			func_160(&(Local_586.f_2));
			UNK_0x0D3BE1DE0262A012("MPHUD", 0);
			UNK_0x0D3BE1DE0262A012("SPROffroad", 0);
			UNK_0x0D3BE1DE0262A012("SHARED", 0);
			UNK_0xD7992BEF7A9D109E("SP_SPR", 3);
			iLocal_1394[0] = func_352();
			iLocal_1764 = func_504();
			func_503(&uLocal_1625, 1050253722 /* Float: 0.3f */, 1073741824 /* Float: 2f */);
			if (func_178(vLocal_18.x) && Local_580.f_1 != 3)
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0xE32750CAC756824F(vLocal_18.x, true);
			}
			iLocal_575 = 1;
			break;
		case 1:
			UNK_0xAE317D00A5A55DF6("HUD_321_GO", 1, -1);
			if (func_502(&Local_586))
			{
				if (func_496(&Local_586, 1, 0, 0, 3, 1, 0, 0))
				{
					iLocal_575 = 2;
				}
				if (func_495(Local_586.f_1, 8))
				{
					if (iLocal_578 < 0)
					{
						iLocal_578 = UNK_0x1C0640BA9A7327B3() + 500;
					}
					if (iLocal_1122 == 0)
					{
						iLocal_1122 = 1;
						func_494();
						UNK_0x8910D3D58E0132B8("RACE_INTRO_GENERIC");
						func_493();
						if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
						{
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						}
						if (func_178(vLocal_18.x))
						{
							if (Local_580.f_1 == 3)
							{
								iVar0 = 0;
								while (iVar0 <= (Local_598.f_249 - 1))
								{
									if (func_178(Local_851[iVar0 /*18*/].f_6))
									{
										UNK_0xB078AFA7242F1F7B(Local_851[iVar0 /*18*/].f_6, false);
									}
									iVar0++;
								}
								UNK_0xB078AFA7242F1F7B(vLocal_18.x, false);
							}
							else
							{
								UNK_0xE32750CAC756824F(vLocal_18.x, false);
							}
						}
					}
					func_447(1, 0);
				}
			}
			break;
		case 2:
			func_492();
			func_491(&Local_586);
			func_490();
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1137)
			{
				if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[iVar1]))
				{
					UNK_0x9A8DDC7C522F5BF5(iLocal_1137[iVar1], 0);
				}
				iVar1++;
			}
			iLocal_574 = 2;
			iLocal_575 = 0;
			break;
	}
	func_474(0);
	func_405();
	func_489();
}

void func_489()
{
	int iVar0;
	int iVar1;

	if ((func_9(UNK_0x16F2683693E537C9()) && UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9())) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		iLocal_573 = 1;
		iLocal_574 = 5;
		iLocal_575 = 0;
		if (func_9(bLocal_1400))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_1400, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_1400, true);
		}
		if (func_9(bLocal_1401))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_1401, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_1401, true);
		}
		if (func_9(bLocal_1402))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_1402, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
			UNK_0xFADC0A217229F6B5(bLocal_1402, true);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_598.f_249)
		{
			if (func_9(Local_851[iVar1 /*18*/].f_3))
			{
				UNK_0xDD353D0E9C789D0E(&iVar0);
				UNK_0x78A77CDD64392938(false, iVar1 * 60);
				if (func_178(Local_851[iVar1 /*18*/].f_6) && UNK_0xC42A92762C58E1B9(Local_851[iVar1 /*18*/].f_3, Local_851[iVar1 /*18*/].f_6, 0))
				{
					UNK_0xE072601B4380E9DF(false, Local_851[iVar1 /*18*/].f_6, 50f, 786468);
				}
				else
				{
					UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 500f, -1, 0, 0);
				}
				UNK_0x75ABDC5F81978924(iVar0);
				UNK_0x78ADC381772E3D54(Local_851[iVar1 /*18*/].f_3, iVar0);
				UNK_0xF82EA857DA10E0CD(&iVar0);
				UNK_0xFADC0A217229F6B5(Local_851[iVar1 /*18*/].f_3, true);
			}
			iVar1++;
		}
		if (func_178(vLocal_18.x))
		{
			if (Local_580.f_1 == 3)
			{
				UNK_0xB078AFA7242F1F7B(vLocal_18.x, false);
			}
			else
			{
				UNK_0xE32750CAC756824F(vLocal_18.x, false);
			}
		}
		func_490();
	}
}

void func_490()
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	func_33(&bLocal_1400, 1, 0, 1);
	func_33(&bLocal_1401, 1, 0, 1);
	func_33(&bLocal_1402, 1, 0, 1);
	if (UNK_0xE1DBBD6CE209517C(bVar0))
	{
		UNK_0xBC03DF6093E8E71F(bVar0, 0);
		UNK_0x98E4DC66A651C9FA(bVar0, true, false);
	}
	if (Local_580.f_1 == 1 || Local_580.f_1 == 2)
	{
		UNK_0x2952D66A502EA873(iLocal_1439, 0);
		UNK_0x842F1AEB2FCC00B7(vLocal_1432, vLocal_1435, bLocal_1438, 1);
	}
	func_13(0, 1, 0, 0, 0, 0);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	UNK_0xA37A90C62806D848(1);
}

void func_491(int iParam0)
{
	UNK_0xE17FDF9E3068281B(iParam0);
	UNK_0x8C26F31DFF77D124();
}

void func_492()
{
	int iVar0;
	vector3 vVar1;

	if (Local_580.f_1 == 2)
	{
		if (func_9(bLocal_1401))
		{
			vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_1401, 0f, 20f, 0f) };
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x80AA372E04ED318D(false, vVar1, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(bLocal_1401, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		if (func_9(bLocal_1402))
		{
			vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_1402, 0f, 15f, 0f) };
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x80AA372E04ED318D(false, vVar1, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(bLocal_1402, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		func_33(&bLocal_1400, 1, 0, 1);
		func_33(&bLocal_1401, 1, 0, 1);
		func_33(&bLocal_1402, 1, 0, 1);
	}
}

void func_493()
{
	int iVar0;

	if (Local_580.f_1 == 3)
	{
		UNK_0x8BC9595FD2792B5D("SEA_RACE_DURING_RACE");
	}
	else
	{
		UNK_0x8BC9595FD2792B5D("STREET_RACE_DURING_RACE");
	}
	iVar0 = 0;
	while (iVar0 <= (Local_598.f_249 - 1))
	{
		if (func_178(Local_851[iVar0 /*18*/].f_6))
		{
			if (Local_580.f_1 == 3)
			{
				UNK_0x2E1E5367A885F9B7(Local_851[iVar0 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			else
			{
				UNK_0x2E1E5367A885F9B7(Local_851[iVar0 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
		}
		iVar0++;
	}
}

void func_494()
{
	Local_586.f_5 = UNK_0x1C0640BA9A7327B3();
	Local_586.f_6 = 0;
	Local_586.f_8 = 1;
	Local_586.f_9 = UNK_0x1C0640BA9A7327B3();
	Local_586.f_7 = Local_598.f_248;
	func_475();
}

bool func_495(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_496(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;

	if (bParam7)
	{
		func_501(&(uParam0->f_2), 1);
	}
	if (!func_162(&(uParam0->f_2)))
	{
		func_3(&(uParam0->f_2));
	}
	UNK_0xD9ACBBA59FD5A09E(1);
	UNK_0xEF45C43067063F18(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		bVar0 = "3_2_1";
		bVar1 = "GO";
		bVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		bVar0 = "3_2_1";
		bVar1 = "GO";
		bVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_162(&(uParam0->f_2)))
		{
			if (func_158(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_5(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_160(&(uParam0->f_2));
					if (func_495(uParam0->f_1, 1))
					{
						func_499(&(uParam0->f_1), 8);
						UNK_0xA402F6C87C08815C(18, &bVar5, &bVar6, &bVar7, &uVar8);
						UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
						func_165("CNTDWN_GO");
						UNK_0x3CAEA85DA607305E(bVar5);
						UNK_0x3CAEA85DA607305E(bVar6);
						UNK_0x3CAEA85DA607305E(bVar7);
						UNK_0x1200CC973A2399C8(true);
						UNK_0x7E60D21B163E9D56();
						return true;
					}
					func_3(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_157(&(uParam0->f_2)));
	}
	bVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_495(uParam0->f_1, 8))
	{
		if (bVar9 >= -3 && !func_495(uParam0->f_1, 1))
		{
			func_499(&(uParam0->f_1), 1);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_498(uParam0, bVar9);
		}
		else if (bVar9 >= -2 && !func_495(uParam0->f_1, 2))
		{
			func_499(&(uParam0->f_1), 2);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_498(uParam0, bVar9);
		}
		else if (bVar9 >= -1 && !func_495(uParam0->f_1, 4))
		{
			func_499(&(uParam0->f_1), 4);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_498(uParam0, bVar9);
		}
		else if (bVar9 >= -1 && !func_495(uParam0->f_1, 16))
		{
			if (UNK_0x755FF954DAE327E1((func_157(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_499(&(uParam0->f_1), 16);
					UNK_0x4D7F4CC43D4D0DE3(-1, bVar1, bVar2, 1);
				}
			}
		}
		else if (bVar9 >= 0 && !func_495(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, bVar1, bVar2, 1);
			}
			func_499(&(uParam0->f_1), 8);
			UNK_0xA402F6C87C08815C(18, &bVar11, &bVar12, &bVar13, &uVar14);
			UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
			func_165("CNTDWN_GO");
			UNK_0x3CAEA85DA607305E(bVar11);
			UNK_0x3CAEA85DA607305E(bVar12);
			UNK_0x3CAEA85DA607305E(bVar13);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7E60D21B163E9D56();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (bVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_497()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_160(&(uParam0->f_2));
		}
		return true;
	}
	return false;
}

int func_497()
{
	if (UNK_0x798A3F1296751F46())
	{
		return 0;
	}
	if (UNK_0x06F8112AA79C53D9(0, 18) || UNK_0x06F8112AA79C53D9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_498(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;

	UNK_0xA402F6C87C08815C(12, &bVar0, &bVar1, &bVar2, &uVar3);
	UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
	UNK_0x3A820E495A7BA3E5(-1);
	UNK_0x7ACC3006A87F8B39("NUMBER");
	UNK_0x6D99DF8263D35CE5(UNK_0x51D1D19912234EA0(bParam1));
	UNK_0x779B34565F4D71B1();
	UNK_0x3CAEA85DA607305E(bVar0);
	UNK_0x3CAEA85DA607305E(bVar1);
	UNK_0x3CAEA85DA607305E(bVar2);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
}

void func_499(var uParam0, int iParam1)
{
	func_500(uParam0, iParam1);
}

void func_500(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_501(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(bParam0, 4);
	}
	else
	{
		UNK_0x0674E58A79778E99(bParam0, 4);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
	{
	}
}

bool func_502(var uParam0)
{
	return (UNK_0x83D8570832F172A7(*uParam0) && UNK_0xAE317D00A5A55DF6("HUD_321_GO", 0, -1));
}

void func_503(var uParam0, int iParam1, int iParam2)
{
	if (func_162(&(uParam0->f_1)))
	{
		func_160(&(uParam0->f_1));
	}
	if (func_162(&(uParam0->f_4)))
	{
		func_160(&(uParam0->f_4));
	}
	func_150(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

int func_504()
{
	return UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_505(var uParam0, int iParam1)
{
	func_506(uParam0, iParam1);
}

void func_506(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_507(var uParam0)
{
	*uParam0 = UNK_0xB01F55A0FD1CFD49("COUNTDOWN");
	UNK_0xAE317D00A5A55DF6("HUD_321_GO", 0, -1);
}

bool func_508()
{
	int iVar0;
	int iVar1;

	if (Local_580.f_1 == 3)
	{
		if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[0]))
		{
			if (UNK_0x1C0640BA9A7327B3() > iLocal_1429)
			{
				UNK_0xF1E4C781086FABC1(iLocal_1137[1], iLocal_1137[0], 500, 0, 1);
				UNK_0xDE0127155AF9E64F(iLocal_1137[1], 1f);
				UNK_0x4D7F4CC43D4D0DE3(-1, "UNDER_WATER_COME_UP", false, 1);
				UNK_0x9A8DDC7C522F5BF5(iLocal_1137[0], 0);
			}
			else
			{
				func_524(0);
			}
		}
		else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[1]))
		{
			if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[1]))
			{
				UNK_0xF1E4C781086FABC1(iLocal_1137[2], iLocal_1137[1], 3000, 0, 1);
				UNK_0x91F5B0244AAE6222(iLocal_1137[2], "HAND_SHAKE", 0.3f);
				UNK_0x9A8DDC7C522F5BF5(iLocal_1137[1], 0);
			}
			else
			{
				func_524(1);
			}
		}
		else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[2]))
		{
			if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[2]))
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_1137[3], true);
				UNK_0xF1E4C781086FABC1(iLocal_1137[4], iLocal_1137[3], 5000, 3, 1);
				UNK_0x91F5B0244AAE6222(iLocal_1137[4], "HAND_SHAKE", 0.3f);
				UNK_0x9A8DDC7C522F5BF5(iLocal_1137[2], 0);
				iLocal_1429 = UNK_0x1C0640BA9A7327B3() + 2000;
			}
			else
			{
				func_524(1);
			}
		}
		else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[4]))
		{
			if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[4]))
			{
				UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_1137)
				{
					if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[iVar0]))
					{
						UNK_0x9A8DDC7C522F5BF5(iLocal_1137[iVar0], 0);
					}
					iVar0++;
				}
			}
			else
			{
				func_524(1);
			}
			if (UNK_0x1C0640BA9A7327B3() > iLocal_1429)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[1]))
	{
		if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[1]))
		{
			if (iLocal_1429 < 0)
			{
				iLocal_1429 = UNK_0x1C0640BA9A7327B3() + 1000;
			}
			else if (UNK_0x1C0640BA9A7327B3() > iLocal_1429)
			{
				UNK_0xF1E4C781086FABC1(iLocal_1137[3], iLocal_1137[2], 4000, 0, 1);
				UNK_0x91F5B0244AAE6222(iLocal_1137[2], "HAND_SHAKE", 1f);
				UNK_0x91F5B0244AAE6222(iLocal_1137[3], "HAND_SHAKE", 1f);
				UNK_0x9A8DDC7C522F5BF5(iLocal_1137[1], 0);
			}
		}
		else
		{
			func_524(0);
		}
	}
	else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[3]))
	{
		if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[3]))
		{
			UNK_0xF1E4C781086FABC1(iLocal_1137[5], iLocal_1137[4], 4000, 0, 1);
			UNK_0x91F5B0244AAE6222(iLocal_1137[4], "HAND_SHAKE", 1f);
			UNK_0x91F5B0244AAE6222(iLocal_1137[5], "HAND_SHAKE", 1f);
			UNK_0x9A8DDC7C522F5BF5(iLocal_1137[3], 0);
			if (Local_580 == 2 || Local_580 == 4)
			{
				if (UNK_0xC844350D5D58C99A(vLocal_18.x))
				{
					if (UNK_0xDF1306B443CD3D15(vLocal_18.x, 0))
					{
						UNK_0xA47B46945FF6DE74(vLocal_18.x, Local_598.f_181[Local_598.f_249 /*3*/], 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(vLocal_18.x, Local_598.f_230[Local_598.f_249]);
						UNK_0xB9FD7450C0DAB575(vLocal_18.x, 1084227584 /* Float: 5f */);
					}
				}
			}
		}
		else
		{
			if (func_9(bLocal_1400))
			{
				if (bLocal_1417)
				{
					if (func_510(&uLocal_1442, "STR1AUD", "STR1_GIRL1", 8, 0, 0, 0))
					{
						bLocal_1417 = false;
					}
				}
			}
			func_524(1);
		}
	}
	else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[5]))
	{
		if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[5]))
		{
			if (func_509())
			{
				UNK_0xE3BB8E05FCEB3FBE(iLocal_1137[6], true);
			}
			UNK_0xF1E4C781086FABC1(iLocal_1137[7], iLocal_1137[6], 3000, 3, 1);
			UNK_0x91F5B0244AAE6222(iLocal_1137[6], "HAND_SHAKE", 1f);
			UNK_0x91F5B0244AAE6222(iLocal_1137[7], "HAND_SHAKE", 1f);
			UNK_0x9A8DDC7C522F5BF5(iLocal_1137[5], 0);
			return true;
		}
		else
		{
			if (func_9(bLocal_1402))
			{
				if (bLocal_1418)
				{
					if (func_510(&uLocal_1442, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						bLocal_1418 = false;
					}
				}
			}
			func_524(1);
		}
	}
	else if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[7]))
	{
		if (!UNK_0xFA06B985B30FB0FC(iLocal_1137[7]))
		{
			UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1137)
			{
				if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[iVar1]))
				{
					UNK_0x9A8DDC7C522F5BF5(iLocal_1137[iVar1], 0);
				}
				iVar1++;
			}
		}
		else
		{
			if (func_9(bLocal_1402))
			{
				if (bLocal_1418)
				{
					if (func_510(&uLocal_1442, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						bLocal_1418 = false;
					}
				}
			}
			func_524(1);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_509()
{
	int iVar0;

	if (func_178(vLocal_18.x))
	{
		iVar0 = UNK_0x134B62B726CEC8E6(vLocal_18.x);
		if (iVar0 == UNK_0x12AB0310C2281427("MONSTER") || iVar0 == UNK_0x12AB0310C2281427("MARSHALL"))
		{
			return true;
		}
	}
	return false;
}

int func_510(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_523(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_511(sParam2, iParam3, 0);
}

int func_511(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_522();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_521(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_520();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_519();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_518())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
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
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_517();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_516();
		func_512();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_522();
	}
	return 0;
}

void func_512()
{
	if (!func_513())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_513()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_49())
	{
		return false;
	}
	if (func_514(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0)
{
	return func_515(iParam0, 20);
}

bool func_515(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_516()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_517()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_518()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_519()
{
	if (func_169(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_167();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_520()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_521(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

void func_522()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_523(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_524(bool bParam0)
{
	if (iLocal_1200 == 0)
	{
		if (Local_580.f_1 == 3)
		{
			if (UNK_0xE3934829A331AF92("INTRO_STREAM", "SEA_RACES_SOUNDSET"))
			{
				if (bParam0)
				{
					UNK_0x7B1292B738DF9FAF();
					iLocal_1200 = 1;
				}
			}
		}
		else if (Local_580.f_1 == 1)
		{
			if (UNK_0xE3934829A331AF92("VESPUCCI_CANAL_INTRO", "ROAD_RACE_SOUNDSET"))
			{
				if (bParam0)
				{
					UNK_0x7B1292B738DF9FAF();
					iLocal_1200 = 1;
				}
			}
		}
		else if (UNK_0xE3934829A331AF92("INTRO_STREAM", "ROAD_RACE_SOUNDSET"))
		{
			if (bParam0)
			{
				UNK_0x7B1292B738DF9FAF();
				iLocal_1200 = 1;
			}
		}
	}
}

void func_525()
{
	if (Local_580 == 4)
	{
		if (UNK_0xB87F6CF6E5628C67(joaat("PROP_DUMPSTER_02A")))
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_2358))
			{
				bLocal_2358 = UNK_0x7707E48765093646(joaat("PROP_DUMPSTER_02A"), vLocal_2359, true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_2358, vLocal_2362, 2, 1);
				UNK_0x1E9649458B15960F(bLocal_2358, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_2365))
			{
				bLocal_2365 = UNK_0x7707E48765093646(joaat("PROP_DUMPSTER_02A"), vLocal_2366, true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_2365, vLocal_2369, 2, 1);
				UNK_0x1E9649458B15960F(bLocal_2365, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_2372))
			{
				bLocal_2372 = UNK_0x7707E48765093646(joaat("PROP_DUMPSTER_02A"), vLocal_2373, true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_2372, vLocal_2376, 2, 1);
				UNK_0x1E9649458B15960F(bLocal_2372, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_2379))
			{
				bLocal_2379 = UNK_0x7707E48765093646(joaat("PROP_DUMPSTER_02A"), vLocal_2380, true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_2379, vLocal_2383, 2, 1);
				UNK_0x1E9649458B15960F(bLocal_2379, true);
			}
		}
	}
}

void func_526()
{
	int iVar0;

	UNK_0xD60411959D5D930B(0f);
	func_536(cLocal_1614, 0, 0, 0, 0, iLocal_1620);
	func_525();
	func_485(Local_580);
	iVar0 = 0;
	switch (iLocal_575)
	{
		case 0:
			func_534(1, 0);
			func_534(7, 0);
			if (UNK_0x1963B11DE70153E0())
			{
				func_380();
			}
			func_524(0);
			func_29();
			UNK_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
			UNK_0x5BED90AC1E2BC558("AZ_DISTANT_VEHICLES_CITY_CENTRE", 0, 0);
			UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 0, 0);
			UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 0, 0);
			UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 0, 0);
			UNK_0xD7992BEF7A9D109E("HAO1", false);
			func_11();
			func_533();
			func_532();
			UNK_0x82A772610883F395("SwitchSceneFranklin", 0, 0);
			func_24(0, 0);
			func_530();
			iLocal_1200 = 0;
			bLocal_1778 = false;
			if (func_178(vLocal_18.x))
			{
				if (Local_580.f_1 == 3)
				{
					UNK_0xA6C13961116F9033("RADIO_16_SILVERLAKE");
					UNK_0xCD49775BBDC56D15("RADIO_16_SILVERLAKE");
					UNK_0x8EF0C7EF9D046E34("RADIO_16_SILVERLAKE", "SEA_RACE_RADIO_PLAYLIST", 1);
					UNK_0xDE6ABF42593E1194("RADIO_16_SILVERLAKE");
					UNK_0x3E5CE368CD085FFA(vLocal_18.x, 1);
				}
				else
				{
					UNK_0xA6C13961116F9033("RADIO_07_DANCE_01");
				}
				UNK_0xC0FB48F966BB7D11(1);
			}
			iLocal_575 = 1;
			break;
		case 1:
			if (func_508())
			{
				func_529(0.32f);
				if (func_9(UNK_0x16F2683693E537C9()))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				}
				iLocal_574 = 1;
				iLocal_575 = 0;
			}
			if (func_527(1000))
			{
				func_148(500, 1);
				func_181();
				bLocal_1778 = true;
				func_31(&bLocal_1401);
				func_31(&bLocal_1402);
				iLocal_575 = 2;
			}
			if (Local_580 == 4)
			{
				if (func_9(UNK_0x16F2683693E537C9()))
				{
					UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 236, true);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_598.f_249 - 1))
				{
					if (func_9(Local_851[iVar0 /*18*/].f_3))
					{
						UNK_0x9DD8618CA5BF832D(Local_851[iVar0 /*18*/].f_3, 236, true);
					}
					iVar0++;
				}
			}
			break;
		case 2:
			if (Local_580.f_1 == 3)
			{
				func_23();
			}
			func_529(0.27f);
			func_474(0);
			if (Local_580.f_1 == 3)
			{
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				SYSTEM::WAIT(0);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x2FB9A57162E54BAB(0f);
			}
			else if (bLocal_1778)
			{
				func_23();
				iVar0 = 0;
				while (iVar0 <= (Local_598.f_249 - 1))
				{
					if (func_9(Local_851[iVar0 /*18*/].f_3))
					{
						UNK_0xA3BF0AA5A2608191(Local_851[iVar0 /*18*/].f_3);
					}
					if (func_178(Local_851[iVar0 /*18*/].f_6))
					{
						UNK_0xE0C0351D5B931E37(Local_851[iVar0 /*18*/].f_6, 0.1f, 1, 0);
						func_7(Local_851[iVar0 /*18*/].f_6, Local_598.f_181[iVar0 /*3*/]);
						UNK_0xD8F6A53F4799FAFE(Local_851[iVar0 /*18*/].f_6, Local_598.f_230[iVar0]);
					}
					iVar0++;
				}
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				SYSTEM::WAIT(500);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x2FB9A57162E54BAB(0f);
			}
			else
			{
				UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
			}
			func_6(500, 1);
			func_474(0);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_1137)
			{
				if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[iVar0]))
				{
					UNK_0x9A8DDC7C522F5BF5(iLocal_1137[iVar0], 0);
				}
				iVar0++;
			}
			iLocal_574 = 1;
			iLocal_575 = 0;
			break;
	}
}

bool func_527(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_528())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_528()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

void func_529(bool bParam0)
{
	int iVar0;

	if (Local_580.f_1 == 2)
	{
		if (func_9(bLocal_1400))
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0xC6EB89C59F2AF6B8(false, bLocal_1403, "grid_girl_race_start", 4f, -8f, -1, 8, bParam0, 0, 0, 0);
			UNK_0x80AA372E04ED318D(false, vLocal_1414, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
			UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(bLocal_1400, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
	}
}

void func_530()
{
	int iVar0;
	vector3 vVar1;

	if (Local_580.f_1 == 2)
	{
		UNK_0x523BCC9DC80CD82F(joaat("A_F_Y_GENHOT_01"));
		UNK_0x3F423BF5B8125A50(bLocal_1403);
		func_531();
		while (!UNK_0xB87F6CF6E5628C67(joaat("A_F_Y_GENHOT_01")))
		{
			SYSTEM::WAIT(0);
		}
		while (!UNK_0xB4AE0788C1587752(bLocal_1403))
		{
			SYSTEM::WAIT(0);
		}
		bLocal_1400 = UNK_0x36F2404464202779(25, joaat("A_F_Y_GENHOT_01"), vLocal_1404, bLocal_1413, 1, true);
		func_411(bLocal_1400, vLocal_1414);
		bLocal_1401 = UNK_0x36F2404464202779(25, joaat("A_F_Y_GENHOT_01"), vLocal_1407, bLocal_1413, 1, true);
		func_411(bLocal_1401, vLocal_1414);
		bLocal_1402 = UNK_0x36F2404464202779(25, joaat("A_F_Y_GENHOT_01"), vLocal_1410, bLocal_1413, 1, true);
		func_411(bLocal_1402, vLocal_1414);
		UNK_0x78A77CDD64392938(bLocal_1400, -1);
		func_364(&uLocal_1442, 3, bLocal_1400, "GIRL1", 0, 1);
		bLocal_1417 = true;
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_1401, 0f, 20f, 0f) };
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0xC6EB89C59F2AF6B8(false, bLocal_1403, "grid_girl_a", 8f, -8f, -1, 9, false, 0, 0, 0);
		UNK_0x80AA372E04ED318D(false, vVar1, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
		UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bLocal_1401, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bLocal_1402, 0f, 15f, 0f) };
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0xC6EB89C59F2AF6B8(false, bLocal_1403, "grid_girl_b", 8f, -8f, -1, 9, false, 0, 0, 0);
		UNK_0x80AA372E04ED318D(false, vVar1, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
		UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bLocal_1402, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
		func_364(&uLocal_1442, 4, bLocal_1402, "GIRL2", 0, 1);
		bLocal_1418 = true;
		UNK_0x71199B01895C6202(joaat("A_F_Y_GENHOT_01"));
	}
}

void func_531()
{
	switch (Local_580)
	{
		case 0:
			vLocal_1404 = { -155.6468f, -1566.949f, 33.9936f };
			vLocal_1407 = { -153.63f, -1563.7f, 34.95f };
			vLocal_1410 = { -148.09f, -1557.66f, 34.75f };
			bLocal_1413 = -30.86f;
			vLocal_1414 = { -141.65f, -1550.75f, 33.46f };
			break;
		case 1:
			vLocal_1404 = { 367.6161f, 312.4572f, 102.5861f };
			vLocal_1407 = { 368.4547f, 312.2108f, 102.5678f };
			vLocal_1410 = { 375.17f, 310.64f, 103.44f };
			bLocal_1413 = -103.75f;
			vLocal_1414 = { 386.63f, 307.77f, 102.2f };
			break;
		case 2:
			vLocal_1404 = { -813.8033f, -2546.801f, 12.80013f };
			vLocal_1407 = { -814.4293f, -2547.748f, 12.80057f };
			vLocal_1410 = { -816.56f, -2554.45f, 13.77f };
			bLocal_1413 = 157.75f;
			vLocal_1414 = { -819.68f, -2562.68f, 12.75f };
			break;
		case 3:
			vLocal_1404 = { 777.3962f, -1148.09f, 28.05913f };
			vLocal_1407 = { 778.6312f, -1148.07f, 28.00819f };
			vLocal_1410 = { 787f, -1148.06f, 28.92f };
			bLocal_1413 = -89.3f;
			vLocal_1414 = { 795.3f, -1147.23f, 27.98f };
			break;
	}
}

void func_532()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1137)
	{
		if (UNK_0x9F4FE516EAACCFC5(iLocal_1137[iVar0]))
		{
			UNK_0x9A8DDC7C522F5BF5(iLocal_1137[iVar0], 0);
		}
		iVar0++;
	}
	if (Local_580.f_1 == 3)
	{
		iLocal_1137[0] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1146, vLocal_1149, 35f, 0, 2);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_1137[0], true);
		UNK_0xB3A1B75CB59FEB56(true, false, 0, 1, 0, 0);
		iLocal_1137[1] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1194, vLocal_1197, 35f, 0, 2);
		iLocal_1137[2] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1152, vLocal_1155, 35f, 0, 2);
		iLocal_1137[3] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1158, vLocal_1161, 50f, 0, 2);
		iLocal_1137[4] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1164, vLocal_1167, 50f, 0, 2);
		iLocal_1429 = UNK_0x1C0640BA9A7327B3() + 250;
	}
	else
	{
		if (Local_580 == 4)
		{
			iLocal_1137[0] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1146, vLocal_1149, 40f, 0, 2);
		}
		else
		{
			iLocal_1137[0] = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
			UNK_0x5818C8D5303DCCF8(iLocal_1137[0], 40f);
			UNK_0xC5940439E4EB9A33(iLocal_1137[0], vLocal_18.x, vLocal_1146, 1);
			UNK_0x1305278186D1C53E(iLocal_1137[0], vLocal_18.x, vLocal_1149, 1);
		}
		iLocal_1137[1] = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
		UNK_0x5818C8D5303DCCF8(iLocal_1137[1], 40f);
		UNK_0xC5940439E4EB9A33(iLocal_1137[1], vLocal_18.x, vLocal_1152, 1);
		UNK_0x1305278186D1C53E(iLocal_1137[1], vLocal_18.x, vLocal_1155, 1);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_1137[0], true);
		UNK_0xF1E4C781086FABC1(iLocal_1137[1], iLocal_1137[0], 3000, 1, 1);
		UNK_0xB3A1B75CB59FEB56(true, false, 0, 1, 0, 0);
		UNK_0x91F5B0244AAE6222(iLocal_1137[0], "ROAD_VIBRATION_SHAKE", 0.5f);
		UNK_0x91F5B0244AAE6222(iLocal_1137[1], "ROAD_VIBRATION_SHAKE", 0.5f);
		iLocal_1137[2] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1158, vLocal_1161, 40f, 0, 2);
		iLocal_1137[3] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1164, vLocal_1167, 40f, 0, 2);
		iLocal_1137[4] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1170, vLocal_1173, 40f, 0, 2);
		iLocal_1137[5] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1176, vLocal_1179, 40f, 0, 2);
		if (func_509())
		{
			iLocal_1137[6] = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
			UNK_0x5818C8D5303DCCF8(iLocal_1137[6], 50f);
			UNK_0xC5940439E4EB9A33(iLocal_1137[6], vLocal_18.x, vLocal_1182, 1);
			UNK_0x1305278186D1C53E(iLocal_1137[6], vLocal_18.x, vLocal_1185, 1);
			iLocal_1137[7] = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
			UNK_0x5818C8D5303DCCF8(iLocal_1137[7], 50f);
			UNK_0xC5940439E4EB9A33(iLocal_1137[7], vLocal_18.x, vLocal_1188, 1);
			UNK_0x1305278186D1C53E(iLocal_1137[7], vLocal_18.x, vLocal_1191, 1);
		}
		else
		{
			iLocal_1137[6] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1182, vLocal_1185, 50f, 0, 2);
			iLocal_1137[7] = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1188, vLocal_1191, 50f, 0, 2);
		}
		iLocal_1429 = -1;
	}
}

void func_533()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 25);
	UNK_0x5D96D8530B3D0904(&Global_7357, 11);
}

void func_534(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_31146[iVar0 /*23*/].f_16 == iParam0)
		{
			func_535(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar1 /*23*/].f_11, 3))
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar1 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar1 /*23*/].f_11), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar1 /*23*/].f_11), 3);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar1 /*23*/].f_11, 3))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_31146[iVar1 /*23*/].f_19))
		{
			UNK_0xCD816869CA451988(1);
			UNK_0x142CC44DB769B57E(&(Global_31146[iVar1 /*23*/].f_19));
			UNK_0xCD816869CA451988(0);
		}
	}
}

void func_536(char[24] cParam0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_550(1, cParam0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_24 > fVar0)
				{
					Global_76878 = UNK_0x1C0640BA9A7327B3();
					vLocal_25 = { UNK_0x96792D8393A779D7(15) };
					fLocal_24 = 0f;
				}
				else
				{
					fLocal_24 = (fLocal_24 + UNK_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_24 = 0f;
			}
		}
		else
		{
			if (!func_550(0, cParam0))
			{
				Global_76878 = (UNK_0x1C0640BA9A7327B3() - 9000);
			}
			UNK_0x3584F71E5CA29322(7);
			UNK_0x3584F71E5CA29322(6);
			UNK_0x3584F71E5CA29322(8);
			UNK_0x3584F71E5CA29322(9);
			iVar1 = (UNK_0x1C0640BA9A7327B3() - Global_76878);
			if (iVar1 < 9000 && !UNK_0x757EF87A33649210())
			{
				bVar2 = 255;
				if (iVar1 < 1000)
				{
					bVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						bVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_76876)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				UNK_0xD02CE72B4B66DC29(82, 66);
				UNK_0x7BBAC160090910C3(1);
				UNK_0xEEF67251E263A87F(2);
				iVar12 = func_167();
				if (Global_76879 == 1 && Global_76877 == 62)
				{
					iVar12 = Global_111638.f_2358.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						UNK_0xA402F6C87C08815C(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					case 1:
						UNK_0xA402F6C87C08815C(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					case 2:
						UNK_0xA402F6C87C08815C(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
						break;
				}
				UNK_0x7178F32F6742C936(iVar8, iVar9, iVar10, bVar2);
				UNK_0xC8CFC125861F0537();
				Var4 = { func_539(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				UNK_0x75BBE9A62B73769F(fVar6, fVar7, 0f, 0.01f);
				UNK_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!UNK_0x0D71AFA59EF5104F() && !UNK_0x0DF32524CC9DB3EB())
				{
					fLocal_29 = 0.14f;
				}
				else
				{
					fLocal_29 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_538(&Var4) > fLocal_29)
					{
						if (UNK_0x2F1FB0453B36C270(15))
						{
							UNK_0x744B56EE9DE7B57F(15, vLocal_25.x, (vLocal_25.y + fLocal_28));
							Global_76881 = 1;
						}
					}
				}
				UNK_0x070005E852D4C0E9(&Var4);
				UNK_0xE0026608C37C7C41(fVar6, fVar7, 0);
				UNK_0xD59EF13BB60323B9();
				if (Global_76880 == 1)
				{
					func_537();
					fLocal_24 = 0f;
				}
			}
			else
			{
				func_537();
				fLocal_24 = 0f;
			}
		}
	}
}

void func_537()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

float func_538(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

struct<2> func_539(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_549(iParam0) };
			break;
		case 7:
			Var0 = { func_547(iParam0) };
			break;
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_546(iParam2) };
					break;
				case 8:
					Var0 = { func_545(iParam2) };
					break;
				case 7:
					Var0 = { func_544(iParam2) };
					break;
				case 10:
					Var0 = { func_543(iParam2) };
					break;
				case 5:
					Var0 = { func_542(iParam2) };
					break;
				case 4:
					Var0 = { func_541(iParam2) };
					break;
				default:
					StringCopy(&Var0, func_540(iVar2), 8);
					break;
			}
			break;
		default:
			break;
	}
	return Var0;
}

char* func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
		case 1:
			return "MG_DART";
		case 2:
			return "MG_GOLF";
		case 3:
			return "MG_HUNT";
		case 4:
			return "MG_OFFR";
		case 5:
			return "MG_PILO";
		case 6:
			return "MG_RMPG";
		case 7:
			return "MG_SERA";
		case 8:
			return "MG_SRAC";
		case 9:
			return "MG_STRP";
		case 10:
			return "MG_STNT";
		case 11:
			return "MG_SHTR";
		case 12:
			return "MG_TAXI";
		case 13:
			return "MG_TENN";
		case 14:
			return "MG_TOWI";
		case 15:
			return "MG_TRFA";
		case 16:
			return "MG_TRFG";
		case 17:
			return "MG_TRIA";
		case 18:
			return "MG_YOGA";
		case 19:
			return "MG_CRCE";
	}
	return "INVALID!";
}

struct<2> func_541(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_542(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_543(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_544(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_545(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_546(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_547(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_548(iParam0) };
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_548(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
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

struct<2> func_549(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			default:
				StringConCat(&Var0, "A", 8);
				break;
		}
	}
	return Var0;
}

bool func_550(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6)
{
	if (((!func_552(0) || Global_76891) || Global_76880 == 1) || !UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	switch (Global_76876)
	{
		case 0:
			if (UNK_0x7F8A39872A07D2CE(&cParam1, "NONE") || UNK_0xEA6BC48857E0AC4C(&cParam1))
			{
				Global_76876 = 3;
			}
			else
			{
				Global_76876 = 1;
			}
			break;
		case 1:
			if (UNK_0x62A1F4500E8F07E0())
			{
				Global_76876 = 2;
			}
			break;
		case 2:
			if (UNK_0x22A8E52414415B76())
			{
				Global_76876 = 4;
				return true;
			}
			else if (!UNK_0x39B7A3CCD2467CAB())
			{
				Global_76876 = 3;
			}
			break;
		case 3:
			if (UNK_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_76876 = 5;
				return true;
			}
			break;
		case 4:
			if (UNK_0x22A8E52414415B76())
			{
				return true;
			}
			else if (iParam0 == 1)
			{
				Global_76876 = 5;
			}
			break;
		case 5:
			if ((UNK_0x22A8E52414415B76() || func_175(0)) || func_551(1))
			{
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_551(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_552(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_553(iParam0))
	{
		return false;
	}
	return true;
}

int func_553(int iParam0)
{
	return func_554(iParam0, Global_41431);
}

int func_554(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}
	return 0;
}

void func_555(bool bParam0)
{
	UNK_0xAB8E2DDC7AF955E0(joaat("AIRBUS"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("BENSON"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("BIFF"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("COACH"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("FIRETRUK"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("FLATBED"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("MULE"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("MULE2"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("PACKER"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("POUNDER"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("RUBBLE"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("TIPTRUCK"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("TIPTRUCK2"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("TOURBUS"), bParam0);
	UNK_0xAB8E2DDC7AF955E0(joaat("TRASH"), bParam0);
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, UNK_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_557(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(vLocal_18.x))
	{
	}
	else if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		func_364(&uLocal_1442, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			vLocal_18.x = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		}
		else
		{
			vLocal_18.x = UNK_0x728870EB733D12A1();
			if (func_178(vLocal_18.x))
			{
				UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), vLocal_18.x, -1);
			}
		}
	}
	iLocal_574 = 0;
	iLocal_575 = 0;
	iLocal_573 = 0;
	func_566(Local_580, &Local_598);
	UNK_0xB975E4541DDAB1F5(2);
	func_564();
	if (bParam0)
	{
		func_563();
	}
	else
	{
		func_561();
	}
	func_560();
	UNK_0xFF42993F8A095C58(0);
	UNK_0x2733E1E56786AB9E(true);
	UNK_0xC83E7A5E408DF68C(2);
	UNK_0x3F50EAA916065520(true);
	UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x060F249A9A3E3F4E(false);
	UNK_0xCE1730371ACDCCFC(1);
	UNK_0xCD7D80FD792F9954("DRIVE", false);
	UNK_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 100f, false, 1);
	UNK_0x21688103CC7F9B19(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0);
	if ((bParam1 && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (Local_580.f_1 == 1 || Local_580.f_1 == 2)
		{
			iLocal_1439 = func_559(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 60f);
			func_558(Local_580, &vLocal_1432, &vLocal_1435, &bLocal_1438);
			UNK_0xB5376EA942202450(vLocal_1432, vLocal_1435, bLocal_1438, 0, false, 1);
		}
		UNK_0x745CE398A4B0A3C6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 500f, 0);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
	UNK_0x51B096AAC60548C1(0.1f);
	vLocal_18.f_2 = 0;
}

void func_558(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*bParam3 = 300f;
			break;
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*bParam3 = 20f;
			break;
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*bParam3 = 30f;
			break;
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*bParam3 = 200f;
			break;
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*bParam3 = 10f;
			break;
	}
}

int func_559(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return UNK_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_560()
{
	switch (Local_580)
	{
		case 0:
			vLocal_1420 = { -168.6f, -1575.16f, 34.7f };
			bLocal_1423 = 141.57f;
			vLocal_1424 = { -170.0685f, -1573.866f, 34.307f };
			bLocal_1427 = 191.3066f;
			break;
		case 1:
			vLocal_1420 = { 353.12f, 321.39f, 103.65f };
			bLocal_1423 = 77.4f;
			vLocal_1424 = { 353.4853f, 323.3662f, 103.0862f };
			bLocal_1427 = 127.4f;
			break;
		case 2:
			vLocal_1420 = { -794.5402f, -2527.393f, 12.7891f };
			bLocal_1423 = 332.72f;
			vLocal_1424 = { -792.37f, -2527.87f, 13.83f };
			bLocal_1427 = 22.72f;
			break;
		case 3:
			vLocal_1420 = { 818.13f, -1161.54f, 28f };
			bLocal_1423 = 76.46f;
			vLocal_1424 = { 818.5804f, -1159.643f, 27.2778f };
			bLocal_1427 = 126.46f;
			break;
		case 4:
			vLocal_1420 = { -1025.28f, -1130.25f, 1.7f };
			bLocal_1423 = 305.27f;
			vLocal_1424 = { -1024.548f, -1131.254f, 1.1861f };
			bLocal_1427 = 355.27f;
			break;
	}
}

void func_561()
{
	switch (Local_580)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_851[0 /*18*/].f_5 = joaat("BANSHEE");
			Local_851[1 /*18*/].f_5 = joaat("FELTZER2");
			Local_851[2 /*18*/].f_5 = joaat("SENTINEL");
			Local_851[3 /*18*/].f_5 = joaat("BANSHEE");
			Local_851[4 /*18*/].f_5 = joaat("FELTZER2");
			Local_851[5 /*18*/].f_5 = joaat("SENTINEL");
			Local_851[6 /*18*/].f_5 = joaat("BANSHEE");
			break;
		case 4:
			Local_851[0 /*18*/].f_5 = joaat("BATI");
			Local_851[1 /*18*/].f_5 = joaat("BATI");
			Local_851[2 /*18*/].f_5 = joaat("RUFFIAN");
			Local_851[3 /*18*/].f_5 = joaat("RUFFIAN");
			Local_851[4 /*18*/].f_5 = joaat("BATI");
			Local_851[5 /*18*/].f_5 = joaat("RUFFIAN");
			Local_851[6 /*18*/].f_5 = joaat("BATI");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_851[0 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[1 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[2 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[3 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[4 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[5 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[6 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[7 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[8 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[9 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[10 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[11 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[12 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[13 /*18*/].f_5 = func_562(Local_580.f_1);
			Local_851[14 /*18*/].f_5 = func_562(Local_580.f_1);
			break;
	}
	switch (Local_580)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_851[0 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
			Local_851[1 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
			Local_851[2 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
			Local_851[3 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
			Local_851[4 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
			Local_851[5 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
			Local_851[6 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
			Local_851[7 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
			Local_851[8 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
			Local_851[9 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
			Local_851[10 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
			Local_851[11 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
			Local_851[12 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
			Local_851[13 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
			Local_851[14 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
			break;
		case 4:
			Local_851[0 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[1 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[2 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[3 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[4 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[5 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[6 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[7 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[8 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[9 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[10 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[11 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[12 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			Local_851[13 /*18*/].f_4 = joaat("A_M_Y_MOTOX_01");
			Local_851[14 /*18*/].f_4 = joaat("A_M_Y_MOTOX_02");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_851[0 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[1 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[2 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[3 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[4 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[5 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[6 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[7 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[8 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[9 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[10 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[11 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[12 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[13 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			Local_851[14 /*18*/].f_4 = joaat("A_M_Y_JETSKI_01");
			break;
	}
}

int func_562(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("BATI");
			break;
		case 2:
			iVar0 = joaat("NINEF");
			break;
		case 3:
			iVar0 = joaat("SEASHARK");
			break;
	}
	return iVar0;
}

void func_563()
{
	Local_851[0 /*18*/].f_5 = joaat("PRAIRIE");
	Local_851[1 /*18*/].f_5 = joaat("DOMINATOR");
	Local_851[2 /*18*/].f_5 = joaat("SENTINEL");
	Local_851[3 /*18*/].f_5 = joaat("PRAIRIE");
	Local_851[4 /*18*/].f_5 = joaat("DOMINATOR");
	Local_851[5 /*18*/].f_5 = joaat("SENTINEL");
	Local_851[6 /*18*/].f_5 = joaat("PRAIRIE");
	Local_851[0 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
	Local_851[1 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
	Local_851[2 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
	Local_851[3 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
	Local_851[4 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
	Local_851[5 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
	Local_851[6 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
	Local_851[7 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
	Local_851[8 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
	Local_851[9 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
	Local_851[10 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
	Local_851[11 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
	Local_851[12 /*18*/].f_4 = joaat("A_M_M_SOCENLAT_01");
	Local_851[13 /*18*/].f_4 = joaat("A_M_Y_HIPSTER_02");
	Local_851[14 /*18*/].f_4 = joaat("A_M_Y_EASTSA_01");
}

void func_564()
{
	if (Local_580.f_1 == 2)
	{
		if (func_565())
		{
			vLocal_1146 = { -0.7054f, 6.3148f, 2.0821f };
			vLocal_1149 = { 0.9495f, 3.9011f, 2.7419f };
			vLocal_1152 = { -0.567f, 2.6724f, 1.0077f };
			vLocal_1155 = { 0.094f, -0.2423f, 0.7483f };
		}
		else if (func_509())
		{
			vLocal_1146 = { -1.6831f, 6.0271f, 4.2228f };
			vLocal_1149 = { -0.0245f, 3.5705f, 4.6855f };
			vLocal_1152 = { -1.0281f, 4.6872f, 0.9868f };
			vLocal_1155 = { -0.185f, 1.8112f, 1.1221f };
		}
		else
		{
			vLocal_1146 = { -1.5802f, 5.8398f, 2.2274f };
			vLocal_1149 = { 0.197f, 3.5006f, 2.8356f };
			vLocal_1152 = { -0.6678f, 1.974f, 0.6876f };
			vLocal_1155 = { 0.144f, -0.9013f, 0.417f };
		}
	}
	switch (Local_580)
	{
		case 0:
			vLocal_1158 = { -159.2159f, -1564.125f, 34.6164f };
			vLocal_1161 = { -0.073293f, 0.055f, -119.2735f };
			vLocal_1164 = { -158.8115f, -1563.369f, 34.61729f };
			vLocal_1167 = { -0.073293f, 0.055f, -123.7305f };
			vLocal_1170 = { -156.8608f, -1565.342f, 35.70965f };
			vLocal_1173 = { -8.040299f, -0.0005f, -49.00647f };
			vLocal_1176 = { -155.1768f, -1567.141f, 35.70965f };
			vLocal_1179 = { -8.040299f, -0.0005f, -41.34629f };
			vLocal_1182 = { -142.3124f, -1550.574f, 34.58047f };
			vLocal_1185 = { -2.928405f, -0.000499f, 142.6203f };
			vLocal_1188 = { -141.3225f, -1546.89f, 34.7891f };
			vLocal_1191 = { -2.8368f, 0f, 139.8128f };
			break;
		case 1:
			vLocal_1158 = { 368.3612f, 317.4821f, 102.8912f };
			vLocal_1161 = { 4.9194f, 0.0225f, -176.9747f };
			vLocal_1164 = { 369.0639f, 317.4726f, 102.8941f };
			vLocal_1167 = { 5.042f, 0.0225f, 178.1396f };
			vLocal_1170 = { 367.0291f, 314.8014f, 104.37f };
			vLocal_1173 = { -7.4995f, 0.0233f, -111.5294f };
			vLocal_1176 = { 366.4452f, 312.9081f, 104.3692f };
			vLocal_1179 = { -7.4995f, 0.0233f, -100.7122f };
			vLocal_1182 = { 386.8919f, 308.6107f, 103.2039f };
			vLocal_1185 = { 0.3447f, 0.0472f, 82.1591f };
			vLocal_1188 = { 390.2213f, 309.4721f, 103.7617f };
			vLocal_1191 = { -4.3057f, 0.0299f, 76.2809f };
			break;
		case 2:
			vLocal_1158 = { -809.5582f, -2548.848f, 13.2619f };
			vLocal_1161 = { 6.3036f, 0.0031f, 78.738f };
			vLocal_1164 = { -809.6061f, -2549.241f, 13.2619f };
			vLocal_1167 = { 3.5967f, 0.0031f, 75.5951f };
			vLocal_1170 = { -811.1327f, -2544.394f, 14.5064f };
			vLocal_1173 = { -5.1571f, 0.0031f, 151.0646f };
			vLocal_1176 = { -812.3164f, -2543.757f, 14.5063f };
			vLocal_1179 = { -5.1571f, 0.0031f, 154.2332f };
			vLocal_1182 = { -819.8916f, -2564.119f, 13.8366f };
			vLocal_1185 = { -3.7349f, 0.0039f, -21.4233f };
			vLocal_1188 = { -819.4815f, -2566.388f, 14.1387f };
			vLocal_1191 = { -5.6248f, 0.0039f, -24.2558f };
			break;
		case 3:
			vLocal_1158 = { 776.7724f, -1143.73f, 28.3016f };
			vLocal_1161 = { 11.6472f, -0.0085f, -162.2849f };
			vLocal_1164 = { 778.136f, -1143.352f, 28.3014f };
			vLocal_1167 = { 10.4548f, -0.0085f, -170.727f };
			vLocal_1170 = { 775.2812f, -1146.74f, 29.6806f };
			vLocal_1173 = { -6.3919f, -0.0085f, -92.6672f };
			vLocal_1176 = { 775.3398f, -1148.591f, 29.6808f };
			vLocal_1179 = { -6.3919f, -0.0085f, -84.5603f };
			vLocal_1182 = { 795.929f, -1146.452f, 29.5086f };
			vLocal_1185 = { -2.946f, -0.0103f, 96.9974f };
			vLocal_1188 = { 799.178f, -1144.664f, 29.6776f };
			vLocal_1191 = { -3.7454f, -0.0103f, 96.6498f };
			break;
		case 4:
			vLocal_1146 = { -1081.793f, -1162.103f, 6.1895f };
			vLocal_1149 = { 9.5571f, 0.0247f, 143.3313f };
			vLocal_1152 = { -0.2995f, 1.6679f, 0.9952f };
			vLocal_1155 = { 0.7073f, -1.1228f, 0.5493f };
			vLocal_1158 = { -1059.43f, -1154.967f, 1.585626f };
			vLocal_1161 = { 5.101318f, 0.220638f, 46.04638f };
			vLocal_1164 = { -1060.099f, -1155.654f, 1.589301f };
			vLocal_1167 = { 5.101318f, 0.220639f, 55.21057f };
			vLocal_1170 = { -1057.833f, -1153.64f, 2.157057f };
			vLocal_1173 = { -1.541381f, 0.155416f, 92.08984f };
			vLocal_1176 = { -1058.799f, -1151.695f, 3.019048f };
			vLocal_1179 = { -8.483372f, 0.155417f, 120.0729f };
			vLocal_1182 = { -1073.324f, -1160.225f, 2.467393f };
			vLocal_1185 = { -9.078616f, 0.014872f, -56.52562f };
			vLocal_1188 = { -1074.407f, -1161.541f, 2.727543f };
			vLocal_1191 = { -9.078616f, 0.014872f, -56.52562f };
			break;
		case 5:
			vLocal_1146 = { 3071.705f, 680.4286f, -0.578093f };
			vLocal_1149 = { -14.99741f, 0f, 169.4703f };
			vLocal_1194 = { 3071.258f, 678.9485f, 3.839843f };
			vLocal_1197 = { -0.639399f, 0f, 168.9246f };
			vLocal_1152 = { 3070.761f, 677.4249f, 3.822088f };
			vLocal_1155 = { -0.639399f, 0f, 169.1743f };
			vLocal_1158 = { 3074.792f, 632.8167f, 2.242464f };
			vLocal_1161 = { 0.235991f, 0f, 58.90903f };
			vLocal_1164 = { 3072.679f, 629.8298f, 2.241469f };
			vLocal_1167 = { 0.235991f, 0f, 32.61848f };
			break;
		case 6:
			vLocal_1146 = { 3482.451f, 5171.12f, -2.622287f };
			vLocal_1149 = { -12.38926f, 0f, 26.13617f };
			vLocal_1194 = { 3481.747f, 5172.554f, 6.65429f };
			vLocal_1197 = { -9.870142f, 0f, 26.13616f };
			vLocal_1152 = { 3479.127f, 5173.103f, 6.487341f };
			vLocal_1155 = { -9.603036f, 0f, 21.92711f };
			vLocal_1158 = { 3457.328f, 5187.86f, 4.6358f };
			vLocal_1161 = { -24.8126f, 0.0397f, -41.5662f };
			vLocal_1164 = { 3456.51f, 5197.896f, 3.9627f };
			vLocal_1167 = { -23.4737f, 0.0397f, -128.4928f };
			break;
		case 7:
			vLocal_1146 = { 190.5428f, 3596.879f, 28.21027f };
			vLocal_1149 = { -16.6129f, -1E-06f, -17.12342f };
			vLocal_1194 = { 190.9281f, 3598.446f, 33.46021f };
			vLocal_1197 = { -6.51379f, 0f, -20.80637f };
			vLocal_1152 = { 189.0555f, 3599.194f, 33.45909f };
			vLocal_1155 = { -6.431107f, 0f, -24.99328f };
			vLocal_1158 = { 187.3536f, 3623.253f, 31.378f };
			vLocal_1161 = { 0.968793f, 0f, -171.1333f };
			vLocal_1164 = { 189.6363f, 3623.848f, 31.37059f };
			vLocal_1167 = { 0.968793f, 0f, 175.6184f };
			break;
		case 8:
			vLocal_1146 = { 617.7053f, -2150.886f, -6.053663f };
			vLocal_1149 = { -12.89488f, -2E-06f, -21.27229f };
			vLocal_1194 = { 616.8138f, -2149.222f, 1.441951f };
			vLocal_1197 = { 5.644659f, -2E-06f, -24.9429f };
			vLocal_1152 = { 615.142f, -2147.596f, 1.518046f };
			vLocal_1155 = { 3.451776f, -2E-06f, -29.07558f };
			vLocal_1158 = { 615.4761f, -2124.192f, 1.467611f };
			vLocal_1161 = { 0.143961f, 0f, -156.6226f };
			vLocal_1164 = { 617.9708f, -2122.319f, 1.464393f };
			vLocal_1167 = { 0.143961f, 0f, 179.0641f };
			break;
	}
	if (func_509())
	{
		vLocal_1182 = { -2.0797f, -1.409f, 1.3288f };
		vLocal_1185 = { -2.1875f, 1.5807f, 1.1049f };
		vLocal_1188 = { -0.6528f, -5.8087f, 2.317f };
		vLocal_1191 = { -0.7557f, -2.8423f, 1.8806f };
	}
}

bool func_565()
{
	int iVar0;

	if (func_178(vLocal_18.x))
	{
		iVar0 = UNK_0x134B62B726CEC8E6(vLocal_18.x);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("BALLER") || iVar0 == joaat("BALLER2")) || iVar0 == joaat("BISON")) || iVar0 == joaat("BISON2")) || iVar0 == joaat("BISON3")) || iVar0 == joaat("BOBCATXL")) || iVar0 == joaat("CAVALCADE")) || iVar0 == joaat("CAVALCADE2")) || iVar0 == joaat("CRUSADER")) || iVar0 == joaat("DUBSTA")) || iVar0 == joaat("DUBSTA2")) || iVar0 == joaat("FQ2")) || iVar0 == joaat("GRANGER")) || iVar0 == joaat("GRESLEY")) || iVar0 == joaat("LANDSTALKER")) || iVar0 == joaat("MESA")) || iVar0 == joaat("MESA2")) || iVar0 == joaat("MESA3")) || iVar0 == joaat("PATRIOT")) || iVar0 == joaat("RADI")) || iVar0 == joaat("RANCHERXL")) || iVar0 == joaat("RANCHERXL2")) || iVar0 == joaat("REBEL")) || iVar0 == joaat("ROCOTO")) || iVar0 == joaat("SADLER")) || iVar0 == joaat("SADLER2")) || iVar0 == joaat("SANDKING")) || iVar0 == joaat("SANDKING2")) || iVar0 == joaat("SEMINOLE")) || iVar0 == joaat("SUPERD")) || iVar0 == UNK_0x12AB0310C2281427("huntley")) || iVar0 == UNK_0x12AB0310C2281427("DUBSTA3"))
		{
			return true;
		}
	}
	return false;
}

void func_566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
			uParam6->f_247 = 2;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -151.94f, -1566.87f, 34.48f };
			uParam6->f_230[0] = 139.8f;
			uParam6->f_181[1 /*3*/] = { -155.98f, -1563.47f, 34.6f };
			uParam6->f_230[1] = 139.8f;
			uParam6->f_181[2 /*3*/] = { -146.4f, -1560.51f, 34.28f };
			uParam6->f_230[2] = 139.8f;
			uParam6->f_181[3 /*3*/] = { -150.53f, -1556.87f, 34.4f };
			uParam6->f_230[3] = 139.8f;
			uParam6->f_181[4 /*3*/] = { -141.15f, -1553.81f, 33.98f };
			uParam6->f_230[4] = 139.8f;
			uParam6->f_181[5 /*3*/] = { -144.97f, -1550.67f, 34.07f };
			uParam6->f_230[5] = 139.8f;
			uParam6->f_248 = 18;
			*(uParam6[0 /*3*/]) = { -177.4019f, -1594.644f, 33.4994f };
			*(uParam6[1 /*3*/]) = { -181.9884f, -1688.1f, 32.2323f };
			*(uParam6[2 /*3*/]) = { -68.2538f, -1793.952f, 26.8799f };
			*(uParam6[3 /*3*/]) = { 56.0836f, -1894.422f, 20.5566f };
			*(uParam6[4 /*3*/]) = { 102.9353f, -1868.229f, 23.1889f };
			*(uParam6[5 /*3*/]) = { 236.2683f, -1924.712f, 23.29643f };
			*(uParam6[6 /*3*/]) = { 287.2185f, -1884.079f, 25.9619f };
			*(uParam6[7 /*3*/]) = { 397.2169f, -1948.52f, 23.3175f };
			*(uParam6[8 /*3*/]) = { 552.7326f, -1879.798f, 24.4769f };
			*(uParam6[9 /*3*/]) = { 599.2975f, -1699.438f, 21.9581f };
			*(uParam6[10 /*3*/]) = { 603.7488f, -1595.439f, 25.5479f };
			*(uParam6[11 /*3*/]) = { 514.6337f, -1443.954f, 28.3433f };
			*(uParam6[12 /*3*/]) = { 471.4342f, -1433.925f, 28.34211f };
			*(uParam6[13 /*3*/]) = { 293.2f, -1521.2f, 28.3415f };
			*(uParam6[14 /*3*/]) = { 182.5014f, -1585.272f, 28.3099f };
			*(uParam6[15 /*3*/]) = { 16.9636f, -1465.682f, 29.5632f };
			*(uParam6[16 /*3*/]) = { -73.9895f, -1476.329f, 31.1385f };
			*(uParam6[17 /*3*/]) = { -155.8476f, -1566.98f, 34.00011f };
			break;
		case 1:
			uParam6->f_247 = 1;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 368.64f, 309.52f, 103.16f };
			uParam6->f_230[0] = 74.34f;
			uParam6->f_181[1 /*3*/] = { 370.33f, 314.66f, 103.07f };
			uParam6->f_230[1] = 74.34f;
			uParam6->f_181[2 /*3*/] = { 376.31f, 307.58f, 102.9f };
			uParam6->f_230[2] = 74.34f;
			uParam6->f_181[3 /*3*/] = { 377.5f, 313f, 103.04f };
			uParam6->f_230[3] = 74.34f;
			uParam6->f_181[4 /*3*/] = { 383.49f, 305.81f, 102.86f };
			uParam6->f_230[4] = 74.34f;
			uParam6->f_181[5 /*3*/] = { 385.23f, 311.22f, 102.77f };
			uParam6->f_230[5] = 74.34f;
			uParam6->f_248 = 60;
			*(uParam6[0 /*3*/]) = { 176.5163f, 368.2185f, 107.7932f };
			*(uParam6[1 /*3*/]) = { 74.6353f, 326.5884f, 111.1838f };
			*(uParam6[2 /*3*/]) = { 40.98252f, 278.1664f, 108.628f };
			*(uParam6[3 /*3*/]) = { -6.5086f, 269.1777f, 107.8002f };
			*(uParam6[4 /*3*/]) = { -157.2158f, 260.5422f, 92.9641f };
			*(uParam6[5 /*3*/]) = { -306.6567f, 264.1079f, 86.8654f };
			*(uParam6[6 /*3*/]) = { -510.8915f, 258.964f, 82.0697f };
			*(uParam6[7 /*3*/]) = { -677.1512f, 285.4961f, 81.0311f };
			*(uParam6[8 /*3*/]) = { -829.2744f, 291.7629f, 85.4059f };
			*(uParam6[9 /*3*/]) = { -854.5978f, 467.9413f, 86.39626f };
			*(uParam6[10 /*3*/]) = { -877.5402f, 535.0839f, 90.45716f };
			*(uParam6[11 /*3*/]) = { -1006.234f, 596.4271f, 101.8474f };
			*(uParam6[12 /*3*/]) = { -1211.74f, 545.4279f, 96.67117f };
			*(uParam6[13 /*3*/]) = { -1247.746f, 481.3893f, 92.658f };
			*(uParam6[14 /*3*/]) = { -1209.511f, 468.7086f, 88.8673f };
			*(uParam6[15 /*3*/]) = { -1096.542f, 456.5062f, 76.7926f };
			*(uParam6[16 /*3*/]) = { -1077.046f, 385.2891f, 68.0071f };
			*(uParam6[17 /*3*/]) = { -1081.664f, 292.3875f, 63.0137f };
			*(uParam6[18 /*3*/]) = { -1128.989f, 267.3287f, 64.9992f };
			*(uParam6[19 /*3*/]) = { -1274.646f, 228.7755f, 59.809f };
			*(uParam6[20 /*3*/]) = { -1408.295f, 193.1421f, 57.5883f };
			*(uParam6[21 /*3*/]) = { -1429.799f, -18.8745f, 51.4889f };
			*(uParam6[22 /*3*/]) = { -1466.38f, -91.9526f, 49.9463f };
			*(uParam6[23 /*3*/]) = { -1582.228f, -187.6987f, 54.6562f };
			*(uParam6[24 /*3*/]) = { -1633.187f, -302.6338f, 50.4393f };
			*(uParam6[25 /*3*/]) = { -1755.927f, -441.1943f, 41.2927f };
			*(uParam6[26 /*3*/]) = { -1675.621f, -568.3997f, 33.2031f };
			*(uParam6[27 /*3*/]) = { -1556.63f, -662.1553f, 27.9556f };
			*(uParam6[28 /*3*/]) = { -1441.304f, -761.7834f, 22.5293f };
			*(uParam6[29 /*3*/]) = { -1327.756f, -861.1824f, 15.5558f };
			*(uParam6[30 /*3*/]) = { -1254.9f, -1062.5f, 7.4798f };
			*(uParam6[31 /*3*/]) = { -1306.2f, -1091.1f, 6f };
			*(uParam6[32 /*3*/]) = { -1266.1f, -1265.2f, 3f };
			*(uParam6[33 /*3*/]) = { -1206.7f, -1251.5f, 6f };
			*(uParam6[34 /*3*/]) = { -1149.227f, -1305.18f, 4.164155f };
			*(uParam6[35 /*3*/]) = { -933.4516f, -1221.172f, 4.1712f };
			*(uParam6[36 /*3*/]) = { -804.6487f, -1141.681f, 8.1794f };
			*(uParam6[37 /*3*/]) = { -653.9498f, -1049.006f, 16.1054f };
			*(uParam6[38 /*3*/]) = { -635.1398f, -891.9207f, 23.9038f };
			*(uParam6[39 /*3*/]) = { -633.6005f, -739.1533f, 26.37f };
			*(uParam6[40 /*3*/]) = { -627.4288f, -582.9346f, 33.6256f };
			*(uParam6[41 /*3*/]) = { -625.0278f, -397.2912f, 33.7955f };
			*(uParam6[42 /*3*/]) = { -586.7f, -378.4f, 33.9005f };
			*(uParam6[43 /*3*/]) = { -437.4909f, -388.7413f, 32.1535f };
			*(uParam6[44 /*3*/]) = { -231.909f, -410.7465f, 29.6085f };
			*(uParam6[45 /*3*/]) = { -147.8854f, -373.2199f, 32.7875f };
			*(uParam6[46 /*3*/]) = { -115.0438f, -285.8302f, 40.5101f };
			*(uParam6[47 /*3*/]) = { -51.4044f, -257.3596f, 44.7924f };
			*(uParam6[48 /*3*/]) = { 85.9933f, -309.274f, 45.4642f };
			*(uParam6[49 /*3*/]) = { 225.0007f, -356.0629f, 43.2898f };
			*(uParam6[50 /*3*/]) = { 370.0895f, -402.5069f, 44.9239f };
			*(uParam6[51 /*3*/]) = { 481.0543f, -305.9488f, 45.6763f };
			*(uParam6[52 /*3*/]) = { 527.0013f, -220.0025f, 49.7887f };
			*(uParam6[53 /*3*/]) = { 546.5042f, -101.5203f, 64.26041f };
			*(uParam6[54 /*3*/]) = { 636.0579f, -57.7903f, 75.5052f };
			*(uParam6[55 /*3*/]) = { 703.7552f, 18.0953f, 83.1893f };
			*(uParam6[56 /*3*/]) = { 778.6013f, 128.2524f, 78.3677f };
			*(uParam6[57 /*3*/]) = { 751.6663f, 181.9566f, 81.9156f };
			*(uParam6[58 /*3*/]) = { 609.8065f, 232.9736f, 101.0741f };
			*(uParam6[59 /*3*/]) = { 369.29f, 312.41f, 103.24f };
			break;
		case 2:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -816.46f, -2547.3f, 13.5f };
			uParam6->f_230[0] = 341.07f;
			uParam6->f_181[1 /*3*/] = { -812.31f, -2549.09f, 13.33f };
			uParam6->f_230[1] = 341.07f;
			uParam6->f_181[2 /*3*/] = { -818.74f, -2553.95f, 13.38f };
			uParam6->f_230[2] = 341.07f;
			uParam6->f_181[3 /*3*/] = { -815.07f, -2555.46f, 13.41f };
			uParam6->f_230[3] = 341.07f;
			uParam6->f_181[4 /*3*/] = { -822.05f, -2559.68f, 13.49f };
			uParam6->f_230[4] = 341.07f;
			uParam6->f_181[5 /*3*/] = { -817.13f, -2562.07f, 13.34f };
			uParam6->f_230[5] = 341.07f;
			uParam6->f_248 = 30;
			*(uParam6[0 /*3*/]) = { -807.6469f, -2469.847f, 12.7351f };
			*(uParam6[1 /*3*/]) = { -846.8392f, -2324.698f, 16.9914f };
			*(uParam6[2 /*3*/]) = { -762.691f, -2198.874f, 14.9078f };
			*(uParam6[3 /*3*/]) = { -656.6849f, -2105.357f, 14.517f };
			*(uParam6[4 /*3*/]) = { -562.5864f, -2083.101f, 26.3678f };
			*(uParam6[5 /*3*/]) = { -336.5846f, -2111.548f, 22.7184f };
			*(uParam6[6 /*3*/]) = { -238.7528f, -2134.771f, 21.7367f };
			*(uParam6[7 /*3*/]) = { -18.5043f, -2050.755f, 18.0635f };
			*(uParam6[8 /*3*/]) = { 109.6071f, -2047.105f, 17.3701f };
			*(uParam6[9 /*3*/]) = { 162.2125f, -2017.698f, 17.2636f };
			*(uParam6[10 /*3*/]) = { 215.2578f, -1946.236f, 20.9418f };
			*(uParam6[11 /*3*/]) = { 200.6974f, -1907.024f, 22.7627f };
			*(uParam6[12 /*3*/]) = { 113.3993f, -1865.566f, 23.4617f };
			*(uParam6[13 /*3*/]) = { 68.2166f, -1891.056f, 20.7378f };
			*(uParam6[14 /*3*/]) = { -111.4028f, -1759.604f, 28.8334f };
			*(uParam6[15 /*3*/]) = { -242.8844f, -1813.055f, 28.7495f };
			*(uParam6[16 /*3*/]) = { -364.17f, -1821.922f, 21.5683f };
			*(uParam6[17 /*3*/]) = { -478.9611f, -1885.955f, 16.6741f };
			*(uParam6[18 /*3*/]) = { -598.0135f, -1999.651f, 16.4316f };
			*(uParam6[19 /*3*/]) = { -720.7257f, -2133.103f, 12.3082f };
			*(uParam6[20 /*3*/]) = { -777.2783f, -2181.116f, 14.8988f };
			*(uParam6[21 /*3*/]) = { -863.5436f, -2251.442f, 17.3272f };
			*(uParam6[22 /*3*/]) = { -948.965f, -2368.096f, 19.205f };
			*(uParam6[23 /*3*/]) = { -990.7916f, -2440.438f, 19.2041f };
			*(uParam6[24 /*3*/]) = { -1089.384f, -2613.615f, 19.2104f };
			*(uParam6[25 /*3*/]) = { -1084.455f, -2680.642f, 19.2111f };
			*(uParam6[26 /*3*/]) = { -996.711f, -2742.934f, 19.206f };
			*(uParam6[27 /*3*/]) = { -926.4546f, -2730.204f, 19.2052f };
			*(uParam6[28 /*3*/]) = { -874.8831f, -2665.625f, 18.6777f };
			*(uParam6[29 /*3*/]) = { -813.0546f, -2546.738f, 12.7888f };
			break;
		case 3:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 780.54f, -1150.96f, 28.65f };
			uParam6->f_230[0] = 93.71f;
			uParam6->f_181[1 /*3*/] = { 780.24f, -1145.74f, 28.56f };
			uParam6->f_230[1] = 93.71f;
			uParam6->f_181[2 /*3*/] = { 787.47f, -1150.53f, 28.5f };
			uParam6->f_230[2] = 93.71f;
			uParam6->f_181[3 /*3*/] = { 787.19f, -1145.74f, 28.66f };
			uParam6->f_230[3] = 93.71f;
			uParam6->f_181[4 /*3*/] = { 794.1f, -1149.95f, 28.66f };
			uParam6->f_230[4] = 93.71f;
			uParam6->f_181[5 /*3*/] = { 793.58f, -1144.73f, 28.59f };
			uParam6->f_230[5] = 93.71f;
			uParam6->f_248 = 24;
			*(uParam6[0 /*3*/]) = { 660.2601f, -1154.407f, 40.641f };
			*(uParam6[1 /*3*/]) = { 571.5685f, -1178.696f, 41.2734f };
			*(uParam6[2 /*3*/]) = { 421.5113f, -1184.212f, 39.7127f };
			*(uParam6[3 /*3*/]) = { 268.5206f, -1176.572f, 37.1933f };
			*(uParam6[4 /*3*/]) = { 186.8177f, -1162.025f, 37.1079f };
			*(uParam6[5 /*3*/]) = { 71f, -1163.3f, 28.7f };
			*(uParam6[6 /*3*/]) = { 74.9529f, -1267.338f, 28.19373f };
			*(uParam6[7 /*3*/]) = { 244.1904f, -1226.699f, 37.3049f };
			*(uParam6[8 /*3*/]) = { 394.5264f, -1224.619f, 39.1224f };
			*(uParam6[9 /*3*/]) = { 519.6835f, -1228.254f, 40.9569f };
			*(uParam6[10 /*3*/]) = { 643.6398f, -1244.262f, 40.9174f };
			*(uParam6[11 /*3*/]) = { 765.5765f, -1242.766f, 25.9457f };
			*(uParam6[12 /*3*/]) = { 851.6f, -1254.2f, 26.9066f };
			*(uParam6[13 /*3*/]) = { 859.1f, -1326.3f, 37.0286f };
			*(uParam6[14 /*3*/]) = { 739.5747f, -1347.013f, 38.903f };
			*(uParam6[15 /*3*/]) = { 695.9282f, -1292.136f, 41.1269f };
			*(uParam6[16 /*3*/]) = { 729.7197f, -1235.624f, 43.9479f };
			*(uParam6[17 /*3*/]) = { 755.8483f, -1195.996f, 44.0202f };
			*(uParam6[18 /*3*/]) = { 724.6743f, -1156.984f, 43.7047f };
			*(uParam6[19 /*3*/]) = { 688.6f, -1101.7f, 40.8716f };
			*(uParam6[20 /*3*/]) = { 732.4061f, -1045.311f, 39.4973f };
			*(uParam6[21 /*3*/]) = { 815.3089f, -1042.096f, 41.2541f };
			*(uParam6[22 /*3*/]) = { 865.2093f, -1093.343f, 35.9246f };
			*(uParam6[23 /*3*/]) = { 777.4238f, -1148.405f, 28.07877f };
			break;
		case 4:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -1063.95f, -1153.21f, 1.52f };
			uParam6->f_230[0] = 299.67f;
			uParam6->f_181[1 /*3*/] = { -1062.53f, -1155.37f, 1.46f };
			uParam6->f_230[1] = 299.67f;
			uParam6->f_181[2 /*3*/] = { -1068.6f, -1155.54f, 1.61f };
			uParam6->f_230[2] = 299.67f;
			uParam6->f_181[3 /*3*/] = { -1066.89f, -1157.64f, 1.56f };
			uParam6->f_230[3] = 299.67f;
			uParam6->f_181[4 /*3*/] = { -1072.76f, -1158.02f, 1.53f };
			uParam6->f_230[4] = 299.67f;
			uParam6->f_181[5 /*3*/] = { -1072.01f, -1160.27f, 1.48f };
			uParam6->f_230[5] = 299.67f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { -925.4882f, -1072.804f, 1.1502f };
			*(uParam6[1 /*3*/]) = { -838.902f, -1020.697f, 12.2795f };
			*(uParam6[2 /*3*/]) = { -752.4019f, -968.1661f, 15.5933f };
			*(uParam6[3 /*3*/]) = { -660.0514f, -959.4323f, 20.3359f };
			*(uParam6[4 /*3*/]) = { -643.1226f, -996.0269f, 19.6655f };
			*(uParam6[5 /*3*/]) = { -755.0204f, -1100.572f, 9.7347f };
			*(uParam6[6 /*3*/]) = { -844.4481f, -1152.17f, 5.5481f };
			*(uParam6[7 /*3*/]) = { -934.6541f, -1204.102f, 4.1492f };
			*(uParam6[8 /*3*/]) = { -968.2922f, -1181.906f, 2.909f };
			*(uParam6[9 /*3*/]) = { -1023.329f, -1087.952f, 1.0397f };
			*(uParam6[10 /*3*/]) = { -1078.633f, -994.3664f, 1.2191f };
			*(uParam6[11 /*3*/]) = { -1170.782f, -837.8701f, 13.2119f };
			*(uParam6[12 /*3*/]) = { -1312.033f, -658.3402f, 25.5365f };
			*(uParam6[13 /*3*/]) = { -1375.911f, -560.5161f, 29.234f };
			*(uParam6[14 /*3*/]) = { -1446.224f, -460.4871f, 34.1264f };
			*(uParam6[15 /*3*/]) = { -1487.252f, -447.6395f, 34.594f };
			*(uParam6[16 /*3*/]) = { -1638.216f, -562.0701f, 32.4537f };
			*(uParam6[17 /*3*/]) = { -1625.822f, -610.9568f, 31.6803f };
			*(uParam6[18 /*3*/]) = { -1531.39f, -684.85f, 27.8725f };
			*(uParam6[19 /*3*/]) = { -1424.36f, -771.3326f, 21.8328f };
			*(uParam6[20 /*3*/]) = { -1300.448f, -901.4435f, 10.3951f };
			*(uParam6[21 /*3*/]) = { -1257.012f, -1048.034f, 7.5077f };
			*(uParam6[22 /*3*/]) = { -1211.112f, -1198.487f, 6.755771f };
			*(uParam6[23 /*3*/]) = { -1104.378f, -1177.508f, 1.2615f };
			*(uParam6[24 /*3*/]) = { -1062.986f, -1153.365f, 1.129525f };
			break;
		case 5:
			uParam6->f_247 = 1;
			uParam6->f_250 = 52f;
			uParam6->f_251 = 56f;
			uParam6->f_252 = 60f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3058.771f, 637.4882f, 0f };
			uParam6->f_230[0] = 24f;
			uParam6->f_181[1 /*3*/] = { 3061.604f, 638.7496f, 0f };
			uParam6->f_230[1] = 24f;
			uParam6->f_181[2 /*3*/] = { 3064.437f, 640.0109f, 0f };
			uParam6->f_230[2] = 24f;
			uParam6->f_181[3 /*3*/] = { 3067.27f, 641.2722f, 0f };
			uParam6->f_230[3] = 24f;
			uParam6->f_181[4 /*3*/] = { 3061.63f, 631.067f, 0f };
			uParam6->f_230[4] = 24f;
			uParam6->f_181[5 /*3*/] = { 3064.463f, 632.3283f, 0f };
			uParam6->f_230[5] = 24f;
			uParam6->f_181[6 /*3*/] = { 3067.296f, 633.5896f, 0f };
			uParam6->f_230[6] = 24f;
			uParam6->f_181[7 /*3*/] = { 3070.129f, 634.851f, 0f };
			uParam6->f_230[7] = 24f;
			uParam6->f_248 = 19;
			*(uParam6[0 /*3*/]) = { 2978.929f, 778.0858f, 0f };
			*(uParam6[1 /*3*/]) = { 2925.586f, 840.1877f, 0f };
			*(uParam6[2 /*3*/]) = { 2913.896f, 1011.495f, 0f };
			*(uParam6[3 /*3*/]) = { 2903.343f, 1120.076f, 0f };
			*(uParam6[4 /*3*/]) = { 2944.478f, 1197.342f, 0f };
			*(uParam6[5 /*3*/]) = { 3020.189f, 1217.427f, 0f };
			*(uParam6[6 /*3*/]) = { 3107.794f, 1212.536f, 0f };
			*(uParam6[7 /*3*/]) = { 3164.754f, 1246.812f, 0f };
			*(uParam6[8 /*3*/]) = { 3185.532f, 1293.382f, 0f };
			*(uParam6[9 /*3*/]) = { 3122.885f, 1432.143f, 0f };
			*(uParam6[10 /*3*/]) = { 3021.7f, 1553.274f, 0f };
			*(uParam6[11 /*3*/]) = { 3014.559f, 1634.445f, 0f };
			*(uParam6[12 /*3*/]) = { 3045.481f, 1681.173f, 0f };
			*(uParam6[13 /*3*/]) = { 3104.443f, 1687.211f, 0f };
			*(uParam6[14 /*3*/]) = { 3147.714f, 1629.84f, 0f };
			*(uParam6[15 /*3*/]) = { 3119.681f, 1571.555f, 0f };
			*(uParam6[16 /*3*/]) = { 3005.006f, 1482.663f, 0f };
			*(uParam6[17 /*3*/]) = { 2973.872f, 1355.766f, 0f };
			*(uParam6[18 /*3*/]) = { 3014.149f, 1187.6f, 0f };
			break;
		case 6:
			uParam6->f_247 = 1;
			uParam6->f_250 = 62f;
			uParam6->f_251 = 66f;
			uParam6->f_252 = 70f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3477.927f, 5203.865f, 0f };
			uParam6->f_230[0] = 227.2083f;
			uParam6->f_181[1 /*3*/] = { 3473.713f, 5199.313f, 0f };
			uParam6->f_230[1] = 227.2083f;
			uParam6->f_181[2 /*3*/] = { 3469.5f, 5194.762f, 0f };
			uParam6->f_230[2] = 227.2083f;
			uParam6->f_181[3 /*3*/] = { 3465.287f, 5190.21f, 0f };
			uParam6->f_230[3] = 227.2083f;
			uParam6->f_181[4 /*3*/] = { 3472.768f, 5208.64f, 0f };
			uParam6->f_230[4] = 227.2083f;
			uParam6->f_181[5 /*3*/] = { 3468.555f, 5204.088f, 0f };
			uParam6->f_230[5] = 227.2083f;
			uParam6->f_181[6 /*3*/] = { 3464.342f, 5199.537f, 0f };
			uParam6->f_230[6] = 227.2083f;
			uParam6->f_181[7 /*3*/] = { 3460.128f, 5194.985f, 0f };
			uParam6->f_230[7] = 227.2083f;
			uParam6->f_248 = 29;
			*(uParam6[0 /*3*/]) = { 3533.901f, 5140.196f, 0f };
			*(uParam6[1 /*3*/]) = { 3561.557f, 5013.942f, 0f };
			*(uParam6[2 /*3*/]) = { 3602.232f, 4928.896f, 0f };
			*(uParam6[3 /*3*/]) = { 3682.408f, 4853.424f, 0f };
			*(uParam6[4 /*3*/]) = { 3776.303f, 4862.4f, 0f };
			*(uParam6[5 /*3*/]) = { 3838.789f, 4851.96f, 0f };
			*(uParam6[6 /*3*/]) = { 3879.336f, 4777.732f, 0f };
			*(uParam6[7 /*3*/]) = { 3875.379f, 4684.574f, 0f };
			*(uParam6[8 /*3*/]) = { 4004.355f, 4513.158f, 0f };
			*(uParam6[9 /*3*/]) = { 4028.42f, 4457.351f, 0f };
			*(uParam6[10 /*3*/]) = { 4011.752f, 4363.838f, 0f };
			*(uParam6[11 /*3*/]) = { 3965.229f, 4321.524f, 0f };
			*(uParam6[12 /*3*/]) = { 3958.307f, 4269.164f, 0f };
			*(uParam6[13 /*3*/]) = { 4007.071f, 4201.311f, 0f };
			*(uParam6[14 /*3*/]) = { 4067.812f, 4155.95f, 0f };
			*(uParam6[15 /*3*/]) = { 4124.166f, 4158.292f, 0f };
			*(uParam6[16 /*3*/]) = { 4173.66f, 4207.495f, 0f };
			*(uParam6[17 /*3*/]) = { 4200.325f, 4325.868f, 0f };
			*(uParam6[18 /*3*/]) = { 4232.361f, 4458.968f, 0f };
			*(uParam6[19 /*3*/]) = { 4212.95f, 4519.744f, 0f };
			*(uParam6[20 /*3*/]) = { 4137.386f, 4562.076f, 0f };
			*(uParam6[21 /*3*/]) = { 3952.561f, 4561.69f, 0f };
			*(uParam6[22 /*3*/]) = { 3850.727f, 4674.479f, 0f };
			*(uParam6[23 /*3*/]) = { 3840.677f, 4729.697f, 0f };
			*(uParam6[24 /*3*/]) = { 3868.624f, 4810.973f, 0f };
			*(uParam6[25 /*3*/]) = { 3861.741f, 4847.778f, 0f };
			*(uParam6[26 /*3*/]) = { 3819.871f, 4912.847f, 0f };
			*(uParam6[27 /*3*/]) = { 3707.324f, 5047.796f, 0f };
			*(uParam6[28 /*3*/]) = { 3603.679f, 5125.124f, 0f };
			break;
		case 7:
			uParam6->f_247 = 1;
			uParam6->f_250 = 20f;
			uParam6->f_251 = 30f;
			uParam6->f_252 = 40f;
			uParam6->f_249 = 3;
			uParam6->f_181[0 /*3*/] = { 207.0846f, 3615.2f, 30.1f };
			uParam6->f_230[0] = -188f;
			uParam6->f_181[1 /*3*/] = { 200.9427f, 3616.063f, 30.1f };
			uParam6->f_230[1] = -188f;
			uParam6->f_181[2 /*3*/] = { 194.8008f, 3616.927f, 30.1f };
			uParam6->f_230[2] = -188f;
			uParam6->f_181[3 /*3*/] = { 188.6589f, 3617.79f, 30.1f };
			uParam6->f_230[3] = -188f;
			uParam6->f_248 = 14;
			*(uParam6[0 /*3*/]) = { 156.2047f, 3459.932f, 30f };
			*(uParam6[1 /*3*/]) = { 113.8073f, 3309.78f, 27.996f };
			*(uParam6[2 /*3*/]) = { 36.4057f, 3136.948f, 25.0106f };
			*(uParam6[3 /*3*/]) = { -128.4259f, 3113.228f, 20.7191f };
			*(uParam6[4 /*3*/]) = { -232.13f, 3004.532f, 16.8594f };
			*(uParam6[5 /*3*/]) = { -371.5406f, 3013.692f, 11.5494f };
			*(uParam6[6 /*3*/]) = { -479.2344f, 2908.703f, 12.1299f };
			*(uParam6[7 /*3*/]) = { -611.1117f, 2960.914f, 12.2048f };
			*(uParam6[8 /*3*/]) = { -740.982f, 2867.565f, 12.1505f };
			*(uParam6[9 /*3*/]) = { -863.817f, 2804.024f, 8.5818f };
			*(uParam6[10 /*3*/]) = { -1023.538f, 2833.889f, 2.927f };
			*(uParam6[11 /*3*/]) = { -1160.616f, 2766.003f, -1.4915f };
			*(uParam6[12 /*3*/]) = { -1278.023f, 2669.231f, -0.6163f };
			*(uParam6[13 /*3*/]) = { -1450.428f, 2625.473f, 0f };
			break;
		case 8:
			uParam6->f_247 = 1;
			uParam6->f_250 = 72f;
			uParam6->f_251 = 76f;
			uParam6->f_252 = 80f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 626.4072f, -2135.928f, 0f };
			uParam6->f_230[0] = 176f;
			uParam6->f_181[1 /*3*/] = { 623.3137f, -2135.712f, 0f };
			uParam6->f_230[1] = 176f;
			uParam6->f_181[2 /*3*/] = { 620.2201f, -2135.495f, 0f };
			uParam6->f_230[2] = 176f;
			uParam6->f_181[3 /*3*/] = { 617.1265f, -2135.279f, 0f };
			uParam6->f_230[3] = 176f;
			uParam6->f_181[4 /*3*/] = { 626.8975f, -2128.916f, 0f };
			uParam6->f_230[4] = 176f;
			uParam6->f_181[5 /*3*/] = { 623.804f, -2128.7f, 0f };
			uParam6->f_230[5] = 176f;
			uParam6->f_181[6 /*3*/] = { 620.7104f, -2128.483f, 0f };
			uParam6->f_230[6] = 176f;
			uParam6->f_181[7 /*3*/] = { 617.6168f, -2128.267f, 0f };
			uParam6->f_230[7] = 176f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { 628.2693f, -2361.573f, 0f };
			*(uParam6[1 /*3*/]) = { 624.4983f, -2472.271f, 0f };
			*(uParam6[2 /*3*/]) = { 656.1755f, -2551.063f, 0f };
			*(uParam6[3 /*3*/]) = { 707.1786f, -2577.509f, 0f };
			*(uParam6[4 /*3*/]) = { 821.6584f, -2613.453f, 0f };
			*(uParam6[5 /*3*/]) = { 913.3214f, -2662.629f, 0f };
			*(uParam6[6 /*3*/]) = { 992.793f, -2725.734f, 0f };
			*(uParam6[7 /*3*/]) = { 1010.991f, -2799.774f, 0f };
			*(uParam6[8 /*3*/]) = { 955.9268f, -2841.99f, 0f };
			*(uParam6[9 /*3*/]) = { 838.408f, -2820.556f, 0f };
			*(uParam6[10 /*3*/]) = { 788.3865f, -2739.525f, 0f };
			*(uParam6[11 /*3*/]) = { 781.0709f, -2635.677f, 0f };
			*(uParam6[12 /*3*/]) = { 707.1389f, -2600.342f, 0f };
			*(uParam6[13 /*3*/]) = { 581.391f, -2527.31f, -1f };
			*(uParam6[14 /*3*/]) = { 523.5403f, -2445.459f, 0f };
			*(uParam6[15 /*3*/]) = { 465.708f, -2385.965f, 0f };
			*(uParam6[16 /*3*/]) = { 409.5882f, -2270.467f, 0f };
			*(uParam6[17 /*3*/]) = { 323.1916f, -2259.304f, 0f };
			*(uParam6[18 /*3*/]) = { 271.27f, -2286.134f, 0f };
			*(uParam6[19 /*3*/]) = { 261.3279f, -2344.937f, 0f };
			*(uParam6[20 /*3*/]) = { 295.7343f, -2372.19f, 0f };
			*(uParam6[21 /*3*/]) = { 372.9001f, -2373.087f, 0f };
			*(uParam6[22 /*3*/]) = { 410.8412f, -2413.066f, 0f };
			*(uParam6[23 /*3*/]) = { 412.1277f, -2539.383f, 0f };
			*(uParam6[24 /*3*/]) = { 413.6328f, -2712.87f, 0f };
			break;
	}
}

void func_567(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		iVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &iVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_568(int iParam0)
{
	func_537();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_569(int iParam0)
{
	if ((Local_586.f_11 == 1 || Local_586.f_11 == 2) || Local_586.f_11 == 3)
	{
		switch (Local_580)
		{
			case 5:
				func_583(132, 0, 0);
				break;
			case 6:
				func_583(133, 0, 0);
				break;
			case 7:
				func_583(134, 0, 0);
				break;
			case 8:
				func_583(135, 0, 0);
				break;
			case 0:
				func_583(140, 0, 0);
				break;
			case 1:
				func_583(136, 0, 0);
				break;
			case 2:
				func_583(137, 0, 0);
				break;
			case 3:
				func_583(138, 0, 0);
				break;
			case 4:
				func_583(139, 0, 0);
				break;
		}
		if (Local_586.f_11 == 1 && !Global_111638.f_24974.f_4)
		{
			if (((((UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, false) || Local_580 == 0) && (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, true) || Local_580 == 1)) && (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 2) || Local_580 == 2)) && (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 3) || Local_580 == 3)) && (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 4) || Local_580 == 4))
			{
				if (func_582(-974942855, 6, 2, 53, 3, 10000, 10000, -1, -1, 0, -1, 0))
				{
					Global_111638.f_24974.f_4 = 1;
				}
			}
		}
	}
	func_534(1, 1);
	func_534(7, 1);
	func_581(&(Local_580.f_2));
	func_537();
	func_580(&bLocal_2358, 0);
	func_580(&bLocal_2365, 0);
	func_580(&bLocal_2372, 0);
	func_580(&bLocal_2379, 0);
	func_572(iParam0);
	func_555(0);
	func_422(&bLocal_1771);
	func_270();
	func_228(&Local_119, 0);
	if (Local_580.f_1 == 3)
	{
		UNK_0xAD4193DCC43BF34B("RADIO_16_SILVERLAKE");
	}
	UNK_0x5BED90AC1E2BC558("AZ_DISTANT_VEHICLES_CITY_CENTRE", 1, 0);
	UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 1, 0);
	UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 1, 0);
	UNK_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 1, 0);
	switch (Local_580)
	{
		case 5:
			func_571(82, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), false);
			break;
		case 6:
			func_571(83, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), true);
			break;
		case 7:
			func_571(84, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 2);
			break;
		case 8:
			func_571(85, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_2), 3);
			break;
		case 0:
			func_571(86, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), false);
			break;
		case 1:
			func_571(87, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), true);
			break;
		case 2:
			func_571(88, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 2);
			break;
		case 3:
			func_571(89, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 3);
			break;
		case 4:
			func_571(90, 0, 0);
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_3), 4);
			break;
	}
	UNK_0x11CCD0ACA866C6C5(false, 1);
	SYSTEM::WAIT(1000);
	UNK_0xEAB026E686C0D991(1, 80, 1);
	UNK_0xEAB026E686C0D991(0, 80, 1);
	UNK_0x31A33F7BCB08CB80(false);
	func_570();
	UNK_0x10FAF14A60A0DBE1();
}

void func_570()
{
	vector3 vVar0[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		UNK_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_571(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 15);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
		{
			UNK_0xCD816869CA451988(1);
			UNK_0x142CC44DB769B57E(&(Global_31146[iVar0 /*23*/].f_19));
			UNK_0xCD816869CA451988(0);
		}
	}
}

void func_572(int iParam0)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	func_237(&Local_1205, 1, 0);
	UNK_0xB975E4541DDAB1F5(0);
	if ((Local_586.f_11 == 1 || Local_586.f_11 == 2) || Local_586.f_11 == 3)
	{
		func_576();
	}
	if (Local_586.f_11 == 1)
	{
		func_573();
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
	}
	if (func_9(UNK_0x16F2683693E537C9()))
	{
		UNK_0xCC095276B3DD380E(UNK_0x16F2683693E537C9(), 1);
	}
	UNK_0x2733E1E56786AB9E(false);
	UNK_0xFF42993F8A095C58(3);
	UNK_0x3F50EAA916065520(false);
	UNK_0xC83E7A5E408DF68C(3);
	UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 1);
	UNK_0x060F249A9A3E3F4E(true);
	UNK_0x51B096AAC60548C1(1f);
	UNK_0xF48790410026514E(1);
	UNK_0xCD7D80FD792F9954("DRIVE", true);
	UNK_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 100f, true, 1);
	func_179(1);
	func_32(iParam0);
	if (!UNK_0xEA6BC48857E0AC4C(bLocal_1430))
	{
		UNK_0x2F3540C2227116A3(bLocal_1430);
	}
	func_33(&bLocal_1419, 1, 0, 1);
	func_33(&bLocal_1400, 1, 0, 1);
	func_33(&bLocal_1401, 1, 0, 1);
	func_33(&bLocal_1402, 1, 0, 1);
	if (UNK_0xC844350D5D58C99A(vLocal_18.x))
	{
		if (!UNK_0x437347B10A200C4B(vLocal_18.x, 0))
		{
			UNK_0xD5A0214B20BCBAD8(vLocal_18.x, 0);
			UNK_0x44A200C9B6E1CEA6(vLocal_18.x, false);
			if ((Local_580.f_1 == 3 && func_9(UNK_0x16F2683693E537C9())) && UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x545E1397F38D9D5A(UNK_0x16F2683693E537C9(), 0);
			}
		}
		func_422(&vLocal_18);
	}
	UNK_0xCE1730371ACDCCFC(0);
	Global_1574184 = 0;
	if (Local_580.f_1 == 3)
	{
		UNK_0x55D0A2DB35045A35(iLocal_1201);
		UNK_0x8C26F31DFF77D124();
	}
	else
	{
		UNK_0xE96F19797E59AB06();
	}
	if (Local_580.f_1 == 3)
	{
		UNK_0xC92DB9682A650680("MGSR_STOP");
	}
}

void func_573()
{
	switch (Local_580)
	{
		case 5:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_1, false))
			{
				func_575(82, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_1), false);
				func_574();
			}
			break;
		case 6:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_1, true))
			{
				func_575(83, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_1), true);
				func_574();
			}
			break;
		case 7:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_1, 2))
			{
				func_575(84, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_1), 2);
				func_574();
			}
			break;
		case 8:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24971.f_1, 3))
			{
				func_575(85, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24971.f_1), 3);
				func_574();
			}
			break;
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, false))
			{
				func_575(86, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_2), false);
				func_574();
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, true))
			{
				func_575(87, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_2), true);
				func_574();
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 2))
			{
				func_575(88, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_2), 2);
				func_574();
			}
			break;
		case 3:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 3))
			{
				func_575(89, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_2), 3);
				func_574();
			}
			break;
		case 4:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_2, 4))
			{
				func_575(90, 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_2), 4);
				func_574();
			}
			break;
	}
}

int func_574()
{
	if (func_227(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

void func_575(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 20);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 20);
}

void func_576()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = -1;
	switch (Local_580)
	{
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, true))
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_24974.f_1), true);
				bVar0 = true;
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 2) && Global_111638.f_24974 != 2)
			{
				Global_111638.f_24974 = 2;
				iVar1 = -527573502;
				bVar0 = true;
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 3) && Global_111638.f_24974 != 3)
			{
				Global_111638.f_24974 = 3;
				iVar1 = 277048894;
				bVar0 = true;
			}
			break;
		case 3:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24974.f_1, 4) && Global_111638.f_24974 != 4)
			{
				Global_111638.f_24974 = 4;
				iVar1 = 477030223;
				bVar0 = true;
			}
			break;
		case 4:
			break;
	}
	if (bVar0)
	{
		if (iVar1 != -1)
		{
			func_577(iVar1, 1, 2, 53, 2880000, 10000, -1, 189, -1, 0, 1);
		}
		func_574();
	}
}

int func_577(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;

	if (func_227(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, bParam3))
		{
			return 0;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_579(iParam1);
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = bParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764 /*14*/] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_578(0);
		func_578(1);
		func_578(2);
		return 1;
	}
	return 0;
}

void func_578(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_108(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[bParam0] = iVar1;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
		case 7:
			return 4;
		case 2:
			return 3;
		case 1:
			return 2;
		case 3:
			return 1;
		case 5:
		case 6:
			return 0;
	}
	return 7;
}

void func_580(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

void func_581(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

bool func_582(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;

	if (func_227(0))
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (bParam3 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, bParam3))
		{
			return false;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return false;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
	{
		return false;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_579(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam2;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bParam2, bVar15))
			{
				func_578(bVar15);
			}
			bVar15++;
		}
		return true;
	}
	return false;
}

void func_583(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_196((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_584();
	}
}

void func_584()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					UNK_0xE7B2B6A56C007908(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		bVar9 = Global_111364;
	}
	else
	{
		bVar9 = Global_111378;
	}
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_COMPLETED"), bVar9, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + bVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	UNK_0x11F69E56D7B5F3C7(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_217(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_585() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_574();
				}
			}
		}
	}
}

int func_585()
{
	return Global_30768;
}

