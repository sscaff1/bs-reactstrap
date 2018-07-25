[@bs.module "reactstrap"] external view : ReasonReact.reactClass = "Button";

type innerRef;
type tag;
type cssModule;
type onClick;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  active: bool,
  [@bs.optional]
  block: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  outline: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  id: string,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  onClick,
  [@bs.optional]
  size: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~active=?,
      ~block=?,
      ~color=?,
      ~disabled=?,
      ~outline=?,
      ~tag=?,
      ~id=?,
      ~innerRef=?,
      ~onClick=?,
      ~size=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=
      props(
        ~active?,
        ~block?,
        ~color?,
        ~disabled?,
        ~outline?,
        ~tag?,
        ~id?,
        ~innerRef?,
        ~onClick?,
        ~size?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );