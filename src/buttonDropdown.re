[@bs.module "reactstrap"]
external view : ReasonReact.reactClass = "ButtonDropdown";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  toggle: ReactEventRe.Mouse.t => unit,
};

let make = (~isOpen=?, ~toggle=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=props(~isOpen?, ~toggle?, ()),
    children,
  );