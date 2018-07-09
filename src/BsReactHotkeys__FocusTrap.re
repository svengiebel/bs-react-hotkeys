[@bs.module "react-hotkeys"]
external focusTrap : ReasonReact.reactClass = "FocusTrap";

[@bs.obj]
external makeProps :
  (
    ~onFocus: unit => unit=?,
    ~onBlur: unit => unit=?,
    ~component: 'a=?,
    unit
  ) =>
  _ =
  "";

let make = (~onFocus=?, ~onBlur=?, ~component=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=focusTrap,
    ~props=makeProps(~onFocus?, ~onBlur?, ~component?, ()),
    children,
  );
