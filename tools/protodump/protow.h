#ifndef MINGW_DLL_H__#define MINGW_DLL_H__int __declspec(dllexport) __stdcall StartDll(int param);int messages[518] = {19920232 , 19920276 , 19920396 , 19920440 , 19920508 , 19920552 , 19920596 , 19920640 , 19920684 ,19920728 , 19921024 , 19921068 , 19921112 , 19921172 , 19921572 , 19921616 , 19921660 , 19921704 ,19921748 , 19921792 , 19921836 , 19921880 , 19921924 , 19921968 , 19922012 , 19922056 , 19922100 ,19922144 , 19922188 , 19922232 , 19922276 , 19922320 , 19922364 , 19922408 , 19922452 , 19922496 ,19922540 , 19922584 , 19922628 , 19922672 , 19922716 , 19922760 , 19922804 , 19922848 , 19922892 ,19922936 , 19922980 , 19923024 , 19923068 , 19923112 , 19923156 , 19923200 , 19923244 , 19923288 ,19923332 , 19923376 , 19923420 , 19923464 , 19923508 , 19923552 , 19923596 , 19923640 , 19923684 ,19923728 , 19923772 , 19923816 , 19923860 , 19923904 , 19952332 , 19952376 , 19952420 , 19952508 ,19952552 , 19952596 , 19952640 , 19952684 , 19952728 , 19952772 , 19952816 , 19952860 , 19952904 ,19952948 , 19952996 , 19957036 , 19957084 , 19957140 , 19957184 , 19957228 , 19957312 , 19957356 ,19957400 , 19957444 , 19957488 , 19957532 , 19957576 , 19957620 , 19957664 , 19957708 , 19957756 ,19957820 , 19957864 , 19957908 , 19957952 , 19957996 , 19958044 , 19958092 , 19958164 , 19958208 ,19958252 , 19958296 , 19958340 , 19958384 , 19958428 , 19958484 , 19958528 , 19958572 , 19958624 ,19958668 , 19958784 , 19958828 , 19958872 , 19958916 , 19958960 , 19959004 , 19959048 , 19959092 ,19959136 , 19959180 , 19959240 , 19959284 , 19959328 , 19959372 , 19959424 , 19959468 , 19959520 ,19959564 , 19959616 , 19959660 , 19959740 , 19959784 , 19959828 , 19959876 , 19959936 , 19959980 ,19960028 , 19960080 , 19960124 , 19960176 , 19960220 , 19960332 , 19960376 , 19960420 , 19960464 ,19960508 , 19960552 , 19960596 , 19960640 , 19960684 , 19960728 , 19960780 , 19960824 , 19960916 ,19960960 , 19961004 , 19961048 , 19961092 , 19961196 , 19961240 , 19961284 , 19961328 , 19961584 ,19961628 , 19961672 , 19961716 , 19961760 , 19961804 , 19961848 , 19961892 , 19961936 , 19961980 ,19962024 , 19962112 , 19962156 , 19962200 , 19962244 , 19962288 , 19962332 , 19962376 , 19962428 ,19962504 , 19962548 , 19962592 , 19962636 , 19962680 , 19962724 , 19962768 , 19962812 , 19962900 ,19962944 , 19962988 , 19963032 , 19963076 , 19963120 , 19963164 , 19963240 , 19963284 , 19963496 ,19963540 , 19963584 , 19963628 , 19963672 , 19963812 , 19963856 , 19963900 , 19963944 , 19964032 ,19964936 , 19964980 , 19965024 , 19965532 , 19965576 , 19965620 , 19965664 , 19965708 , 19965752 ,19965796 , 19965840 , 19965884 , 19965928 , 19965972 , 19966016 , 19966060 , 19966104 , 19966148 ,19966192 , 19966236 , 19966280 , 19966324 , 19966368 , 19966412 , 19966456 , 19966500 , 19966544 ,19966588 , 19966632 , 19966676 , 19966720 , 19966764 , 19966808 , 19966852 , 19966896 , 19966940 ,19966984 , 19967028 , 19967072 , 19967116 , 19967160 , 19967204 , 19967248 , 19967292 , 19967336 ,19967380 , 19967424 , 19967468 , 19967512 , 19967556 , 19967600 , 19967644 , 19967688 , 19967732 ,19967776 , 19967820 , 19967864 , 19967908 , 19967952 , 19967996 , 19968040 , 19968084 , 19968128 ,19968172 , 19968216 , 19968260 , 19968304 , 19968348 , 19968392 , 19968436 , 19968480 , 19968524 ,19968568 , 19968612 , 19968656 , 19968700 , 19968744 , 19968788 , 19968832 , 19968876 , 19968920 ,19968964 , 19969008 , 19969052 , 19969096 , 19969140 , 19969184 , 19969228 , 19969272 , 19969316 ,19969360 , 19969404 , 19969448 , 19969492 , 19969536 , 19969580 , 19969624 , 19969668 , 19969712 ,19969756 , 19969800 , 19969844 , 19969888 , 19969932 , 19969976 , 19970020 , 19970064 , 19970108 ,19970152 , 19970196 , 19970240 , 19970284 , 19970328 , 19970372 , 19970416 , 19970460 , 19970504 ,19970548 , 19970592 , 19970820 , 19970864 , 19970908 , 19970960 , 19971004 , 19976060 , 19976104 ,19976148 , 19976260 , 19976312 , 19976356 , 19976520 , 19976564 , 19976608 , 19976652 , 19977016 ,19977060 , 19977180 , 19977224 , 19977268 , 19977320 , 19977364 , 19977692 , 19977736 , 19977780 ,19977824 , 19977868 , 19977912 , 19977956 , 19978012 , 19978056 , 19978100 , 19978164 , 19978208 ,19978252 , 19978296 , 19978340 , 19978388 , 19978556 , 19978600 , 19978644 , 19978688 , 19978732 ,19978776 , 19978820 , 19978864 , 19978908 , 19978952 , 19978996 , 19979044 , 19979248 , 19979300 ,19979344 , 19979404 , 19979448 , 19979492 , 19979536 , 19979612 , 19979656 , 19979700 , 19979744 ,19979788 , 19979832 , 19979876 , 19979920 , 19979992 , 19980036 , 19980080 , 19980124 , 19980168 ,19980212 , 19980256 , 19981028 , 19981072 , 19981116 , 19981160 , 19981204 , 19981248 , 19981292 ,19981336 , 19981380 , 19981424 , 19981468 , 19981512 , 19981556 , 19981600 , 19981644 , 19981688 ,19981732 , 19981776 , 19981820 , 19981864 , 19981908 , 19981952 , 19981996 , 19982212 , 19982256 ,19982320 , 19982368 , 19982428 , 19982472 , 19982516 , 19982564 , 19982620 , 19982664 , 19982708 ,19982768 , 19982864 , 19982908 , 19982980 , 19983024 , 19983076 , 19983120 , 19983220 , 19983264 ,19983308 , 19983352 , 19983396 , 19983440 , 19983484 , 19983528 , 19983572 , 19983616 , 19983660 ,19983704 , 19983748 , 19983792 , 19983852 , 19983896 , 19983940 , 19983984 , 19984036 , 19984080 ,19984128 , 19984184 , 19984228 , 19984276 , 19984324 , 19984376 , 19984420 , 19984468 , 19984516 ,19984564 , 19984616 , 19984660 , 19984708 , 19984764 , 19984808 , 19990764 , 19991260 , 19991304 ,19991348 , 19991392 , 19991440 , 19996080 , 19996132 , 19996176 , 19996220 , 19999496 , 19999552 ,19999596 , 19999640 , 19999684 , 19999728 , 19999772 , 19999816 , 19999860 , 19999904 , 19999960 ,20000004 , 20000048 , 20000092 , 20000136 , 20000180 , 20000224 , 20000268 , 20000312 , 20000356 ,20000400 , 20000444 , 20000488 , 20000532 };#endif