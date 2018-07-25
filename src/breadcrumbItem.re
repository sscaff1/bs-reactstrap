[@bs.module "reactstrap"]
external view : ReasonReact.reactClass = "BreadcrumbItem";

type tag;
type cssModule;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};
let make = (~tag=?, ~active=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=props(~tag?, ~active?, ~className?, ~cssModule?, ()),
    children,
  );