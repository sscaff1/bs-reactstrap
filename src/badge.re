[@bs.module "reactstrap"] external view : ReasonReact.reactClass = "Badge";

type tag;
type cssModule;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  color: string,
  [@bs.optional]
  pill: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~color=?, ~pill=?, ~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=props(~color?, ~pill?, ~tag?, ~className?, ~cssModule?, ()),
    children,
  );