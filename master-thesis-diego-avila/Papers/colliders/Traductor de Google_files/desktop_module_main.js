/* Copyright 2011 Google */ window.jstiming.load.tick('jbl');(function(){var aa=encodeURIComponent,g=window,ba=EXPERIMENT_IDS,ca=Object,da=FILE_TRANSLATION_PATH,ea=Function,fa=document,k=Math,ga=Array,ha=WEB_TRANSLATION_PATH,ia=Error,ja=parseInt,ka=parseFloat,la=String,ma=decodeURIComponent,na=RegExp;function oa(a,b){return a.onload=b}function pa(a,b){return a.width=b}function qa(a,b){return a.ceil=b}function ra(a,b){return a.floor=b}function sa(a,b){return a.content=b}function ta(a,b){return a.screenX=b}function ua(a,b){return a.screenY=b}
function va(a,b){return a.remove=b}function wa(a,b){return a.keyCode=b}function xa(a,b){return a.altKey=b}function ya(a,b){return a.position=b}function za(a,b){return a.state=b}function Aa(a,b){return a.start=b}function Ca(a,b){return a.bottom=b}function Da(a,b){return a.href=b}function Ea(a,b){return a.contains=b}function Fa(a,b){return a.display=b}function Ga(a,b){return a.height=b}function Ia(a,b){return a.right=b}function Ja(a,b){return a.round=b}function Ka(a,b){return a.onerror=b}
function La(a,b){return a.value=b}function Ma(a,b){return a.metaKey=b}function Na(a,b){return a.left=b}function Oa(a,b){return a.type=b}function Pa(a,b){return a.name=b}function Qa(a,b){return a.clientX=b}function Sa(a,b){return a.clientY=b}function Ta(a,b){return a.visibility=b}function Ua(a,b){return a.length=b}function Va(a,b){return a.prototype=b}function Wa(a,b){return a.className=b}function Ya(a,b){return a.target=b}
var m="appendChild",Za="getBoundingClientRect",$a="shift",ab="exec",n="width",p="replace",bb="chrome",cb="content",db="responseText",eb="offsetWidth",fb="concat",gb="createTextNode",hb="preventDefault",s="dispatchEvent",ib="screenX",jb="screenY",kb="match",lb="tran",mb="remove",nb="querySelector",ob="createElement",u="keyCode",pb="forEach",qb="clientLeft",rb="setAttribute",sb="clientTop",tb="handleEvent",ub="bind",vb="getTime",wb="getElementsByTagName",xb="documentElement",yb="substr",zb="toString",
Ab="altKey",Bb="propertyIsEnumerable",Cb="setTimeout",Db="split",Eb="constructor",Fb="location",Gb="message",Hb="hasOwnProperty",w="style",Ib="ownerDocument",Jb="state",Kb="start",Lb="random",Mb="protocol",Nb="bottom",Ob="href",Pb="apply",Qb="display",x="height",Rb="offsetHeight",Sb="right",y="push",Tb="open",Ub="test",Vb="round",Wb="slice",Xb="nodeType",Yb="load",ac="getElementById",bc="innerHTML",cc="listener",dc="value",ec="item",fc="indexOf",gc="metaKey",hc="jstiming",ic="nodeName",z="left",jc=
"addEventListener",kc="path",B="type",lc="defaultView",nc="name",oc="clientX",pc="clientY",C="length",qc="title",D="prototype",rc="className",sc="document",tc="ctrlKey",uc="body",E="target",F="call",vc="lastIndexOf",wc="querySelectorAll",xc="compatMode",yc="loaded",zc="currentStyle",Ac="substring",Bc="shiftKey",Cc="parentNode",Dc="toUpperCase",Ec="splice",G="join",Fc="unshift",Gc="toLowerCase",H="",Hc="\x0B",I=" ",Ic=' name="',Jc=' type="',Kc='"',Lc="#",Mc="%s",Nc="&",Oc="&#39;",Pc="&action=",Qc=
"&amp;",Rc="&apa=1",Sc="&gt;",Tc="&it=",Uc="&lt;",Vc="&npn=1",Wc="&npnv=",Xc="&p=s",Yc="&quot;",Zc="&rt=",$c="&s=",ad="&srt=",bd="&tbsrt=",cd="&tran=",dd="'",ed="(\\d*)(\\D*)",fd="(^",gd=")([a-z])",hd="*",id=",",jd=".",kd="...",ld="1",md="1.9",nd="528",od="8",pd="<",qd='<iframe id="%s" style="display:none" %s></iframe>',rd='<input type="text" name="%s" id="%s" style="display:none">',sd="<title>%s</title><body>%s</body>",td="=",ud=">",vd="?sync",wd="?v=3",xd="Bottom",yd="CSS1Compat",zd="GET",Ad="Left",
Bd="MSXML2.XMLHTTP",Cd="MSXML2.XMLHTTP.3.0",Dd="MSXML2.XMLHTTP.6.0",Ed="Microsoft.XMLHTTP",Fd="Moz",Gd="O",Hd="Right",Id="Top",Jd="Webkit",Kd="[",Ld="[object Array]",Md="[object Function]",Nd="[object Window]",Od="\\$1",Pd="\\s",Qd="\\x08",Rd="]",Sd="]+",Td="_",Ud="absolute",Vd="aria-",Wd="array",Xd="call",Yd="class",Zd="contentframe",$d="data-",ae="display",be="e_lg",ce="e_md",de="e_sm",ee="evalJs in LazyLoader:",fe="event",ge="file",he="file_div",ie="focusin",je="focusout",ke="for",le="function",
me="g",ne="gbar",oe="gt-appbar",pe="gt-logo",qe="gt-sl-sugg",re="gt-tl-sugg",se="hashchange",te="head",ue="height",ve="hidden",we="history_iframe",xe="history_state",ye="http://csi.gstatic.com/csi",ze="https",Ae="https:",Be="https:///",Ce="https://csi.gstatic.com/csi",De="inline",Ee='javascript:""',Fe="keydown",Ge="left",He="lg",Ie="load",Je="margin",Ke="margin-top",Le="mousedown",Me="mousemove",Ne="mouseout",Oe="mouseover",Pe="ms",Qe="native code",Re="navigate",Se="none",Te="null",Ue="number",Ve=
"object",We="on",Xe="onhashchange",Ye="pageshow",Ze="pixelLeft",$e="prerender",af="px",bf="replace",cf="result_box",df="role",ef="script",ff="sm",gf="spelling-correction",hf="splice",jf='src="',kf="start",lf="string",mf="style",nf="text/html",of="tick",pf="translate",qf="var ",rf="webkitvisibilitychange",sf="width",tf="window",uf="wtgbr",vf="|[";function wf(){return function(){}}function xf(a){return function(b){this[a]=b}}function J(a){return function(){return this[a]}}
function yf(a){return function(){return a}}var K,zf=[];function Af(a){return function(){return zf[a][Pb](this,arguments)}}
var Bf=Bf||{},Cf=this,Df=wf(),Ef=function(a){var b=typeof a;if(b==Ve)if(a){if(a instanceof ga)return Wd;if(a instanceof ca)return b;var c=ca[D][zb][F](a);if(c==Nd)return Ve;if(c==Ld||typeof a[C]==Ue&&"undefined"!=typeof a[Ec]&&"undefined"!=typeof a[Bb]&&!a[Bb](hf))return Wd;if(c==Md||"undefined"!=typeof a[F]&&"undefined"!=typeof a[Bb]&&!a[Bb](Xd))return le}else return Te;else if(b==le&&"undefined"==typeof a[F])return Ve;return b},Ff=function(a){return void 0!==a},Gf=function(a){return Ef(a)==Wd},
Hf=function(a){var b=Ef(a);return b==Wd||b==Ve&&typeof a[C]==Ue},If=function(a){return typeof a==lf},Jf=function(a){return typeof a==Ue},Kf=function(a){return Ef(a)==le},Lf=function(a){var b=typeof a;return b==Ve&&null!=a||b==le},Of=function(a){return a[Mf]||(a[Mf]=++Nf)},Mf="closure_uid_"+(1E9*k[Lb]()>>>0),Nf=0,Pf=function(a,b,c){return a[F][Pb](a[ub],arguments)},Qf=function(a,b,c){if(!a)throw ia();if(2<arguments[C]){var d=ga[D][Wb][F](arguments,2);return function(){var c=ga[D][Wb][F](arguments);
ga[D][Fc][Pb](c,d);return a[Pb](b,c)}}return function(){return a[Pb](b,arguments)}},L=function(a,b,c){L=ea[D][ub]&&-1!=ea[D][ub][zb]()[fc](Qe)?Pf:Qf;return L[Pb](null,arguments)},Rf=function(a,b){var c=ga[D][Wb][F](arguments,1);return function(){var b=c[Wb]();b[y][Pb](b,arguments);return a[Pb](this,b)}},Sf=Date.now||function(){return+new Date},Tf=function(a,b){var c=a[Db](jd),d=Cf;c[0]in d||!d.execScript||d.execScript(qf+c[0]);for(var e;c[C]&&(e=c[$a]());)c[C]||void 0===b?d[e]?d=d[e]:d=d[e]={}:d[e]=
b},M=function(a,b){function c(){}Va(c,b[D]);a.n=b[D];Va(a,new c);a[D].constructor=a;a.wl=function(a,c,f){return b[D][c][Pb](a,ga[D][Wb][F](arguments,2))}};ea[D].bind=ea[D][ub]||function(a,b){if(1<arguments[C]){var c=ga[D][Wb][F](arguments,1);c[Fc](this,a);return L[Pb](null,c)}return L(this,a)};var Uf=function(a,b){for(var c=a[Db](Mc),d=H,e=ga[D][Wb][F](arguments,1);e[C]&&1<c[C];)d+=c[$a]()+e[$a]();return d+c[G](Mc)},Vf=function(a){return/^[\s\xa0]*$/[Ub](a)},Wf=function(a){return a[p](/^[\s\xa0]+|[\s\xa0]+$/g,H)},Xf=function(a){return aa(la(a))},Yf=function(a){return ma(a[p](/\+/g,I))},eg=function(a){if(!Zf[Ub](a))return a;-1!=a[fc](Nc)&&(a=a[p]($f,Qc));-1!=a[fc](pd)&&(a=a[p](ag,Uc));-1!=a[fc](ud)&&(a=a[p](bg,Sc));-1!=a[fc](Kc)&&(a=a[p](cg,Yc));-1!=a[fc](dd)&&(a=a[p](dg,Oc));return a},
$f=/&/g,ag=/</g,bg=/>/g,cg=/"/g,dg=/'/g,Zf=/[&<>"']/,fg=function(a,b){return-1!=a[fc](b)},gg=function(a){return la(a)[p](/([-()\[\]{}+?*.$\^|,:#<!\\])/g,Od)[p](/\x08/g,Qd)},hg=function(a){return null==a?H:la(a)},jg=function(a,b){for(var c=0,d=Wf(la(a))[Db](jd),e=Wf(la(b))[Db](jd),f=k.max(d[C],e[C]),l=0;0==c&&l<f;l++){var q=d[l]||H,r=e[l]||H,t=na(ed,me),v=na(ed,me);do{var A=t[ab](q)||[H,H,H],R=v[ab](r)||[H,H,H];if(0==A[0][C]&&0==R[0][C])break;c=ig(0==A[1][C]?0:ja(A[1],10),0==R[1][C]?0:ja(R[1],10))||
ig(0==A[2][C],0==R[2][C])||ig(A[2],R[2])}while(0==c)}return c},ig=function(a,b){return a<b?-1:a>b?1:0},kg=function(a){return la(a)[p](/\-([a-z])/g,function(a,c){return c[Dc]()})},lg=function(a){var b=If(void 0)?gg(void 0):Pd;return a[p](na(fd+(b?vf+b+Sd:H)+gd,me),function(a,b,e){return b+e[Dc]()})};var mg=wf();mg[D].a=null;var ng,og=wf();M(og,mg);var qg=function(a){return(a=pg(a))?new ActiveXObject(a):new XMLHttpRequest},pg=function(a){if(!a.b&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var b=[Dd,Cd,Bd,Ed],c=0;c<b[C];c++){var d=b[c];try{return new ActiveXObject(d),a.b=d}catch(e){}}throw ia("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return a.b};ng=new og;var rg=function(){this.a=[];this.b={}},sg=function(a,b){this.a=a;this.Dg=b},tg=function(a,b){if(b)for(var c=0;c<a.a[C];++c){var d=a.a[c];if(d.al==b||d.Fi==b)return d}return null},ug=function(a){try{ug=eval(Kd+ug[zb]()+Rd)[0],eval(a)}catch(b){var c=ee;b[Gb]&&(c+=Kd+b[Gb]+Rd);c=100<a[C]?c+(a[yb](0,50)+kd+a[yb](a[C]-50,50)):c+a;throw c;}},vg=function(a){var b=a[cb];g[Cb](function(){3!=a[Jb]&&a.lf&&(za(a,3),sa(a,null),ug(b))},0)};
rg[D].rd=function(a,b,c){c=void 0==c||!!c;var d=this.b[a];d||(d=this.b[a]={state:0,lf:c,content:null});if(d&&a&&3!=d[Jb])if(b){b=null;if(2==d[Jb])b=d[cb],sa(d,null);else{var e=qg(ng);e[Tb](zd,a+vd,!1);e.send(null);b=e[db]}za(d,3);null!=b&&ug(b)}else 1==d[Jb]?c&&(d.lf=c):2==d[Jb]?(c&&(d.lf=c),vg(d)):(za(d,1),d.lf=c,e=qg(ng),e[Tb](zd,a,!0),e.onreadystatechange=function(){4==e.readyState&&3!=d[Jb]&&(sa(d,e[db]),za(d,2),vg(d))},e.send(null))};
function wg(a,b,c,d,e){if(b)b=c.ef?c.ef[b][Pb](c.ef,d):a.Eg[D][b][Pb](null,d);else{b=c;var f=wf();Va(f,a.Eg[D]);c.ef=new f;a.Eg[Pb](c.ef,d)}e&&e.a[F](e.Dg,b);return b}
var xg=function(a,b,c,d,e,f,l){return function(){var q=ga[D][Wb][F](arguments),r={method:c,Dg:this};q[C]&&q[q[C]-1]&&q[q[C]-1][Eb]==sg&&(r.Qg=q[Ec](q[C]-1,1)[0]);r.ll=q;l&&l[Pb](this,q);if(b[yc])return wg(b,c,this,q,r.Qg);if(d&&!b.Rc){if(e)return b.Rc=!0,a.rd(b[kc],!0),wg(b,c,this,q,r.Qg);f[y](r);b.Rc=!0;a.rd(b[kc])}else f[y](r)}},yg=function(a,b){if(b)if(a.c)a.c(b);else throw b;},Ag=function(a,b){var c=zg;a||yg(c,4);var d=tg(c,a);if(d)return d.Fi;g[Cb](function(){c.rd(b,!1,!1)},0);var d={al:a,path:b,
loaded:!1,Rc:!1,Ld:[]},e=xg(c,d,H,a.Y,a.Eb,d.Ld,wf()),f;for(f in a[D])e[D][f]=xg(c,d,f,a[D][f].Y,a[D][f].Eb,d.Ld);d.Fi=e;c.a[y](d);return e};rg[D].load=Af(0);var Bg=function(a){var b=wf();b.Y=!!a&&!!a.Y;b.Eb=!!a&&!!a.Eb;return b},zg=new rg;Tf("LoadJsModule",L(zg.rd,zg));var Cg=Bg();Cg[D].ad=Bg({Y:!0,Eb:!0});var Dg=Ag(Cg,TR_ASYNC_JS_PATH),Eg=Dg[D];Eg._submitUrl=Eg.ad;var Fg=ga[D],Gg=Fg[fc]?function(a,b,c){return Fg[fc][F](a,b,c)}:function(a,b,c){c=null==c?0:0>c?k.max(0,a[C]+c):c;if(If(a))return If(b)&&1==b[C]?a[fc](b,c):-1;for(;c<a[C];c++)if(c in a&&a[c]===b)return c;return-1},Hg=Fg[pb]?function(a,b,c){Fg[pb][F](a,b,c)}:function(a,b,c){for(var d=a[C],e=If(a)?a[Db](H):a,f=0;f<d;f++)f in e&&b[F](c,e[f],f,a)},Ig=Fg.filter?function(a,b,c){return Fg.filter[F](a,b,c)}:function(a,b,c){for(var d=a[C],e=[],f=0,l=If(a)?a[Db](H):a,q=0;q<d;q++)if(q in l){var r=l[q];b[F](c,
r,q,a)&&(e[f++]=r)}return e},Jg=Fg.map?function(a,b,c){return Fg.map[F](a,b,c)}:function(a,b,c){for(var d=a[C],e=ga(d),f=If(a)?a[Db](H):a,l=0;l<d;l++)l in f&&(e[l]=b[F](c,f[l],l,a));return e},Kg=Fg.some?function(a,b,c){return Fg.some[F](a,b,c)}:function(a,b,c){for(var d=a[C],e=If(a)?a[Db](H):a,f=0;f<d;f++)if(f in e&&b[F](c,e[f],f,a))return!0;return!1},Lg=Fg.every?function(a,b,c){return Fg.every[F](a,b,c)}:function(a,b,c){for(var d=a[C],e=If(a)?a[Db](H):a,f=0;f<d;f++)if(f in e&&!b[F](c,e[f],f,a))return!1;
return!0},Mg=function(a,b){return 0<=Gg(a,b)},Ng=function(a,b){var c=Gg(a,b),d;(d=0<=c)&&Fg[Ec][F](a,c,1);return d},Og=function(a){var b=a[C];if(0<b){for(var c=ga(b),d=0;d<b;d++)c[d]=a[d];return c}return[]},Pg=function(a,b,c){return 2>=arguments[C]?Fg[Wb][F](a,b):Fg[Wb][F](a,b,c)};var Qg="StopIteration"in Cf?Cf.StopIteration:ia("StopIteration");var Rg=function(a,b,c){for(var d in a)b[F](c,a[d],d,a)},Sg="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" "),Tg=function(a,b){for(var c,d,e=1;e<arguments[C];e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<Sg[C];f++)c=Sg[f],ca[D][Hb][F](d,c)&&(a[c]=d[c])}};var Ug;t:{var Vg=Cf.navigator;if(Vg){var Wg=Vg.userAgent;if(Wg){Ug=Wg;break t}}Ug=H};var Xg,Yg,Zg,$g,ah,bh=function(){return Cf.navigator||null},ch=fg(Ug,"Opera")||fg(Ug,"OPR"),N=fg(Ug,"Trident")||fg(Ug,"MSIE"),dh=fg(Ug,"Gecko")&&!fg(Ug[Gc](),"webkit")&&!(fg(Ug,"Trident")||fg(Ug,"MSIE")),eh=fg(Ug[Gc](),"webkit"),fh=eh&&fg(Ug,"Mobile"),gh=bh(),hh=gh&&gh.platform||H;Xg=fg(hh,"Mac");Yg=fg(hh,"Win");Zg=!!bh()&&fg(bh().appVersion||H,"X11");var ih=Ug;$g=!!ih&&fg(ih,"Android");ah=!!ih&&fg(ih,"iPhone");
var jh=!!ih&&fg(ih,"iPad"),kh=function(){var a=Cf[sc];return a?a.documentMode:void 0},lh=function(){var a=H,b;if(ch&&Cf.opera)return a=Cf.opera.version,Kf(a)?a():a;dh?b=/rv\:([^\);]+)(\)|;)/:N?b=/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/:eh&&(b=/WebKit\/(\S+)/);b&&(a=(a=b[ab](Ug))?a[1]:H);return N&&(b=kh(),b>ka(a))?la(b):a}(),mh={},nh=function(a){return mh[a]||(mh[a]=0<=jg(lh,a))},ph=function(a){return N&&oh>=a},qh=Cf[sc],oh=qh&&N?kh()||(qh[xc]==yd?ja(lh,10):5):void 0;var rh=function(a,b){this.x=Ff(a)?a:0;this.y=Ff(b)?b:0};rh[D].xa=Af(5);qa(rh[D],Af(8));ra(rh[D],Af(11));Ja(rh[D],function(){this.x=k[Vb](this.x);this.y=k[Vb](this.y);return this});var sh=function(a,b){pa(this,a);Ga(this,b)};sh[D].xa=Af(4);qa(sh[D],Af(7));ra(sh[D],Af(10));Ja(sh[D],function(){pa(this,k[Vb](this[n]));Ga(this,k[Vb](this[x]));return this});var th=!N||ph(9),uh=!dh&&!N||N&&ph(9)||dh&&nh("1.9.1"),vh=N&&!nh("9");var wh=function(a){a=a[rc];return If(a)&&a[kb](/\S+/g)||[]},O=function(a,b){var c=wh(a),d=Pg(arguments,1),e=c[C]+d[C];xh(c,d);Wa(a,c[G](I));return c[C]==e},Ah=function(a,b){var c=wh(a),d=Pg(arguments,1),c=zh(c,d);Wa(a,c[G](I))},xh=function(a,b){for(var c=0;c<b[C];c++)Mg(a,b[c])||a[y](b[c])},zh=function(a,b){return Ig(a,function(a){return!Mg(b,a)})};var P=function(a){return If(a)?fa[ac](a):a},Ch=function(a,b,c){return Bh(fa,a,b,c)},Bh=function(a,b,c,d){a=d||a;b=b&&b!=hd?b[Dc]():H;if(a[wc]&&a[nb]&&(b||c))return a[wc](b+(c?jd+c:H));if(c&&a.getElementsByClassName){a=a.getElementsByClassName(c);if(b){d={};for(var e=0,f=0,l;l=a[f];f++)b==l[ic]&&(d[e++]=l);Ua(d,e);return d}return a}a=a[wb](b||hd);if(c){d={};for(f=e=0;l=a[f];f++)b=l[rc],typeof b[Db]==le&&Mg(b[Db](/\s+/),c)&&(d[e++]=l);Ua(d,e);return d}return a},Eh=function(a,b){Rg(b,function(b,d){d==
mf?a[w].cssText=b:d==Yd?Wa(a,b):d==ke?a.htmlFor=b:d in Dh?a[rb](Dh[d],b):0==d[vc](Vd,0)||0==d[vc]($d,0)?a[rb](d,b):a[d]=b})},Dh={cellpadding:"cellPadding",cellspacing:"cellSpacing",colspan:"colSpan",frameborder:"frameBorder",height:ue,maxlength:"maxLength",role:df,rowspan:"rowSpan",type:"type",usemap:"useMap",valign:"vAlign",width:sf},Fh=function(a){return a?a.parentWindow||a[lc]:g},Q=function(a,b,c){return Gh(fa,arguments)},Gh=function(a,b){var c=b[0],d=b[1];if(!th&&d&&(d[nc]||d[B])){c=[pd,c];d[nc]&&
c[y](Ic,eg(d[nc]),Kc);if(d[B]){c[y](Jc,eg(d[B]),Kc);var e={};Tg(e,d);delete e[B];d=e}c[y](ud);c=c[G](H)}c=a[ob](c);d&&(If(d)?Wa(c,d):Gf(d)?O[Pb](null,[c][fb](d)):Eh(c,d));2<b[C]&&Hh(a,c,b,2);return c},Hh=function(a,b,c,d){function e(c){c&&b[m](If(c)?a[gb](c):c)}for(;d<c[C];d++){var f=c[d];!Hf(f)||Lf(f)&&0<f[Xb]?e(f):Hg(Ih(f)?Og(f):f,e)}},Jh=function(a){return 9==a[Xb]?a:a[Ib]||a[sc]},Kh=function(a){return a.contentDocument||a.contentWindow[sc]},Ih=function(a){if(a&&typeof a[C]==Ue){if(Lf(a))return typeof a[ec]==
le||typeof a[ec]==lf;if(Kf(a))return typeof a[ec]==le}return!1};var Lh=function(){return eh?Jd:dh?Fd:N?Pe:ch?Gd:null};var Mh=function(a,b,c,d){this.top=a;Ia(this,b);Ca(this,c);Na(this,d)};K=Mh[D];K.xa=Af(3);Ea(K,Af(12));qa(K,Af(6));ra(K,Af(9));Ja(K,function(){this.top=k[Vb](this.top);Ia(this,k[Vb](this[Sb]));Ca(this,k[Vb](this[Nb]));Na(this,k[Vb](this[z]));return this});var Oh=function(a,b,c){If(b)?Nh(a,c,b):Rg(b,Rf(Nh,a))},Nh=function(a,b,c){(c=Ph(a,c))&&(a[w][c]=b)},Ph=function(a,b){var c=kg(b);if(void 0===a[w][c]){var d=Lh()+lg(b);if(void 0!==a[w][d])return d}return c},Qh=function(a,b){var c=Jh(a);return c[lc]&&c[lc].getComputedStyle&&(c=c[lc].getComputedStyle(a,null))?c[b]||c.getPropertyValue(b)||H:H},Rh=function(a,b){return Qh(a,b)||(a[zc]?a[zc][b]:null)||a[w]&&a[w][b]},Th=function(a,b,c){var d,e=dh&&(Xg||Zg)&&nh(md);b instanceof rh?(d=b.x,b=b.y):(d=b,b=c);
Na(a[w],Sh(d,e));a[w].top=Sh(b,e)},Uh=function(a){var b;try{b=a[Za]()}catch(c){return{left:0,top:0,right:0,bottom:0}}N&&a[Ib][uc]&&(a=a[Ib],Na(b,b[z]-(a[xb][qb]+a[uc][qb])),b.top-=a[xb][sb]+a[uc][sb]);return b},Sh=function(a,b){typeof a==Ue&&(a=(b?k[Vb](a):a)+af);return a},Wh=function(a){var b=Vh;if(Rh(a,ae)!=Se)return b(a);var c=a[w],d=c[Qb],e=c.visibility,f=c.position;Ta(c,ve);ya(c,Ud);Fa(c,De);a=b(a);Fa(c,d);ya(c,f);Ta(c,e);return a},Vh=function(a){var b=a[eb],c=a[Rb],d=eh&&!b&&!c;return Ff(b)&&
!d||!a[Za]?new sh(b,c):(a=Uh(a),new sh(a[Sb]-a[z],a[Nb]-a.top))},Xh=dh?"MozUserSelect":eh?"WebkitUserSelect":null,Yh=function(a,b,c,d){if(/^\d+px?$/[Ub](b))return ja(b,10);var e=a[w][c],f=a.runtimeStyle[c];a.runtimeStyle[c]=a[zc][c];a[w][c]=b;b=a[w][d];a[w][c]=e;a.runtimeStyle[c]=f;return b},Zh=function(a,b){var c=a[zc]?a[zc][b]:null;return c?Yh(a,c,Ge,Ze):0},$h=function(a,b){if(N){var c=Zh(a,b+Ad),d=Zh(a,b+Hd),e=Zh(a,b+Id),f=Zh(a,b+xd);return new Mh(e,d,f,c)}c=Qh(a,b+Ad);d=Qh(a,b+Hd);e=Qh(a,b+Id);
f=Qh(a,b+xd);return new Mh(ka(e),ka(d),ka(f),ka(c))},ai=function(a){return $h(a,Je)};var bi=wf();bi[D].ab=function(){var a=L(this.a,this);g.gbar&&g.gbar.elc&&(g.gbar.elc(a),g.gbar.elr&&a(g.gbar.elr()))};bi[D].a=function(a){var b=fa[uc];switch(a.mo){case ff:O(b,de);Ah(b,ce,be);break;case He:O(b,be);Ah(b,de,ce);break;default:O(b,ce),Ah(b,de,be)}if(b=fa[ac](Zd)){var c=0,d=fa[ac](uf),e=ai(d).top;a=a.es.h;var f=P(pe);null!=f&&(a+=Wh(f)[x]);0==e?c+=a:a!=-e&&Oh(d,Ke,-a+af);(d=fa[ac](oe))&&(c+=Wh(d)[x]);Th(b,0,c)}};var ci=function(){this.l=null;this.C=this.A=this.j=this.g=this.R=this.N=this.qa=this.va=this.T=H;this.Fa=!1;this.X=this.L=this.H=this.a=this.O=this.na=this.ba=this.c=this.ea=this.Z=this.b=null;this.G=0;this.o=!1;this.D=-1;this.v=this.w=!1};var di=wf();di[D].Vb=!1;di[D].ia=function(){this.Vb||(this.Vb=!0,this.F())};var fi=function(a,b){var c=Rf(ei,b);a.Fc||(a.Fc=[]);a.Fc[y](L(c,void 0))};di[D].F=function(){if(this.Fc)for(;this.Fc[C];)this.Fc[$a]()()};var ei=function(a){a&&typeof a.ia==le&&a.ia()};var gi=function(a){gi[I](a);return a};gi[I]=Df;var hi=!N||ph(9),ii=!N||ph(9),ji=N&&!nh("9");!eh||nh(nd);dh&&nh("1.9b")||N&&nh(od)||ch&&nh("9.5")||eh&&nh(nd);dh&&!nh(od)||N&&nh("9");var ki=function(a,b){Oa(this,a);Ya(this,b);this.a=this[E];this.j=!1;this.Wh=!0};ki[D].ia=wf();ki[D].c=Af(14);ki[D].preventDefault=function(){this.Wh=!1};var li=N?ie:"DOMFocusIn",mi=N?je:"DOMFocusOut";var ni=function(a,b){ki[F](this,a?a[B]:H);Ya(this,null);this.g=this.a=null;Qa(this,0);Sa(this,0);ta(this,0);ua(this,0);wa(this,0);this.ctrlKey=!1;xa(this,!1);this.shiftKey=!1;Ma(this,!1);za(this,null);this.l=!1;this.b=null;a&&this.ab(a,b)};M(ni,ki);
ni[D].ab=function(a,b){var c=Oa(this,a[B]);Ya(this,a[E]||a.srcElement);this.a=b;var d=a.relatedTarget;if(d){if(dh){var e;t:{try{gi(d[ic]);e=!0;break t}catch(f){}e=!1}e||(d=null)}}else c==Oe?d=a.fromElement:c==Ne&&(d=a.toElement);this.g=d;Qa(this,void 0!==a[oc]?a[oc]:a.pageX);Sa(this,void 0!==a[pc]?a[pc]:a.pageY);ta(this,a[ib]||0);ua(this,a[jb]||0);wa(this,a[u]||0);this.ctrlKey=a[tc];xa(this,a[Ab]);this.shiftKey=a[Bc];Ma(this,a[gc]);this.l=Xg?a[gc]:a[tc];za(this,a[Jb]);this.b=a;a.defaultPrevented&&
this[hb]()};ni[D].c=Af(13);ni[D].preventDefault=function(){ni.n[hb][F](this);var a=this.b;if(a[hb])a[hb]();else if(a.returnValue=!1,ji)try{(a[tc]||112<=a[u]&&123>=a[u])&&wa(a,-1)}catch(b){}};ni[D].o=Af(15);var oi="closure_listenable_"+(1E6*k[Lb]()|0),pi=function(a){try{return!(!a||!a[oi])}catch(b){return!1}},qi=0;var ri=function(a,b,c,d,e){this.listener=a;this.g=null;this.src=b;Oa(this,c);this.b=!!d;this.c=e;this.key=++qi;this.a=this.Fe=!1},si=function(a){a.a=!0;a.listener=null;a.g=null;a.src=null;a.c=null};var ti=function(a){this.src=a;this.a={};this.b=0};ti[D].add=function(a,b,c,d,e){var f=a[zb]();a=this.a[f];a||(a=this.a[f]=[],this.b++);var l=ui(a,b,d,e);-1<l?(b=a[l],c||(b.Fe=!1)):(b=new ri(b,this.src,f,!!d,e),b.Fe=c,a[y](b));return b};va(ti[D],function(a,b,c,d){a=a[zb]();if(!(a in this.a))return!1;var e=this.a[a];b=ui(e,b,c,d);return-1<b?(si(e[b]),Fg[Ec][F](e,b,1),0==e[C]&&(delete this.a[a],this.b--),!0):!1});
var vi=function(a,b){var c=b[B];if(!(c in a.a))return!1;var d=Ng(a.a[c],b);d&&(si(b),0==a.a[c][C]&&(delete a.a[c],a.b--));return d},wi=function(a,b){var c=b&&b[zb](),d=0,e;for(e in a.a)if(!c||e==c){for(var f=a.a[e],l=0;l<f[C];l++)++d,si(f[l]);delete a.a[e];a.b--}return d},xi=function(a,b,c,d,e){a=a.a[b[zb]()];b=-1;a&&(b=ui(a,c,d,e));return-1<b?a[b]:null},ui=function(a,b,c,d){for(var e=0;e<a[C];++e){var f=a[e];if(!f.a&&f[cc]==b&&f.b==!!c&&f.c==d)return e}return-1};var yi="closure_lm_"+(1E6*k[Lb]()|0),zi={},Ai=0,S=function(a,b,c,d,e){if(Gf(b)){for(var f=0;f<b[C];f++)S(a,b[f],c,d,e);return null}c=Bi(c);return pi(a)?a.gb.add(la(b),c,!1,d,e):Ci(a,b,c,!1,d,e)},Ci=function(a,b,c,d,e,f){if(!b)throw ia("Invalid event type");var l=!!e,q=Di(a);q||(a[yi]=q=new ti(a));c=q.add(b,c,d,e,f);if(c.g)return c;d=Ei();c.g=d;d.src=a;d.listener=c;a[jc]?a[jc](b[zb](),d,l):a.attachEvent(Fi(b[zb]()),d);Ai++;return c},Ei=function(){var a=Gi,b=ii?function(c){return a[F](b.src,b[cc],c)}:
function(c){c=a[F](b.src,b[cc],c);if(!c)return c};return b},Hi=function(a,b,c,d,e){if(Gf(b))for(var f=0;f<b[C];f++)Hi(a,b[f],c,d,e);else if(c=Bi(c),pi(a))a.gb[mb](la(b),c,d,e);else a&&(a=Di(a))&&(b=xi(a,b,c,!!d,e))&&Ii(b)},Ii=function(a){if(Jf(a)||!a||a.a)return!1;var b=a.src;if(pi(b))return vi(b.gb,a);var c=a[B],d=a.g;b.removeEventListener?b.removeEventListener(c,d,a.b):b.detachEvent&&b.detachEvent(Fi(c),d);Ai--;(c=Di(b))?(vi(c,a),0==c.b&&(c.src=null,b[yi]=null)):si(a);return!0},Fi=function(a){return a in
zi?zi[a]:zi[a]=We+a},Ki=function(a,b,c,d){var e=1;if(a=Di(a))if(b=a.a[b[zb]()])for(b=Og(b),a=0;a<b[C];a++){var f=b[a];f&&f.b==c&&!f.a&&(e&=!1!==Ji(f,d))}return Boolean(e)},Ji=function(a,b){var c=a[cc],d=a.c||a.src;a.Fe&&Ii(a);return c[F](d,b)},Gi=function(a,b){if(a.a)return!0;if(!ii){var c;if(!(c=b))t:{c=[tf,fe];for(var d=Cf,e;e=c[$a]();)if(null!=d[e])d=d[e];else{c=null;break t}c=d}e=c;c=new ni(e,this);d=!0;if(!(0>e[u]||void 0!=e.returnValue)){t:{var f=!1;if(0==e[u])try{wa(e,-1);break t}catch(l){f=
!0}if(f||void 0==e.returnValue)e.returnValue=!0}e=[];for(f=c.a;f;f=f[Cc])e[y](f);for(var f=a[B],q=e[C]-1;!c.j&&0<=q;q--)c.a=e[q],d&=Ki(e[q],f,!0,c);for(q=0;!c.j&&q<e[C];q++)c.a=e[q],d&=Ki(e[q],f,!1,c)}return d}return Ji(a,new ni(b,this))},Di=function(a){a=a[yi];return a instanceof ti?a:null},Li="__closure_events_fn_"+(1E9*k[Lb]()>>>0),Bi=function(a){return Kf(a)?a:a[Li]||(a[Li]=function(b){return a[tb](b)})};var Mi=function(a){this.c=a;this.l={}};M(Mi,di);var Ni=[];Mi[D].a=function(a,b,c,d){Gf(b)||(b&&(Ni[0]=b[zb]()),b=Ni);for(var e=0;e<b[C];e++){var f=S(a,b[e],c||this[tb],d||!1,this.c||this);if(!f)break;this.l[f.key]=f}return this};Mi[D].b=Af(16);var Oi=function(a){Rg(a.l,Ii);a.l={}};Mi[D].F=function(){Mi.n.F[F](this);Oi(this)};Mi[D].handleEvent=function(){throw ia("EventHandler.handleEvent not implemented");};var T=function(){this.gb=new ti(this);this.Yk=this};M(T,di);T[D][oi]=!0;K=T[D];K.Te=null;K.Ec=Af(17);K.addEventListener=function(a,b,c,d){S(this,a,b,c,d)};K.removeEventListener=function(a,b,c,d){Hi(this,a,b,c,d)};
K.dispatchEvent=function(a){var b,c=this.Te;if(c){b=[];for(var d=1;c;c=c.Te)b[y](c),++d}c=this.Yk;d=a[B]||a;if(If(a))a=new ki(a,c);else if(a instanceof ki)Ya(a,a[E]||c);else{var e=a;a=new ki(d,c);Tg(a,e)}var e=!0,f;if(b)for(var l=b[C]-1;!a.j&&0<=l;l--)f=a.a=b[l],e=Pi(f,d,!0,a)&&e;a.j||(f=a.a=c,e=Pi(f,d,!0,a)&&e,a.j||(e=Pi(f,d,!1,a)&&e));if(b)for(l=0;!a.j&&l<b[C];l++)f=a.a=b[l],e=Pi(f,d,!1,a)&&e;return e};K.F=function(){T.n.F[F](this);this.gb&&wi(this.gb,void 0);this.Te=null};
var Pi=function(a,b,c,d){b=a.gb.a[la(b)];if(!b)return!0;b=Og(b);for(var e=!0,f=0;f<b[C];++f){var l=b[f];if(l&&!l.a&&l.b==c){var q=l[cc],r=l.c||l.src;l.Fe&&vi(a.gb,l);e=!1!==q[F](r,d)&&e}}return e&&!1!=d.Wh};var Qi=function(a,b){for(var c=[a],d=b[C]-1;0<=d;--d)c[y](typeof b[d],b[d]);return c[G](Hc)};var Ri=function(a,b){T[F](this);this.g=a||1;this.c=b||Cf;this.j=L(this.o,this);this.l=Sf()};M(Ri,T);Ri[D].b=!1;Ri[D].a=null;var Ti=function(a,b){a.g=b;a.a&&a.b?(Si(a),a[Kb]()):a.a&&Si(a)};Ri[D].o=function(){if(this.b){var a=Sf()-this.l;0<a&&a<0.8*this.g?this.a=this.c[Cb](this.j,this.g-a):(this.a&&(this.c.clearTimeout(this.a),this.a=null),this[s](of),this.b&&(this.a=this.c[Cb](this.j,this.g),this.l=Sf()))}};Aa(Ri[D],function(){this.b=!0;this.a||(this.a=this.c[Cb](this.j,this.g),this.l=Sf())});
var Si=function(a){a.b=!1;a.a&&(a.c.clearTimeout(a.a),a.a=null)};Ri[D].F=function(){Ri.n.F[F](this);Si(this);delete this.c};var Ui=function(a,b){ki[F](this,Re);this.A=a;this.w=b};M(Ui,ki);var $i=function(a,b,c,d){T[F](this);if(a&&!b)throw ia("Can't use invisible history without providing a blank page.");var e;c?e=c:(e=xe+Vi,fa.write(Uf(rd,e,e)),e=P(e));this.o=e;this.a=c?Fh(Jh(c)):g;this.v=b;N&&!b&&(this.v=g[Fb][Mb]==ze?Be:Ee);this.c=new Ri(150);fi(this,this.c);this.g=!a;this.b=new Mi(this);if(a||Wi)d?a=d:(a=we+Vi,b=this.v?jf+eg(this.v)+Kc:H,fa.write(Uf(qd,a,b)),a=P(a)),this.w=a,this.G=!0;Wi&&(this.b.a(this.a,Ie,this.Kj),this.D=this.A=!1);this.g?Xi(this,Yi(this),!0):Zi(this,this.o[dc]);
Vi++};M($i,T);$i[D].p=!1;$i[D].l=!1;$i[D].j=null;var aj=function(a,b){var c=b||Qi;return function(){var b=this||Cf,b=b.closure_memoize_cache_||(b.closure_memoize_cache_={}),e=c(Of(a),arguments);return b[Hb](e)?b[e]:b[e]=a[Pb](this,arguments)}}(function(){return N?8<=fa.documentMode:Xe in Cf}),Wi=N&&!ph(8);K=$i[D];K.md=null;K.F=function(){$i.n.F[F](this);this.b.ia();this.V(!1)};
K.V=function(a){if(a!=this.p)if(Wi&&!this.A)this.D=a;else if(a)if(ch?this.b.a(this.a[sc],bj,this.H):dh&&this.b.a(this.a,Ye,this.Gj),aj()&&this.g)this.b.a(this.a,se,this.Hj),this.p=!0,this[s](new Ui(Yi(this),!1));else{if(!N||this.A)this.b.a(this.c,of,L(this.C,this,!0)),this.p=!0,Wi||(this.j=Yi(this),this[s](new Ui(Yi(this),!1))),this.c[Kb]()}else this.p=!1,Oi(this.b),Si(this.c)};K.Kj=function(){this.A=!0;this.o[dc]&&Zi(this,this.o[dc],!0);this.V(this.D)};
K.Gj=function(a){a.b.persisted&&(this.V(!1),this.V(!0))};K.Hj=function(){var a=cj(this.a);a!=this.j&&dj(this,a,!0)};
var Yi=function(a){return null!=a.md?a.md:a.g?cj(a.a):ej(a)||H},cj=function(a){a=a[Fb][Ob];var b=a[fc](Lc);return 0>b?H:a[Ac](b+1)},Xi=function(a,b,c){a=a.a[Fb];var d=a[Ob][Db](Lc)[0],e=fg(a[Ob],Lc);if(Wi||e||b)d+=Lc+b;d!=a[Ob]&&(c?a[p](d):Da(a,d))},Zi=function(a,b,c,d){if(a.G||b!=ej(a))if(a.G=!1,b=Xf(b),N){var e=Kh(a.w);e[Tb](nf,c?bf:void 0);e.write(Uf(sd,eg(d||a.a[sc][qc]),b));e.close()}else b=a.v+Lc+b,(a=a.w.contentWindow)&&(c?a[Fb][p](b):Da(a[Fb],b))},ej=function(a){if(N)return a=Kh(a.w),a[uc]?
Yf(a[uc][bc]):null;var b=a.w.contentWindow;if(b){var c;try{c=Yf(cj(b))}catch(d){return a.l||(!0!=a.l&&Ti(a.c,1E4),a.l=!0),null}a.l&&(!1!=a.l&&Ti(a.c,150),a.l=!1);return c||null}return null};$i[D].C=function(a){if(this.g){var b=cj(this.a);b!=this.j&&dj(this,b,a)}if(!this.g||Wi)if(b=ej(this)||H,null==this.md||b==this.md)this.md=null,b!=this.j&&dj(this,b,a)};var dj=function(a,b,c){a.j=La(a.o,b);a.g?(Wi&&Zi(a,b),Xi(a,b)):Zi(a,b);a[s](new Ui(Yi(a),c))};$i[D].H=function(){Si(this.c);this.c[Kb]()};
var bj=[Le,Fe,Me],Vi=0;var fj=function(){this.ke=new $i;this.mh=null;this.a=0;S(this.ke,Re,this.b,!1,this)};fj[D].b=function(a){a.w&&(a=a.A,Vf(a)||gj(this,a))};var gj=function(a,b){var c=Yf(b),d=c[Db](/[|\/]/,2);2==d[C]&&(d[y](c[Ac](d[0][C]+d[1][C]+2)),Vf(hg(d[0]))||Vf(hg(d[1]))||a.mh.hg(d[0],d[1],d[2]))};function _LoadScript(a){a=Q(ef,{src:a});Ch(te)[0][m](a)}Tf("_LoadScript",_LoadScript);function _csi(a,b,c,d){var e={};0<d[dc][C]&&(0<b[C]&&(e.sl=b),0<c[C]&&(e.tl=c),e.size=d[dc][C]);null!=g.gbar&&null!=g.gbar.bv&&(null!=g.gbar.bv.m&&ba[y](ne+g.gbar.bv.m),null!=g.gbar.bv.e&&ba[y](g.gbar.bv.e));g[Fb][Mb]==Ae&&ba[y](ze);e.e=ba[G](id);b=g[hc][Yb];Pa(b,a);g[hc].sn=pf;g[hc].report(b,e);try{g[hj.a]&&g[hj.a].resT&&g[hj.a].resT()}catch(f){}}Tf("_csi",_csi);
var hj=function(){(new bi).ab();Cf.h=new fj;var a=new ci;a.l=Cf.h;a.T=cf;a.va=ha;a.qa=TEXT_TRANSLATION_PATH;a.N=da;a.R=gf;a.g=qe;a.j=re;a.A=he;a.C=ge;a.H=(new Date)[vb]();a.G=MAX_ALTERNATIVES_ROUNDTRIP_RESULTS;a.o=!0;a.D=LOW_CONFIDENCE_THRESHOLD;Cf.ctr=new Dg(a)};hj.a="external";Tf("Init",hj);if(g[hc]){g[hc].Gd={};g[hc].ag=1;var ij=function(a,b,c){var d=a.t[b],e=a.t[Kb];if(d&&(e||c))return d=a.t[b][0],void 0!=c?e=c:e=e[0],d-e},jj=function(a,b,c){var d=H;g[hc].srt&&(d+=ad+g[hc].srt,delete g[hc].srt);g[hc].pt&&(d+=bd+g[hc].pt,delete g[hc].pt);try{g.external&&g.external[lb]?d+=cd+g.external[lb]:g.gtbExternal&&g.gtbExternal[lb]?d+=cd+g.gtbExternal[lb]():g[bb]&&g[bb].csi&&(d+=cd+g[bb].csi()[lb])}catch(e){}var f=g[bb];if(f&&(f=f.loadTimes)){f().wasFetchedViaSpdy&&(d+=Xc);if(f().wasNpnNegotiated){var d=
d+Vc,l=f().npnNegotiatedProtocol;l&&(d+=Wc+(aa||escape)(l))}f().wasAlternateProtocolAvailable&&(d+=Rc)}var q=a.t,r=q[Kb],f=[],l=[],t;for(t in q)if(t!=kf&&0!=t[fc](Td)){var v=q[t][1];v?q[v]&&l[y](t+jd+ij(a,t,q[v][0])):r&&f[y](t+jd+ij(a,t))}delete q[Kb];if(b)for(var A in b)d+=Nc+A+td+b[A];(b=c)||(b=Ae==fa[Fb][Mb]?Ce:ye);return[b,wd,$c+(g[hc].sn||pf)+Pc,a[nc],l[C]?Tc+l[G](id):H,d,Zc,f[G](id)][G](H)},kj=function(a,b,c){a=jj(a,b,c);if(!a)return H;b=new Image;var d=g[hc].ag++;g[hc].Gd[d]=b;oa(b,Ka(b,function(){g[hc]&&
delete g[hc].Gd[d]}));b.src=a;b=null;return a};g[hc].report=function(a,b,c){if(fa.webkitVisibilityState==$e){var d=!1,e=function(){if(!d){b?b.prerender=ld:b={prerender:ld};var f;fa.webkitVisibilityState==$e?f=!1:(kj(a,b,c),f=!0);f&&(d=!0,fa.removeEventListener(rf,e,!1))}};fa[jc](rf,e,!1);return H}return kj(a,b,c)}};})();window.jstiming.load.tick('jl');