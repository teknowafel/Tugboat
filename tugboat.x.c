#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f tugboat 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[4]))
	"\045\323\071\353\111\065\330\166\102\145\265\257\203\326\023\262"
	"\340\336\146\143\115\075\210\145\042\127\260"
#define      lsto_z	1
#define      lsto	((&data[27]))
	"\165"
#define      chk1_z	22
#define      chk1	((&data[31]))
	"\360\261\164\221\355\251\060\045\035\320\060\353\110\011\050\360"
	"\214\033\062\370\054\206\310\254\116\012"
#define      pswd_z	256
#define      pswd	((&data[114]))
	"\223\267\350\366\052\352\140\236\245\172\033\122\264\100\045\356"
	"\054\326\142\331\245\317\172\331\300\053\116\312\057\075\156\303"
	"\365\126\272\037\101\032\275\347\224\331\072\111\031\140\067\106"
	"\066\232\040\333\152\232\265\052\305\003\365\365\052\310\056\062"
	"\366\020\072\210\071\077\202\126\067\024\360\067\015\204\014\266"
	"\265\330\042\265\211\317\336\263\010\104\054\063\015\132\145\003"
	"\153\240\214\245\337\016\374\026\043\354\116\061\161\132\347\046"
	"\063\012\334\274\331\272\157\342\376\233\025\013\366\173\017\142"
	"\033\233\010\372\252\004\021\316\361\137\377\142\272\347\211\355"
	"\361\145\252\313\037\032\256\036\266\304\051\255\077\071\017\133"
	"\325\030\126\177\034\150\115\016\307\115\161\202\064\372\160\046"
	"\140\032\362\177\065\240\235\353\144\307\230\244\000\250\000\325"
	"\300\126\125\335\276\243\354\206\360\135\010\044\127\170\113\267"
	"\223\075\067\310\335\325\263\102\234\114\347\235\365\347\163\266"
	"\075\311\223\374\154\200\202\135\335\212\202\065\003\315\355\226"
	"\012\044\136\350\371\022\053\226\136\023\064\124\372\250\012\070"
	"\161\236\064\336\036\267\073\373\101\275\060\105\213\035\333\226"
	"\102\072\177\074\114\253\322\253\276\007\377\270\257\011\361\041"
	"\250\046\377\306\335\072\301\037\370\362\144\203\020\100\031\123"
	"\172\231\217\307\104\142\163\002\151\163\273\031\101\144\271\066"
	"\273\163\126\375\216\024\344\043\355\036\155\007\176\244\115\265"
	"\077\155\220\251\010\106\324\316\112\312\304\213\056\175\302\352"
	"\361\030\347\200\055"
#define      opts_z	1
#define      opts	((&data[411]))
	"\302"
#define      tst2_z	19
#define      tst2	((&data[412]))
	"\157\141\103\340\244\367\200\122\131\152\352\377\336\240\003\055"
	"\064\240\162"
#define      msg2_z	19
#define      msg2	((&data[434]))
	"\036\365\335\277\063\327\264\332\160\126\321\025\325\041\062\016"
	"\161\303\366\343\024\202\257\237"
#define      chk2_z	19
#define      chk2	((&data[459]))
	"\264\100\076\171\073\152\041\343\002\361\270\230\070\032\053\272"
	"\324\236\207\274\331\106\115\314\155"
#define      msg1_z	65
#define      msg1	((&data[489]))
	"\351\247\076\151\324\012\016\357\365\174\341\346\163\272\075\262"
	"\012\023\342\164\101\155\212\224\035\010\350\217\330\043\147\145"
	"\053\043\201\335\270\027\264\275\354\361\273\247\167\304\145\225"
	"\350\272\044\164\126\156\314\106\325\147\077\344\310\326\241\124"
	"\326\247\351\351\263\026\067\171\162\153\037\021\137\326\201"
#define      rlax_z	1
#define      rlax	((&data[559]))
	"\361"
#define      date_z	1
#define      date	((&data[560]))
	"\350"
