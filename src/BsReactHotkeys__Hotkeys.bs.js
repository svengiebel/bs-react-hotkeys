// Generated by BUCKLESCRIPT VERSION 3.1.5, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/src/ReasonReact.js");
var ReactHotkeys = require("react-hotkeys");

function make(handlers, keyMap, children) {
  var tmp = { };
  if (handlers) {
    tmp.handlers = handlers[0];
  }
  if (keyMap) {
    tmp.keyMap = keyMap[0];
  }
  return ReasonReact.wrapJsForReason(ReactHotkeys.HotKeys, tmp, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
