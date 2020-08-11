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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	float fLocal_64 = 0f;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	struct<68> Local_68 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	vector3 vLocal_138 = { 0f, 0f, 0f };
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 3;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
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
	var uLocal_192 = 4;
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
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
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
	var uLocal_257 = 2;
	var uLocal_258 = 0;
	var uLocal_259 = 4;
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
	var uLocal_300 = 0;
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
	var uLocal_325 = 4;
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
	var uLocal_371 = 0;
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
	var uLocal_396 = 12;
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
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 3;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	int iLocal_581 = 0;
	bool bLocal_582 = false;
	bool bLocal_583 = false;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 16;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
	var uScriptParam_96 = 0;
	var uScriptParam_97 = 0;
	var uScriptParam_98 = 0;
	var uScriptParam_99 = 0;
	var uScriptParam_100 = 0;
	var uScriptParam_101 = 0;
	var uScriptParam_102 = 0;
	var uScriptParam_103 = 0;
	var uScriptParam_104 = 0;
	var uScriptParam_105 = 0;
	var uScriptParam_106 = 0;
	var uScriptParam_107 = 0;
	var uScriptParam_108 = 0;
	var uScriptParam_109 = 0;
	var uScriptParam_110 = 0;
	var uScriptParam_111 = 0;
	var uScriptParam_112 = 0;
	var uScriptParam_113 = 0;
	var uScriptParam_114 = 0;
	var uScriptParam_115 = 0;
	var uScriptParam_116 = 0;
	var uScriptParam_117 = 0;
	var uScriptParam_118 = 0;
	var uScriptParam_119 = 0;
	var uScriptParam_120 = 0;
	var uScriptParam_121 = 0;
	var uScriptParam_122 = 0;
	var uScriptParam_123 = 0;
	var uScriptParam_124 = 0;
	var uScriptParam_125 = 0;
	var uScriptParam_126 = 0;
	var uScriptParam_127 = 0;
	var uScriptParam_128 = 0;
	var uScriptParam_129 = 0;
	var uScriptParam_130 = 0;
	var uScriptParam_131 = 0;
	var uScriptParam_132 = 0;
	var uScriptParam_133 = 0;
	var uScriptParam_134 = 0;
	var uScriptParam_135 = 0;
	var uScriptParam_136 = 0;
	var uScriptParam_137 = 0;
	var uScriptParam_138 = 0;
	var uScriptParam_139 = 0;
	var uScriptParam_140 = 0;
	var uScriptParam_141 = 0;
	var uScriptParam_142 = 0;
	var uScriptParam_143 = 0;
	var uScriptParam_144 = 0;
	var uScriptParam_145 = 0;
	var uScriptParam_146 = 0;
	var uScriptParam_147 = 0;
	var uScriptParam_148 = 0;
	var uScriptParam_149 = 0;
	var uScriptParam_150 = 0;
	var uScriptParam_151 = 0;
	var uScriptParam_152 = 0;
	var uScriptParam_153 = 0;
	var uScriptParam_154 = 0;
	var uScriptParam_155 = 0;
	var uScriptParam_156 = 0;
	var uScriptParam_157 = 0;
	var uScriptParam_158 = 0;
	var uScriptParam_159 = 0;
	var uScriptParam_160 = 0;
	var uScriptParam_161 = 0;
	var uScriptParam_162 = 0;
	var uScriptParam_163 = 0;
	var uScriptParam_164 = 0;
	var uScriptParam_165 = 0;
	var uScriptParam_166 = 0;
	var uScriptParam_167 = 0;
	var uScriptParam_168 = 0;
	var uScriptParam_169 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar14;
	bool bVar15;
	struct<13> Var16;
	var uVar101;
	var uVar107;
	struct<27> Var111;
	int iVar715;
	int iVar716;
	int iVar717;
	int iVar718;
	struct<11> Var723;
	var uVar862;
	bool bVar868;
	int iVar869;
	int iVar870;
	var uVar871;
	var uVar874;
	var uVar877;
	var uVar880;
	var uVar883;
	var uVar886;
	var uVar889;
	var uVar892;
	var uVar895;
	var uVar898;
	var uVar901;
	vector3 vVar904;
	var uVar907;
	var uVar910;
	var uVar913;
	var uVar916;
	var uVar919;
	bool bVar1084;
	bool bVar1085;
	var uVar1086;
	bool bVar1087;
	var uVar1088;
	bool bVar1089;
	int iVar1090[3];
	bool bVar1094;
	var uVar1095;
	bool bVar1096;
	bool bVar1097;
	int iVar1098[6];
	int iVar1105;
	int iVar1106;
	int iVar1107;
	int iVar1108;
	int iVar1109;
	int iVar1110;
	var uVar1111;
	var uVar1112;
	bool bVar1113;
	bool bVar1114;
	struct<4> Var1115;
	vector3 vVar1119;
	vector3 vVar1122;
	vector3 vVar1125;
	vector3 vVar1128;
	var uVar1131;
	vector3 vVar1134;
	vector3 vVar1137;
	var uVar1140;
	var uVar1143;
	float fVar1144;
	var uVar1145;
	var uVar1146;
	var uVar1147;
	float fVar1148;
	int iVar1149;
	int iVar1150;
	int iVar1151;
	int iVar1152;
	int iVar1153;
	int iVar1154;
	bool bVar1155;
	bool bVar1156;
	bool bVar1157;
	int iVar1158;
	int iVar1159;
	int iVar1160;
	int iVar1161;
	bool bVar1162;
	int iVar1163;
	int iVar1164;
	int iVar1165;
	var uVar1166;
	var uVar1167;
	bool bVar1168;
	bool bVar1169;
	bool bVar1170;
	int iVar1171;
	bool bVar1172;
	bool bVar1173;
	var uVar1174;
	bool bVar1175;
	bool bVar1176;
	bool bVar1177;
	bool bVar1178;
	bool bVar1179;
	bool bVar1180;
	bool bVar1181;
	bool bVar1182;
	bool bVar1183;
	bool bVar1184;
	bool bVar1185;
	bool bVar1186;
	bool bVar1187;
	bool bVar1188;
	bool bVar1189;
	bool bVar1190;
	bool bVar1191;
	bool bVar1192;
	bool bVar1193;
	vector3 vVar1194;
	int iVar1197;
	bool bVar1198;

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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	vLocal_138 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var16.f_12 = 12;
	uVar107 = 2;
	Var111.f_3 = 8;
	Var111.f_12 = 8;
	Var111.f_21 = 4;
	Var111.f_26.f_32 = 3;
	Var111.f_26.f_36 = 1;
	Var111.f_26.f_53 = 2;
	Var111.f_26.f_57 = 13;
	Var111.f_26.f_71 = 13;
	Var111.f_26.f_280 = 13;
	Var111.f_26.f_489 = 13;
	Var111.f_26.f_503 = 13;
	Var111.f_26.f_517 = 13;
	Var111.f_26.f_531 = 13;
	Var723.f_10.f_2 = 8;
	Var723.f_10.f_2.f_1.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar869 = -1;
	uVar919 = 16;
	bVar1084 = ScriptParam_0;
	bVar1096 = ScriptParam_0.f_3;
	bVar1113 = "BJ_FAIL";
	bVar1114 = "";
	vVar1128 = { 5f, 5f, 10f };
	fVar1144 = 1f;
	fVar1148 = -1f;
	iVar1149 = -1;
	iVar1152 = -1;
	bVar1156 = Global_111638.f_18962;
	iVar1159 = 1;
	iVar1160 = -1;
	bVar1179 = false;
	bVar1184 = true;
	bVar1186 = false;
	bVar1187 = false;
	bVar1189 = true;
	bVar1190 = false;
	bVar1191 = false;
	bVar1192 = false;
	if (UNK_0xC844350D5D58C99A(ScriptParam_0.f_1))
	{
		bVar1094 = ScriptParam_0.f_1;
	}
	else
	{
		bVar1094 = UNK_0x728870EB733D12A1();
	}
	bVar1190 = UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"), 0);
	bVar1191 = UNK_0x42CF608FD1475F11(UNK_0xD803B885F5E47A62());
	if (bVar1190)
	{
		UNK_0xBDCADF8E5030FC79(UNK_0xD803B885F5E47A62(), &iVar1165);
		UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &uVar1166);
	}
	if (bVar1191)
	{
		UNK_0x1E9DAC645AEE64F0(UNK_0xD803B885F5E47A62(), &uVar1167);
	}
	if (UNK_0xC844350D5D58C99A(bVar1094))
	{
		UNK_0x73270B3C9CC833FD(bVar1094, true, 1);
	}
	if (UNK_0xF45FDB21A0F137CB())
	{
		UNK_0xC1B8EFD8630D086B(0);
	}
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_554(&Var16, &uVar1111, &bVar1084, &bVar1085, &bVar1087, &iVar1090, &bVar1094, &uVar919, &bVar1096, &bVar1097, &iVar1098, iVar1164, &iVar1159, iVar1105, iVar1106, bVar868, &uVar1095, bVar1190);
	}
	if (bVar1156 < 0)
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18962.f_1, bVar1156))
	{
		fVar1144 = 0.1f;
	}
	bVar868 = bVar1156;
	func_553(0);
	UNK_0xA37A90C62806D848(1);
	UNK_0x7798376279BB5369(1);
	func_552(23, 1);
	UNK_0xF5637CC664BEAAD0(1500f, 0, 21);
	func_526(&Var16, bVar868);
	if (UNK_0xC844350D5D58C99A(bVar1096))
	{
		UNK_0x73270B3C9CC833FD(bVar1096, true, 1);
	}
	if (UNK_0xC844350D5D58C99A(bVar1084))
	{
		UNK_0x73270B3C9CC833FD(bVar1084, true, 1);
		if (func_525(&Var16) != 0 && UNK_0x134B62B726CEC8E6(bVar1084) == func_525(&Var16))
		{
			bVar1087 = bVar1084;
			bVar1084 = false;
		}
	}
	while (true)
	{
		if (!bVar1184)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar1184 = false;
		}
		if ((iVar715 >= 6 && iVar715 <= 10) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			iVar870 = func_514();
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
		}
		func_513();
		func_505(&uVar101);
		func_501(&Var111, iVar715);
		func_497(&Var111, iVar715, bVar868, bVar1172);
		switch (iVar715)
		{
			case 0:
				func_496();
				if (UNK_0xD0BB2359EC70FC37())
				{
				}
				else
				{
					func_490();
					func_489(1);
					func_485("AM_H_BASEJ", 1);
					UNK_0x790015DC92C918E2();
					UNK_0xA37A90C62806D848(1);
					if (bVar868 == 0)
					{
						UNK_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, false, 1);
						uVar1095 = UNK_0xE120F7BE93901C1B(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
					}
					else if (bVar868 == 5)
					{
						UNK_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, false, 1);
					}
					else if (bVar868 == 4)
					{
						func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
						UNK_0x536F1BE96C726C4B(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
					}
					else if (bVar868 == 8)
					{
						func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
						UNK_0x536F1BE96C726C4B(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
					}
					if (UNK_0xC844350D5D58C99A(bVar1084))
					{
						func_480(&uVar892);
					}
					if ((bVar868 == 6 || bVar868 == 12) || bVar868 == 5)
					{
						if (UNK_0xC844350D5D58C99A(ScriptParam_0.f_2))
						{
							UNK_0x73270B3C9CC833FD(ScriptParam_0.f_2, true, 1);
							UNK_0xF690C84DADBB3551(&(ScriptParam_0.f_2));
						}
						func_471(&uVar107, &Var16, bVar868, bVar868 == 6);
						bVar1181 = true;
					}
					iVar715 = 1;
					Jump @11184; //curOff = 1468
					if (UNK_0x757EF87A33649210() || (((bVar868 == 5 || bVar868 == 6) || bVar868 == 12) && !bVar1172))
					{
						if (!bVar1172)
						{
							if ((bVar868 != 5 && bVar868 != 6) && bVar868 != 12)
							{
								vVar1122 = { func_470(bVar868) };
								vVar1122 = { func_469(SYSTEM::COS(vVar1122.z), SYSTEM::SIN(vVar1122.z), UNK_0x76F7F8AA07822C28(vVar1122.x)) };
								if (func_468(bVar868))
								{
									UNK_0xD67D6A3F0D653D93(func_467(bVar868), vVar1122, 4000f, 0);
								}
							}
							func_461(&Var16, bVar868, &uVar0, &bVar14, &bVar15, &uVar1111, &iVar1163);
						}
						else if (func_459(func_460(bVar868)))
						{
							vVar1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var16))), SYSTEM::SIN((-97.4239f + func_458(&Var16)))) };
							vVar1134 = { UNK_0x68E4ADDDDCD7BDDE(bVar1084, 1.12046f, -0.317773f, 1.3385f) };
							vVar1137 = { func_457(vVar1137, 8.909f) };
							if (func_468(bVar868))
							{
								UNK_0xD67D6A3F0D653D93(vVar1134 + vVar1137, vVar1137, 4000f, 0);
							}
						}
						else
						{
							vVar1122 = { -10f, 0f, func_458(&Var16) };
							vVar1122 = { func_469(SYSTEM::COS(vVar1122.z), SYSTEM::SIN(vVar1122.z), UNK_0x76F7F8AA07822C28(vVar1122.x)) };
							if (func_468(bVar868))
							{
								UNK_0xD67D6A3F0D653D93(func_467(bVar868), vVar1122, 4000f, 0);
							}
						}
						if (((bVar1172 || bVar868 == 4) || bVar868 == 8) || bVar868 == 3)
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x975C58E0FC4955A9(UNK_0x16F2683693E537C9(), 1);
							}
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), func_467(bVar868), 0, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), func_458(&Var16));
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
						}
						iVar715 = 2;
					}
					else if (!UNK_0xD0BB2359EC70FC37() && (!func_456(&uVar892) || func_455(&uVar892) > 0.05f))
					{
						if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
						{
							UNK_0x53491B90E4FD0E56(2500);
						}
						else
						{
							UNK_0x53491B90E4FD0E56(800);
						}
					}
					Jump @11184; //curOff = 2087
					if (func_453(&uVar0, &uVar871, &uVar1111, bVar868, iVar1163, ((bVar868 != 5 && bVar868 != 6) && bVar868 != 12)))
					{
						func_452(&uVar871);
						func_429(&Var16, &uVar919, &iVar1151, &bVar1084, &bVar1085, &bVar1087, &uVar1086, &uVar1088, &bVar1096, &bVar1097, bVar14, bVar15, &uVar880, bVar868, &iVar1160);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
						if (!bVar1172 && !bVar1181)
						{
							func_471(&uVar107, &Var16, bVar868, 0);
						}
						iVar715 = 3;
					}
					Jump @11184; //curOff = 2232
					if (!func_456(&uVar871) && !bVar1172)
					{
						func_428(0, 0, 1);
						func_480(&uVar871);
					}
					else if ((func_456(&uVar871) && func_455(&uVar871) > 0.2f) || bVar1172)
					{
						if (func_459(func_460(bVar868)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_door_loop", 3))
						{
						}
						else if (bVar1172)
						{
							UNK_0x53491B90E4FD0E56(800);
							if (func_456(&uVar871))
							{
								func_452(&uVar871);
							}
							if (func_525(&Var16) != 0)
							{
								UNK_0x1E9649458B15960F(bVar1087, false);
								func_480(&uVar889);
							}
							iVar715 = 4;
						}
						else
						{
							func_452(&uVar871);
							if (UNK_0x757EF87A33649210())
							{
								SYSTEM::WAIT(1000);
								UNK_0xF1E4C781086FABC1(func_427(&uVar107, 1), func_427(&uVar107, 0), 10000, 1, 1);
								UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
								UNK_0x82E51BCA72537B6C(800);
							}
							UNK_0x486B4ADE317F0689();
							if (func_459(func_460(bVar868)))
							{
								vVar1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var16))), SYSTEM::SIN((-97.4239f + func_458(&Var16)))) };
								vVar1134 = { UNK_0x68E4ADDDDCD7BDDE(bVar1084, 1.12046f, -0.317773f, 1.3385f) };
								vVar1137 = { func_457(vVar1137, 8.909f) };
								if (func_468(bVar868))
								{
									UNK_0xD67D6A3F0D653D93(vVar1134 + vVar1137, vVar1137, 4000f, 0);
								}
							}
							else
							{
								vVar1122 = { -10f, 0f, func_458(&Var16) };
								vVar1122 = { func_469(SYSTEM::COS(vVar1122.z), SYSTEM::SIN(vVar1122.z), UNK_0x76F7F8AA07822C28(vVar1122.x)) };
								if (func_468(bVar868))
								{
									UNK_0xD67D6A3F0D653D93(func_467(bVar868), vVar1122, 4000f, 0);
								}
							}
							if (!func_425(func_426(bVar868)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
								UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
								if (UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()))
								{
									UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
								}
								UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), func_426(bVar868), 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), func_424(func_426(bVar868), func_467(bVar868)));
								UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
								if (func_422() == 0)
								{
									UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 9, 5, false, 0);
								}
								else if (func_422() == 1)
								{
									UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, true, false, 0);
								}
								else if (func_422() == 2)
								{
									UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, 3, false, 0);
								}
								UNK_0xDD353D0E9C789D0E(&iVar1108);
								if (func_421(bVar868) > 0)
								{
									UNK_0x93D47DFD0AE94949(false, func_421(bVar868));
								}
								UNK_0x80AA372E04ED318D(false, func_467(bVar868), 1f, -1, func_458(&Var16), 1056964608 /* Float: 0.5f */);
								UNK_0x75ABDC5F81978924(iVar1108);
								UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iVar1108);
								UNK_0xF82EA857DA10E0CD(&iVar1108);
							}
							if (!func_459(func_460(bVar868)))
							{
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &iVar1090);
								}
								iVar1161 = 0;
								while (iVar1161 < iVar1090)
								{
									if (UNK_0xC844350D5D58C99A(iVar1090[iVar1161]) && !UNK_0x437347B10A200C4B(iVar1090[iVar1161], 0))
									{
										if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(iVar1090[iVar1161], false), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false)) < 2500f)
										{
											UNK_0x25BD67336EA4AECE(iVar1090[iVar1161], 1000);
											UNK_0xF8CF67C6E39C23A9(iVar1090[iVar1161], 5f);
											UNK_0xE8832A9E16A57A1F(iVar1090[iVar1161], true, 1);
										}
									}
									iVar1161++;
								}
							}
							if (func_525(&Var16) != 0)
							{
								func_480(&uVar889);
							}
							if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
							}
							if (func_420(bVar868, iVar1163) > 0f)
							{
								func_480(&uVar907);
							}
							iVar715 = 4;
						}
					}
					Jump @11184; //curOff = 3226
					if (bVar868 == 0)
					{
						UNK_0x29AA598B93E45D37(200f);
					}
					if (bVar1175 || bVar1176)
					{
						if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
						{
							UNK_0x82E51BCA72537B6C(300);
							SYSTEM::WAIT(300);
						}
						UNK_0xA37A90C62806D848(1);
						UNK_0x790015DC92C918E2();
						UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						iVar715 = 10;
					}
					else if (UNK_0x757EF87A33649210())
					{
						func_412(0, 1, 1, 0, 0, 0);
						if (func_459(func_460(bVar868)))
						{
							func_411(&uVar107, &Var16, &vVar1119, &vVar1134, &vVar1137, bVar1084, &uVar1140, &uVar1143);
							iVar1164 = UNK_0xD68EA767274B7444();
							if (bVar1189)
							{
								UNK_0xCEAA091B490F8407(iVar1164, "Helicopter_Wind_Idle", bVar1084, "BASEJUMPS_SOUNDS", 0, 0);
							}
							if (bVar1188)
							{
								UNK_0xA742A6B0DF3576C2(1, 300362576);
							}
						}
						else
						{
							if (UNK_0xF45FDB21A0F137CB())
							{
								UNK_0xC1B8EFD8630D086B(0);
							}
							UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
							UNK_0x2FB9A57162E54BAB(0f);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
						}
						UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
						UNK_0x03846294119069F1(UNK_0x16F2683693E537C9());
						UNK_0xADCFE13F048E110C(UNK_0x16F2683693E537C9());
						UNK_0x759A5E1D0F0A31A1(UNK_0x16F2683693E537C9());
						UNK_0xBFE31971E49FA500(0);
						UNK_0x8BCB70EB440DED83(0);
						iVar715 = 5;
					}
					else
					{
						if (!bVar1183)
						{
							if (!func_456(&uVar913))
							{
								func_480(&uVar913);
							}
							else if (func_455(&uVar913) > 4f || (func_459(func_460(bVar868)) && func_455(&uVar913) > 0.5f))
							{
								func_395(&uVar919, "OJBJAUD", func_410(&Var16), 8, 0, 0, 0);
								bVar1183 = true;
							}
						}
						if (!UNK_0xD0BB2359EC70FC37() && !bVar1172)
						{
							if (func_373(&Var16, bVar868, &bVar1087, &uVar107, &uVar101, &uVar874, &uVar877, &uVar889, &uVar907, iVar1163, &bVar1173, &bVar1185, bVar1177))
							{
								UNK_0xA37A90C62806D848(1);
								bVar1177 = false;
								if (func_372(&Var16))
								{
									UNK_0x53491B90E4FD0E56(800);
								}
								else
								{
									UNK_0xBFE31971E49FA500(0);
									UNK_0x8BCB70EB440DED83(0);
									iVar715 = 5;
								}
							}
						}
					}
					Jump @11184; //curOff = 3728
					if (bVar868 == 0)
					{
						UNK_0x29AA598B93E45D37(200f);
					}
					func_370();
					func_369();
					if (UNK_0x757EF87A33649210())
					{
						if (bVar1172 && bVar1182)
						{
							UNK_0x71592C07333285FE(func_368(iVar870), func_367(iVar870), func_366(iVar870));
						}
						SYSTEM::WAIT(2000);
						if (bVar1172)
						{
							UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
							func_365(&uVar910);
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
							}
							while (func_455(&uVar910) < 1.1f)
							{
								SYSTEM::WAIT(0);
								if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
								{
									UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
								}
							}
							func_452(&uVar910);
						}
						UNK_0x82E51BCA72537B6C(800);
					}
					if (UNK_0xC844350D5D58C99A(bVar1085) && !UNK_0x437347B10A200C4B(bVar1085, 0))
					{
						iVar1105 = UNK_0x6CC513A908911CF0(UNK_0x68E4ADDDDCD7BDDE(bVar1085, func_364(&Var16)));
						UNK_0x61755AC17D8F538E(iVar1105, 5);
						UNK_0xF2D30B8ACAF12A39(iVar1105, true);
						UNK_0xDC5B2F9D0CCE3A10(iVar1105, "BJ_BLIP_TGT");
					}
					else
					{
						iVar1105 = UNK_0x6CC513A908911CF0(func_363(&Var16, 0));
						UNK_0x61755AC17D8F538E(iVar1105, 5);
						if (iVar1151 == 1)
						{
							UNK_0xDC5B2F9D0CCE3A10(iVar1105, "BJ_BLIP_TGT");
						}
						else
						{
							UNK_0xDC5B2F9D0CCE3A10(iVar1105, "BJ_BLIP_CHK");
						}
					}
					UNK_0x516E63E474722206(iVar1105, 1.2f);
					if (iVar1151 > 1)
					{
						iVar1106 = UNK_0x6CC513A908911CF0(func_363(&Var16, 1));
						UNK_0x61755AC17D8F538E(iVar1106, 5);
						UNK_0xF2D30B8ACAF12A39(iVar1105, true);
						UNK_0x516E63E474722206(iVar1106, 0.7f);
						if (iVar1151 == 2)
						{
							UNK_0xDC5B2F9D0CCE3A10(iVar1106, "BJ_BLIP_TGT");
						}
						else
						{
							UNK_0xDC5B2F9D0CCE3A10(iVar1106, "BJ_BLIP_CHK");
						}
					}
					if (UNK_0xC844350D5D58C99A(bVar1085) && !UNK_0x437347B10A200C4B(bVar1085, 0))
					{
						UNK_0x25BD67336EA4AECE(bVar1085, 2000);
						if (UNK_0xC844350D5D58C99A(bVar1097) && !UNK_0xEB6A8945D1AC98A1(bVar1097))
						{
							UNK_0xA3BF0AA5A2608191(bVar1097);
						}
						if (func_361(func_362(&Var16)))
						{
							UNK_0x86AA47F87DFBA4D0(&bVar1085);
						}
						else
						{
							UNK_0xA47B46945FF6DE74(bVar1085, func_363(&Var16, 0), 1, 0, 0, 1);
						}
					}
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18962.f_1, (func_360(&Var16) - 125)))
					{
						UNK_0xDF9891243C73DEA5(UNK_0xD803B885F5E47A62(), true);
						UNK_0x940BAD39F84C002F(UNK_0xD803B885F5E47A62(), UNK_0x09AC81E49EA267F7(false, 256), UNK_0x09AC81E49EA267F7(false, 256), UNK_0x09AC81E49EA267F7(false, 256));
					}
					if (func_359(func_460(bVar868)))
					{
						func_358(1, 1, 1);
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
						func_365(&uVar880);
						iVar715 = 6;
						func_357(88, 1);
					}
					else if (func_459(func_460(bVar868)))
					{
						func_358(0, 0, 1);
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						iVar715 = 7;
						func_357(88, 1);
					}
					else
					{
						func_358(1, 1, 1);
						UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
						UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
						iVar715 = 6;
						func_357(88, 1);
					}
					if (bVar868 == 5)
					{
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 146, true);
					}
					if (!bVar1173 && UNK_0xC844350D5D58C99A(bVar1087))
					{
						func_356(&bVar1087, 1);
						bVar1173 = true;
					}
					if (!func_372(&Var16))
					{
						if (func_459(func_460(bVar868)))
						{
							func_411(&uVar107, &Var16, &vVar1119, &vVar1134, &vVar1137, bVar1084, &uVar1140, &uVar1143);
						}
						else
						{
							if ((func_355(&Var16) && !bVar1185) && !bVar1172)
							{
								UNK_0x04B065D07D2FB5B9(1, 0, 3, 0);
							}
							else if (bVar868 == 4 && !func_354())
							{
								UNK_0x608A456FDD8A83D8(func_427(&uVar107, 0), -76.7226f, -829.9866f, 326.0427f);
								UNK_0x5F3CBA6EB9341C90(func_427(&uVar107, 0), 0.8541f, 0f, -17.012f, 2);
								UNK_0x5818C8D5303DCCF8(func_427(&uVar107, 0), 53.883f);
								UNK_0xE3BB8E05FCEB3FBE(func_427(&uVar107, 0), true);
							}
							else
							{
								if (UNK_0xF45FDB21A0F137CB())
								{
									UNK_0xC1B8EFD8630D086B(0);
								}
								UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
							}
							UNK_0x2FB9A57162E54BAB(0f);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x486B4ADE317F0689();
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (bVar1190)
						{
							if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"), 0))
							{
								UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true, false, true);
							}
							UNK_0x4B1EE5FDF7BAC7D7(UNK_0x16F2683693E537C9(), iVar1165);
							if (bVar1191)
							{
								if (!UNK_0x42CF608FD1475F11(UNK_0xD803B885F5E47A62()))
								{
									UNK_0xDD0DEB90BA7FE85C(UNK_0xD803B885F5E47A62());
								}
								UNK_0x0D0DC18C4D9A7AAB(UNK_0x16F2683693E537C9(), uVar1167);
							}
						}
						else
						{
							UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true, false, true);
							UNK_0x4B1EE5FDF7BAC7D7(UNK_0x16F2683693E537C9(), (UNK_0x09AC81E49EA267F7(false, 65535) % 8));
						}
					}
					UNK_0x3F423BF5B8125A50("skydive@base");
					UNK_0x3F423BF5B8125A50("skydive@freefall");
					UNK_0x3F423BF5B8125A50("skydive@parachute@chute");
					UNK_0x3F423BF5B8125A50("skydive@parachute@");
					Jump @11184; //curOff = 4883
					if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						iVar715 = 12;
						Jump @11184; //curOff = 4902
					}
					else if ((bVar1176 || bVar1175) || func_353(&Var16, bVar868, &bVar1178))
					{
						UNK_0xA37A90C62806D848(1);
						UNK_0x790015DC92C918E2();
						iVar715 = 10;
					}
					else
					{
						if (bVar868 == 5)
						{
							UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 146, UNK_0x62438065F1C29508(UNK_0x16F2683693E537C9(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
						}
						if (bVar1177)
						{
							vVar1125 = { func_363(&Var16, (iVar1151 - 1)) };
							vVar1125.f_2 = (vVar1125.z + 100f);
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar1125, 1, 0, 0, 1);
							bVar1177 = false;
						}
						if (!bVar1180)
						{
							if (bVar868 == 4)
							{
								if (((((UNK_0x06F8112AA79C53D9(0, 71) || UNK_0x06F8112AA79C53D9(0, 72)) || UNK_0x06F8112AA79C53D9(0, 1)) || UNK_0x06F8112AA79C53D9(0, 2)) || UNK_0x06F8112AA79C53D9(0, 75)) || !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									UNK_0xB3A1B75CB59FEB56(false, true, 1300, 1, 1, 0);
									bVar1180 = true;
								}
							}
						}
						func_352(&uVar880);
						func_342(&Var16, bVar1085, bVar1096, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
						func_341(&uVar1112);
						if (func_456(&uVar871))
						{
							if (func_455(&uVar871) > 10f)
							{
								func_337(&uVar883, &iVar1159);
							}
						}
						else
						{
							func_336(&uVar871, 0f);
						}
						if (UNK_0xC844350D5D58C99A(bVar1087) && !UNK_0x437347B10A200C4B(bVar1087, 0))
						{
							if (!UNK_0x0A059E0DB9253280(bVar1087) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bVar1087, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 40000f)
							{
								bVar1193 = UNK_0xA30B8362589C124A(bVar1087, -1, 0);
								if (!UNK_0xEB6A8945D1AC98A1(bVar1193))
								{
									UNK_0xEBA53F35D0085654(&bVar1193);
								}
								UNK_0xA954465BA6FDEFE2(&bVar1087);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bVar1157, false))
						{
							if (UNK_0xD17F06053799A7CA() || !func_456(&uVar916))
							{
								func_365(&uVar916);
							}
							else if (func_455(&uVar916) > 0.25f)
							{
								Var1115 = { func_335(bVar868) };
								func_334(&Var1115, 7500, 0);
								func_452(&uVar916);
								UNK_0x5D96D8530B3D0904(&bVar1157, false);
							}
						}
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							func_333(&Var111, 1);
							bVar1089 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
							if (UNK_0xDF1306B443CD3D15(bVar1089, 0) && UNK_0xE934758D273C899A(bVar1089))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bVar1157, true))
								{
									if (!func_456(&uVar895))
									{
										func_480(&uVar895);
									}
									else if (func_455(&uVar895) > 0.15f)
									{
										func_332("BJ_VEHHELP", -1);
										func_452(&uVar895);
										UNK_0x5D96D8530B3D0904(&bVar1157, true);
									}
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&bVar1157, true);
								if (func_331("BJ_VEHHELP"))
								{
									UNK_0xA37A90C62806D848(1);
								}
								if (func_456(&uVar895))
								{
									func_452(&uVar895);
								}
							}
						}
						else
						{
							func_333(&Var111, 0);
							UNK_0x0674E58A79778E99(&bVar1157, true);
							if (func_331("BJ_VEHHELP"))
							{
								UNK_0xA37A90C62806D848(1);
							}
							if (func_456(&uVar895))
							{
								func_452(&uVar895);
							}
						}
						if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) != -1)
						{
							if (bVar868 == 5)
							{
								UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 146, false);
							}
							UNK_0x7B0C620E7A619AA1(1);
							UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
							iVar715 = 9;
							func_452(&uVar871);
						}
					}
					Jump @11184; //curOff = 5783
					if (bVar868 == 0)
					{
						UNK_0x29AA598B93E45D37(200f);
					}
					if (bVar1175 || bVar1176)
					{
						if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
						{
							UNK_0x82E51BCA72537B6C(300);
							SYSTEM::WAIT(300);
						}
						UNK_0xA37A90C62806D848(1);
						UNK_0x790015DC92C918E2();
						if (UNK_0xF45FDB21A0F137CB())
						{
							UNK_0xC1B8EFD8630D086B(0);
						}
						UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						iVar715 = 10;
					}
					else
					{
						func_352(&uVar880);
						func_342(&Var16, bVar1085, bVar1096, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
						func_341(&uVar1112);
						if (func_459(func_460(bVar868)) && !UNK_0x437347B10A200C4B(bVar1084, 0))
						{
							func_330(bVar1084, func_467(bVar868));
						}
						if (func_456(&uVar871))
						{
							if (func_455(&uVar871) > 10f)
							{
								func_337(&uVar883, &iVar1159);
							}
						}
						else
						{
							func_336(&uVar871, 0f);
						}
						if (func_326(&Var16, &uVar107, &uVar101, &uVar877, &vVar1119, &uVar1131, vVar1134, vVar1137) || bVar1177)
						{
							func_452(&uVar871);
							UNK_0xA37A90C62806D848(1);
							if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
							{
								if (UNK_0xC844350D5D58C99A(bVar1084) && !UNK_0x437347B10A200C4B(bVar1084, 0))
								{
									UNK_0xA47B46945FF6DE74(bVar1084, func_467(bVar868), 1, 0, 0, 1);
									UNK_0xD8F6A53F4799FAFE(bVar1084, func_458(&Var16));
									UNK_0x1E9649458B15960F(bVar1084, true);
									iVar1160 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
									UNK_0x6BE2EAE992FD7C26(iVar1160, bVar1084, UNK_0xF653B9B22DA806A9(bVar1084, "Chassis"));
									UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iVar1160, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
									UNK_0x57E0CF9BF653D99A(iVar1160, 0.6f);
									func_324(bVar1084, &uVar107, &uVar874);
									UNK_0x486B4ADE317F0689();
								}
							}
							if (bVar1188)
							{
								UNK_0xA742A6B0DF3576C2(0, 300362576);
							}
							UNK_0xCEAA091B490F8407(iVar1164, "Helicopter_Wind", bVar1084, "BASEJUMPS_SOUNDS", 0, 0);
							bVar1177 = false;
							iVar715 = 8;
						}
					}
					Jump @11184; //curOff = 6333
					if (bVar868 == 0)
					{
						UNK_0x29AA598B93E45D37(200f);
					}
					func_352(&uVar880);
					func_342(&Var16, bVar1085, bVar1096, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
					if (UNK_0x69DF961355195C3C(iVar1160))
					{
						if (UNK_0xA45992A6CE82FB43(iVar1160) > 0.92f)
						{
							UNK_0xDD353D0E9C789D0E(&iVar1107);
							UNK_0x818303F509839F80(0, -1161760501, 0);
							UNK_0x12E1315CBD2320BD(false, 1, 0);
							UNK_0x75ABDC5F81978924(iVar1107);
							UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iVar1107);
							UNK_0xF82EA857DA10E0CD(&iVar1107);
						}
					}
					if (UNK_0xC844350D5D58C99A(bVar1084))
					{
						if (func_323(&uVar107, &uVar874, vVar1134, vVar1137, vVar1119, &uVar1140, &uVar1143))
						{
							UNK_0xB0703A3FDD659128(UNK_0x16F2683693E537C9(), bVar1084, 0);
							if (!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_jump", 3))
							{
								UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
								UNK_0xBFE31971E49FA500(1);
								if (UNK_0xF45FDB21A0F137CB())
								{
									UNK_0xC1B8EFD8630D086B(0);
								}
								UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
								UNK_0x7B0C620E7A619AA1(1);
								iVar715 = 9;
							}
						}
					}
					Jump @11184; //curOff = 6620
					if (bVar868 == 0)
					{
						UNK_0x29AA598B93E45D37(200f);
					}
					if (Global_22211.f_135)
					{
						UNK_0x38C3A68D7861DCFD(0, 144, 1);
					}
					if (Global_22211.f_135)
					{
						UNK_0x38C3A68D7861DCFD(0, 144, 1);
					}
					if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						iVar715 = 12;
					}
					else
					{
						if (bVar1175 || bVar1176)
						{
							UNK_0xA37A90C62806D848(1);
							UNK_0x790015DC92C918E2();
							iVar715 = 10;
						}
						else if (func_322(&uVar101, 3, 1000) && !Global_22211.f_135)
						{
							UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
							UNK_0x53491B90E4FD0E56(800);
							while (UNK_0xD0BB2359EC70FC37())
							{
								func_342(&Var16, bVar1085, bVar1097, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
								SYSTEM::WAIT(0);
							}
							func_276(&Var16, &uVar1111, &Var111, &bVar1157, &bVar1097, &iVar1098, &bVar1094, &bVar1085, &uVar1086, &bVar1087, &iVar1090, &iVar1109, &iVar1110, iVar1105, iVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, bVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
							bVar1172 = true;
							iVar715 = 0;
						}
						else
						{
							func_273(&uVar901, &iVar1098);
							if (bVar1177)
							{
								vVar1125 = { func_363(&Var16, (iVar1151 - 1)) };
								func_271(UNK_0x16F2683693E537C9(), vVar1125);
								bVar1177 = false;
							}
							func_352(&uVar880);
							if (func_361(func_362(&Var16)))
							{
								if (!UNK_0xC844350D5D58C99A(bVar1085) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_363(&Var16, 0), 0) <= 200f)
								{
									bVar1085 = UNK_0x9F136BAA293FE131(6, func_363(&Var16, 0), 1);
									if (!UNK_0x437347B10A200C4B(bVar1085, 0))
									{
										UNK_0x5D6C12CA95187FB3(bVar1085, 7.5f);
									}
								}
							}
							else if ((UNK_0xC844350D5D58C99A(bVar1085) && !UNK_0x437347B10A200C4B(bVar1085, 0)) && !func_425(func_363(&Var16, 0)))
							{
								UNK_0xEB6A8945D1AC98A1(bVar1097);
								if (func_270(UNK_0x16F2683693E537C9(), bVar1085, 0) <= 325f)
								{
									if (bVar868 == 5)
									{
										vVar1194 = { 28.8687f, -299.1065f, 46.5693f };
									}
									else
									{
										vVar1194 = { -819.7591f, -1512.229f, 0.1336f };
									}
									if (UNK_0xD1960163A3042274(bVar1097, -1273030092) != 1)
									{
										if (bVar868 == 5)
										{
											UNK_0x132B85BCE016BCA0(bVar1097, bVar1085, vVar1194, 4, 5f, 16785408, 5f, 10f, 1);
										}
										else
										{
											UNK_0x132B85BCE016BCA0(bVar1097, bVar1085, vVar1194, 4, 5f, 16777216, 4f, -1f, 1);
										}
									}
									else
									{
										func_265(&bVar1085);
									}
								}
							}
							iVar716 = func_342(&Var16, bVar1085, bVar1097, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 1, 1, fVar1144);
							if (iVar716 == 1 || iVar716 >= 2)
							{
								UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
								if (iVar716 >= 2)
								{
									if (UNK_0xFEBC1E4EC9E001F0())
									{
										UNK_0xA37A90C62806D848(1);
									}
									if (UNK_0xD17F06053799A7CA())
									{
										UNK_0x790015DC92C918E2();
									}
								}
								UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
								if (bVar868 == 5)
								{
									UNK_0xA3BF0AA5A2608191(bVar1097);
									UNK_0x4E885A246A9D983A(bVar1097, 296, true);
								}
								iVar1197 = 0;
								while (iVar1197 < iVar1098)
								{
									if (UNK_0xC844350D5D58C99A(iVar1098[iVar1197]) && !UNK_0x437347B10A200C4B(iVar1098[iVar1197], 0))
									{
										UNK_0xA3BF0AA5A2608191(iVar1098[iVar1197]);
										iVar1098[iVar1197] = 0;
									}
									iVar1197++;
								}
								iVar715 = 10;
							}
							func_264(&Var111, &Var16, bVar868, iVar1151);
						}
						Jump @11184; //curOff = 7609
						if (bVar868 == 0)
						{
							UNK_0x29AA598B93E45D37(200f);
						}
						if (UNK_0xC844350D5D58C99A(bVar1097) && !UNK_0x437347B10A200C4B(bVar1097, 0))
						{
							if (UNK_0xD1960163A3042274(bVar1097, -982327190) != 0 && UNK_0xD1960163A3042274(bVar1097, -982327190) != 1)
							{
								UNK_0xA3BF0AA5A2608191(bVar1097);
								UNK_0x93D47DFD0AE94949(bVar1097, -1);
							}
						}
						if ((!bVar1175 && !bVar1176) && !bVar1178)
						{
							if (!func_456(&uVar886))
							{
								if (!func_456(&uVar877))
								{
									func_480(&uVar877);
								}
								if (UNK_0xE4EDC4B0E92C078B(iVar1105))
								{
									UNK_0x142CC44DB769B57E(&iVar1105);
								}
								if (UNK_0xE4EDC4B0E92C078B(iVar1106))
								{
									UNK_0x142CC44DB769B57E(&iVar1106);
								}
								if (iVar1152 > -1)
								{
									UNK_0xE223EB8FE6F8CC15(iVar1109);
									UNK_0xE223EB8FE6F8CC15(iVar1110);
									iVar1152 = -1;
								}
								func_336(&uVar886, 0f);
							}
							if (!func_456(&vVar904))
							{
								func_480(&vVar904);
							}
							if (func_362(&Var16) == 0)
							{
								func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
							}
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (((((UNK_0xC844350D5D58C99A(bVar1085) && !UNK_0x437347B10A200C4B(bVar1085, 0)) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0)) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bVar1085, vVar1128, 0, 1, 0)) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), func_363(&Var16, iVar1150), vVar1128, false, true, 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()))
								{
									bVar1198 = false;
									if (UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()) && (UNK_0xC844350D5D58C99A(bVar1085) && !UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bVar1085)))
									{
										bVar1198 = true;
									}
									else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
									{
										bVar1198 = true;
									}
									if (bVar1198)
									{
										if (func_322(&uVar101, 3, 1000) && !Global_22211.f_135)
										{
											UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
											UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
											UNK_0x53491B90E4FD0E56(800);
											while (UNK_0xD0BB2359EC70FC37())
											{
												func_342(&Var16, bVar1085, bVar1097, &iVar1098, &iVar1109, &iVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &iVar1105, &iVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
												SYSTEM::WAIT(0);
											}
											func_276(&Var16, &uVar1111, &Var111, &bVar1157, &bVar1097, &iVar1098, &bVar1094, &bVar1085, &uVar1086, &bVar1087, &iVar1090, &iVar1109, &iVar1110, iVar1105, iVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, bVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
											bVar1172 = true;
											iVar715 = 0;
										}
									}
									else if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
									{
										iVar715 = 12;
									}
									else
									{
										if (((bVar1175 || bVar1176) || bVar1178) || (func_456(&uVar886) && func_455(&uVar886) > 0.25f))
										{
											if (func_456(&uVar886) && func_455(&uVar886) > 0.25f)
											{
												func_259(func_363(&Var16, iVar1150), bVar1085, bVar1097, &iVar716, &iVar1154, &fVar1148);
											}
											func_452(&uVar886);
											if (bVar1175 || iVar716 == 1)
											{
												iVar718 = func_258();
												while (!UNK_0x83D8570832F172A7(iVar718))
												{
													SYSTEM::WAIT(0);
													if (func_362(&Var16) == 0)
													{
														func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
													}
													iVar718 = func_258();
												}
												if (bVar868 == 0)
												{
													if (!UNK_0xEB6A8945D1AC98A1(bVar1097))
													{
														func_395(&uVar919, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
													}
												}
												iVar715 = 11;
												if (!func_257(&Var111, 7))
												{
													iVar1158 = 125;
													UNK_0x5D96D8530B3D0904(&(Global_111638.f_18962.f_1), (func_360(&Var16) - iVar1158));
													func_256(func_360(&Var16), 1);
													bVar1168 = true;
													bVar1169 = true;
													bVar1170 = true;
													bVar1162 = false;
													while (bVar1162 < 13)
													{
														if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18962.f_1, bVar1162))
														{
															if (func_459(func_460(bVar1162)))
															{
																bVar1170 = false;
															}
															else
															{
																bVar1169 = false;
															}
															bVar1168 = false;
														}
														bVar1162++;
													}
													if (bVar1168 && !func_255(98))
													{
														func_254(98, 1);
													}
													if (bVar1169)
													{
														func_251(128, 0, 0);
													}
													if (bVar1170)
													{
														func_251(129, 0, 0);
													}
													func_214(&iVar1153, iVar1151, &iVar1154, &bVar1155, fVar1144);
													if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
													{
														UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
													}
													func_213(&Var111, 7, 1);
													func_212(1, 0);
													func_480(&uVar898);
													func_211();
												}
											}
											else if ((bVar1176 || bVar1178) || iVar716 >= 2)
											{
												UNK_0xA37A90C62806D848(1);
												UNK_0x790015DC92C918E2();
												if (!bVar1178)
												{
													func_208();
												}
												if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
												{
													iVar1171 = 1;
												}
												if (UNK_0x1963B11DE70153E0())
												{
													func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 361, 0, 361, 0);
												}
												else
												{
													func_213(&Var111, 27, 1);
													func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
												}
												iVar715 = 12;
											}
											func_452(&uVar877);
										}
										Jump @11184; //curOff = 9008
										UNK_0x38C3A68D7861DCFD(2, 200, 1);
										if (!bVar1175 && !bVar1176)
										{
											if (func_205() && !func_257(&Var111, 26))
											{
												func_194(bVar868);
												if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
												{
													func_206(&Var111, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
													func_213(&Var111, 26, 1);
												}
											}
										}
										if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											bVar1187 = UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0);
										}
										if (func_362(&Var16) == 0)
										{
											func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
										}
										if (!bVar1192)
										{
											iVar717 = func_76(bVar868, &Var111, &uVar1111, &uVar101, iVar1153, iVar1151, iVar1154, &bVar1155, fVar1144, &bVar1179);
											bVar1192 = iVar717 == true;
										}
										if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											if (bVar1156 == 0)
											{
												UNK_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
											}
											else if (bVar1156 == 5)
											{
												UNK_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
											}
											func_75(&Var16, &uVar1111, &bVar1084, &bVar1085, &bVar1087, &iVar1090, bVar1094, &uVar919, &bVar1096, &bVar1097, &iVar1098, iVar1164, &iVar1159, iVar1105, iVar1106, bVar868, &uVar1095, bVar1190);
										}
										else if (!UNK_0xD0BB2359EC70FC37() && (!func_74() || func_455(&uVar898) >= 2f))
										{
											UNK_0x38C3A68D7861DCFD(0, 22, 1);
											UNK_0x38C3A68D7861DCFD(0, 21, 1);
											UNK_0x38C3A68D7861DCFD(0, 55, 1);
											UNK_0x38C3A68D7861DCFD(0, 140, 1);
											UNK_0x38C3A68D7861DCFD(0, 142, 1);
											UNK_0x38C3A68D7861DCFD(0, 141, 1);
											UNK_0x38C3A68D7861DCFD(0, 80, 1);
											UNK_0x38C3A68D7861DCFD(0, 95, 1);
											UNK_0x38C3A68D7861DCFD(0, 96, 1);
											UNK_0x38C3A68D7861DCFD(0, 97, 1);
											UNK_0x38C3A68D7861DCFD(0, 98, 1);
											UNK_0x38C3A68D7861DCFD(0, 0, 1);
											if (func_456(&uVar877))
											{
												if ((iVar717 == 1 || func_455(&uVar877) >= 60f) || ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9())) || (!bVar1187 && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))))
												{
													if (!bVar1192)
													{
														func_73(&(Var111.f_26));
														bVar1192 = true;
													}
													if (func_47(&(Var111.f_26), 0, 1065353216 /* Float: 1f */, 0, 0, 0))
													{
														if (!bVar1175 && !bVar1176)
														{
															if (func_205() && !func_257(&Var111, 26))
															{
																if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
																{
																	func_213(&Var111, 26, 1);
																}
															}
														}
														func_44(&(Var111.f_26));
														func_452(&uVar898);
														if (bVar868 == 0)
														{
															UNK_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
														}
														else if (bVar868 == 5)
														{
															UNK_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
														}
														func_75(&Var16, &uVar1111, &bVar1084, &bVar1085, &bVar1087, &iVar1090, bVar1094, &uVar919, &bVar1096, &bVar1097, &iVar1098, iVar1164, &iVar1159, iVar1105, iVar1106, bVar868, &uVar1095, bVar1190);
													}
												}
												else if (iVar717 == 0)
												{
													if (!bVar1175 && !bVar1176)
													{
														if (func_205() && !func_257(&Var111, 26))
														{
															if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
															{
																func_213(&Var111, 26, 1);
															}
														}
													}
													func_44(&(Var111.f_26));
													func_452(&uVar898);
													func_213(&Var111, 5, 0);
													UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
													UNK_0x53491B90E4FD0E56(800);
													while (UNK_0xD0BB2359EC70FC37())
													{
														SYSTEM::WAIT(0);
														if (func_362(&Var16) == 0)
														{
															func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
														}
													}
													func_276(&Var16, &uVar1111, &Var111, &bVar1157, &bVar1097, &iVar1098, &bVar1094, &bVar1085, &uVar1086, &bVar1087, &iVar1090, &iVar1109, &iVar1110, iVar1105, iVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, bVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
													bVar1172 = true;
													iVar715 = 0;
													Jump @11184; //curOff = 10173
												}
												else if (bVar1179)
												{
													if (func_455(&uVar877) > (60f - 5f))
													{
														func_42(&uVar877, (60f - 5f));
													}
												}
											}
											else
											{
												func_336(&uVar877, 0f);
											}
										}
										Jump @11184; //curOff = 10228
										if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											bVar1187 = UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0);
										}
										UNK_0x38C3A68D7861DCFD(2, 200, 1);
										if (bVar1155 > 0)
										{
											bVar1155 = false;
										}
										if (!bVar1175 && !bVar1176)
										{
											if (func_205() && !func_257(&Var111, 26))
											{
												func_194(bVar868);
												if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
												{
													func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
													func_213(&Var111, 26, 1);
												}
											}
										}
										if (!func_257(&Var111, 24))
										{
											if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
											{
												bVar1182 = true;
											}
											else
											{
												bVar1182 = false;
											}
											UNK_0x38DC636F3D2D2FA8("OJBJ_START");
											UNK_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
											UNK_0x38DC636F3D2D2FA8("OJBJ_LANDED");
											UNK_0xC92DB9682A650680("OJBJ_STOP");
											if (UNK_0xE4EDC4B0E92C078B(iVar1105))
											{
												UNK_0x142CC44DB769B57E(&iVar1105);
											}
											if (UNK_0xE4EDC4B0E92C078B(iVar1106))
											{
												UNK_0x142CC44DB769B57E(&iVar1106);
											}
											if (bVar868 == 0)
											{
												UNK_0x29AA598B93E45D37(200f);
											}
											iVar718 = func_258();
											while (!UNK_0x83D8570832F172A7(iVar718))
											{
												if (func_362(&Var16) == 0)
												{
													func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
												}
												SYSTEM::WAIT(0);
												iVar718 = func_258();
											}
											if (bVar1182)
											{
												func_41(&uVar862, 0);
											}
											else
											{
												func_40(&Var723, 1050253722 /* Float: 0.3f */, 1073741824 /* Float: 2f */);
											}
											func_213(&Var111, 24, 1);
										}
										if (!bVar1182 && UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
										{
											func_213(&Var111, 24, 0);
										}
										else
										{
											if (func_362(&Var16) == 0)
											{
												func_263(func_363(&Var16, (iVar1151 - 1)), vVar904);
											}
											if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
											{
												switch (func_36(UNK_0x16F2683693E537C9()))
												{
													case 0:
														bVar1114 = "BJ_FAIL_M";
														break;
													case 1:
														bVar1114 = "BJ_FAIL_F";
														break;
													case 2:
														bVar1114 = "BJ_FAIL_T";
														break;
												}
											}
											else if (bVar1178)
											{
												bVar1114 = "BJ_FAIL_02";
											}
											else
											{
												bVar1114 = "BJ_FAIL_01";
											}
											bVar1186 = false;
											UNK_0x38C3A68D7861DCFD(0, 0, 1);
											UNK_0x38C3A68D7861DCFD(0, 80, 1);
											if (bVar1182)
											{
												bVar1186 = func_16(&uVar862, &Var723, &iVar718, bVar1113, bVar1114, &bVar1172, 78);
											}
											else
											{
												bVar1186 = func_3(&iVar718, &Var723, bVar1113, bVar1114, &bVar1172, 79, 7, 1, 1097859072 /* Float: 15f */, 1);
											}
											if (bVar1186)
											{
												if (bVar1172)
												{
													if (!bVar1175 && !bVar1176)
													{
														if (func_205() && !func_257(&Var111, 26))
														{
															if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
															{
																func_213(&Var111, 26, 1);
															}
														}
													}
													func_276(&Var16, &uVar1111, &Var111, &bVar1157, &bVar1097, &iVar1098, &bVar1094, &bVar1085, &uVar1086, &bVar1087, &iVar1090, &iVar1109, &iVar1110, iVar1105, iVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, bVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
													iVar715 = 0;
												}
												else
												{
													if (!bVar1175 && !bVar1176)
													{
														if (func_205() && !func_257(&Var111, 26))
														{
															if (func_182(bVar868, iVar1154, fVar1148, bVar1155))
															{
																func_213(&Var111, 26, 1);
															}
														}
													}
													func_2(bVar1182, &Var16, &uVar1111, &bVar1084, &bVar1085, &bVar1087, &iVar1090, bVar1094, &uVar919, &bVar1096, &bVar1097, &iVar1098, iVar1164, &iVar1159, iVar1105, iVar1106, bVar868, &uVar1095, bVar1190);
												}
												func_1(&iVar718);
											}
											iVar716 = 0;
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_1(int iParam0)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_554(uParam1, uParam2, bParam3, bParam4, bParam5, iParam6, &bParam7, uParam8, bParam9, bParam10, iParam11, iParam12, iParam13, iParam14, iParam15, bParam16, uParam17, bParam18);
	}
	else
	{
		func_554(uParam1, uParam2, bParam3, bParam4, bParam5, iParam6, &bParam7, uParam8, bParam9, bParam10, iParam11, iParam12, iParam13, iParam14, iParam15, bParam16, uParam17, bParam18);
	}
}

bool func_3(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
			if (func_15(iParam5, 4))
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
			func_14(bParam3);
			UNK_0x3CAEA85DA607305E(100);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7A8BB56B212464AC();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				UNK_0x5EEBDFEE72949D59(0);
			}
			func_13(&(uParam1->f_10), 0, 1, 1, 1);
			func_12(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_422())
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
			if (!func_456(&(uParam1->f_1)))
			{
				func_480(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_456(&(uParam1->f_4)))
				{
					func_480(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			UNK_0xBD706C594F6DCD4A();
			if (func_15(iParam5, 32))
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
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_455(&(uParam1->f_1)) >= uParam1->f_135 || UNK_0x757EF87A33649210()))
			{
				func_5(&(uParam1->f_10), 1128792064 /* Float: 200f */, iParam6, bParam7, 1, 1065353216 /* Float: 1f */);
				UNK_0x5D80F91A16C40CDE();
				if (UNK_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
				else if (UNK_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_455(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			break;
		case 3:
			func_11(iParam0, 0, 0);
			UNK_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((UNK_0x7F8A39872A07D2CE("stunt_plane_races", UNK_0xBB0808A181D4745C()) || UNK_0x7F8A39872A07D2CE("pilot_school", UNK_0xBB0808A181D4745C())) || (UNK_0x7F8A39872A07D2CE("bj", UNK_0xBB0808A181D4745C()) && UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))))
			{
				UNK_0x82E51BCA72537B6C(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_138)
			{
				UNK_0x53491B90E4FD0E56(500);
			}
			func_365(&(uParam1->f_4));
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (func_455(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
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

void func_4(int iParam0)
{
	if (*iParam0 != 0)
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_5(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (!func_10(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
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
			UNK_0x1200CC973A2399C8(func_15(uParam0->f_1, 4096));
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
							func_9(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_15(uParam0->f_1, 4096))
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
		bVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_456(&(iParam0->f_2)))
	{
		func_365(&(iParam0->f_2));
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
	if (func_455(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		func_452(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			UNK_0x8BC9595FD2792B5D("DEATH_SCENE");
			UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "WastedSounds", 1);
			func_35(&(uParam0->f_1));
			func_34();
			func_40(uParam1, (0.15f * 0.075f), 0.5f);
			UNK_0x31A33F7BCB08CB80(true);
			break;
		case 1:
			if (func_24() || UNK_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, bParam3, bParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072 /* Float: 15f */, 0);
			}
			break;
		case 2:
			if (func_3(iParam2, uParam1, bParam3, bParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072 /* Float: 15f */, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_34();
				if (*bParam5)
				{
					UNK_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				UNK_0x31A33F7BCB08CB80(false);
				UNK_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x67E5ECB8FD7F5018(1);
				func_20(0, 1);
				func_18(0, 1);
				UNK_0x8910D3D58E0132B8("DEATH_SCENE");
				UNK_0x31A33F7BCB08CB80(false);
				return 1;
			}
			break;
		case 4:
			UNK_0x31A33F7BCB08CB80(false);
			return 1;
	}
	return 0;
}

void func_17(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		UNK_0x82A772610883F395("DeathFailOut", 0, 0);
		UNK_0x5D96D8530B3D0904(&bLocal_43, true);
		func_19(1, 2, 0);
		UNK_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, true) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F("DeathFailOut");
			func_19(0, 2, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_43, true);
	}
}

void func_19(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_43, 2);
		if (!UNK_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				UNK_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				UNK_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, 2) || bParam2)
		{
			if (!UNK_0x8CD06866876216F2())
			{
				UNK_0x9A82EEAF6CA12AEE(1f);
			}
		}
		UNK_0x0674E58A79778E99(&bLocal_43, 2);
	}
}

void func_20(int iParam0, bool bParam1)
{
	bool bVar0;

	switch (func_422())
	{
		case 0:
			bVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			bVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			bVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) || bParam1)
		{
			UNK_0x82A772610883F395(bVar0, 0, 0);
			UNK_0x5D96D8530B3D0904(&bLocal_43, false);
			func_19(1, 1, 0);
			UNK_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F(bVar0);
			func_19(0, 1, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_43, false);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_24()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) && !UNK_0xEAE0D21A50E6C7F4(bLocal_43, true))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
	}
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x790015DC92C918E2();
	}
	UNK_0x38C3A68D7861DCFD(2, 199, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, true))
		{
			func_18(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || UNK_0x757EF87A33649210())
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = UNK_0x1C0640BA9A7327B3() + 1000;
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_19(0, 2, 1);
				func_412(1, 1, 1, 0, 0, 0);
				func_26(1);
				UNK_0x7BBABEC524CBF883(0);
				UNK_0x86E4B20DE8E91A57(0);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (UNK_0x1C0640BA9A7327B3() < iLocal_44)
			{
				return true;
			}
		}
	}
	return false;
}

void func_25(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, 3))
			{
				UNK_0x21387C9EECC2B220(true);
				UNK_0x5D96D8530B3D0904(&bLocal_43, 3);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, 3))
		{
			UNK_0x21387C9EECC2B220(false);
			UNK_0x0674E58A79778E99(&bLocal_43, 3);
		}
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_33();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_32(0))
		{
			func_27(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_27(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_30())
		{
			func_29(1, 1);
		}
		else
		{
			func_29(0, 0);
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
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
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

bool func_30()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_31()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_32(int iParam0)
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

void func_33()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_34()
{
	bLocal_43 = false;
	iLocal_44 = 0;
	func_412(0, 1, 1, 0, 0, 0);
	func_26(1);
}

void func_35(bool bParam0)
{
	if (!func_456(bParam0))
	{
		func_480(bParam0);
	}
	else
	{
		func_365(bParam0);
	}
}

int func_36(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(var uParam0, int iParam1, int iParam2)
{
	if (func_456(&(uParam0->f_1)))
	{
		func_452(&(uParam0->f_1));
	}
	if (func_456(&(uParam0->f_4)))
	{
		func_452(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1);
}

void func_42(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_43(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_43(bool bParam0)
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

void func_44(var uParam0)
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
				if (UNK_0x757EF87A33649210() && !func_46(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_45(0);
}

void func_45(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_47(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5)
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
	func_72(0);
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
		switch (func_36(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4())))
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
		uParam0->f_560 = (uParam0->f_560 + func_71(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_71(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_71((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_71(30f) - func_71(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_45(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_50(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_49(uParam0->f_30, 0f, 1f);
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
		uParam0->f_547 = func_49(uParam0->f_547, 0f, 1f);
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
		uParam0->f_548 = func_49(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (UNK_0xB8E3620B82AD47D7(2))
			{
				if (UNK_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_48(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				func_48(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				uParam0->f_559 = func_49((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_49((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_49((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_49((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
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
				func_45(0);
			}
			return !bVar0;
		}
	}
	func_45(0);
	return true;
}

void func_48(var uParam0, bool bParam1)
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
	func_9(UNK_0xF59058FCB716F903(2, 215, true));
	func_14("ES_HELP");
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
		func_9(UNK_0xF59058FCB716F903(2, 216, true));
		func_14("ES_XPAND");
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

float func_49(float fParam0, float fParam1, float fParam2)
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

void func_50(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_70() * 0.25f);
	if (UNK_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_69(&(uParam0->f_13));
				}
				else
				{
					func_14(&(uParam0->f_13));
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
		func_68();
		UNK_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_71((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_70());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_67(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (UNK_0x33D480CCE15C991A(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_67(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_70()) / 2.5f);
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
						func_64((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
	fVar1 = (fVar1 - func_71(6f));
	fVar1 = (fVar1 + (func_71(30f) - func_71((2f * 2f))));
	fVar11 = (fVar2 - func_71((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
		func_68();
		UNK_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_71((2f - 0.5f)) - 0.001388889f)), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_71((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			func_60(uParam0, iVar17, (fVar1 + func_71(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(bVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_71(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_71((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_71(2f));
					fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
					func_68();
					UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_71((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_71((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_71(2f));
			fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
			func_68();
			UNK_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			UNK_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))));
			func_53(7, 0, 1, &fVar18, &uVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_70()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_70()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_70()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_70()) / 2.5f));
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
			func_52(&(uParam0->f_550), fVar20, (fVar1 + func_71((2f * 2f))), 0, 0, 0);
			UNK_0xF1F881BAAAFB43B1(fVar20, fVar21);
			UNK_0xEEF67251E263A87F(2);
			UNK_0xD3539A877EC25E86(1f, 0.4f);
			UNK_0xAAE406A7DA443B93(0);
			func_68();
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
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				case 1:
					UNK_0x070005E852D4C0E9("FO_TWO_NUM");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0x6D99DF8263D35CE5(uParam0->f_555);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				case 2:
					UNK_0x070005E852D4C0E9("MTPHPER_XPNO");
					UNK_0x6D99DF8263D35CE5(uParam0->f_554);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				case 5:
					UNK_0x070005E852D4C0E9("ESDOLLA");
					UNK_0xCBD015EC7E4226BC(uParam0->f_554, 1);
					UNK_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
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
				fVar42 = ((fVar21 + func_51(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_71(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				UNK_0x539E86AE011A8B38(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(bVar0))), 0);
			}
			fVar1 = (fVar1 + (func_71(30f) - 2f));
		}
	}
}

float func_51(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_52(bool bParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UNK_0xAAE406A7DA443B93(iParam3);
	UNK_0x7BBAC160090910C3(iParam5);
	func_68();
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

int func_53(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_59(iParam0), 64);
	StringCopy(&cVar16, func_56(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_55())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_55())
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
		vVar37.x = (vVar37.x * (func_54(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_54(iParam0) / fVar34));
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

float func_54(int iParam0)
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

bool func_55()
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

var func_56(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_58(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_57(&uVar3);
			}
		}
		else
		{
			return func_57(&(Global_22350.f_7029[iParam0 /*16*/]));
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

var func_57(var uParam0)
{
	return uParam0;
}

struct<13> func_58(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_59(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_58(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_57(&uVar0);
		}
		else
		{
			return func_57(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_60(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
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
	UNK_0xD3539A877EC25E86(1f, func_62(14f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7BBAC160090910C3(0);
	func_68();
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
			func_53(7, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_56(7, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 2:
			func_53(5, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_56(5, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		case 3:
			func_53(6, 0, 1, &fVar5, &fVar6, 0);
			UNK_0x539E86AE011A8B38("CommonMenu", func_56(6, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, bParam5, 0);
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
	UNK_0xD3539A877EC25E86(1f, func_62(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UNK_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bParam5);
	func_61(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_61(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
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
	func_68();
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
			UNK_0xD3539A877EC25E86(1f, func_62(18f));
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
			UNK_0xD3539A877EC25E86(1f, func_62(14f));
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
			UNK_0xD3539A877EC25E86(1f, func_62(18f));
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
			break;
		case 8:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 14);
			break;
		case 9:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 6);
			break;
		case 10:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 18:
			UNK_0x7BBAC160090910C3(5);
			UNK_0x070005E852D4C0E9("STRING");
			UNK_0x164431059FF80580(bParam0, 2055);
			break;
		case 12:
			UNK_0x070005E852D4C0E9("AHD_DIST");
			UNK_0x6D99DF8263D35CE5(bParam0);
			break;
		case 13:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 15:
		case 14:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam0);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 16:
			UNK_0x070005E852D4C0E9(bParam4);
			UNK_0x6D99DF8263D35CE5(bParam1);
			break;
		case 20:
			UNK_0x070005E852D4C0E9(bParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UNK_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UNK_0xD3539A877EC25E86(1f, func_62(14f));
		}
		else
		{
			UNK_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_62(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_63(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_64(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_66(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_65(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
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
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_65(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_66(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

float func_67(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return (UNK_0x79E367314AFBB5CA(1) / 2f);
}

void func_68()
{
	UNK_0xD9ACBBA59FD5A09E(1);
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x757EF87A33649210())
	{
		UNK_0xD9ACBBA59FD5A09E(7);
	}
	UNK_0x5DD950F92F816F03(0);
}

void func_69(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

float func_70()
{
	float fVar0;

	fVar0 = 1f;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_71(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_72(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_32(0))
		{
			func_27(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_73(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

bool func_74()
{
	return Global_98783.f_1;
}

void func_75(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, bool bParam17)
{
	func_554(uParam0, uParam1, bParam2, bParam3, bParam4, iParam5, &bParam6, uParam7, bParam8, bParam9, iParam10, iParam11, iParam12, iParam13, iParam14, bParam15, uParam16, bParam17);
}

int func_76(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	if (!func_257(uParam1, 5))
	{
		UNK_0xA37A90C62806D848(1);
		func_177(uParam1, func_181(bParam0), iParam4, (iParam5 - 1), iParam6, bParam7, fParam8);
		func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		func_213(uParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_257(uParam1, 6))
	{
		if (func_173(&(uParam1->f_26), 0, 0))
		{
			func_213(uParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_257(uParam1, 27) && UNK_0x1963B11DE70153E0())
	{
		if (!func_257(uParam1, 26))
		{
			func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		}
		func_213(uParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*bParam9)
		{
			if (UNK_0x1963B11DE70153E0())
			{
				func_95(uParam2, bParam0);
				func_91(uParam1);
			}
			else if (func_78(&iLocal_581, 0))
			{
				iLocal_581 = 0;
				*bParam9 = 0;
				func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else
		{
			if (!func_257(uParam1, 10))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_213(uParam1, 10, 1);
			}
			func_47(&(uParam1->f_26), 0, 1065353216 /* Float: 1f */, 0, 1, 0);
			func_91(uParam1);
		}
		if (*bParam9)
		{
			if (UNK_0x1963B11DE70153E0())
			{
				if (!func_257(uParam1, 28) && func_77(&uLocal_144))
				{
					func_213(uParam1, 28, 1);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
			}
			if (func_322(uParam3, 7, 1000))
			{
				*bParam9 = 0;
				func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else if (func_322(uParam3, 5, 1000))
		{
			func_73(&(uParam1->f_26));
			return 1;
		}
		else if (func_322(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*bParam9 && func_322(uParam3, 8, 1000)) && (!UNK_0x1963B11DE70153E0() || func_257(uParam1, 26)))
		{
			*bParam9 = 1;
			if (UNK_0x1963B11DE70153E0())
			{
				if (func_77(&uLocal_144))
				{
					func_213(uParam1, 28, 1);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
				else
				{
					func_213(uParam1, 28, 0);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 361, 0, 361, 0, 361, 0);
				}
			}
		}
	}
	return 2;
}

bool func_77(var uParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, true) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_78(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < UNK_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_90(&Global_1840924);
		func_90(&(Global_1840924.f_49));
		*bParam0 = 0;
		Global_1840924.f_2 = 0;
		func_89(0);
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
	if ((UNK_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_87() && UNK_0x58424C49F8924842()))
	{
		if (UNK_0xACED3FBF20B322FA())
		{
			func_84(&(Global_1840924.f_3), func_86(&(Global_1840924.f_3)));
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_82(&(Global_1840924.f_3), 0);
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
			else if (!func_87())
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
				func_90(&(Global_1840924.f_49));
				func_90(&Global_1840924);
				*bParam0 = 0;
				Global_1840924.f_2 = 0;
				func_89(0);
				return true;
			}
		}
	}
	else
	{
		func_84(&(Global_1840924.f_3), func_86(&(Global_1840924.f_3)));
		if ((func_81(&(Global_1840924.f_49)) && !func_79(&(Global_1840924.f_49), 2000, 1)) && !UNK_0x58424C49F8924842())
		{
			UNK_0x5D96D8530B3D0904(bParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_82(&(Global_1840924.f_3), 0);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, true))
			{
				UNK_0xB0A3CB46BE5B746A(0);
				UNK_0x5D96D8530B3D0904(bParam0, true);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_82(&(Global_1840924.f_3), 0);
			}
		}
		if (func_81(&Global_1840924))
		{
			if (!func_79(&Global_1840924, 4000, 1))
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
							func_90(&Global_1840924);
							*bParam0 = 0;
							Global_1840924.f_2 = 0;
							func_89(0);
							return true;
						}
					}
				}
				else
				{
					func_90(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_89(0);
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
					func_90(&(Global_1840924.f_49));
					func_90(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_89(0);
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
						func_90(&(Global_1840924.f_49));
						func_90(&Global_1840924);
						*bParam0 = 0;
						Global_1840924.f_2 = 0;
						func_89(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_80(uParam0, bParam2, 0);
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

void func_80(var uParam0, bool bParam1, bool bParam2)
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

bool func_81(var uParam0)
{
	return uParam0->f_1;
}

void func_82(var uParam0, bool bParam1)
{
	func_83(uParam0);
	if (bParam1)
	{
		func_89(0);
	}
	uParam0->f_35 = 1;
}

void func_83(var uParam0)
{
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_85(uParam0);
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

void func_85(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_86(var uParam0)
{
	return uParam0->f_35;
}

bool func_87()
{
	if (func_88())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_88()
{
	return Global_2461181;
}

void func_89(bool bParam0)
{
	UNK_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		UNK_0xA3B57116ADBCDF5F();
	}
}

void func_90(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_91(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_94(uParam0))
	{
		return;
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
	if (UNK_0xB8E3620B82AD47D7(2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (uParam0->f_3[iVar0] != 361)
			{
				uParam0->f_12[iVar0] = UNK_0xF59058FCB716F903(2, uParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_92(&(uParam0->f_1), 4);
	}
	if (!func_23(uParam0->f_1, 4))
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		UNK_0x7C19E5E4784BD7CF(200f);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x7E60D21B163E9D56();
		bVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_21[iVar2]))
			{
				if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_12[iVar2 + 4]))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					UNK_0x7C19E5E4784BD7CF(bVar1);
					func_9(uParam0->f_12[iVar2 + 4]);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					UNK_0x7C19E5E4784BD7CF(bVar1);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					UNK_0x7E60D21B163E9D56();
				}
				bVar1 = (bVar1 + 1f);
			}
			iVar2++;
		}
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_2));
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_21(&(uParam0->f_1), 4);
	}
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_94(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

void func_95(var uParam0, bool bParam1)
{
	func_96(uParam0, &uLocal_144);
}

void func_96(var uParam0, var uParam1)
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

	func_172(&(Global_1840924.f_49), 1, 0);
	UNK_0xE19C2AAC820D8ED5();
	func_171();
	func_72(0);
	UNK_0x3FC8DBCC154CA56B();
	func_169(1);
	UNK_0x3584F71E5CA29322(10);
	func_168(1);
	func_167(1);
	if (!func_164())
	{
		if (!UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			UNK_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 3))
	{
		*uParam0 = func_163();
		UNK_0x5D96D8530B3D0904(&(uParam1->f_42), 3);
	}
	Var32 = { func_58(UNK_0xD803B885F5E47A62()) };
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
				func_162(*uParam0, Global_1835392.f_2780);
				if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_161(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 4);
				func_158(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 5);
				func_158(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 6);
				func_158(*uParam0, &bVar6, bVar31, 1, 1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
				func_157(*uParam0);
				UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				UNK_0xA37A90C62806D848(1);
			}
			else
			{
				func_157(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				Global_1835392.f_2829 = 1;
			}
			if (!func_121(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, false))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_162(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_161(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
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
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_120(*uParam0, bVar6, bVar31, &cVar51);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_90(&(Global_1835392.f_2823));
				}
				else if (func_79(&(Global_1835392.f_2823), 300, 0))
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
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_158(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_120(*uParam0, bVar6, bVar31, &cVar57);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_90(&(Global_1835392.f_2823));
				}
				func_157(*uParam0);
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
					func_162(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_161(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 6))
					{
						func_119(&Global_1839723);
						func_115(uParam1, &Global_1839723);
						func_114(uParam1, &Global_1839723);
					}
					bVar6 = false;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
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
									func_158(*uParam0, &bVar6, bVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_158(*uParam0, &bVar6, bVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_158(*uParam0, &bVar6, bVar31, 0, 0);
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
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_158(*uParam0, &bVar6, bVar31, 1, 0);
									}
									else
									{
										func_158(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_113(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_161(uParam1->f_44))
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
										if (func_112(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
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
									if (func_161(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!UNK_0xEA6BC48857E0AC4C(&(Global_1839723[iVar0 /*100*/].f_84)) && !UNK_0x7F8A39872A07D2CE(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_111(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_111(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
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
												func_105(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_105(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
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
												func_102(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_102(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_101();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											UNK_0x5D96D8530B3D0904(&bVar31, 2);
											UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_100(*uParam0, (bVar6 - 1), bVar31);
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
						func_158(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 5);
						func_158(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 6);
						func_158(*uParam0, &bVar6, bVar31, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
					func_157(*uParam0);
					UNK_0xA37A90C62806D848(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_100(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_157(*uParam0);
					func_97(uParam0, uParam1);
				}
			}
		}
	}
}

void func_97(var uParam0, var uParam1)
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
		func_99(&uVar5, &iVar6, &uVar7, &uVar8, 0);
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
				func_90(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 188))
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
				func_90(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 187))
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
			func_90(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_98(uParam1, 204))
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
				func_100(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_100(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
		}
		if (func_113(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
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

bool func_98(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam1 == 188 || iParam1 == 187)
	{
		func_99(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_79(&(uParam0->f_246.f_3), 250, 0))
		{
			return true;
		}
	}
	else if ((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) || func_79(&(uParam0->f_246.f_3), 250, 0))
	{
		return true;
	}
	return false;
}

void func_99(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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

void func_100(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7E60D21B163E9D56();
}

void func_101()
{
	UNK_0x7E60D21B163E9D56();
}

void func_102(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45)
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
						bParam44 = func_104(bParam44);
					}
					else
					{
						bParam44 = func_103(bParam44);
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

float func_103(bool bParam0)
{
	return (bParam0 / 0.3048f);
}

float func_104(bool bParam0)
{
	return (bParam0 / 1609.344f);
}

void func_105(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46)
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
			if (func_110(bParam44) != 0)
			{
				UNK_0x7ACC3006A87F8B39(func_107(func_110(bParam44), 0));
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
						bParam44 = SYSTEM::FLOOR(func_104(SYSTEM::TO_FLOAT(bParam44)));
					}
					else
					{
						bParam44 = SYSTEM::FLOOR(func_103(SYSTEM::TO_FLOAT(bParam44)));
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
				Var0 = { func_106(bParam44) };
				UNK_0x7ACC3006A87F8B39(&Var0);
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

struct<4> func_106(bool bParam0)
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

char* func_107(int iParam0, bool bParam1)
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
			if (func_109(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_108(&(Var0.f_31));
				}
				else
				{
					return func_108(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_108(var uParam0)
{
	return uParam0;
}

int func_109(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(bool bParam0)
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

void func_111(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

bool func_112(var uParam0, var uParam1)
{
	if (!func_113(*uParam0))
	{
		return false;
	}
	if (!func_113(*uParam1))
	{
		return false;
	}
	if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

void func_114(var uParam0, var uParam1)
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

void func_115(var uParam0, var uParam1)
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
			if (func_118(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar2, 2))
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
		func_116(uParam1);
	}
}

void func_116(var uParam0)
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
	Var3 = { func_58(UNK_0xD803B885F5E47A62()) };
	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar16 = UNK_0x9B6FABF659F515A2(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_117(&Global_1839593);
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
					if (func_112(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
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

void func_117(var uParam0)
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

bool func_118(var uParam0, int iParam1, var uParam2, int iParam3)
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
				(uParam0[iParam1 /*100*/])->f_32 = { func_58(UNK_0xD803B885F5E47A62()) };
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

void func_119(var uParam0)
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
	func_90(&(Global_1835392.f_2830));
}

void func_120(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	UNK_0x5D96D8530B3D0904(&bParam2, 7);
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7ACC3006A87F8B39(bParam3);
	UNK_0x0EF1238B8EFD4D04();
	UNK_0x7E60D21B163E9D56();
}

bool func_121(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_81(&(Global_1835392.f_2827)))
		{
			func_80(&(Global_1835392.f_2827), 1, 0);
			return false;
		}
		else if (!func_79(&(Global_1835392.f_2827), 1000, 1))
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
		func_156(uParam0);
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
	if (!func_154(uParam0))
	{
		return false;
	}
	if (!func_152(uParam0))
	{
		return false;
	}
	if (!func_138(uParam0))
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		func_119(&Global_1839723);
		func_115(uParam0, &Global_1839723);
		func_114(uParam0, &Global_1839723);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 6);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 7))
	{
		if (!func_81(&(Global_1835392.f_2830)))
		{
			func_80(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_79(&(Global_1835392.f_2830), 30000, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
		}
		if (func_135(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_132(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_126(&Global_1839723))
		{
			func_122(&Global_1839723);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
			func_122(&Global_1839723);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_122(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_125(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_124(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_117(&Global_1839593);
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
			if (func_113((uParam0[iVar0 /*100*/])->f_45))
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
	Global_1838577.f_87[iVar2 /*3*/] = { func_123(UNK_0xD803B885F5E47A62()) };
}

Vector3 func_123(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_124(int iParam0, int iParam1)
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

int func_125(int iParam0)
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

bool func_126(var uParam0)
{
	int iVar0;
	int iVar1;

	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_130(uParam0);
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_113((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_129(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
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
			if (func_127(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
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
					if (func_113((uParam0[iVar0 /*100*/])->f_32) && func_113(Global_1841022[iVar1 /*13*/]))
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

bool func_127(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_128(&uVar0, uParam3[iVar35 /*4*/]);
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

void func_128(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

bool func_129(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_113(*(uParam1[iVar0 /*13*/])))
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

void func_130(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_131(&(Global_1841022[iVar0 /*13*/]));
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

void func_131(var uParam0)
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

bool func_132(var uParam0)
{
	int iVar0;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return true;
	}
	else if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		if (!func_134(uParam0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_133(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_133(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_113(*uParam1))
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

bool func_134(var uParam0)
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
				func_131(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_113((uParam0[iVar1 /*100*/])->f_32))
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
					if (func_113((uParam0[iVar1 /*100*/])->f_32))
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

bool func_135(var uParam0)
{
	int iVar0;

	if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_137(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_136(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_113(Var0))
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

bool func_137(var uParam0, bool bParam1, char* sParam2, var uParam3, var uParam4)
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
			if (func_113(Var1[0 /*13*/]))
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

bool func_138(var uParam0)
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
	Var116 = { func_58(UNK_0xD803B885F5E47A62()) };
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_151(), 0, 0, 0))
			{
				func_149(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_151())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								UNK_0xBC584396476EE48A(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361)))
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
								func_148(&Var0);
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
								if (func_151() && iVar109 == 0)
								{
									func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[bVar113] = 0;
									Global_1835392.f_2704[bVar113]++;
								}
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_112(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[bVar113] = 0;
									}
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
						if (!func_151())
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
						func_148(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar111, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_151() && iVar109 == iVar111)
								{
									if (!func_112(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_112(&Var0, &Var116))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar111++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[bVar113] == -1 && func_151())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar113] = -1;
						(*uParam0)[bVar113] = 2;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_149(&Var98, &(uParam0->f_44));
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
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar106++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar113] = 3;
				}
				else
				{
					UNK_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
					Global_1835392.f_2704[bVar113] = 0;
					(*uParam0)[bVar113] = 3;
				}
				if (Global_1835392.f_2775[bVar113] == -1 && func_151())
				{
					if (Global_1835392.f_2704[bVar113] >= 1)
					{
						func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
					Global_1835392.f_2704[bVar113]++;
				}
			}
			break;
		case 3:
			func_139(bVar113, Global_1835013.f_374);
			(*uParam0)[bVar113] = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_139(bool bParam0, int iParam1)
{
	int iVar0;

	if ((func_151() && Global_1835392.f_2704[bParam0] > Global_1835392.f_2775[bParam0]) && Global_1835392.f_2775[bParam0] >= 0)
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
		if (!func_151())
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

bool func_140(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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
			Jump @181; //curOff = 126
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
			Jump @181; //curOff = 171
			return true;
			return false;
		}

void func_141(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_172(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

bool func_142()
{
	if (UNK_0x798A3F1296751F46() && !func_164())
	{
		return true;
	}
	return false;
}

bool func_143()
{
	if (UNK_0xA9C9C7E04514E320() || Global_1835008)
	{
		func_144();
		return true;
	}
	return false;
}

void func_144()
{
	if (func_79(&(Global_1835008.f_1), 120000, 1))
	{
		UNK_0x8EFB4731C3DCDA55(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_90(&(Global_1835008.f_1));
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_90(&(Global_1835008.f_1));
	UNK_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, -1);
}

bool func_146(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return true;
	}
	return false;
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_161(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
		sParam1->f_32 = { func_58(UNK_0xD803B885F5E47A62()) };
	}
	sParam1->f_59 = iParam2;
	if (func_146(uParam0->f_44))
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

void func_148(var uParam0)
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

void func_149(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

bool func_150(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

bool func_151()
{
	if (Global_1835388 && Global_1835389)
	{
		return true;
	}
	return false;
}

bool func_152(var uParam0)
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
	Var114 = { func_58(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = UNK_0xB552DC43762F9C85();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[bVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_151())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_153(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_149(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
					{
						if (func_151())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									UNK_0xBC584396476EE48A(iVar110, &Var0);
									if (func_161(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_112(&Var0, &(Global_1835013.f_361)))
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
									func_148(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_151() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								Global_1835392.f_2775[bVar113] = 0;
								Global_1835392.f_2704[bVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							UNK_0xBC584396476EE48A(0, &Var0);
							if (func_151() && (func_112(&Var0, &Var114) || func_112(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_113(Var0) && Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_112(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = 1;
								if (func_146(uParam0->f_44))
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
								if (func_161(uParam0->f_44))
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
								func_148(&Var0);
								UNK_0xC4492EA0CF4852F9();
								func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[bVar113] == -1 && func_151())
								{
									if (Global_1835392.f_2704[bVar113] >= 1)
									{
										func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
									Global_1835392.f_2704[bVar113]++;
								}
								return false;
							}
							func_148(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_148(&Var0);
							UNK_0xC4492EA0CF4852F9();
							func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[bVar113] == -1 && func_151())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[1] = 1;
							return false;
						}
						if (!func_151())
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
								if (func_151() && iVar108 == iVar110)
								{
									if (!func_112(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var114) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_112(&Var0, &Var114))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar110++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[bVar113] == -1 && func_151())
						{
							if (Global_1835392.f_2704[bVar113] >= 1)
							{
								func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_147(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
							Global_1835392.f_2704[bVar113]++;
						}
						return false;
					}
					else
					{
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), true);
						return false;
					}
				}
			}
			else
			{
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return false;
			}
			break;
		case 1:
			func_139(bVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

bool func_154(var uParam0)
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
	Var0 = { func_58(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar126])
	{
		case 0:
			Global_1835392.f_2775[bVar126] = -1;
			Global_1835392.f_2704[bVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_155(uParam0->f_44))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_151(), 0, 0, 0))
			{
				func_149(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_151())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								UNK_0xBC584396476EE48A(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361)))
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
								func_148(&Var13);
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
								if (func_151() && iVar122 == 0)
								{
									func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[bVar126] = 0;
									Global_1835392.f_2704[bVar126]++;
								}
								if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_112(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[bVar126] = 0;
									}
									MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
						if (!func_151())
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
						func_148(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar124, &Var13);
							if (Global_1835392.f_2704[bVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_151() && iVar122 == iVar124)
								{
									if (!func_112(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
										Global_1835392.f_2704[bVar126]++;
									}
								}
								if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar126] < 11)
								{
									if (func_113(Var13) && !func_112(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_112(&Var13, &Var0))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var13);
							iVar124++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[bVar126] == -1 && func_151())
							{
								if (Global_1835392.f_2704[bVar126] >= 1)
								{
									func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar126] = -1;
						(*uParam0)[bVar126] = 1;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_149(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							UNK_0xBC584396476EE48A(iVar119, &Var13);
							if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var13);
							iVar119++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar126] = 2;
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[bVar126] = 0;
					(*uParam0)[bVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[bVar126] == -1 && func_151())
			{
				if (Global_1835392.f_2704[bVar126] >= 1)
				{
					func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_147(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
				Global_1835392.f_2704[bVar126]++;
			}
			break;
		case 2:
			func_139(bVar126, Global_1835013.f_374);
			(*uParam0)[bVar126] = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_155(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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

void func_156(var uParam0)
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
			func_124(Global_1835392.f_2826, -1);
		}
	}
}

void func_157(int iParam0)
{
	if (UNK_0x83D8570832F172A7(iParam0))
	{
		UNK_0x6567AE843FADBA94(iParam0, 255, 255, 255, false, 0);
	}
}

void func_158(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				Var53 = { func_58(UNK_0xD803B885F5E47A62()) };
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
							Var67 = { func_58(UNK_0xD803B885F5E47A62()) };
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

void func_159(int iParam0, bool bParam1, var uParam2, int iParam3)
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

void func_160(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

bool func_161(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return true;
	}
	return false;
}

void func_162(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

int func_163()
{
	return UNK_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

int func_164()
{
	return func_165(UNK_0xD803B885F5E47A62());
}

int func_165(int iParam0)
{
	switch (func_166(iParam0))
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

int func_166(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

void func_167(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_168(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_171();
	}
	func_170(4, -1);
	func_170(6, -1);
	func_170(7, -1);
	func_170(3, -1);
	func_170(1, -1);
	func_170(2, -1);
	func_170(11, -1);
	func_170(13, -1);
	func_170(14, -1);
	func_170(16, -1);
}

void func_170(bool bParam0, int iParam1)
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

void func_171()
{
	Global_2537071.f_4532 = 0;
}

void func_172(var uParam0, bool bParam1, bool bParam2)
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

bool func_173(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_176(uParam0);
	func_175(uParam0);
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
			return false;
		}
		if (uParam0->f_562)
		{
			if (!UNK_0x83D8570832F172A7(uParam0->f_4))
			{
				return false;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_174(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_48(uParam0, 1);
		}
		else
		{
			func_48(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return true;
}

void func_174(var uParam0)
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
	func_9(UNK_0xF59058FCB716F903(2, 188, true));
	func_14("ES_HELP_TU");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(true);
	func_9(UNK_0xF59058FCB716F903(2, 187, true));
	func_14("ES_HELP_TD");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(false);
	func_9(UNK_0xF59058FCB716F903(2, 202, true));
	func_14("ES_HELP_AB");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	UNK_0x7E60D21B163E9D56();
}

void func_175(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	UNK_0xEEF67251E263A87F(0);
	UNK_0xD3539A877EC25E86(1f, func_62(16f));
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

void func_176(var uParam0)
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

void func_177(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_257(uParam0, 4))
	{
		return;
	}
	else
	{
		func_180(&(uParam0->f_26));
		func_179(&(uParam0->f_26), "BJ_SC_PASS", sParam1, 0);
		func_213(uParam0, 4, 1);
	}
	*bParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*bParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_178(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_178(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_178(&(uParam0->f_26), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_178(&(uParam0->f_26), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_178(&(uParam0->f_26), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_178(&(uParam0->f_26), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_178(&(uParam0->f_26), 3, "BJ_SC_TOT_RWD", "", *bParam5, 0, 0, 0);
}

void func_178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_179(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_180(var uParam0)
{
	func_176(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

char[] func_181(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		case 1:
			return "BJ_JUMP_02";
		case 2:
			return "BJ_JUMP_03";
		case 3:
			return "BJ_JUMP_04";
		case 4:
			return "BJ_JUMP_05";
		case 5:
			return "BJ_JUMP_06";
		case 6:
			return "BJ_JUMP_07";
		case 7:
			return "BJ_JUMP_08";
		case 8:
			return "BJ_JUMP_09";
		case 9:
			return "BJ_JUMP_10";
		case 10:
			return "BJ_JUMP_11";
		case 11:
			return "BJ_JUMP_12";
		case 12:
			return "BJ_JUMP_13";
		default:
			break;
	}
	return "";
}

bool func_182(bool bParam0, int iParam1, float fParam2, bool bParam3)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_191(bParam0, iParam1, fParam2, bParam3);
		Global_1835013.f_2 = 1;
	}
	if (func_183(&uLocal_144))
	{
		Global_1835388 = 1;
		return true;
	}
	return false;
}

bool func_183(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	bool bVar188;

	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_161(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_58(UNK_0xD803B885F5E47A62()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_149(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(uParam0->f_44, 0);
				bVar188 = false;
				while (bVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_189(uParam0->f_44, bVar188))
					{
						if (func_188(uParam0->f_44, 4, bVar188))
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
						if (!func_113(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							bVar188 = false;
							while (bVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_189(uParam0->f_44, bVar188))
								{
									if (func_188(uParam0->f_44, 4, bVar188))
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_187();
				if (Global_1835013.f_4)
				{
					if (func_186(uParam0->f_44))
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
			if (UNK_0x8CD06866876216F2() && func_185())
			{
				if (func_184())
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
			if (func_186(uParam0->f_44))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_149(&Var98, &(uParam0->f_44));
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 999:
			return true;
	}
	return false;
}

bool func_184()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, true);
}

bool func_185()
{
	return Global_2458936.f_3;
}

bool func_186(int iParam0)
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

void func_187()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_188(int iParam0, int iParam1, bool bParam2)
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

bool func_189(int iParam0, bool bParam1)
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

bool func_190(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

void func_191(bool bParam0, int iParam1, float fParam2, bool bParam3)
{
	struct<6> Var0[1];
	struct<8> Var7[1];

	StringCopy(&(Var7[0 /*8*/]), "Location", 32);
	switch (bParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_193(274, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_192(274, 131, bParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_192(274, 98, 1, 0f, 0);
		}
		else
		{
			func_192(274, 98, 0, 0f, 0);
		}
		func_192(274, 109, 1, 0f, 0);
		func_192(274, 8, bParam3, 0f, 0);
		func_192(274, 93, 0, fParam2, 0);
	}
}

void func_192(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
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
				else if (func_188(iParam0, 4, bVar1))
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

bool func_193(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var69 = { func_58(UNK_0xD803B885F5E47A62()) };
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

void func_194(bool bParam0)
{
	vector3 vVar0[24];

	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar0, "BJUMP_01", 24);
			break;
		case 1:
			StringCopy(&cVar0, "BJUMP_02", 24);
			break;
		case 2:
			StringCopy(&cVar0, "BJUMP_03", 24);
			break;
		case 3:
			StringCopy(&cVar0, "BJUMP_04", 24);
			break;
		case 4:
			StringCopy(&cVar0, "BJUMP_05", 24);
			break;
		case 5:
			StringCopy(&cVar0, "BJUMP_06", 24);
			break;
		case 6:
			StringCopy(&cVar0, "BJUMP_07", 24);
			break;
		case 7:
			StringCopy(&cVar0, "BJUMP_08", 24);
			break;
		case 8:
			StringCopy(&cVar0, "BJUMP_09", 24);
			break;
		case 9:
			StringCopy(&cVar0, "BJUMP_10", 24);
			break;
		case 10:
			StringCopy(&cVar0, "BJUMP_11", 24);
			break;
		case 11:
			StringCopy(&cVar0, "BJUMP_12", 24);
			break;
		case 12:
			StringCopy(&cVar0, "BJUMP_13", 24);
			break;
	}
	func_195(&uLocal_144, 85, &cVar0, func_181(bParam0), bParam0, -1, 0, 0);
}

void func_195(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
			if (bParam4 == 0)
			{
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			else if (bParam4 == 1)
			{
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			else if (bParam4 == 2)
			{
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			else if (bParam4 == 10 || bParam4 == 11)
			{
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			else if (bParam4 == 3)
			{
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			if (bParam4 == 0 || bParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (bParam4 == 3)
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
			else if (bParam4 == 1 || bParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (bParam4 == 4)
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
			else if (bParam4 == 2)
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
			if (bParam4 == -1)
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
				StringIntConCat(&(Global_1835392.f_2780.f_9), bParam4 + 1, 64);
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
			switch (bParam4)
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
			MemCopy(&(Global_1835392.f_2780.f_9), {func_203(iParam1)}, 16);
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
			if (bParam4 == 7 || bParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (bParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (bParam4 == 1)
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
				if (func_202(Global_4456448.f_232883) || func_199(Global_4456448.f_232883))
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
				else if (func_198(Global_4456448.f_232883))
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
			switch (bParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (bParam4)
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
					switch (bParam4)
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
					switch (bParam4)
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
			switch (bParam4)
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
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_197(bParam4)}, 8);
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
			switch (bParam4)
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
					Jump @18700; //curOff = 18583
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					Jump @18700; //curOff = 18647
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
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
					Jump @19219; //curOff = 18862
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
					Global_1835392.f_2826 = func_196(Var0, uParam0->f_44, iParam1, bParam4, iParam5, bParam6);
				}

int func_196(struct<8> Param0, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	char cVar0[64];

	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_161(iParam8))
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
	StringIntConCat(&cVar0, bParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

struct<6> func_197(bool bParam0)
{
	struct<6> Var0;

	switch (bParam0)
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

bool func_198(int iParam0)
{
	return iParam0 == 74;
}

bool func_199(int iParam0)
{
	return (func_201(iParam0) || func_200(iParam0));
}

bool func_200(int iParam0)
{
	return iParam0 == 44;
}

bool func_201(int iParam0)
{
	return iParam0 == 45;
}

bool func_202(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_203(int iParam0)
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

bool func_204()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return true;
	}
	return false;
}

bool func_205()
{
	return UNK_0x58424C49F8924842();
}

void func_206(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_3[0] = iParam2;
	uParam0->f_3[1] = iParam4;
	uParam0->f_3[2] = iParam6;
	uParam0->f_3[3] = iParam8;
	uParam0->f_3[4] = 361;
	uParam0->f_3[5] = 361;
	uParam0->f_3[6] = 361;
	uParam0->f_3[7] = 361;
	uParam0->f_12[0] = func_207(iParam2 != 361, UNK_0xF59058FCB716F903(2, iParam2, true), "");
	uParam0->f_12[1] = func_207(iParam4 != 361, UNK_0xF59058FCB716F903(2, iParam4, true), "");
	uParam0->f_12[2] = func_207(iParam6 != 361, UNK_0xF59058FCB716F903(2, iParam6, true), "");
	uParam0->f_12[3] = func_207(iParam8 != 361, UNK_0xF59058FCB716F903(2, iParam8, true), "");
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_21[0] = sParam3;
	uParam0->f_21[1] = sParam5;
	uParam0->f_21[2] = iParam7;
	uParam0->f_21[3] = iParam9;
	if (bParam1)
	{
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_21(&(uParam0->f_1), 1);
	}
}

char* func_207(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_208()
{
	func_209(UNK_0x16F2683693E537C9(), "GENERIC_CURSE_MED", 24);
}

void func_209(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_210(iParam2), 1);
}

int func_210(int iParam0)
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

int func_211()
{
	if (func_46(0))
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

void func_212(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_213(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_603), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_603), bParam1);
	}
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	int iVar0;

	if (iParam1 > 1 && *iParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*bParam3 = 0;
	*bParam3 = (*bParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*bParam3 = (*bParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*iParam2))));
	func_215(func_422(), 1, *bParam3, 0, 0);
	return 1;
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_250(iParam0) == 3)
	{
		return;
	}
	if (func_250(iParam0) == 4)
	{
		return;
	}
	func_216(func_250(iParam0), 1, iParam1, iParam2, 0);
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

int func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_249();
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
					func_357(99, 1);
					func_248(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_248(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_248(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_232(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_227(5))
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
							func_248(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_248(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_248(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_227(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_248(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_248(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_248(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_248(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_248(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_248(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_248(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_248(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_248(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_248(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_248(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_248(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_227(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_248(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_248(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_248(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_248(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_226(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_357(95, iParam3);
					break;
				case 1:
					func_357(97, iParam3);
					break;
				case 2:
					func_357(96, iParam3);
					break;
			}
			func_357(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_219(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_219(bVar1);
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
					func_248(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_248(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_248(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_218(iParam0);
	if (Global_41431 == 15)
	{
		func_217(0);
	}
	return 1;
}

void func_217(bool bParam0)
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

void func_218(int iParam0)
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

void func_219(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_225(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_225(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_225(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_225(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_222(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_222(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_222(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_222(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_222(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_222(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_221() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_221() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_220(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_220(bool bParam0)
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

int func_221()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_222(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1312745;
}

int func_225(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_224();
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

void func_226(int iParam0)
{
	func_357(93, iParam0);
	func_357(29, iParam0);
	func_357(30, iParam0);
}

bool func_227(bool bParam0)
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
		return func_229(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_229(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_229(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_229(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_228(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_228(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_228(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_228(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_228(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_228(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_221() /*10930*/].f_6174.f_10, bParam0);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_229(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_224();
	}
	iVar1 = func_231(iParam0, bParam1);
	iVar2 = func_230(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_230(int iParam0)
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

int func_231(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_224();
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

int func_232(bool bParam0)
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
		func_247(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_233(27, 1);
	return 1;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_234(iParam0, iParam1);
}

int func_234(int iParam0, int iParam1)
{
	if (func_246(14) && !func_245(iParam0))
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
	if (func_244(&Global_4270065))
	{
		if (func_242(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_235(&Global_4270065, iParam0))
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

bool func_235(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return false;
	}
	if (func_242(uParam0, iParam1))
	{
		return false;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	func_238(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_236(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_236(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return 0;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_237(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_237(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_238(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_239(uParam0, iVar0);
		iVar0++;
	}
	func_240(uParam0, (Global_4270064 - 0.5f));
}

void func_239(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_240(var uParam0, float fParam1)
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

float func_241(var uParam0)
{
	return uParam0->f_80;
}

bool func_242(var uParam0, int iParam1)
{
	return func_243(uParam0, iParam1) != -1;
}

int func_243(var uParam0, int iParam1)
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

bool func_244(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_245(int iParam0)
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

bool func_246(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_247(int iParam0, bool bParam1)
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

void func_248(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_249()
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

int func_250(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_251(int iParam0, int iParam1, int iParam2)
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
		func_225((891 + iParam0), 1, -1, 1);
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
		func_252();
	}
}

void func_252()
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
		func_247(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_253() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_211();
				}
			}
		}
	}
}

int func_253()
{
	return Global_30768;
}

void func_254(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

bool func_255(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_256(int iParam0, bool bParam1)
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

bool func_257(var uParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_603, bParam1);
}

int func_258()
{
	return UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_259(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, int iParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	bool bVar20;
	vector3 vVar21;
	vector3 vVar24;

	bVar0 = UNK_0x16F2683693E537C9();
	bVar1 = false;
	bVar2 = UNK_0xEB6A8945D1AC98A1(bVar0);
	if (bVar2)
	{
		*iParam5 = 2;
		return;
	}
	iVar3 = UNK_0x75B806D0A76CB67D(bVar0);
	iVar4 = UNK_0x50D59C88203E680A(bVar0);
	bVar5 = UNK_0xE934758D273C899A(bVar0);
	bVar6 = UNK_0x869EFD0BC0868856(bVar0);
	bVar7 = UNK_0xC844350D5D58C99A(bParam3);
	bVar8 = (bVar7 && UNK_0x64E716CF8C283BF5(bVar0, bParam3));
	bVar9 = ((bVar7 && !UNK_0xEB6A8945D1AC98A1(bParam4)) && UNK_0x1B3D109B39CC2C89(bVar0, bParam4));
	bVar10 = (bVar7 && UNK_0x565509D116400807(bParam3, &bVar1));
	bVar11 = ((bVar10 && !UNK_0x437347B10A200C4B(bVar1, 0)) && UNK_0x64E716CF8C283BF5(bVar0, bVar1));
	bVar12 = (!bVar7 && !func_425(vParam0));
	if (bVar12)
	{
		vVar13 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
		vVar16 = { vVar13 - vParam0 };
		fVar19 = SYSTEM::SQRT(((vVar16.x * vVar16.x) + (vVar16.y * vVar16.y)));
		*fParam7 = fVar19;
		if ((vVar16.z < 5f && vVar16.z > -2f) && fVar19 < 15f)
		{
			*iParam6 = func_262(SYSTEM::CEIL(((100f * (15f - fVar19)) / 15f)) + 4, 0, 100);
			*iParam5 = 1;
		}
		else
		{
			*iParam5 = 3;
		}
	}
	if (bVar7)
	{
		if (func_260(bParam3, bParam4))
		{
			*fParam7 = 0f;
			*iParam6 = 100;
			*iParam5 = 1;
		}
		else
		{
			*iParam6 = 0;
			*iParam5 = 3;
		}
	}
	if (bVar10)
	{
		UNK_0x565509D116400807(bParam3, &bVar20);
		vVar21 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
		vVar24 = { UNK_0x68F4C0EC296D3901(bVar20, true) };
	}
}

bool func_260(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xC844350D5D58C99A(bParam0)) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		vVar5 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		if (func_361(UNK_0x134B62B726CEC8E6(bParam0)))
		{
			iVar8 = 0;
			iVar8 = 0;
			while (iVar8 < 6)
			{
				bVar1 = UNK_0x5466F584D98DBA09(bParam0, iVar8);
				if (UNK_0xC844350D5D58C99A(bVar1))
				{
					vVar2 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
					if (UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), bVar1))
					{
						return true;
					}
				}
				iVar8++;
			}
		}
		if (UNK_0xC844350D5D58C99A(bParam0))
		{
			UNK_0x565509D116400807(bParam0, &bVar0);
			if ((UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), bParam0) || UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam0)) || ((UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0)) && UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam1)))
			{
				if (vVar2.z < vVar5.z)
				{
					return true;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), bVar0))
				{
					return true;
				}
				else if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bVar0))
				{
					vVar9 = { UNK_0x5293C88BD2F4DE13(bVar0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) };
					vVar9.x = func_261((UNK_0x755FF954DAE327E1(vVar9.x) - 1.305f), 0f);
					if (vVar9.y >= 0f)
					{
						vVar9.f_1 = func_261((vVar9.y - 5.98f), 0f);
					}
					else
					{
						vVar9.f_1 = func_261((-vVar9.y - 6.21f), 0f);
					}
					if (vVar9.y == 0f && vVar9.x == 0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_261(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_263(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	float fVar0;
	bool bVar1;

	if (!func_456(&uParam3))
	{
		return;
	}
	fVar0 = func_455(&uParam3);
	if (fVar0 > 1.4f)
	{
		return;
	}
	bVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	UNK_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, bVar1, 0, 0, 2, false, false, false, false);
	UNK_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, bVar1, 0, 0, 2, false, false, false, false);
	UNK_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, bVar1, 0, 0, 2, false, false, false, false);
}

void func_264(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	bVar0 = func_362(uParam1);
	if (func_459(func_460(bParam2)))
	{
		if (!func_257(uParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_334("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (bVar0 != 0)
			{
				if (func_361(bVar0))
				{
					func_334("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_334("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_334("BJ_MG_STOBJ", 7500, 1);
			}
			func_213(uParam0, 0, 1);
		}
	}
	if (func_331("BJ_FALLHLP") && Global_22211.f_135)
	{
		UNK_0xA37A90C62806D848(1);
		func_213(uParam0, 1, 0);
	}
	if (!func_257(uParam0, 1) && !Global_22211.f_135)
	{
		UNK_0x1E3A202C24F57DA6(false);
		UNK_0xA37A90C62806D848(1);
		func_332("BJ_FALLHLP", -1);
		func_213(uParam0, 1, 1);
	}
	else if (!func_257(uParam0, 2))
	{
		if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 1 || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2)
		{
			UNK_0xA37A90C62806D848(1);
			if (UNK_0x91E3F625EF57450D(0))
			{
				func_332("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_332("BJ_PARAHLP", 10000);
			}
			func_213(uParam0, 2, 1);
		}
	}
	else if (!func_257(uParam0, 3))
	{
		if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == -1 || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 3)
		{
			UNK_0xA37A90C62806D848(1);
			func_213(uParam0, 3, 1);
		}
	}
}

void func_265(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	var uVar15;
	vector3 vVar18;
	float fVar21;
	float fVar22;
	float fVar23;
	bool bVar24;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x0FF5573D0492BF97(UNK_0x16F2683693E537C9())))
		{
			vVar0 = { UNK_0x698705F356FA8F72(UNK_0x0FF5573D0492BF97(UNK_0x16F2683693E537C9()), 0) };
		}
		else
		{
			vVar0 = { UNK_0x698705F356FA8F72(UNK_0x16F2683693E537C9(), 1) };
		}
		fVar21 = vVar0.y;
		vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		vVar3.f_2 = 0f;
	}
	if (UNK_0xC844350D5D58C99A(*bParam0) && UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		vVar6 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
		vVar6.f_2 = 0f;
		vVar18 = { UNK_0x56E9E0FD5ACCD35D(*bParam0) };
	}
	if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		UNK_0x61890296D3AA030F(*bParam0, &vVar9, &uVar15, &uVar15, &uVar15);
		vVar9.f_2 = 0f;
	}
	vVar12 = { vVar3 - vVar6 };
	vVar12.f_2 = 0f;
	fVar23 = UNK_0x755FF954DAE327E1(func_269(vVar12, vVar9));
	if (func_268(*bParam0))
	{
		fVar22 = func_49((fVar21 - (fVar23 / fVar21)), 2f, 3f);
	}
	else
	{
		fVar22 = func_49((fVar21 + (fVar23 / fVar21)), 3f, 10f);
	}
	bVar24 = func_49(func_266(vVar18.y, fVar22, 0.5f), vVar18.y, fVar21);
	vVar18.f_1 = func_266(vVar18.y, fVar22, 0.5f);
	if (((UNK_0xC844350D5D58C99A(*bParam0) && UNK_0xDF1306B443CD3D15(*bParam0, 0)) && vVar18.y > 2f) && vVar18.y < UNK_0xD890711CFD5AF100(*bParam0))
	{
		UNK_0xE76AF7E1683414C6(UNK_0xA30B8362589C124A(*bParam0, -1, 0), bVar24);
	}
}

float func_266(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = ((1f - SYSTEM::COS(func_267((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_267(float fParam0)
{
	return (fParam0 * 57.29578f);
}

bool func_268(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		UNK_0x61890296D3AA030F(bParam0, &vVar12, &uVar6, &uVar6, &vVar3);
	}
	vVar9 = { vVar0 - vVar3 };
	vVar9.f_2 = 0f;
	vVar12.f_2 = 0f;
	fVar15 = func_269(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return true;
	}
	return false;
}

float func_269(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_270(bool bParam0, bool bParam1, int iParam2)
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

Vector3 func_271(bool bParam0, vector3 vParam1)
{
	var uVar0;

	vParam1.f_2 = (vParam1.z + 0.15f);
	if (UNK_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.f_2 = uVar0;
	}
	if (func_272(bParam0))
	{
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_272(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_273(bool bParam0, int iParam1)
{
	var uVar0[6];
	int iVar7;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;

	if (!func_456(bParam0))
	{
		func_480(bParam0);
	}
	if (func_455(bParam0) < 1f)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	iVar12 = UNK_0x263615A674FCA6E9(UNK_0x16F2683693E537C9(), &uVar0, -1);
	iVar13 = 0;
	while (iVar13 < 6)
	{
		if ((UNK_0xC844350D5D58C99A((*iParam1)[iVar13]) && !UNK_0x437347B10A200C4B((*iParam1)[iVar13], 0)) && !UNK_0xEB6A8945D1AC98A1((*iParam1)[iVar13]))
		{
			if (func_275((*iParam1)[iVar13], &uVar0) == -1)
			{
				func_274(iParam1[iVar13]);
			}
			else
			{
				vVar8 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901((*iParam1)[iVar13], true) };
				fVar11 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y));
				if (vVar8.z * vVar8.z) < (3f * fVar11)
				{
					func_274(iParam1[iVar13]);
				}
			}
		}
		iVar13++;
	}
	if (iVar12 > 0)
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if ((((UNK_0xC844350D5D58C99A(uVar0[iVar13]) && !UNK_0x437347B10A200C4B(uVar0[iVar13], 0)) && !UNK_0xEB6A8945D1AC98A1(uVar0[iVar13])) && UNK_0x232B70EDA3C8983B(uVar0[iVar13])) && !UNK_0x405E212DDE472467(uVar0[iVar13], 1))
			{
				if (func_275(uVar0[iVar13], iParam1) == -1)
				{
					vVar8 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(uVar0[iVar13], true) };
					fVar11 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y));
					if (vVar8.z * vVar8.z) > (3f * fVar11)
					{
						bVar15 = false;
						iVar14 = 0;
						while (iVar14 < *iParam1)
						{
							if (!UNK_0xC844350D5D58C99A((*iParam1)[iVar14]) || UNK_0xEB6A8945D1AC98A1((*iParam1)[iVar14]))
							{
								(*iParam1)[iVar14] = uVar0[iVar13];
								UNK_0xDD353D0E9C789D0E(&iVar7);
								UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@basejump@", "ped_a_intro", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
								UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iVar7);
								UNK_0x78ADC381772E3D54(uVar0[iVar13], iVar7);
								UNK_0xF82EA857DA10E0CD(&iVar7);
								iVar14 = *iParam1;
								bVar15 = true;
							}
							iVar14++;
						}
						if (!bVar15)
						{
							return;
						}
					}
				}
			}
			iVar13++;
		}
	}
}

void func_274(var uParam0)
{
	UNK_0xA3BF0AA5A2608191(*uParam0);
	UNK_0xC6EB89C59F2AF6B8(*uParam0, "oddjobs@basejump@", "ped_a_exit", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
	*uParam0 = 0;
}

int func_275(bool bParam0, int iParam1)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (UNK_0xC844350D5D58C99A((*iParam1)[iVar0]))
			{
				if (bParam0 == (*iParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_276(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23, bool bParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	UNK_0x4EBF4289AABAE861(*uParam36);
	func_370();
	func_369();
	func_490();
	func_44(&(iParam2->f_26));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_321(iParam2);
	if (func_456(bParam24))
	{
		func_452(bParam24);
	}
	if (func_456(bParam23))
	{
		func_452(bParam23);
	}
	if (UNK_0xC844350D5D58C99A(*bParam7))
	{
		if (func_361(func_362(uParam0)))
		{
			UNK_0x86AA47F87DFBA4D0(bParam7);
		}
		else
		{
			if (!UNK_0x437347B10A200C4B(*bParam7, 0))
			{
				bVar1 = UNK_0xA30B8362589C124A(*bParam7, -1, 0);
				if (UNK_0xC844350D5D58C99A(bVar1))
				{
					UNK_0xEBA53F35D0085654(&bVar1);
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (UNK_0xC844350D5D58C99A((*iParam5)[iVar2]) && !UNK_0x437347B10A200C4B((*iParam5)[iVar2], 0))
		{
			UNK_0xA3BF0AA5A2608191((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (UNK_0xC844350D5D58C99A(*bParam8))
	{
		UNK_0xA954465BA6FDEFE2(bParam8);
	}
	if (UNK_0xC844350D5D58C99A(*bParam9))
	{
		if (!func_320(*bParam9) && UNK_0xC844350D5D58C99A(UNK_0xA30B8362589C124A(*bParam9, -1, 0)))
		{
			iVar3 = UNK_0xA30B8362589C124A(*bParam9, -1, 0);
			UNK_0xEBA53F35D0085654(&iVar3);
		}
		UNK_0xA954465BA6FDEFE2(bParam9);
	}
	if (!UNK_0x437347B10A200C4B(*bParam4, 0))
	{
		UNK_0x6DAD7906B73F064D(bParam4);
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			UNK_0x975C58E0FC4955A9(UNK_0x16F2683693E537C9(), 1);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bVar0, true) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (UNK_0xC844350D5D58C99A(*bParam6) && bVar0 == *bParam6)
			{
				UNK_0x7EA00EB725DAA91D(*bParam6);
				func_280(*bParam6, func_319(bParam20), func_318(bParam20), 24, 0);
				UNK_0x37806EBF326ECEE9(bVar0, 0f, 0f, 0f);
				UNK_0xA47B46945FF6DE74(bVar0, func_319(bParam20), 1, 0, 0, 1);
				UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
				UNK_0xD8F6A53F4799FAFE(bVar0, func_318(bParam20));
			}
			else
			{
				if (!UNK_0xAF6690C489CC6203(bVar0))
				{
					UNK_0x73270B3C9CC833FD(bVar0, true, 0);
				}
				UNK_0xA954465BA6FDEFE2(&bVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > -1)
	{
		UNK_0xE223EB8FE6F8CC15(*iParam11);
		UNK_0xE223EB8FE6F8CC15(*iParam12);
		*iParam16 = -1;
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam13))
	{
		UNK_0x142CC44DB769B57E(&iParam13);
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam14))
	{
		UNK_0x142CC44DB769B57E(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (UNK_0xC844350D5D58C99A((*iParam10)[iVar4]) && !UNK_0x437347B10A200C4B((*iParam10)[iVar4], 0))
		{
			UNK_0xF8CF67C6E39C23A9((*iParam10)[iVar4], 1f);
			UNK_0xE8832A9E16A57A1F((*iParam10)[iVar4], false, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_279(iParam2);
	*bParam3 = 0;
	func_278();
	func_277();
	UNK_0x53491B90E4FD0E56(800);
}

void func_277()
{
	Global_30912 = 1;
}

void func_278()
{
	int iVar0;

	Local_68.f_66 = -1;
	Local_68.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_68.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_68.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_68.f_9[iVar0 /*7*/].f_5 = 0;
		Local_68.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_68.f_5 = 0;
	Local_68.f_5.f_1 = -1f;
	Local_68.f_5.f_2 = 0;
	Local_68 = 0;
	Local_68.f_1 = 0;
}

void func_279(int iParam0)
{
	iParam0->f_603 = 0;
}

void func_280(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_317(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_312(bParam0, &Var0);
		if (func_311(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_304(iParam5, &Var0, vParam1, iParam4, func_310(bParam0));
		func_281(iParam5, bParam0, 0);
	}
}

void func_281(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_301(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_514();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_300(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_282(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_282(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_283(bParam0))
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
	func_312(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_283(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_298(bParam0, 0, 0)) || func_298(bParam0, 1, 0)) || func_298(bParam0, 2, 0)) || func_310(bParam0) != 145) || func_297(bParam0)) || func_296(bParam0)) || func_295(bParam0)) || func_294(bParam0)) || !func_284(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_296(bParam0))
		{
		}
		if (func_296(bParam0))
		{
		}
		if (func_298(bParam0, 0, 0))
		{
		}
		if (func_298(bParam0, 1, 0))
		{
		}
		if (func_298(bParam0, 2, 0))
		{
		}
		if (func_310(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_284(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_285(bParam0, 0))
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

bool func_285(bool bParam0, bool bParam1)
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
		if (!func_293())
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
		if ((((!func_292() && !func_291()) && !func_290()) && !func_289()) && !func_293())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_290())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_288(bParam0))
		{
			return false;
		}
	}
	if (!func_286(bParam0))
	{
		return false;
	}
	return true;
}

bool func_286(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_287())
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

bool func_287()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_288(bool bParam0)
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

bool func_289()
{
	return false;
}

bool func_290()
{
	return true;
}

bool func_291()
{
	return true;
}

bool func_292()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_293()
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

bool func_294(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_285(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_295(bool bParam0)
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

bool func_296(bool bParam0)
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

bool func_297(bool bParam0)
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

bool func_298(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_299(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_299(int iParam0, int iParam1, char* sParam2, int iParam3)
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

int func_300(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

bool func_301(var uParam0, int iParam1)
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
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_302(2, 1);
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
			Jump @5415; //curOff = 2161
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
			Jump @5415; //curOff = 2313
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
			Jump @5415; //curOff = 2434
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
			Jump @5415; //curOff = 2579
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
			Jump @5415; //curOff = 2724
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
			Jump @5415; //curOff = 2869
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
			Jump @5415; //curOff = 2991
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
			Jump @5415; //curOff = 3113
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
			Jump @5415; //curOff = 3235
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			Jump @5415; //curOff = 3304
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			Jump @5415; //curOff = 3393
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3446
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			Jump @5415; //curOff = 3521
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			Jump @5415; //curOff = 3606
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3669
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			Jump @5415; //curOff = 3722
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3775
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3828
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3881
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			Jump @5415; //curOff = 3944
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			Jump @5415; //curOff = 3987
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			Jump @5415; //curOff = 4030
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			Jump @5415; //curOff = 4073
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			Jump @5415; //curOff = 4116
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			Jump @5415; //curOff = 4159
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			Jump @5415; //curOff = 4202
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			Jump @5415; //curOff = 4245
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4303
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4361
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4419
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4477
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4535
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			Jump @5415; //curOff = 4593
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 4667
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 4745
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			Jump @5415; //curOff = 4788
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_293())
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
			Jump @5415; //curOff = 4905
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_293())
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
			Jump @5415; //curOff = 5022
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 5074
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
			Jump @5415; //curOff = 5164
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 5216
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 5268
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			Jump @5415; //curOff = 5340
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
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
				if (!func_311(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
				if (!func_311(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
				{
					*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
					uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
			{
				if (!func_311(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
				{
					*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
					uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
				}
			}
			return iVar0;
		}

int func_302(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_303(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2)
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

void func_304(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_301(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_309(iParam0);
			func_308(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_305(iParam0, 1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_307(iParam0, 0))
		{
			func_306(iParam0, 1, 0);
			func_306(iParam0, 2, 0);
			func_306(iParam0, 3, 0);
			func_306(iParam0, 4, 0);
			func_306(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_306(iParam0, 0, 0);
	}
}

void func_306(int iParam0, bool bParam1, bool bParam2)
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

bool func_307(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_308(var uParam0, var uParam1)
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

void func_309(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_301(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_305(iParam0, 0);
		}
	}
}

int func_310(bool bParam0)
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

bool func_311(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_312(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_316(uParam1);
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
		if (uParam1->f_65 == -1 && !func_315(uParam1->f_66))
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
		func_314(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_313(iVar0 + 1));
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

int func_313(int iParam0)
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

int func_314(bool bParam0, var uParam1, var uParam2)
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

bool func_315(int iParam0)
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

void func_316(var uParam0)
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

void func_317(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_309(iParam0);
	func_305(iParam0, 0);
}

int func_318(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 192.1528f;
		case 1:
			return 144.2205f;
		case 2:
			return 82.0341f;
		case 3:
			return 134.9389f;
		case 4:
			return 241.8704f;
		case 5:
			return 342.318f;
		case 6:
			return 174.9318f;
		case 7:
			return 186.4915f;
		case 8:
			return 93.0806f;
		case 9:
			return 213.7284f;
		case 10:
			return 55.5964f;
		case 11:
			return 61.2421f;
		case 12:
			return 304.1476f;
		default:
			break;
	}
	return 0f;
	return 0f;
}

Vector3 func_319(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		default:
			break;
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

bool func_320(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_321(int iParam0)
{
	if (*iParam0 != 0)
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_12[0] = 0;
	iParam0->f_12[1] = 0;
	iParam0->f_12[2] = 0;
	iParam0->f_12[3] = 0;
	iParam0->f_12[4] = 0;
	iParam0->f_12[5] = 0;
	iParam0->f_12[6] = 0;
	iParam0->f_12[7] = 0;
	iParam0->f_3[0] = 361;
	iParam0->f_3[1] = 361;
	iParam0->f_3[2] = 361;
	iParam0->f_3[3] = 361;
	iParam0->f_3[4] = 361;
	iParam0->f_3[5] = 361;
	iParam0->f_3[6] = 361;
	iParam0->f_3[7] = 361;
	iParam0->f_21[0] = 0;
	iParam0->f_21[1] = 0;
	iParam0->f_21[2] = 0;
	iParam0->f_21[3] = 0;
}

bool func_322(var uParam0, bool bParam1, int iParam2)
{
	if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_5 = UNK_0x1C0640BA9A7327B3();
	if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) > iParam2)
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_2, bParam1) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_3, bParam1))
		{
			uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
			return true;
		}
	}
	return false;
}

bool func_323(var uParam0, bool bParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, var uParam11, var uParam12)
{
	vector3 vVar0;

	switch (uParam0->f_3)
	{
		case 0:
			if (func_455(bParam1) >= 0f)
			{
				vParam8.f_2 = func_49(vParam8.z, -8.909f, 8.909f);
				uParam11->f_2 = (uParam11->f_2 + vParam8.z);
				vVar0 = { func_457(vParam5, vParam8.z) };
				UNK_0x86F44313DFA8F00C(func_427(uParam0, 0), vParam2 + vVar0, *uParam11, *uParam12, 300, 1, 1, 2);
				UNK_0xF1E4C781086FABC1(func_427(uParam0, 1), func_427(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		case 1:
			if (func_455(bParam1) >= 0f)
			{
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0xB3A1B75CB59FEB56(false, true, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		case 2:
			if (func_455(bParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_324(bool bParam0, var uParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar3 = func_427(uParam1, 0);
	iVar4 = func_427(uParam1, 1);
	UNK_0xDC3CC6D1845B0567(iVar4, func_325());
	vVar5 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 2f, -0.3f, -7.7824f) };
	UNK_0x608A456FDD8A83D8(iVar4, vVar5);
	vVar0 = { UNK_0x17D61C69BA58F815(iVar3, 2) };
	vVar0.x = 0f;
	UNK_0x5F3CBA6EB9341C90(iVar4, vVar0, 2);
	UNK_0x5818C8D5303DCCF8(iVar4, UNK_0x86CC98177DFF41EC(iVar3));
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_365(bParam2);
}

float func_325()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return 0.5f;
	}
	return 0.84f;
}

bool func_326(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = func_427(uParam1, 0);
	vVar1 = { func_329(uParam2) };
	if (UNK_0x89DF0B812BA6383B())
	{
		vVar1.f_1 = (vVar1.y * -1f);
	}
	if (!UNK_0x91E3F625EF57450D(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * UNK_0x6117725E0134737F()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * UNK_0x6117725E0134737F()) * 100f));
		if (UNK_0x755FF954DAE327E1(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * UNK_0x6117725E0134737F()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (UNK_0x755FF954DAE327E1(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * UNK_0x6117725E0134737F()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * UNK_0x6117725E0134737F()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * UNK_0x6117725E0134737F()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar4 = { func_457(vParam9, uParam4->f_2) };
	UNK_0x608A456FDD8A83D8(iVar0, vParam6 + vVar4);
	UNK_0x5F3CBA6EB9341C90(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_458(uParam0)) + uParam4->f_2), 2);
	UNK_0xDC3CC6D1845B0567(iVar0, func_325());
	if (!UNK_0x0F1CCD77290EE12F() || !func_456(bParam3))
	{
		func_365(bParam3);
	}
	else
	{
		if (!UNK_0xFEBC1E4EC9E001F0())
		{
			func_328("BJ_VLOOKHLP");
		}
		if (func_456(bParam3) && func_455(bParam3) > 0.5f)
		{
			if (func_327(uParam2, 1))
			{
				func_452(bParam3);
				UNK_0xE03C71FA3398174A(iVar0);
				return true;
			}
		}
	}
	return false;
}

bool func_327(var uParam0, bool bParam1)
{
	return (UNK_0xEAE0D21A50E6C7F4(uParam0->f_2, bParam1) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_3, bParam1));
}

void func_328(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

Vector3 func_329(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_330(bool bParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()))));
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		UNK_0xA47B46945FF6DE74(bParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

bool func_331(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_332(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UNK_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			UNK_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_213(uParam0, 20, 0);
		}
	}
	else if (UNK_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		UNK_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_213(uParam0, 20, 0);
	}
}

void func_334(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

struct<4> func_335(bool bParam0)
{
	struct<4> Var0;

	switch (bParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		default:
			break;
	}
	return Var0;
}

void func_336(bool bParam0, float fParam1)
{
	if (!func_456(bParam0))
	{
		func_42(bParam0, fParam1);
	}
}

void func_337(bool bParam0, int iParam1)
{
	if (func_456(bParam0))
	{
		if (func_339(bParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_209(UNK_0x16F2683693E537C9(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_338())
	{
		func_336(bParam0, 0f);
	}
}

bool func_338()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_339(bool bParam0, float fParam1)
{
	if (func_340(bParam0, fParam1))
	{
		func_452(bParam0);
		return true;
	}
	return false;
}

bool func_340(bool bParam0, float fParam1)
{
	if (func_456(bParam0))
	{
		if (func_455(bParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

void func_341(var uParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("WEAPON_UNARMED")) && *uParam0 != joaat("WEAPON_ELECTRIC_FENCE")) && *uParam0 != joaat("GADGET_PARACHUTE")) && *uParam0 != joaat("OBJECT"))
		{
			UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), -1, false, true);
		}
		UNK_0x38C3A68D7861DCFD(0, 37, 1);
		UNK_0x38C3A68D7861DCFD(0, 66, 1);
		UNK_0x38C3A68D7861DCFD(0, 67, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
		UNK_0x38C3A68D7861DCFD(0, 99, 1);
		UNK_0x38C3A68D7861DCFD(0, 100, 1);
		UNK_0x3584F71E5CA29322(19);
	}
}

int func_342(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	var uVar42;
	var uVar43;
	var uVar44;

	vVar12 = { func_363(uParam0, *iParam6) };
	bVar37 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x61890296D3AA030F(UNK_0x16F2683693E537C9(), &vVar0, &uVar3, &uVar6, &vVar9);
	}
	if (bVar37)
	{
		if (UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0))
		{
			vVar27 = { UNK_0x68E4ADDDDCD7BDDE(bParam1, func_364(uParam0)) };
			fVar36 = (vVar27.z - vVar12.z);
			if (bParam20)
			{
				if (UNK_0xE4EDC4B0E92C078B(*bParam11))
				{
					UNK_0x2F9282246F89FFD1(*bParam11, vVar27);
				}
				else
				{
					*bParam11 = UNK_0x6CC513A908911CF0(vVar27);
					UNK_0x61755AC17D8F538E(*bParam11, 5);
					UNK_0x516E63E474722206(*bParam11, 1.2f);
					UNK_0xDC5B2F9D0CCE3A10(*bParam11, "BJ_BLIP_TGT");
				}
			}
			vVar30 = { func_363(uParam0, 0) };
			vVar27.f_2 = (vVar30.z + fVar36);
			vVar12 = { vVar27 };
		}
		else if (func_362(uParam0) != 0)
		{
			vVar27 = { func_363(uParam0, 0) };
			vVar12 = { vVar27 };
		}
		else
		{
			vVar27 = { vVar12 };
		}
		vVar18 = { vVar9 - vVar12 };
		if (func_362(uParam0) == 0)
		{
			UNK_0x922D0EFFF8F2403B(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_351(vVar27, 170, 200), 0, 0, 2, false, false, false, false);
			UNK_0x922D0EFFF8F2403B(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_351(vVar27, 170, 200), 0, 0, 2, false, false, false, false);
			UNK_0x922D0EFFF8F2403B(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(vVar27, 170, 200), 0, 0, 2, false, false, false, false);
		}
		if (*iParam7 != -1)
		{
			UNK_0xE223EB8FE6F8CC15(*iParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		UNK_0xA402F6C87C08815C(134, &bVar39, &bVar40, &bVar41, &uVar42);
		vVar18 = { vVar9 - vVar12 };
		vVar15 = { func_363(uParam0, *iParam6 + 1) };
		UNK_0x922D0EFFF8F2403B(6, vVar12, func_469(vVar18), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(vVar12, 25, 200), 0, 0, 2, false, false, false, false);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				UNK_0xE223EB8FE6F8CC15(*iParam4);
				*iParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					UNK_0xE223EB8FE6F8CC15(*iParam5);
					*iParam4 = 0;
				}
			}
			*iParam4 = UNK_0x1B26E47E3E30075B(17, vVar12, vVar15, 9f, bVar39, bVar40, bVar41, func_351(vVar27, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*iParam5 = UNK_0x1B26E47E3E30075B(17, vVar15, func_363(uParam0, *iParam6 + 2), (9f * 0.5f), bVar39, bVar40, bVar41, func_351(vVar27, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			UNK_0x922D0EFFF8F2403B(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_351(vVar15, 170, 200), 0, 0, 2, false, false, false, false);
			UNK_0x922D0EFFF8F2403B(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_351(vVar15, 170, 200), 0, 0, 2, false, false, false, false);
			UNK_0x922D0EFFF8F2403B(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(vVar15, 170, 200), 0, 0, 2, false, false, false, false);
		}
		else
		{
			UNK_0x922D0EFFF8F2403B(6, vVar15, func_469(vVar9 - vVar15), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(vVar15, 25, 200), 0, 0, 2, false, false, false, false);
		}
		if (*iParam4 != 0)
		{
			UNK_0xF0B0A50DF3EA0E70(*iParam4, bVar39, bVar40, bVar41, func_351(vVar12, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*iParam5 != 0)
		{
			UNK_0xF0B0A50DF3EA0E70(*iParam5, bVar39, bVar40, bVar41, func_351(vVar15, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 0 || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 1) || (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 2 && !UNK_0x06F8112AA79C53D9(0, 80)))
	{
		if (!UNK_0x362FD95670BFA2A6(vVar12, &uVar43, &uVar44))
		{
			if (bLocal_582)
			{
				func_349(vVar12, uParam15, uParam16, uParam17);
				if (func_456(&uLocal_584))
				{
					func_452(&uLocal_584);
				}
			}
			else if (func_456(&uLocal_584))
			{
				if (func_347(&uLocal_584) > 0.5f)
				{
					func_452(&uLocal_584);
					bLocal_582 = true;
				}
			}
			else
			{
				func_480(&uLocal_584);
			}
		}
		else if (bLocal_582)
		{
			func_349(vVar12, uParam15, uParam16, uParam17);
			if (func_456(&uLocal_584))
			{
				if (func_347(&uLocal_584) > 0.5f)
				{
					func_452(&uLocal_584);
					bLocal_582 = false;
				}
			}
			else
			{
				func_480(&uLocal_584);
			}
		}
		else if (func_456(&uLocal_584))
		{
			func_452(&uLocal_584);
		}
	}
	else
	{
		bLocal_582 = false;
	}
	if (func_346(iParam14, uParam18, &bParam1))
	{
		if (UNK_0xE4EDC4B0E92C078B(*bParam11))
		{
			UNK_0x142CC44DB769B57E(bParam11);
		}
		if (UNK_0xE4EDC4B0E92C078B(*bParam12))
		{
			UNK_0x142CC44DB769B57E(bParam12);
		}
		if (!bVar37)
		{
			return 2;
		}
		fVar34 = SYSTEM::SQRT(((vVar18.x * vVar18.x) + (vVar18.y * vVar18.y)));
		if (((vVar18.z < 5f && vVar18.z > -2f) && fVar34 < 15f) || func_260(bParam1, bParam2))
		{
			*iParam10 = func_262(SYSTEM::CEIL(((100f * (15f - fVar34)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_345())
	{
		if (UNK_0x341D37321932F141(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 0);
		}
	}
	else if (!bVar37)
	{
		fVar33 = SYSTEM::VMAG2(vVar18);
		if (fVar33 < (22f * 22f))
		{
			if (fVar33 < (10f * 10f))
			{
				bVar38 = true;
			}
			else if (func_269(vVar0, -vVar18 / FtoV(SYSTEM::SQRT(fVar33))) < 0.08f)
			{
				bVar38 = true;
			}
			if (bVar38)
			{
				*iParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bLocal_583 = false;
			}
			if (!bVar38 && !bLocal_583)
			{
				bLocal_583 = true;
			}
		}
		else if (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 0 || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == -1)
		{
			if (vVar18.z < -22f)
			{
				func_344(iParam13, 0);
				bVar38 = true;
			}
		}
		else
		{
			vVar24 = { UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()) };
			vVar24.f_2 = 0f;
			vVar24 = { func_469(vVar24) };
			vVar21 = { -vVar18.x, -vVar18.y, 0f };
			vVar21 = { func_469(vVar21) };
			fVar35 = ((vVar9.z - 32f) + (32f * func_343(vVar24, vVar21)));
			fVar34 = SYSTEM::SQRT(((vVar18.x * vVar18.x) + (vVar18.y * vVar18.y)));
			if ((vVar9.z - fVar35) < fVar34)
			{
				fVar35 = (fVar35 - (0.05f * ((fVar35 - vVar9.z) + fVar34)));
				if (fVar35 < (vVar12.z - 22f))
				{
					func_344(iParam13, 0);
					bVar38 = true;
				}
			}
		}
		if (bLocal_583)
		{
			if (SYSTEM::VMAG2(vVar18) >= (22f * 22f))
			{
				*iParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar38 = true;
				bLocal_583 = false;
			}
		}
		if (bVar38)
		{
			*iParam6++;
			if (UNK_0xE4EDC4B0E92C078B(*bParam11))
			{
				UNK_0x142CC44DB769B57E(bParam11);
			}
			if (UNK_0xE4EDC4B0E92C078B(*bParam12))
			{
				*bParam11 = *bParam12;
				*bParam12 = 0;
				UNK_0x516E63E474722206(*bParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					UNK_0xDC5B2F9D0CCE3A10(*bParam11, "BJ_BLIP_TGT");
				}
				else
				{
					UNK_0xDC5B2F9D0CCE3A10(*bParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!UNK_0xE4EDC4B0E92C078B(*bParam12))
				{
					*bParam12 = UNK_0x6CC513A908911CF0(func_363(uParam0, *iParam6 + 1));
					UNK_0x61755AC17D8F538E(*bParam12, 5);
					UNK_0x516E63E474722206(*bParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						UNK_0xDC5B2F9D0CCE3A10(*bParam12, "BJ_BLIP_TGT");
					}
					else
					{
						UNK_0xDC5B2F9D0CCE3A10(*bParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*bParam12 = 0;
			}
			UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), func_363(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_343(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

void func_344(int iParam0, bool bParam1)
{
	*iParam0 = UNK_0xD68EA767274B7444();
	if (bParam1)
	{
		UNK_0x4D7F4CC43D4D0DE3(*iParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_334("BJ_MISSED", 7500, 1);
		UNK_0x4D7F4CC43D4D0DE3(*iParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

bool func_345()
{
	if (((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) && (UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == 3 || UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9()) == -1)) && UNK_0xEE9925602B29903C(UNK_0x16F2683693E537C9()) > 50f) && !UNK_0x42CF608FD1475F11(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_346(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	bVar0 = UNK_0x16F2683693E537C9();
	if (!*uParam1)
	{
		iVar1 = UNK_0x50D59C88203E680A(bVar0);
		if (iVar1 != -1 && !UNK_0xE934758D273C899A(bVar0))
		{
			*uParam1 = 1;
			*iParam0 = iVar1;
		}
	}
	return (((UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()) || (UNK_0x75B806D0A76CB67D(bVar0) == 3 && !UNK_0xE934758D273C899A(bVar0))) || (UNK_0x75B806D0A76CB67D(bVar0) == -1 && !UNK_0xE934758D273C899A(bVar0))) || (((UNK_0xC844350D5D58C99A(*bParam2) && !UNK_0xEB6A8945D1AC98A1(bVar0)) && !UNK_0x437347B10A200C4B(*bParam2, 0)) && UNK_0x64E716CF8C283BF5(bVar0, *bParam2)));
}

float func_347(bool bParam0)
{
	if (func_456(bParam0))
	{
		if (func_348(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_43(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

bool func_348(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

void func_349(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	if (UNK_0x362FD95670BFA2A6(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_350(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		UNK_0x8A462DAA7D1D9008(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam5 || (*uParam3 == 0f && *uParam4 == 0f)) || (UNK_0x755FF954DAE327E1((fVar2 - *uParam3)) < 0.04f && UNK_0x755FF954DAE327E1((fVar3 - *uParam4)) < 0.04f))
		{
			UNK_0x539E86AE011A8B38("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam5 = fVar4;
	}
	*uParam3 = fVar2;
	*uParam4 = fVar3;
}

void func_350(vector3 vParam0, float fParam3, float fParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!func_311(vParam0, 0f, 0f, 0f, 0))
	{
		UNK_0xE464FC538618BC3D(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.f_1 = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.f_1 = (0.5f - fVar1);
	}
	vVar2.f_2 = 0f;
	func_469(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.f_1 = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*fParam3 = fVar0;
	*fParam4 = fVar1;
}

int func_351(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar0 = 100f;
	iVar1 = 50;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		fVar2 = UNK_0x0EB28750412C3A5A(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - SYSTEM::CEIL((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

void func_352(bool bParam0)
{
	if (func_456(bParam0) && func_455(bParam0) > 7.5f)
	{
		func_452(bParam0);
	}
}

bool func_353(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	if (UNK_0xC7BC967711A8A063(UNK_0x16F2683693E537C9()))
	{
		*bParam2 = 1;
		return true;
	}
	vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
		if (UNK_0xE934758D273C899A(bVar0))
		{
			return false;
		}
		else if (!UNK_0xE82754C349C7B581(UNK_0x68F4C0EC296D3901(bVar0, true), &fVar7, 0, 0))
		{
			return false;
		}
		else if (vVar1.z >= (fVar7 + 1.5f))
		{
			return false;
		}
	}
	if (UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	else if (!UNK_0xE82754C349C7B581(vVar1, &fVar7, 0, 0))
	{
		return false;
	}
	else if (vVar1.z >= (fVar7 + 1.5f))
	{
		return false;
	}
	vVar4 = { func_363(uParam0, 0) };
	if (vVar1.z < (vVar4.z + 5f))
	{
		*bParam2 = 1;
		return true;
	}
	if (bParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*bParam2 = 1;
			return true;
		}
	}
	else if (bParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*bParam2 = 1;
			return true;
		}
	}
	else if (bParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*bParam2 = 1;
			return true;
		}
	}
	else if (bParam1 == 6 || bParam1 == 12)
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_467(bParam1)) > 3600f)
		{
			*bParam2 = 1;
			return true;
		}
	}
	return false;
}

bool func_354()
{
	if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		return true;
	}
	return false;
}

bool func_355(var uParam0)
{
	return uParam0->f_84;
}

void func_356(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return;
	}
	vVar2 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
	bVar8 = UNK_0xD890711CFD5AF100(*bParam0);
	bVar1 = UNK_0xA30B8362589C124A(*bParam0, -1, 0);
	UNK_0x1E9649458B15960F(*bParam0, false);
	UNK_0xDD353D0E9C789D0E(&iVar0);
	if (!bParam1)
	{
		UNK_0x132B85BCE016BCA0(false, *bParam0, UNK_0x68F4C0EC296D3901(*bParam0, true), 4, 0f, 786469, 2f, 0f, 1);
	}
	UNK_0x132B85BCE016BCA0(false, *bParam0, vVar2 + Vector(5f, 5f, 5f) * UNK_0x08D89CE2E20AE305(*bParam0) + Vector(20f, 0f, 0f), 4, (0.3f * bVar8), 786469, 5f, 10f, 1);
	vVar5 = { Vector(1000f, 1000f, 1000f) * UNK_0x08D89CE2E20AE305(*bParam0) };
	vVar5.f_2 = 200f;
	UNK_0x132B85BCE016BCA0(false, *bParam0, vVar2 + vVar5, 4, bVar8, 262144, 15f, 10f, 1);
	UNK_0x75ABDC5F81978924(iVar0);
	UNK_0xA3BF0AA5A2608191(bVar1);
	UNK_0x78ADC381772E3D54(bVar1, iVar0);
	UNK_0xF82EA857DA10E0CD(&iVar0);
}

void func_357(int iParam0, int iParam1)
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

void func_358(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_412(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	func_552(23, 0);
}

bool func_359(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE"):
		case joaat("TRIBIKE2"):
		case joaat("TRIBIKE3"):
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("RUFFIAN"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("BLAZER"):
		case joaat("BLAZER2"):
		case joaat("CRUISER"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("PCJ"):
		case joaat("POLICEB"):
			return true;
		default:
			break;
	}
	return false;
}

int func_360(var uParam0)
{
	return *uParam0;
}

bool func_361(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("FREIGHT"):
		case joaat("METROTRAIN"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_362(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_12[iParam1 /*3*/];
}

Vector3 func_364(var uParam0)
{
	return uParam0->f_6;
}

void func_365(bool bParam0)
{
	func_42(bParam0, 0f);
}

int func_366(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_367(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_368(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_369()
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

void func_370()
{
	struct<68> Var0;

	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_371(&(Global_1835013.f_73));
	func_371(&(Global_1835013.f_142));
	func_371(&(Global_1835013.f_211));
	func_371(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_131(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_371(var uParam0)
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

bool func_372(var uParam0)
{
	return uParam0->f_83;
}

bool func_373(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (UNK_0xFA06B985B30FB0FC(func_427(uParam3, 1)))
	{
		func_365(bParam5);
	}
	if (!*bParam10)
	{
		if (func_456(bParam7) && func_455(bParam7) >= func_394(uParam0))
		{
			func_356(bParam2, 0);
			func_452(bParam7);
			*bParam10 = 1;
		}
	}
	else if (UNK_0xDF1306B443CD3D15(*bParam2, 0))
	{
		UNK_0xFBFE633A7F731A67(*bParam2, 0.7f);
	}
	if (func_456(bParam5) && func_455(bParam5) > 0.2f)
	{
		func_452(bParam5);
		func_452(bParam6);
		return true;
	}
	if (!func_456(bParam6))
	{
		func_480(bParam6);
	}
	else if ((bParam12 && UNK_0x0F1CCD77290EE12F()) || (func_455(bParam6) > 0.5f && func_327(uParam4, 2)))
	{
		*bParam11 = 1;
		func_452(bParam5);
		func_452(bParam6);
		return true;
	}
	UNK_0x3584F71E5CA29322(2);
	if (func_456(bParam8))
	{
		if (func_460(bParam1) != 0)
		{
			func_452(bParam8);
		}
		else if (func_455(bParam8) > func_420(bParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, false, 0, 0, 0);
					break;
				case 1:
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				case 2:
					UNK_0xC6EB89C59F2AF6B8(UNK_0x16F2683693E537C9(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_452(bParam8);
		}
	}
	if (UNK_0x0F1CCD77290EE12F())
	{
		func_374();
	}
	else
	{
		func_365(bParam6);
	}
	return false;
}

void func_374()
{
	struct<6> Var0;
	var uVar6;

	uVar6 = Global_111638.f_18962;
	func_375(Var0, 0, 0, 0, 0, uVar6);
}

void func_375(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
			if (func_389(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_76878 = UNK_0x1C0640BA9A7327B3();
					vLocal_22 = { UNK_0x96792D8393A779D7(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + UNK_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_389(0, Param0))
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
				iVar12 = func_422();
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
				Var4 = { func_378(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				UNK_0x75BBE9A62B73769F(fVar6, fVar7, 0f, 0.01f);
				UNK_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!UNK_0x0D71AFA59EF5104F() && !UNK_0x0DF32524CC9DB3EB())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_377(&Var4) > fLocal_26)
					{
						if (UNK_0x2F1FB0453B36C270(15))
						{
							UNK_0x744B56EE9DE7B57F(15, vLocal_22.x, (vLocal_22.y + fLocal_25));
							Global_76881 = 1;
						}
					}
				}
				UNK_0x070005E852D4C0E9(&Var4);
				UNK_0xE0026608C37C7C41(fVar6, fVar7, 0);
				UNK_0xD59EF13BB60323B9();
				if (Global_76880 == 1)
				{
					func_376();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_376();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_376()
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

float func_377(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

struct<2> func_378(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_388(iParam0) };
			break;
		case 7:
			Var0 = { func_386(iParam0) };
			break;
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_385(iParam2) };
					break;
				case 8:
					Var0 = { func_384(iParam2) };
					break;
				case 7:
					Var0 = { func_383(iParam2) };
					break;
				case 10:
					Var0 = { func_382(iParam2) };
					break;
				case 5:
					Var0 = { func_381(iParam2) };
					break;
				case 4:
					Var0 = { func_380(iParam2) };
					break;
				default:
					StringCopy(&Var0, func_379(iVar2), 8);
					break;
			}
			break;
		default:
			break;
	}
	return Var0;
}

char* func_379(int iParam0)
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

struct<2> func_380(int iParam0)
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

struct<2> func_381(int iParam0)
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

struct<2> func_382(int iParam0)
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

struct<2> func_383(int iParam0)
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

struct<2> func_384(int iParam0)
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

struct<2> func_385(int iParam0)
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

struct<2> func_386(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_387(iParam0) };
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

struct<2> func_387(int iParam0)
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

struct<2> func_388(int iParam0)
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

bool func_389(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_391(0) || Global_76891) || Global_76880 == 1) || !UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	switch (Global_76876)
	{
		case 0:
			if (UNK_0x7F8A39872A07D2CE(&uParam1, "NONE") || UNK_0xEA6BC48857E0AC4C(&uParam1))
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
			if ((UNK_0x22A8E52414415B76() || func_32(0)) || func_390(1))
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

bool func_390(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_391(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_392(iParam0))
	{
		return false;
	}
	return true;
}

int func_392(int iParam0)
{
	return func_393(iParam0, Global_41431);
}

int func_393(int iParam0, int iParam1)
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

float func_394(var uParam0)
{
	return uParam0->f_80;
}

int func_395(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_396(sParam2, iParam3, 0);
}

int func_396(char* sParam0, int iParam1, bool bParam2)
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
					func_408();
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
		if (func_407(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_406();
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
				func_405();
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
				if (func_404())
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
			if (func_28())
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
			func_403();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_402();
		func_397();
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
		func_408();
	}
	return 0;
}

void func_397()
{
	if (!func_398())
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

bool func_398()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_401())
	{
		return false;
	}
	if (func_399(UNK_0xD803B885F5E47A62()))
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

bool func_399(int iParam0)
{
	return func_400(iParam0, 20);
}

bool func_400(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_401()
{
	return -1;
}

void func_402()
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

void func_403()
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

bool func_404()
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

void func_405()
{
	if (func_246(14))
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
		Global_19486 = func_422();
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

void func_406()
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

bool func_407(bool bParam0, int iParam1)
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

void func_408()
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

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_410(var uParam0)
{
	return uParam0->f_4;
}

void func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, var uParam6, var uParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = func_427(uParam0, 0);
	if (UNK_0xC844350D5D58C99A(bParam5) && !UNK_0x437347B10A200C4B(bParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(uParam1))), SYSTEM::SIN((-97.4239f + func_458(uParam1)))) };
		*uParam3 = { UNK_0x68E4ADDDDCD7BDDE(bParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_457(*uParam4, uParam2->f_2) };
		vVar7 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_458(uParam1)) };
		*uParam7 = 26f;
		vVar4 = { *uParam6 };
		vVar4.f_2 = (vVar4.z + uParam2->f_2);
		UNK_0x608A456FDD8A83D8(iVar0, vVar7);
		UNK_0x5F3CBA6EB9341C90(iVar0, vVar4, 2);
		UNK_0x5818C8D5303DCCF8(iVar0, *uParam7);
		UNK_0xDC3CC6D1845B0567(iVar0, func_325());
	}
	UNK_0xE3BB8E05FCEB3FBE(iVar0, true);
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
}

void func_412(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_419(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_28())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_418(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_419(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_418(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_416(UNK_0xD803B885F5E47A62())) && !func_414(UNK_0xD803B885F5E47A62(), 0)) && !func_413()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_416(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_413()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_414(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_415(-1, 0) == 8;
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

int func_415(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_224();
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

bool func_416(bool bParam0)
{
	if (func_414(bParam0, 0))
	{
		return true;
	}
	if (func_417())
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

bool func_417()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_418(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_419(int iParam0)
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

float func_420(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				case 1:
					return 7.3f;
				case 2:
					return 6.8f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				case 1:
					return 5.5f;
				case 2:
					return 5f;
				default:
					break;
			}
			break;
		case 5:
			return 0f;
		case 6:
			return 0f;
		case 12:
			return 0f;
	}
	return 0f;
}

int func_421(bool bParam0)
{
	switch (bParam0)
	{
		case 5:
			return 3000;
		case 6:
			return 1500;
		case 12:
			return 2000;
		default:
			break;
	}
	return 0;
}

int func_422()
{
	func_423();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_423()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_37(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_36(UNK_0x16F2683693E537C9());
			if (func_39(iVar0) && (!func_246(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_39(Global_111638.f_2358.f_539.f_4321))
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

int func_424(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_425(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_426(bool bParam0)
{
	switch (bParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_427(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_428(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_27(0);
	func_412(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_552(23, 1);
}

void func_429(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	bool bVar6;
	int iVar7;

	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		UNK_0xE342F209E49C5314(func_451(uParam0), func_450(uParam0), false, 1);
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		if (!func_425(func_363(uParam0, iVar5)))
		{
			*iParam2 = iVar5 + 1;
		}
		else
		{
			iVar5 = 999999;
		}
		iVar5++;
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
	UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
	UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"), true, false, false);
	UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
	if (bParam13 == 4)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, -109.33f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	else if (bParam13 == 3)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, 145.5732f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	else if (bParam13 == 5)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, 341.9614f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	else if (bParam13 == 6)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, 172.2123f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	else if (bParam13 == 8)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, 0.8373f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	else if (bParam13 == 12)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x437347B10A200C4B(bVar1, 0))
			{
				UNK_0xA954465BA6FDEFE2(&bVar1);
			}
			else
			{
				vVar2 = { UNK_0x68F4C0EC296D3901(bVar1, true) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					UNK_0xA47B46945FF6DE74(bVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(bVar1, 349.2306f);
					UNK_0x05CA0E7946B27A19(bVar1, 1);
				}
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
		UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"), true, false, false);
	}
	bVar0 = func_460(bParam13);
	if (bVar0 != 0)
	{
		if (!UNK_0x437347B10A200C4B(*bParam3, 0) || UNK_0xC844350D5D58C99A(*bParam3))
		{
			UNK_0x51B954DAB1BCAF73(*bParam3);
			UNK_0xA47B46945FF6DE74(*bParam3, func_467(bParam13), 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(*bParam3, func_458(uParam0));
		}
		else
		{
			*bParam3 = UNK_0x122AAB0B1D6F55AD(bVar0, func_467(bParam13), func_458(uParam0), true, true, false);
		}
		if (func_459(bVar0))
		{
			if (!UNK_0xC844350D5D58C99A(*bParam8) || UNK_0x437347B10A200C4B(*bParam8, 0))
			{
				*bParam8 = UNK_0x852A19533F896693(*bParam3, 26, bParam10, -1, 1, true);
				UNK_0xCC095276B3DD380E(*bParam8, 0);
				func_449(*bParam8, bParam13);
				UNK_0xE121AE1BBF90E186(*bParam8, true);
			}
			UNK_0x297734EBF6EB6285("SKY_DIVING_SHAKE", 0.15f);
			func_447(uParam1, *bParam8, func_448(bParam13));
			func_444(uParam1, UNK_0x16F2683693E537C9(), func_446());
			UNK_0xFBFE633A7F731A67(*bParam3, 0.7f);
			UNK_0x1E9649458B15960F(*bParam3, true);
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam3, 0))
				{
					UNK_0x15AFB6CBDE990FB6(UNK_0x16F2683693E537C9(), 1, true);
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), *bParam3, 2);
				}
				else if (func_443(UNK_0x16F2683693E537C9(), *bParam3) == 1)
				{
					UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), *bParam3, 2);
				}
			}
			if (!UNK_0x437347B10A200C4B(*bParam3, 0))
			{
				*iParam14 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
				UNK_0x6BE2EAE992FD7C26(*iParam14, *bParam3, UNK_0xF653B9B22DA806A9(*bParam3, "Chassis"));
				UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				UNK_0xC90224D9E95E5E3A(*iParam14, true);
			}
			func_480(bParam12);
		}
		else if (func_359(bVar0))
		{
			func_444(uParam1, UNK_0x16F2683693E537C9(), func_446());
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
			UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), *bParam3, -1);
			UNK_0x83F619A03CDDE284(UNK_0x16F2683693E537C9(), 0, 4096, -1);
			func_480(bParam12);
		}
	}
	else
	{
		func_444(uParam1, UNK_0x16F2683693E537C9(), func_446());
		if (func_372(uParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x7ED67A9BE53DAC95(UNK_0x16F2683693E537C9())))
			{
				UNK_0x975C58E0FC4955A9(UNK_0x16F2683693E537C9(), 1);
			}
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), func_467(bParam13), 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), func_458(uParam0));
			UNK_0x93D47DFD0AE94949(UNK_0x16F2683693E537C9(), -1);
			if (UNK_0xC844350D5D58C99A(*bParam3))
			{
				bVar6 = -1;
				while (bVar6 <= (UNK_0xD6DF381716822EFE(*bParam3) - 1))
				{
					if (!UNK_0xBBA8A868118C90ED(*bParam3, bVar6, 0))
					{
						iVar7 = UNK_0xA30B8362589C124A(*bParam3, bVar6, 0);
						UNK_0xEBA53F35D0085654(&iVar7);
					}
					bVar6++;
				}
				UNK_0xA954465BA6FDEFE2(bParam3);
			}
		}
	}
	UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, true);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 36, true);
	if (func_525(uParam0) != 0)
	{
		func_439(uParam0, bParam5, bParam13);
	}
	if (func_438(uParam0) != 0)
	{
		func_435(uParam0, bParam7);
	}
	bVar0 = func_362(uParam0);
	if (func_361(bVar0))
	{
		UNK_0x52D3C9744D7CF20D();
		UNK_0xF48790410026514E(0);
	}
	else if (bVar0 != 0)
	{
		UNK_0x536F1BE96C726C4B(func_363(uParam0, 0), 100f, 1, 0, 0, false);
		if (UNK_0xC844350D5D58C99A(*bParam4) && UNK_0x437347B10A200C4B(*bParam4, 0))
		{
			UNK_0xA954465BA6FDEFE2(bParam4);
		}
		if (!UNK_0xC844350D5D58C99A(*bParam4))
		{
			*bParam4 = UNK_0x122AAB0B1D6F55AD(bVar0, func_363(uParam0, 0), func_434(uParam0), true, true, false);
			if (func_433(func_362(uParam0)))
			{
				UNK_0xC6A6B4DDD6DC073A(*bParam4, 11);
			}
			else if (func_432(func_362(uParam0)))
			{
				UNK_0xD3421E391490133B(*bParam4, true, true);
				UNK_0xC6A6B4DDD6DC073A(*bParam4, 6);
				UNK_0x0882E3DC0C991680(*bParam4, 2);
				UNK_0x29AA598B93E45D37(200f);
				UNK_0x25BD67336EA4AECE(*bParam4, 1000);
			}
			UNK_0xE8832A9E16A57A1F(*bParam4, true, 1);
		}
		else if (!UNK_0x437347B10A200C4B(*bParam4, 0))
		{
			UNK_0x51B954DAB1BCAF73(*bParam4);
			UNK_0xA47B46945FF6DE74(*bParam4, func_363(uParam0, 0), 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(*bParam4, func_434(uParam0));
		}
		if (func_433(func_362(uParam0)))
		{
			if (UNK_0xC844350D5D58C99A(*bParam6) && UNK_0x437347B10A200C4B(*bParam6, 0))
			{
				UNK_0xA954465BA6FDEFE2(bParam6);
			}
			if (!UNK_0xC844350D5D58C99A(*bParam6))
			{
				*bParam6 = UNK_0x122AAB0B1D6F55AD(joaat("TRFLAT"), UNK_0x68E4ADDDDCD7BDDE(*bParam4, 0f, -10f, 0f), func_434(uParam0), true, true, false);
				UNK_0xE8832A9E16A57A1F(*bParam6, true, 1);
				UNK_0x25BD67336EA4AECE(*bParam6, 2000);
			}
			else if (!UNK_0x437347B10A200C4B(*bParam6, 0))
			{
				UNK_0x51B954DAB1BCAF73(*bParam6);
			}
			if (!UNK_0x6CFEA4CFD9C496C8(*bParam4))
			{
				UNK_0xC74DAD25331A5425(*bParam4, *bParam6, 1065353216 /* Float: 1f */);
			}
		}
		if (UNK_0xC844350D5D58C99A(*bParam9) && UNK_0x437347B10A200C4B(*bParam9, 0))
		{
			UNK_0xEBA53F35D0085654(bParam9);
		}
		if (!UNK_0xC844350D5D58C99A(*bParam9))
		{
			*bParam9 = UNK_0x852A19533F896693(*bParam4, 26, bParam11, -1, 1, true);
			UNK_0x73270B3C9CC833FD(*bParam9, true, 0);
			UNK_0x11AD11297DC58CC7(*bParam9, true);
			func_431(*bParam9, bParam13);
			if (bParam13 == 0)
			{
				func_430(uParam1, 2, *bParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			UNK_0xD458AC1C1D29C3B4(*bParam9, UNK_0xC08489BCA49ECCA8(*bParam9), false);
			UNK_0x759A5E1D0F0A31A1(*bParam9);
			UNK_0xA3BF0AA5A2608191(*bParam9);
			if (!UNK_0xC42A92762C58E1B9(*bParam9, *bParam4, 0) || UNK_0xA30B8362589C124A(*bParam4, -1, 0) != *bParam9)
			{
				if (UNK_0x405E212DDE472467(*bParam9, 1))
				{
					UNK_0x975C58E0FC4955A9(*bParam9, 1);
				}
				UNK_0xF821F915BC24D246(*bParam9, *bParam4, -1);
			}
		}
		UNK_0xE8832A9E16A57A1F(*bParam9, true, 1);
	}
	if (func_422() == 0)
	{
		UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 9, 5, false, 0);
	}
	else if (func_422() == 1)
	{
		UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, true, false, 0);
	}
	else if (func_422() == 2)
	{
		UNK_0x64F9F278AB9DCA2C(UNK_0x16F2683693E537C9(), 8, 3, false, 0);
	}
}

void func_430(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_431(bool bParam0, bool bParam1)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return;
	}
	switch (bParam1)
	{
		case 0:
			UNK_0x64F9F278AB9DCA2C(bParam0, false, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, 2, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0, false);
			UNK_0x9A28E8CB86CD4694(bParam0, true, 1, 0, false);
			break;
		case 5:
			UNK_0x64F9F278AB9DCA2C(bParam0, false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 2, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 3, true, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 4, true, true, 0);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0, false);
			UNK_0x3BFC3B9ADD2EE7B7(bParam0, true);
			break;
		case 7:
			UNK_0x64F9F278AB9DCA2C(bParam0, false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 3, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 8, false, true, 0);
			UNK_0x9A28E8CB86CD4694(bParam0, false, 0, 2, false);
			break;
	}
}

bool func_432(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("SEASHARK"):
		case joaat("SEASHARK2"):
		case joaat("DINGHY"):
		case joaat("JETMAX"):
		case joaat("MARQUIS"):
		case joaat("SQUALO"):
		case joaat("SUNTRAP"):
		case joaat("TROPIC"):
		case joaat("PREDATOR"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_433(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HAULER"):
		case joaat("BIFF"):
		case joaat("PACKER"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
			return true;
		default:
			break;
	}
	return false;
}

var func_434(var uParam0)
{
	return uParam0->f_77;
}

void func_435(var uParam0, bool bParam1)
{
	if (!UNK_0xC844350D5D58C99A(*bParam1))
	{
		*bParam1 = UNK_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), true, true, false);
	}
	else if (UNK_0x437347B10A200C4B(*bParam1, 0))
	{
		UNK_0xA954465BA6FDEFE2(bParam1);
		*bParam1 = UNK_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), true, true, false);
	}
	else
	{
		UNK_0x51B954DAB1BCAF73(*bParam1);
	}
}

var func_436(var uParam0)
{
	return uParam0->f_79;
}

Vector3 func_437(var uParam0)
{
	return uParam0->f_9;
}

bool func_438(var uParam0)
{
	return uParam0->f_3;
}

void func_439(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (UNK_0xC844350D5D58C99A(*bParam1))
	{
		if (!func_320(*bParam1) && UNK_0xC844350D5D58C99A(UNK_0xA30B8362589C124A(*bParam1, -1, 0)))
		{
			bVar1 = UNK_0xA30B8362589C124A(*bParam1, -1, 0);
		}
		bVar2 = *bParam1;
	}
	bVar0 = func_442(bParam2);
	if (bVar0 != 0)
	{
		if (!UNK_0xC844350D5D58C99A(bVar2))
		{
			bVar2 = UNK_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), true, true, false);
		}
		else
		{
			UNK_0xA47B46945FF6DE74(bVar2, func_441(uParam0), 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(bVar2, func_440(uParam0));
		}
		UNK_0x1E9649458B15960F(bVar2, true);
		if (!UNK_0xC844350D5D58C99A(bVar1))
		{
			bVar1 = UNK_0x852A19533F896693(bVar2, 26, bVar0, -1, 1, true);
		}
		UNK_0xCC095276B3DD380E(bVar1, 0);
		func_449(bVar1, bParam2);
	}
	else
	{
		if (!UNK_0xC844350D5D58C99A(bVar2))
		{
			bVar2 = UNK_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), true, true, false);
		}
		else
		{
			UNK_0xA47B46945FF6DE74(bVar2, func_441(uParam0), 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(bVar2, func_440(uParam0));
		}
		UNK_0x1E9649458B15960F(bVar2, true);
		if (!UNK_0xC844350D5D58C99A(bVar1))
		{
			bVar1 = UNK_0x852A19533F896693(bVar2, 26, joaat("S_M_Y_PILOT_01"), -1, 1, true);
		}
		UNK_0xCC095276B3DD380E(bVar1, 0);
		UNK_0x9A28E8CB86CD4694(bVar1, false, 2, 0, false);
		UNK_0x9A28E8CB86CD4694(bVar1, true, 0, 0, false);
	}
	UNK_0x56FDC9ADE35F7DB0(bVar2, true, true, 0);
	UNK_0xFBFE633A7F731A67(bVar2, 0.7f);
	UNK_0xA3BF0AA5A2608191(bVar1);
	UNK_0x93D47DFD0AE94949(bVar1, -1);
	*bParam1 = bVar2;
}

var func_440(var uParam0)
{
	return uParam0->f_78;
}

Vector3 func_441(var uParam0)
{
	return uParam0->f_70;
}

bool func_442(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return joaat("S_M_Y_PILOT_01");
		case 1:
			return joaat("S_M_Y_PILOT_01");
		case 2:
			return joaat("S_M_Y_PILOT_01");
		case 3:
			return joaat("S_M_Y_PILOT_01");
		case 7:
			return joaat("A_M_Y_HIPPY_01");
		case 9:
			return joaat("S_M_Y_PILOT_01");
		case 10:
			return joaat("S_M_Y_PILOT_01");
		case 11:
			return joaat("A_M_M_GENFAT_02");
		default:
			break;
	}
	return false;
}

int func_443(bool bParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
		{
			if (UNK_0xA30B8362589C124A(bParam1, -1, 0) == bParam0)
			{
				return -1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, false, 0) == bParam0)
			{
				return 0;
			}
			if (UNK_0xA30B8362589C124A(bParam1, true, 0) == bParam0)
			{
				return 1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, 2, 0) == bParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_444(var uParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_445();
	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		func_430(uParam0, iVar0, bParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_445()
{
	if (func_422() == 1)
	{
		return 2;
	}
	if (func_422() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_446()
{
	int iVar0;

	iVar0 = func_36(UNK_0x16F2683693E537C9());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		case 2:
			return "TREVOR";
		case 1:
			return "FRANKLIN";
		default:
			break;
	}
	return "";
}

void func_447(var uParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		func_430(uParam0, iVar0, bParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_448(bool bParam0)
{
	return "EXT1HELIPILOT";
}

void func_449(bool bParam0, bool bParam1)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return;
	}
	switch (bParam1)
	{
		case 7:
			UNK_0x64F9F278AB9DCA2C(bParam0, false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 8, true, false, 0);
			UNK_0x9A28E8CB86CD4694(bParam0, true, 0, 0, false);
			break;
		case 11:
			UNK_0x64F9F278AB9DCA2C(bParam0, false, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 2, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(bParam0, 4, false, 2, 0);
			UNK_0x9A28E8CB86CD4694(bParam0, false, 1, 2, false);
			UNK_0x9A28E8CB86CD4694(bParam0, true, 1, 0, false);
			break;
	}
}

Vector3 func_450(var uParam0)
{
	return uParam0->f_67;
}

Vector3 func_451(var uParam0)
{
	return uParam0->f_64;
}

void func_452(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

bool func_453(var uParam0, bool bParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	char cVar0[64];

	if (!func_459(func_460(bParam3)))
	{
		UNK_0xA0D09682534C2176(func_467(bParam3));
	}
	if (func_456(bParam1))
	{
		if (func_455(bParam1) >= 5f)
		{
			return true;
		}
	}
	else
	{
		func_336(bParam1, 0f);
	}
	if (UNK_0x757EF87A33649210())
	{
		if (!UNK_0x68367101660E33F0())
		{
			return false;
		}
	}
	if (func_459(func_460(bParam3)))
	{
		if (!UNK_0xB4AE0788C1587752("veh@helicopter@rps@base"))
		{
			return false;
		}
	}
	if (func_420(bParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!UNK_0xB4AE0788C1587752(&cVar0))
		{
			return false;
		}
	}
	if (func_454(uParam0))
	{
		if (UNK_0x83D8570832F172A7(*uParam2))
		{
			if (UNK_0x67C1D9E5B91B2E37(2))
			{
				if (UNK_0x27117E2CDD4D67C3("basejumping"))
				{
					if (((UNK_0xB4AE0788C1587752("oddjobs@basejump@") && UNK_0xB4AE0788C1587752("skydive@freefall")) && UNK_0xB4AE0788C1587752("skydive@parachute@chute")) && UNK_0xB4AE0788C1587752("skydive@parachute@"))
					{
						if (UNK_0x3FC59DD18F049D6E(0))
						{
							if (!bParam5 || UNK_0x757EF87A33649210())
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_454(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!UNK_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

float func_455(bool bParam0)
{
	if (func_456(bParam0))
	{
		if (func_348(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_43(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

bool func_456(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

Vector3 func_457(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_458(var uParam0)
{
	return uParam0->f_76;
}

bool func_459(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("ANNIHILATOR"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("POLMAV"):
		case joaat("SKYLIFT"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_460(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("MAVERICK");
		case 4:
			return joaat("BATI");
	}
	return false;
}

void func_461(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	func_26(1);
	UNK_0xC0FB48F966BB7D11(0);
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x8B66ED74C2DC2E98(UNK_0x16F2683693E537C9(), 2f);
	}
	switch (bParam1)
	{
		case 0:
			UNK_0x7D6CA5F52B3748BF(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			func_466(1, 1);
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	if (UNK_0x757EF87A33649210())
	{
		UNK_0x536F1BE96C726C4B(func_467(bParam1), 5000f, 1, 0, 0, false);
	}
	UNK_0xD7992BEF7A9D109E("BJUMP", 2);
	bVar0 = func_460(bParam1);
	if (bVar0 != 0)
	{
		if (func_459(bVar0))
		{
			UNK_0x3F423BF5B8125A50("veh@helicopter@rps@base");
			*bParam3 = func_442(bParam1);
			func_464(uParam2, *bParam3);
		}
		func_464(uParam2, bVar0);
	}
	if (func_525(uParam0) != 0)
	{
		func_464(uParam2, func_525(uParam0));
		if (func_442(bParam1) != 0)
		{
			func_464(uParam2, func_442(bParam1));
		}
		else
		{
			func_464(uParam2, joaat("S_M_Y_PILOT_01"));
		}
	}
	bVar1 = func_362(uParam0);
	if (bVar1 != 0)
	{
		*bParam4 = func_463(bParam1);
		func_464(uParam2, *bParam4);
		func_464(uParam2, bVar1);
		func_464(uParam2, joaat("TRFLAT"));
	}
	if (func_361(bVar1))
	{
		func_464(uParam2, joaat("FREIGHT"));
		func_464(uParam2, joaat("FREIGHTCAR"));
		func_464(uParam2, joaat("FREIGHTGRAIN"));
		func_464(uParam2, joaat("FREIGHTCONT1"));
		func_464(uParam2, joaat("FREIGHTCONT2"));
		func_464(uParam2, joaat("TANKERCAR"));
		func_464(uParam2, joaat("METROTRAIN"));
	}
	if (func_438(uParam0) != 0)
	{
		func_464(uParam2, func_438(uParam0));
	}
	*uParam5 = func_163();
	func_462(uParam2);
	UNK_0x3F423BF5B8125A50("oddjobs@basejump@");
	UNK_0x3F423BF5B8125A50("skydive@freefall");
	UNK_0x3F423BF5B8125A50("skydive@parachute@chute");
	UNK_0x3F423BF5B8125A50("skydive@parachute@");
	UNK_0x0D3BE1DE0262A012("basejumping", 0);
	if (func_420(bParam1, 0) > 0f)
	{
		*iParam6 = UNK_0x09AC81E49EA267F7(false, 2);
		switch (*iParam6)
		{
			case 0:
				UNK_0x3F423BF5B8125A50("amb@world_human_hiker_standing@male@idle_a");
				break;
			case 1:
				UNK_0x3F423BF5B8125A50("amb@world_human_muscle_flex@arms_at_side@base");
				break;
		}
	}
	if (func_460(bParam1) == 0)
	{
		UNK_0xA0D09682534C2176(func_467(bParam1));
	}
}

void func_462(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_463(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return joaat("A_M_Y_BEACH_01");
		case 5:
			return joaat("S_M_M_TRUCKER_01");
		case 7:
			return joaat("A_M_Y_BEACH_01");
		default:
			break;
	}
	return 0;
}

int func_464(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == bParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_465(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = bParam1;
	return 1;
}

int func_465(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_466(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&Global_30926, bParam0);
	StringCopy(&(Global_30927[bParam0 /*6*/]), UNK_0xBB0808A181D4745C(), 24);
	Global_30982[bParam0] = iParam1;
}

Vector3 func_467(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		case 1:
			return 885.114f, -437.352f, 529.867f;
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		case 5:
			return -117.6998f, -975.571f, 295f;
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_468(bool bParam0)
{
	if (UNK_0x757EF87A33649210())
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), func_467(bParam0), 15f, 15f, 15f, false, true, 0))
		{
			return true;
		}
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), func_467(bParam0), 0, 0, 0, 1);
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), func_467(bParam0), 15f, 15f, 15f, false, true, 0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_469(vector3 vParam0)
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

Vector3 func_470(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		case 3:
			return -39.935f, 0f, 12.8174f;
		case 4:
			return 0.9749f, 0f, -5.2236f;
		case 5:
			return -12.889f, 0f, 1.6227f;
		case 6:
			return -48.5605f, 0f, 160.4909f;
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		case 8:
			return -17.4118f, 0f, 117.7175f;
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		case 10:
			return -20.9567f, 0f, 170.5743f;
		case 11:
			return 1.9344f, 0f, -55.2084f;
		case 12:
			return -46.0342f, 0f, 37.5935f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_471(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;

	vVar0 = { func_479(uParam1) };
	vVar3 = { func_478(uParam1) };
	bVar6 = func_477(uParam1);
	if (!UNK_0x9F4FE516EAACCFC5(func_427(uParam0, 0)))
	{
		func_476(uParam0, 0, UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, 65f, 0, 2), 1);
	}
	else
	{
		UNK_0x608A456FDD8A83D8(func_427(uParam0, 0), vVar0);
		UNK_0x5F3CBA6EB9341C90(func_427(uParam0, 0), vVar3, 2);
	}
	UNK_0x5818C8D5303DCCF8(func_427(uParam0, 0), bVar6);
	UNK_0xE3BB8E05FCEB3FBE(func_427(uParam0, 0), true);
	if (bParam3)
	{
		vVar7 = { vVar0 };
		vVar7.f_2 = (vVar7.z + 8f);
		UNK_0x86F44313DFA8F00C(func_427(uParam0, 0), vVar7, vVar3, bVar6, func_475(bParam2), 1, 1, 2);
	}
	vVar0 = { func_474(uParam1) };
	vVar3 = { func_473(uParam1) };
	bVar6 = func_472(uParam1);
	if (!UNK_0x9F4FE516EAACCFC5(func_427(uParam0, 1)))
	{
		func_476(uParam0, 1, UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, 65f, 0, 2), 1);
	}
	else
	{
		UNK_0x608A456FDD8A83D8(func_427(uParam0, 1), vVar0);
		UNK_0x5F3CBA6EB9341C90(func_427(uParam0, 1), vVar3, 2);
	}
	UNK_0x5818C8D5303DCCF8(func_427(uParam0, 1), bVar6);
	if (!UNK_0x757EF87A33649210())
	{
		UNK_0xF1E4C781086FABC1(func_427(uParam0, 1), func_427(uParam0, 0), func_475(bParam2), 1, 1);
	}
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	UNK_0x297734EBF6EB6285("HAND_SHAKE", 0.2f);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
}

bool func_472(var uParam0)
{
	return uParam0->f_82;
}

Vector3 func_473(var uParam0)
{
	return uParam0->f_58;
}

Vector3 func_474(var uParam0)
{
	return uParam0->f_55;
}

int func_475(bool bParam0)
{
	switch (bParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
	}
	return 10000;
}

void func_476(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (bParam3 && !UNK_0x9F4FE516EAACCFC5(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

bool func_477(var uParam0)
{
	return uParam0->f_81;
}

Vector3 func_478(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_479(var uParam0)
{
	return uParam0->f_49;
}

void func_480(bool bParam0)
{
	if (!func_456(bParam0))
	{
		func_365(bParam0);
	}
}

void func_481(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_301(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_482(iVar0);
			}
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_301(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_307(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_483(0, Global_75441.f_555[0 /*21*/].f_12) || !func_483(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_308(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_305(iParam0, 0);
		}
	}
}

bool func_483(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_484(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_285(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_484(var uParam0)
{
	return *uParam0;
}

void func_485(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_110278 && iParam1)
	{
		if (func_331(bParam0) && !UNK_0x79BBCD5833294FD5())
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_488(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_487((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_486();
			return;
		}
		iVar0++;
	}
}

void func_486()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, false))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, true))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111638.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_488(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0 /*16*/] = { Global_111638.f_20405[iParam1 /*16*/] };
	Global_111638.f_20405[iParam0 /*16*/].f_4 = { Global_111638.f_20405[iParam1 /*16*/].f_4 };
	Global_111638.f_20405[iParam0 /*16*/].f_8 = Global_111638.f_20405[iParam1 /*16*/].f_8;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = Global_111638.f_20405[iParam1 /*16*/].f_10;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = Global_111638.f_20405[iParam1 /*16*/].f_9;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = Global_111638.f_20405[iParam1 /*16*/].f_11;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = Global_111638.f_20405[iParam1 /*16*/].f_12;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = Global_111638.f_20405[iParam1 /*16*/].f_13;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = Global_111638.f_20405[iParam1 /*16*/].f_14;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = Global_111638.f_20405[iParam1 /*16*/].f_15;
}

void func_489(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x67E5ECB8FD7F5018(0);
		UNK_0x65C5EBCA17A891FC(1);
		UNK_0x2C84016B4A95F6BA(0);
		func_17(1);
		Global_94002 = 1;
	}
	else
	{
		UNK_0x67E5ECB8FD7F5018(1);
		UNK_0x65C5EBCA17A891FC(0);
		UNK_0x2C84016B4A95F6BA(1);
		func_17(0);
		Global_94002 = 0;
	}
}

void func_490()
{
	func_491(&uLocal_144, 0);
}

void func_491(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_495(uParam0);
		func_494(uParam0);
		func_119(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_492();
	}
	if (UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		UNK_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (UNK_0x58424C49F8924842())
	{
		func_90(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_492()
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
	func_493(&(Global_1835392.f_2780));
	func_90(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_90(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_90(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_493(var uParam0)
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

void func_494(var uParam0)
{
	int iVar0;
	struct<13> Var1;

	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_90(&(uParam0->f_246.f_3));
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

void func_495(var uParam0)
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

void func_496()
{
	Global_22211.f_5 = 1;
}

void func_497(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (UNK_0x0F1CCD77290EE12F() || UNK_0x7BCE0E6DD4A1F749()))
			{
				if (func_499(func_500(bParam2, 19), "", &(uParam0->f_603), 19))
				{
				}
			}
		}
		if (!func_257(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_499(func_500(bParam2, 20), func_500(bParam2, 19), &(uParam0->f_603), 20))
				{
				}
			}
		}
		else if (!func_257(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_499(func_500(bParam2, 21), func_500(bParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_499(func_500(bParam2, 21), func_500(bParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
		}
		else if (!func_257(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_499(func_500(bParam2, 22), func_500(bParam2, 21), &(uParam0->f_603), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 23))
		{
			func_498(func_500(bParam2, 22), &(uParam0->f_603), 23);
		}
		else if (!func_257(uParam0, 23) && !UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0xE5305602B634A39A();
		}
	}
}

void func_498(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam1, bParam2))
	{
		UNK_0x8910D3D58E0132B8(bParam0);
		UNK_0x5D96D8530B3D0904(bParam1, bParam2);
	}
}

bool func_499(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		if (UNK_0x562F77A7F33D2E46(bParam1))
		{
			UNK_0x8910D3D58E0132B8(bParam1);
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam3))
	{
		if (UNK_0x8BC9595FD2792B5D(bParam0))
		{
			UNK_0x5D96D8530B3D0904(bParam2, bParam3);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_500(bool bParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		case 20:
			if (func_459(func_460(bParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && func_359(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		case 21:
			return "BASEJUMPS_SKYDIVE";
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		default:
			break;
	}
	return "";
}

void func_501(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 15))
		{
			if (iParam1 >= 4 && (UNK_0x0F1CCD77290EE12F() || UNK_0x7BCE0E6DD4A1F749()))
			{
				if (func_503(func_504(11), &(uParam0->f_603), 11))
				{
					func_502(func_504(15), &(uParam0->f_603), 15);
				}
			}
		}
		else if (!func_257(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_503(func_504(12), &(uParam0->f_603), 12))
				{
					func_502(func_504(16), &(uParam0->f_603), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_503(func_504(12), &(uParam0->f_603), 12))
				{
					func_502(func_504(16), &(uParam0->f_603), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 17))
		{
			if (func_503(func_504(13), &(uParam0->f_603), 13))
			{
				func_502(func_504(17), &(uParam0->f_603), 17);
			}
		}
	}
}

int func_502(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam1, bParam2))
	{
		if (UNK_0x13896FDECC859926(bParam0))
		{
			if (UNK_0xC92DB9682A650680(bParam0))
			{
				UNK_0x5D96D8530B3D0904(bParam1, bParam2);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_503(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(*bParam1, bParam2))
	{
		if (UNK_0x13896FDECC859926(bParam0))
		{
			UNK_0x5D96D8530B3D0904(bParam1, bParam2);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_504(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		case 17:
		case 13:
			return "OJBJ_LANDED";
		case 18:
		case 14:
			return "OJBJ_STOP";
		default:
			break;
	}
	return "";
}

void func_505(var uParam0)
{
	struct<2> Var0;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	UNK_0xA2E3EDD0E119882F(0);
	UNK_0xA2E3EDD0E119882F(2);
	func_512(&uVar3, &uVar4, &iVar5, &iVar6, UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()), UNK_0x91E3F625EF57450D(2));
	Var0 = (SYSTEM::TO_FLOAT(iVar5) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar6) / -128f);
	func_509(uParam0, Var0, Var0.f_1);
	func_508(uParam0);
	if (UNK_0x06F8112AA79C53D9(2, 224))
	{
		func_507(uParam0, 0, 1);
	}
	if (UNK_0x06F8112AA79C53D9(0, 22) || UNK_0x7FEE810EE9E768EB(0, 22))
	{
		func_507(uParam0, 1, 1);
	}
	if (func_506())
	{
		func_507(uParam0, 2, 1);
	}
	if (UNK_0x7FEE810EE9E768EB(2, 22))
	{
		func_507(uParam0, 3, 1);
	}
	if (UNK_0x06F8112AA79C53D9(2, 216))
	{
		func_507(uParam0, 4, 1);
	}
	if (UNK_0x06F8112AA79C53D9(2, 215) || UNK_0x7FEE810EE9E768EB(2, 200))
	{
		func_507(uParam0, 5, 1);
	}
	if (UNK_0x06F8112AA79C53D9(2, 201))
	{
		func_507(uParam0, 6, 1);
	}
	if (UNK_0x06F8112AA79C53D9(2, 202))
	{
		func_507(uParam0, 7, 1);
	}
	if (UNK_0x06F8112AA79C53D9(2, 211))
	{
		func_507(uParam0, 8, 1);
	}
}

bool func_506()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 18) || UNK_0x06F8112AA79C53D9(2, 18))
	{
		return true;
	}
	return false;
}

void func_507(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_2), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_2), bParam1);
	}
}

void func_508(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	func_511(uParam0, uParam1);
	func_510(uParam0, uParam2);
}

void func_510(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_511(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_512(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = UNK_0x4F3973434662D795(0, 218);
			fVar1 = UNK_0x4F3973434662D795(0, 219);
			fVar2 = UNK_0x4F3973434662D795(0, 220);
			fVar3 = UNK_0x4F3973434662D795(0, 221);
		}
		else
		{
			fVar0 = UNK_0x4B7163B4D6E4A3C2(0, 218);
			fVar1 = UNK_0x4B7163B4D6E4A3C2(0, 219);
			fVar2 = UNK_0x4B7163B4D6E4A3C2(0, 220);
			fVar3 = UNK_0x4B7163B4D6E4A3C2(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = UNK_0x659FAE9DBE6F38F5(0, 218);
		fVar1 = UNK_0x659FAE9DBE6F38F5(0, 219);
		fVar2 = UNK_0x659FAE9DBE6F38F5(0, 220);
		fVar3 = UNK_0x659FAE9DBE6F38F5(0, 221);
	}
	else
	{
		fVar0 = UNK_0x8A6BC5D9CAEACD0F(0, 218);
		fVar1 = UNK_0x8A6BC5D9CAEACD0F(0, 219);
		fVar2 = UNK_0x8A6BC5D9CAEACD0F(0, 220);
		fVar3 = UNK_0x8A6BC5D9CAEACD0F(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*iParam2 = SYSTEM::ROUND((128f * fVar2));
	*iParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_513()
{
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 85, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 12, 1);
	UNK_0x38C3A68D7861DCFD(0, 13, 1);
	UNK_0x38C3A68D7861DCFD(0, 14, 1);
	UNK_0x38C3A68D7861DCFD(0, 15, 1);
	UNK_0x38C3A68D7861DCFD(0, 16, 1);
	UNK_0x38C3A68D7861DCFD(0, 17, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 50, 1);
	UNK_0x38C3A68D7861DCFD(0, 53, 1);
	UNK_0x38C3A68D7861DCFD(0, 54, 1);
	UNK_0x3584F71E5CA29322(19);
	UNK_0x3584F71E5CA29322(2);
	UNK_0x3584F71E5CA29322(14);
	UNK_0x3584F71E5CA29322(16);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
}

int func_514()
{
	var uVar0;

	func_524(&uVar0, UNK_0x4460E481B9E33ADA());
	func_523(&uVar0, UNK_0x8D199E381D262EEF());
	func_522(&uVar0, UNK_0xD8A54335F18763BA());
	func_517(&uVar0, UNK_0x972A296334C9D57B());
	func_516(&uVar0, UNK_0x118229AD063C3C1D());
	func_515(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_515(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_517(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_521(*uParam0);
	iVar1 = func_519(*uParam0);
	if (iParam1 < 1 || iParam1 > func_518(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_518(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_519(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_520(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_520(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_521(int iParam0)
{
	return iParam0 & 15;
}

void func_522(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_523(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_524(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_525(var uParam0)
{
	return uParam0->f_2;
}

void func_526(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_36(UNK_0x16F2683693E537C9());
	switch (bParam1)
	{
		case 0:
			func_551(uParam0, 125);
			func_550(uParam0, joaat("SQUALO"));
			func_549(uParam0, 41.0737f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_540(uParam0, 317.8872f);
			func_539(uParam0, 0f, -2f, 0f);
			func_538(uParam0, "BJ_01P");
			func_536(uParam0, func_537(0));
			func_535(uParam0, func_470(0));
			func_534(uParam0, 53.4142f);
			func_533(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_532(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_531(uParam0, 39.6124f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 1:
			func_551(uParam0, 126);
			func_550(uParam0, 0);
			func_549(uParam0, 10.5f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_541(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_541(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_541(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_02P");
			func_536(uParam0, func_537(1));
			func_535(uParam0, func_470(1));
			func_534(uParam0, 52.5984f);
			func_533(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_532(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_531(uParam0, 41.3305f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 2:
			func_551(uParam0, 127);
			func_550(uParam0, 0);
			func_549(uParam0, 289.2623f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_541(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_541(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_541(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_541(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_03P");
			func_536(uParam0, func_537(2));
			func_535(uParam0, func_470(2));
			func_534(uParam0, 31.9702f);
			func_533(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_532(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_531(uParam0, 50.8804f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 3:
			func_551(uParam0, 128);
			func_550(uParam0, 0);
			func_549(uParam0, 60.1427f);
			func_548(uParam0, joaat("FROGGER"));
			func_547(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_546(uParam0, 119.8889f);
			func_545(uParam0, 5f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_541(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_541(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_541(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_541(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_04F");
			}
			else
			{
				func_538(uParam0, "BJ_04T");
			}
			func_536(uParam0, func_537(3));
			func_535(uParam0, func_470(3));
			func_534(uParam0, 44.3626f);
			func_533(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_532(uParam0, -5.0705f, 0f, 20.8267f);
			func_531(uParam0, 43.8549f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 4:
			func_551(uParam0, 129);
			func_550(uParam0, 0);
			func_549(uParam0, 1.8891f);
			func_548(uParam0, joaat("SKYLIFT"));
			func_547(uParam0, -75.3f, -823.9f, 329.2f);
			func_546(uParam0, 150f);
			func_545(uParam0, 4f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_05F");
			}
			else
			{
				func_538(uParam0, "BJ_05T");
			}
			func_536(uParam0, func_537(4));
			func_535(uParam0, func_470(4));
			func_534(uParam0, 26.7726f);
			func_533(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_532(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_531(uParam0, 30.0131f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 5:
			func_551(uParam0, 130);
			func_550(uParam0, joaat("HAULER"));
			func_549(uParam0, 358.9586f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_540(uParam0, -18.6f);
			func_539(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_06F");
			}
			else
			{
				func_538(uParam0, "BJ_06T");
			}
			func_536(uParam0, func_537(5));
			func_535(uParam0, func_470(5));
			func_534(uParam0, 55.7667f);
			func_533(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_532(uParam0, -7.6574f, 0f, 0.8528f);
			func_531(uParam0, 60f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 6:
			func_551(uParam0, 131);
			func_550(uParam0, 0);
			func_549(uParam0, 164.6178f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("BLAZER"));
			func_543(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_542(uParam0, 87.84f);
			func_541(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_541(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_541(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_07F");
			}
			else
			{
				func_538(uParam0, "BJ_07T");
			}
			func_536(uParam0, func_537(6));
			func_535(uParam0, func_470(6));
			func_534(uParam0, 47.1789f);
			func_533(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_532(uParam0, -13.6409f, 0f, 172.0553f);
			func_531(uParam0, 47.1789f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 7:
			func_551(uParam0, 132);
			func_550(uParam0, joaat("FREIGHT"));
			func_549(uParam0, 112.6f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_540(uParam0, 10.8894f);
			func_539(uParam0, 0f, -20f, 4f);
			func_538(uParam0, "BJ_08P");
			func_536(uParam0, func_537(7));
			func_535(uParam0, func_470(7));
			func_534(uParam0, 24.3623f);
			func_533(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_532(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_531(uParam0, 37.0424f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 8:
			func_551(uParam0, 133);
			func_550(uParam0, 0);
			func_549(uParam0, 104.207f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_09F");
			}
			else
			{
				func_538(uParam0, "BJ_09T");
			}
			func_536(uParam0, func_537(8));
			func_535(uParam0, func_470(8));
			func_534(uParam0, 50f);
			func_533(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_532(uParam0, -19.7458f, 0f, 116.6405f);
			func_531(uParam0, 55.2882f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 9:
			func_551(uParam0, 134);
			func_550(uParam0, 0);
			func_549(uParam0, 329.4791f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("BLAZER"));
			func_543(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_542(uParam0, -89.36f);
			func_541(uParam0, 0, -1200f, 3616f, 964f);
			func_541(uParam0, 1, -1240f, 3307f, 854f);
			func_541(uParam0, 2, -1552f, 3456f, 655f);
			func_541(uParam0, 3, -1616f, 3808f, 505f);
			func_541(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_541(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_541(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_541(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_10P");
			func_536(uParam0, func_537(9));
			func_535(uParam0, func_470(9));
			func_534(uParam0, 31.7648f);
			func_533(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_532(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_531(uParam0, 39.6786f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 10:
			func_551(uParam0, 135);
			func_550(uParam0, 0);
			func_549(uParam0, 0f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_541(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_541(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_541(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_541(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_541(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_541(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_541(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_541(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_541(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_11P");
			func_536(uParam0, func_537(10));
			func_535(uParam0, func_470(10));
			func_534(uParam0, 27.2187f);
			func_533(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_532(uParam0, -54.7868f, 0f, -90.128f);
			func_531(uParam0, 35.5634f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 11:
			func_551(uParam0, 136);
			func_550(uParam0, 0);
			func_549(uParam0, 24.92f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("SANCHEZ"));
			func_543(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_542(uParam0, 130.39f);
			func_541(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_541(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_541(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_541(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_541(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_541(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_541(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_541(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_541(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_541(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_541(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_12P");
			func_536(uParam0, func_537(11));
			func_535(uParam0, func_470(11));
			func_534(uParam0, 18.9374f);
			func_533(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_532(uParam0, -54.5827f, 0f, -2.0463f);
			func_531(uParam0, 56.4495f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		case 12:
			func_551(uParam0, 137);
			func_550(uParam0, 0);
			func_549(uParam0, 359.2885f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("SANCHEZ"));
			func_543(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_542(uParam0, 104.35f);
			func_541(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_541(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_13F");
			}
			else
			{
				func_538(uParam0, "BJ_13T");
			}
			func_536(uParam0, func_537(12));
			func_535(uParam0, func_470(12));
			func_534(uParam0, 48.3921f);
			func_533(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_532(uParam0, -18.0357f, 0f, 6.0212f);
			func_531(uParam0, 48.3921f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_527(var uParam0, vector3 vParam1)
{
	uParam0->f_67 = { vParam1 };
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_64 = { vParam1 };
}

void func_529(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

void func_530(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_82 = fParam1;
}

void func_532(var uParam0, vector3 vParam1)
{
	uParam0->f_58 = { vParam1 };
}

void func_533(var uParam0, vector3 vParam1)
{
	uParam0->f_55 = { vParam1 };
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_81 = fParam1;
}

void func_535(var uParam0, vector3 vParam1)
{
	uParam0->f_52 = { vParam1 };
}

void func_536(var uParam0, vector3 vParam1)
{
	uParam0->f_49 = { vParam1 };
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_538(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_539(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_540(var uParam0, float fParam1)
{
	uParam0->f_77 = fParam1;
}

void func_541(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_12[iParam1 /*3*/] = { vParam2 };
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_79 = fParam1;
}

void func_543(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_545(var uParam0, float fParam1)
{
	uParam0->f_80 = fParam1;
}

void func_546(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_547(var uParam0, vector3 vParam1)
{
	uParam0->f_70 = { vParam1 };
}

void func_548(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_549(var uParam0, float fParam1)
{
	uParam0->f_76 = fParam1;
}

void func_550(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_31015, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_31015, bParam0);
	}
}

void func_553(int iParam0)
{
	func_376();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_554(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, bool bParam17)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_370();
	func_369();
	func_490();
	func_560(uParam1);
	func_552(23, 0);
	func_559(*uParam1);
	UNK_0x4EBF4289AABAE861(*uParam16);
	UNK_0x38DC636F3D2D2FA8("OJBJ_START");
	UNK_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
	UNK_0x38DC636F3D2D2FA8("OJBJ_LANDED");
	UNK_0xC92DB9682A650680("OJBJ_STOP");
	UNK_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	UNK_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	UNK_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	UNK_0x8910D3D58E0132B8("BASEJUMPS_SKYDIVE");
	UNK_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	UNK_0xE5305602B634A39A();
	iParam11 = iParam11;
	Global_94001 = 0;
	Global_94002 = 0;
	Global_94003 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	UNK_0x2C84016B4A95F6BA(1);
	UNK_0x65C5EBCA17A891FC(0);
	UNK_0x4DB69487E1A9EE2A(0);
	while (UNK_0xD0BB2359EC70FC37())
	{
		SYSTEM::WAIT(0);
	}
	if (UNK_0xF45FDB21A0F137CB())
	{
		UNK_0xC1B8EFD8630D086B(1);
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam13))
	{
		UNK_0x142CC44DB769B57E(&iParam13);
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam14))
	{
		UNK_0x142CC44DB769B57E(&iParam14);
	}
	func_376();
	func_26(0);
	UNK_0xDF9891243C73DEA5(UNK_0xD803B885F5E47A62(), false);
	func_558(1, 1);
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		UNK_0x2B25B48028758FE8();
	}
	UNK_0xB547E3FFEB27073E();
	func_556(uParam7);
	func_277();
	UNK_0xF5637CC664BEAAD0(0f, 0, 21);
	UNK_0x7B0C620E7A619AA1(0);
	func_212(0, 0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	if (bParam15 == 5)
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 146, false);
	}
	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 177, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 36, false);
		UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 0);
		UNK_0x545E1397F38D9D5A(UNK_0x16F2683693E537C9(), 0);
		if (!bParam17)
		{
			UNK_0x650567883F5E3136(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE"));
		}
		UNK_0x8B66ED74C2DC2E98(UNK_0x16F2683693E537C9(), 1f);
		UNK_0xCC095276B3DD380E(UNK_0x16F2683693E537C9(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *iParam10)
	{
		if (UNK_0xC844350D5D58C99A((*iParam10)[iVar1]) && !UNK_0x437347B10A200C4B((*iParam10)[iVar1], 0))
		{
			UNK_0xA3BF0AA5A2608191((*iParam10)[iVar1]);
			(*iParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((UNK_0xC844350D5D58C99A(*bParam6) && *bParam6 != UNK_0x728870EB733D12A1()) && !UNK_0x437347B10A200C4B(*bParam6, 0))
	{
		UNK_0x7EA00EB725DAA91D(*bParam6);
		func_280(*bParam6, func_319(bParam15), func_318(bParam15), 24, 0);
	}
	if (!UNK_0xEB6A8945D1AC98A1(*bParam8))
	{
		if (!UNK_0x0A059E0DB9253280(*bParam8))
		{
			UNK_0xEBA53F35D0085654(bParam8);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(bParam8);
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(*bParam9))
	{
		UNK_0xA3BF0AA5A2608191(*bParam9);
		UNK_0x11AD11297DC58CC7(*bParam9, true);
	}
	if (UNK_0xC844350D5D58C99A(*bParam2))
	{
		if (func_459(func_460(bParam15)))
		{
			if ((!UNK_0x437347B10A200C4B(*bParam2, 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9())) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam2, 0))
			{
				UNK_0x975C58E0FC4955A9(UNK_0x16F2683693E537C9(), 1);
			}
			if (!UNK_0x0A059E0DB9253280(*bParam2))
			{
				UNK_0xA954465BA6FDEFE2(bParam2);
			}
			else
			{
				UNK_0x046C362CF15F1935(bParam2);
			}
		}
		else
		{
			UNK_0x046C362CF15F1935(bParam2);
		}
	}
	if (UNK_0xC844350D5D58C99A(*bParam3))
	{
		if (func_361(func_362(uParam0)))
		{
			UNK_0xDB7D85A79FCB0695(bParam3, 0);
			UNK_0xF48790410026514E(1);
		}
	}
	if (UNK_0xC844350D5D58C99A(*bParam4) && !UNK_0x437347B10A200C4B(*bParam4, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(*bParam4, -1, 0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			UNK_0xEBA53F35D0085654(&bVar0);
		}
		UNK_0xA954465BA6FDEFE2(bParam4);
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (UNK_0xC844350D5D58C99A((*iParam5)[iVar2]) && !UNK_0x437347B10A200C4B((*iParam5)[iVar2], 0))
		{
			UNK_0xF8CF67C6E39C23A9((*iParam5)[iVar2], 1f);
			UNK_0xE8832A9E16A57A1F((*iParam5)[iVar2], false, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	UNK_0xA37A90C62806D848(1);
	UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	UNK_0xC0FB48F966BB7D11(1);
	func_555();
	UNK_0x31A33F7BCB08CB80(false);
	Global_111638.f_18962 = -1;
	UNK_0x10FAF14A60A0DBE1();
}

void func_555()
{
	Global_22211.f_5 = 0;
}

void func_556(var uParam0)
{
	func_557(uParam0, 0);
	func_557(uParam0, 1);
	func_557(uParam0, 2);
}

void func_557(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_558(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_30926, bParam0))
	{
		if (!bParam1)
		{
			UNK_0x0674E58A79778E99(&Global_30926, bParam0);
			StringCopy(&(Global_30927[bParam0 /*6*/]), "NULL", 24);
			Global_30982[bParam0] = bParam1;
		}
	}
}

void func_559(var uParam0)
{
	UNK_0xE17FDF9E3068281B(&uParam0);
}

void func_560(var uParam0)
{
	func_559(*uParam0);
}

