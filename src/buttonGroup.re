[@bs.module "reactstrap"]
external view : ReasonReact.reactClass = "ButtonGroup";

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
  [@bs.optional]
  size: string,
  [@bs.optional]
  vertical: bool,
};

let make =
    (
      ~tag=?,
      ~ariaLabel=?,
      ~className=?,
      ~cssModule=?,
      ~role=?,
      ~size=?,
      ~vertical=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=
      props(
        ~tag?,
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~role?,
        ~size?,
        ~vertical?,
        (),
      ),
    children,
  );