#define      shll_z	10
#define      shll	((&data[563]))
	"\143\036\236\044\345\272\260\353\221\214\231\027\164\057"
#define      text_z	3203
#define      text	((&data[910]))
	"\343\124\145\042\275\072\055\314\051\043\353\073\202\301\274\000"
	"\216\034\055\372\141\121\332\134\265\371\320\345\205\073\243\151"
	"\220\011\213\116\103\271\032\155\334\005\250\136\307\145\136\126"
	"\201\214\120\343\335\052\077\222\043\020\167\251\114\033\022\334"
	"\044\236\052\150\127\105\325\064\113\175\222\022\343\361\150\144"
	"\176\271\107\134\343\207\357\007\230\147\260\344\202\303\301\247"
	"\142\354\017\271\061\344\356\174\142\201\217\105\162\370\251\361"
	"\261\361\115\225\170\074\235\021\243\115\365\046\021\267\315\163"
	"\244\334\055\326\301\033\123\044\234\343\151\017\334\023\000\215"
	"\004\115\043\175\212\300\216\056\016\204\124\040\074\042\223\340"
	"\376\300\267\300\334\012\344\171\355\115\210\311\141\211\127\146"
	"\327\173\343\141\073\162\217\112\366\344\152\063\006\376\023\005"
	"\276\313\305\233\325\251\024\303\367\234\215\131\046\344\277\375"
	"\137\242\136\233\024\356\346\013\323\120\076\331\116\122\337\015"
	"\035\244\251\363\116\275\266\106\132\103\237\200\050\137\175\210"
	"\001\334\044\026\313\012\042\236\133\141\170\252\263\127\267\321"
	"\374\140\305\113\036\174\222\171\300\062\371\351\221\167\161\223"
	"\124\226\251\037\240\314\276\374\055\066\246\341\216\136\263\213"
	"\277\170\327\335\365\152\127\265\234\120\237\056\310\020\301\034"
	"\247\153\073\110\067\372\104\144\060\353\105\277\111\371\113\010"
	"\161\042\346\147\214\075\035\051\216\274\127\126\315\030\163\244"
	"\134\234\234\066\050\001\066\316\102\037\377\201\233\361\112\111"
	"\065\224\227\215\207\006\061\213\343\175\356\276\166\271\171\357"
	"\042\150\220\116\300\214\041\243\246\344\045\124\261\006\166\245"
	"\346\046\257\006\331\161\217\042\306\024\315\204\323\262\057\110"
	"\340\200\210\001\254\211\042\277\151\153\114\071\270\116\201\165"
	"\176\072\247\035\372\366\153\145\265\333\273\124\105\221\020\020"
	"\230\272\237\356\235\046\251\307\376\324\057\333\173\347\166\022"
	"\047\267\253\163\274\046\055\033\065\106\221\113\320\333\060\372"
	"\273\042\146\033\332\111\046\216\233\126\177\245\037\236\171\252"
	"\104\262\011\365\171\371\012\142\022\017\201\037\214\003\156\172"
	"\063\276\342\134\336\115\372\354\012\247\364\120\062\160\145\302"
	"\361\361\130\253\127\074\151\073\333\230\360\041\042\155\371\110"
	"\153\117\356\127\041\301\223\321\033\147\017\052\345\024\132\303"
	"\326\031\046\227\112\252\146\060\354\233\310\106\121\104\256\123"
	"\332\141\067\055\221\247\026\061\170\277\075\242\240\266\013\065"
	"\234\122\024\302\143\256\372\251\062\375\016\357\171\203\355\167"
	"\337\313\335\327\007\015\370\130\115\340\051\206\212\246\033\242"
	"\323\137\077\137\070\326\250\033\312\373\161\360\127\272\231\144"
	"\067\155\006\353\104\101\374\005\256\107\230\146\023\003\027\316"
	"\261\161\174\017\337\110\212\302\316\223\101\016\027\174\163\303"
	"\200\122\161\221\312\252\127\377\351\176\240\146\205\022\044\351"
	"\145\310\113\332\140\055\077\114\022\065\314\167\251\355\330\367"
	"\113\154\061\223\201\225\355\012\034\166\273\011\371\252\250\022"
	"\310\207\372\135\044\376\064\101\374\232\124\363\273\164\045\367"
	"\362\050\217\336\101\326\077\206\343\317\040\066\213\131\067\257"
	"\244\035\013\306\236\262\314\044\234\200\214\242\347\333\050\245"
	"\141\303\021\146\256\357\276\206\061\342\042\232\101\316\124\274"
	"\055\122\115\330\324\171\017\002\201\200\102\327\144\343\176\163"
	"\102\167\302\314\300\364\045\035\300\223\331\247\324\362\362\320"
	"\323\212\133\232\354\341\114\326\303\264\117\260\320\071\276\031"
	"\346\013\212\062\252\132\317\024\030\067\014\066\341\340\123\365"
	"\226\226\155\157\073\377\022\013\106\221\321\033\323\113\032\104"
	"\365\366\306\267\247\215\056\076\304\325\321\356\071\252\150\271"
	"\303\000\243\364\247\102\063\116\042\042\016\377\231\375\233\334"
	"\253\162\340\173\164\256\126\022\224\326\245\336\357\000\014\271"
	"\002\067\066\043\143\067\220\145\143\116\266\334\263\350\377\326"
	"\365\303\167\341\373\372\222\263\142\113\362\161\341\052\327\044"
	"\301\331\276\201\017\146\052\351\163\374\316\044\225\174\137\127"
	"\243\336\155\263\333\176\371\167\246\177\305\350\346\107\174\031"
	"\231\345\022\357\351\232\163\050\056\115\254\157\310\370\200\262"
	"\051\067\050\053\376\336\221\062\060\151\332\137\272\216\004\160"
	"\116\116\043\341\004\151\274\070\317\375\110\346\303\302\102\205"
	"\232\275\312\244\024\002\375\022\305\336\075\071\235\102\313\373"
	"\316\346\173\302\236\263\246\057\104\371\212\056\002\240\266\036"
	"\054\067\203\037\163\123\272\037\321\032\263\261\341\227\265\166"
	"\054\314\142\302\200\274\374\213\144\015\077\062\355\242\262\213"
	"\015\333\226\072\226\202\336\314\011\272\037\063\156\261\101\350"
	"\032\066\230\215\105\310\107\156\050\111\343\272\232\126\332\116"
	"\373\320\274\246\342\302\355\333\216\221\356\103\076\316\253\357"
	"\163\134\162\162\171\251\031\020\123\317\233\027\356\105\223\106"
	"\274\305\301\273\011\375\137\156\373\067\157\323\212\070\360\323"
	"\334\030\334\337\024\131\061\076\111\152\123\142\372\350\361\231"
	"\262\204\261\223\173\166\246\025\066\024\303\312\213\100\330\115"
	"\302\170\304\044\352\306\127\107\367\271\105\255\226\013\075\036"
	"\203\101\322\306\025\260\244\036\247\233\312\064\114\231\244\043"
	"\320\111\264\364\250\013\221\161\377\017\376\250\047\056\024\316"
	"\371\066\123\126\065\045\332\335\365\255\175\056\340\223\364\274"
	"\241\031\231\226\012\204\170\357\313\144\122\251\010\275\261\216"
	"\355\332\003\346\227\136\352\053\063\145\020\021\377\156\240\367"
	"\226\125\173\264\213\262\360\074\102\361\164\123\236\003\231\376"
	"\365\001\263\212\107\267\014\055\105\135\162\276\021\327\355\173"
	"\304\310\051\245\350\077\117\035\243\225\372\234\013\271\060\012"
	"\235\377\050\167\103\123\200\123\115\323\072\306\342\307\271\000"
	"\363\045\044\332\154\246\103\002\324\037\216\056\365\150\370\114"
	"\123\304\175\273\235\032\223\343\322\234\051\305\021\145\304\347"
	"\276\361\121\073\024\155\117\364\302\351\363\222\147\033\352\327"
	"\232\224\161\055\104\127\203\022\106\352\157\170\256\146\003\167"
	"\247\144\230\332\176\005\270\204\012\313\044\155\145\345\022\117"
	"\305\141\147\137\342\371\031\162\032\131\037\275\207\102\063\156"
	"\234\314\215\036\173\370\223\135\213\156\362\372\137\052\216\013"
	"\110\016\046\371\046\037\241\213\020\114\366\366\306\147\224\123"
	"\305\351\222\336\175\356\177\344\275\031\044\037\105\277\315\241"
	"\001\151\126\017\245\277\304\037\147\103\064\355\003\121\114\276"
	"\004\165\076\273\272\053\127\265\325\100\061\133\336\017\162\103"
	"\312\056\046\113\111\011\156\345\247\346\042\256\307\340\272\170"
	"\207\147\072\304\104\233\201\247\037\313\064\052\211\231\053\150"
	"\102\345\066\015\360\157\201\366\055\220\204\215\071\164\050\347"
	"\223\245\265\166\324\306\112\207\366\066\037\034\251\370\324\121"
	"\102\241\075\171\167\216\211\212\015\271\117\374\072\311\052\145"
	"\317\117\054\064\143\255\077\372\164\203\016\215\227\220\033\003"
	"\034\234\345\330\121\365\335\300\005\256\040\224\040\126\067\366"
	"\105\027\052\176\236\004\152\104\325\147\166\033\316\134\274\164"
	"\140\114\363\252\215\034\230\250\250\362\240\363\222\024\065\074"
	"\300\035\363\302\322\236\026\371\252\164\242\337\052\263\323\064"
	"\354\045\303\332\153\140\351\030\347\014\255\234\204\147\212\066"
	"\024\370\363\002\224\146\171\207\074\310\357\003\153\332\030\023"
	"\266\227\064\126\173\135\122\015\217\351\265\146\265\236\022\334"
	"\130\357\013\034\277\050\375\113\013\222\241\360\173\065\365\023"
	"\310\233\357\113\054\363\322\032\175\015\025\222\021\054\231\226"
	"\326\133\301\112\352\013\111\032\142\313\210\035\213\214\010\114"
	"\214\326\362\030\200\140\270\003\120\031\021\144\176\312\133\275"
	"\243\363\060\353\003\362\214\222\161\015\353\347\121\374\072\232"
	"\275\043\331\215\124\170\366\311\177\152\153\370\271\261\042\071"
	"\375\210\343\066\314\006\340\077\341\324\170\133\251\154\207\316"
	"\031\214\011\244\211\122\061\005\241\172\107\344\244\020\225\153"
	"\161\135\245\265\247\075\016\024\001\110\235\354\234\071\065\151"
	"\234\252\264\316\377\322\370\175\347\365\365\373\372\376\140\006"
	"\315\135\301\227\011\363\332\127\145\050\250\064\152\316\375\047"
	"\075\042\163\110\006\250\161\232\132\330\073\033\042\121\213\056"
	"\174\116\032\273\340\354\272\351\273\014\123\233\245\370\242\175"
	"\216\163\200\222\336\265\210\236\370\017\322\030\312\343\044\135"
	"\052\016\113\334\007\352\365\061\032\245\231\062\154\257\074\262"
	"\104\276\223\350\234\116\227\255\030\261\265\355\100\030\016\132"
	"\166\250\176\123\034\077\255\143\334\323\154\217\363\240\346\162"
	"\126\051\355\170\221\046\303\307\123\165\274\306\047\166\041\351"
	"\377\145\210\155\223\240\020\207\260\157\133\200\350\334\132\305"
	"\074\267\272\307\222\200\022\350\101\001\233\371\002\046\375\317"
	"\260\015\274\215\304\234\267\201\371\073\033\016\042\224\010\145"
	"\234\021\111\054\273\216\166\166\056\117\306\240\211\257\353\332"
	"\232\045\316\136\144\030\135\065\115\023\264\367\006\002\164\344"
	"\373\241\216\345\327\005\112\112\013\240\213\262\043\045\153\250"
	"\171\120\116\371\261\265\224\130\325\102\126\227\030\260\100\275"
	"\316\211\277\262\142\171\301\376\021\236\002\117\341\274\121\346"
	"\302\222\072\130\212\243\174\315\333\031\141\010\052\304\222\147"
	"\120\224\167\067\345\303\324\350\125\020\023\157\021\302\061\245"
	"\066\157\007\114\242\003\212\361\356\313\235\355\006\044\002\163"
	"\214\224\047\334\241\370\146\026\341\352\347\367\354\237\352\052"
	"\053\345\345\100\122\022\115\061\224\241\243\357\156\231\270\332"
	"\144\205\131\315\001\205\370\016\320\313\351\364\015\064\100\043"
	"\133\302\250\242\317\346\162\124\261\076\254\016\331\160\151\030"
	"\006\270\353\312\254\040\304\256\003\231\077\010\267\351\331\154"
	"\303\351\045\116\156\224\210\333\122\001\231\106\327\141\013\262"
	"\066\003\302\350\241\041\341\112\130\131\137\342\370\274\103\025"
	"\125\011\203\137\377\117\336\055\247\025\263\166\377\170\347\201"
	"\055\360\201\301\353\127\224\200\111\014\371\053\317\327\057\165"
	"\367\356\227\245\302\356\331\116\337\036\040\154\215\265\120\015"
	"\312\163\323\201\312\105\174\341\006\231\216\347\352\055\066\077"
	"\014\204\243\334\364\153\075\074\200\002\235\055\171\255\357\005"
	"\301\007\350\272\261\364\016\141\142\237\022\312\310\125\173\040"
	"\147\053\054\020\032\206\053\263\140\160\017\374\123\055\262\377"
	"\132\162\212\064\020\313\364\363\112\152\170\061\162\060\232\265"
	"\310\325\242\205\022\215\316\172\261\153\326\377\041\164\063\224"
	"\261\130\161\071\015\277\236\324\335\064\217\257\226\355\142\273"
	"\062\237\076\047\303\223\250\164\342\206\303\213\375\155\006\313"
	"\203\152\202\003\330\331\205\307\110\134\011\111\304\103\277\356"
	"\207\344\003\224\327\012\222\370\264\146\202\231\154\211\304\150"
	"\013\014\226\321\156\266\133\371\002\230\276\344\217\171\277\146"
	"\116\166\210\003\116\150\302\163\134\104\224\200\152\025\266\115"
	"\265\074\362\122\154\320\350\003\126\254\202\303\343\371\307\040"
	"\265\137\231\102\313\335\246\122\276\126\116\120\117\040\027\241"
	"\273\361\352\212\365\173\157\374\124\027\031\230\021\061\077\304"
	"\104\066\215\334\065\150\003\070\231\300\332\124\205\134\033\124"
	"\026\272\372\245\305\161\324\161\105\300\134\046\103\251\244\206"
	"\205\075\323\326\261\214\320\220\204\021\067\204\230\132\003\275"
	"\314\237\226\024\037\121\124\332\360\376\040\063\046\340\022\055"
	"\334\351\066\305\361\032\145\007\011\054\245\276\134\117\363\107"
	"\353\361\365\022\134\130\137\221\073\004\140\336\010\306\240\266"
	"\351\077\075\334\111\332\305\367\016\254\320\247\147\167\372\221"
	"\324\056\271\037\327\013\012\037\266\016\116\023\367\231\351\226"
	"\301\223\345\146\216\053\151\215\172\124\204\307\074\357\153\376"
	"\162\156\174\237\172\365\250\246\010\166\323\346\005\034\154\251"
	"\101\045\004\332\313\011\353\240\121\050\052\207\277\324\140\056"
	"\353\003\070\023\366\351\372\364\274\041\131\065\336\000\336\060"
	"\304\360\024\015\174\132\276\307\023\342\170\112\306\011\256\170"
	"\202\120\300\015\075\321\031\372\254\033\210\260\063\374\202\022"
	"\234\344\156\117\314\025\046\307\356\026\361\311\137\115\233\233"
	"\076\177\252\046\174\015\002\270\362\157\375\211\303\342\030\020"
	"\245\031\264\047\127\334\374\352\121\103\200\216\251\364\024\172"
	"\140\300\154\270\077\374\265\063\060\147\230\353\005\273\263\140"
	"\250\063\152\332\036\026\315\330\123\352\211\275\335\332\024\020"
	"\051\326\043\026\163\021\335\334\022\141\307\016\154\033\374\205"
	"\227\062\125\124\022\350\151\101\047\134\356\003\206\174\325\115"
	"\354\213\162\125\114\334\275\233\306\014\113\171\106\375\377\036"
	"\122\246\107\064\131\331\002\171\055\301\013\367\363\305\100\216"
	"\204\056\230\254\266\277\155\126\033\126\374\275\175\004\324\223"
	"\332\047\261\306\304\342\337\204\124\106\315\016\013\206\020\347"
	"\375\151\206\331\022\163\356\225\052\060\160\176\173\321\014\000"
	"\362\163\046\302\353\301\216\011\172\366\005\336\072\236\234\136"
	"\174\332\052\252\073\024\266\345\116\315\165\235\367\102\272\357"
	"\135\124\200\205\046\337\226\033\323\230\034\343\132\234\212\301"
	"\050\360\216\067\343\044\131\350\125\040\021\172\326\234\345\365"
	"\212\203\070\174\110\267\010\302\160\025\327\020\346\077\052\210"
	"\217\364\025\247\057\116\365\257\260\244\166\250\222\363\371\251"
	"\322\021\262\173\355\175\260\240\316\275\300\003\362\032\075\041"
	"\211\045\307\170\333\270\150\164\273\163\326\371\116\052\015\222"
	"\372\336\357\120\035\041\066\062\112\057\203\276\145\063\041\312"
	"\133\076\361\141\354\325\032\236\261\314\107\102\221\175\263\121"
	"\023\325\030\015\231\056\260\350\367\360\050\011\325\204\365\000"
	"\041\211\161\354\276\116\351\356\053\074\122\054\175\214\014\062"
	"\005\153\207\022\050\131\004\345\305\334\346\142\264\073\212\010"
	"\343\223\152\361\030\114\363\071\056\043\331\144\360\221\056\305"
	"\102\275\163\262\051\271\162\322\121\166\277\232\275\160\224\176"
	"\245\123\163\347\116\011\076\266\271\005\014\256\107\021\064\166"
	"\073\227\066\077\164\313\305\071\367\030\072\034\162\271\003\114"
	"\326\056\314\132\153\263\075\257\341\257\141\361\317\043\251\137"
	"\246\114\264\271\202\020\001\230\343\136\126\016\172\004\114\310"
	"\202\274\311\001\027\141\072\316\301\272\066\063\271\135\152\215"
	"\032\331\212\150\020\057\246\167\004\161\022\045\053\027\260\052"
	"\047\010\225\014\037\147\047\375\163\255\265\020\246\350\075\161"
	"\002\110\104\052\111\046\224\115\132\020\134\220\175\170\252\146"
	"\273\005\235\373\312\147\234\126\313\124\374\024\132\021\262\053"
	"\206\010\311\025\205\365\066\225\343\242\074\167\150\150\225\057"
	"\017\115\237\317\243\052\253\264\377\275\045\352\142\055\115\254"
	"\166\333\030\022\035\167\171\351\345\067\306\301\203\056\376\213"
	"\322\110\066\241\241\304\166\214\240\307\167\216\047\163\176\356"
	"\330\050\312\165\255\331\042\215\014\016\241\222\234\377\322\241"
	"\175\341\304\002\373\042\224\015\013\076\011\327\123\330\063\025"
	"\167\023\050\145\367\240\015\071\260\012\030\026\074\266\152\370"
	"\266\046\156\367\043\111\347\326\155\222\037\322\365\033\245\013"
	"\162\355\227\212\171\374\252\366\000\043\264\043\042\341\152\361"
	"\133\000\164\203\256\274\272\251\001\037\332\354\145\231\065\136"
	"\345\076\320\010\045\067\225\143\124\276\361\020\026\110\336\057"
	"\273\122\262\152\017\155\023\020\215\355\375\362\207\062\120\154"
	"\161\040\164\227\127\011\372\254\310\353\275\336\063\233\015\357"
	"\356\300\131\375\056\154\016\273\132\013\255\341\076\375\115\260"
	"\036\302\107\165\314\101\042\224\055\337\163\141\173\201\120\151"
	"\101\251\147\157\026\166\053\160\202\331\121\301\326\237\161\365"
	"\141\271\153\055\372\215\301\050\155\065\211\350\266\331\121\367"
	"\203\271\147\231\057\223\011\261\154\132\163\103\371\344\070\133"
	"\235\243\210\230\061\112\300\236\177\112\206\066\043\330\056\246"
	"\222\226\077\301\051\111\163\225\244\347\331\235\313\021\371\151"
	"\265\201\002\347\314\303\205\114\015\014\202\060\345\261\327\167"
	"\107\027\071\160\140\255\006\004\224\337\242\137\361\233\311\247"
	"\035\313\216\352\217\023\066\234\037\271\315\004\152\245\174\261"
	"\274\265\042\034\142\050\041\366\010\303\126\372\137\037\241\175"
	"\353\057\147\172\102\236\027\142\130\345\147\302\212\343\164\106"
	"\231\227\143\373\300\204\361\310\110\110\302\247\147\143\044\123"
	"\223\213\316\325\051\346\070\201\313\240\104\125\204\271\234\035"
	"\120\377\031\020\203\012\331\313\123\234\163\273\000\227\016\223"
	"\043\335\150\114\303\241\316\216\102\023\343\306\315\177\343\035"
	"\177\374\056\002\007\010\316\133\244\101\026\244\330\044\067\373"
	"\001\240\110\305\102\027\123\204\053\067\112\370\267\056\026\066"
	"\053\105\071\063\115\007\216\361\111\244\226\041\311\315\035\313"
	"\156\146\220\260\176\344\064\251\033\177\242\323\256\271\011\331"
	"\376\103\015\113\112\234\075\224\101\323\266\012\241\323\326\017"
	"\072\147\300\270\113\364\142\147\164\005\072\042\276\104\374\275"
	"\207\012\010\322\246\106\146\347\031\034\362\273\360\310\312\052"
	"\057\212\343\173\177\106\342\364\114\035\026\013\142\023\310\351"
	"\035\321\274\304\027\042\253\060\077\235\353\057\146\266\132\225"
	"\101\076\021\300\205\364\264\321\021\313\335\164\337\245\136\374"
	"\166\032\301\215\075\154\276\174\012\252\254\160\141\006\005\242"
	"\105\027\143\312\013\030\234\035\343\171\221\303\037\357\300\225"
	"\011\201\043\106\355\341\303\367\214\157\147\355\166\155\217\273"
	"\204\363\206\220\013\042\255\357\234\077\262\273\056\162\121\070"
	"\364\164\177\341\126\102\331\342\262\101\320\050\256\140\344\063"
	"\123\152\304\137\215\161\116\052\261\001\345\337\164\067\030\150"
	"\254\227\112\002\332\043\345\214\144\265\265\023\026\231\107\152"
	"\003\013\311\221\175"
#define      inlo_z	3
#define      inlo	((&data[4708]))
	"\156\210\240"
#define      xecc_z	15
#define      xecc	((&data[4713]))
	"\215\330\067\221\213\132\150\105\224\117\140\072\132\325\273\247"
	"\074"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
