[@bs.module "react-hotkeys"]
external hotKeys : ReasonReact.reactClass = "HotKeys";

type keyMap = {string};

type handler = {string: unit => unit};

[@bs.obj]
external makeProps : (~handlers: 'a=?, ~keyMap: 'b=?, unit) => _ = "";

let make = (~handlers=?, ~keyMap=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=hotKeys,
    ~props=makeProps(~handlers?, ~keyMap?, ()),
    children,
  );
