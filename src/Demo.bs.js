// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var NetJs = require("./net.js");

var s = NetJs.f(/* :: */[
      0,
      /* :: */[
        1,
        /* :: */[
          0,
          /* [] */0
        ]
      ]
    ]);

NetJs.hack(s);

console.log("list(int)", /* :: */[
      1,
      /* :: */[
        2,
        /* :: */[
          3,
          /* [] */0
        ]
      ]
    ]);

console.log("array(int)", /* array */[
      1,
      2,
      3
    ]);

console.log("array(int)", $$Array.of_list(/* :: */[
          1,
          /* :: */[
            2,
            /* :: */[
              3,
              /* [] */0
            ]
          ]
        ]));

exports.s = s;
/* s Not a pure module */
