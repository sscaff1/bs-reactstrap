[@bs.module "reactstrap"]
external view : ReasonReact.reactClass = "ButtonToolbar";

type tag;
type cssModule;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  ariaLabel: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  role: string,
};

let make =
    (~tag=?, ~ariaLabel=?, ~className=?, ~cssModule=?, ~role=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=props(~tag?, ~ariaLabel?, ~className?, ~cssModule?, ~role?, ()),
    children,
  );