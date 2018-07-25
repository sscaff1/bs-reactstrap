[@bs.module "reactstrap"]
external view : ReasonReact.reactClass = "Breadcrumb";

type tag;
type cssModule;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=props(~tag?, ~className?, ~cssModule?, ()),
    children,
  );