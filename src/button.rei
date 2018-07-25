type innerRef;
type tag;
type cssModule;
type onClick;

let make:
  (
    ~active: bool=?,
    ~block: bool=?,
    ~color: string=?,
    ~disabled: bool=?,
    ~outline: bool=?,
    ~tag: tag=?,
    ~id: string=?,
    ~innerRef: innerRef=?,
    ~onClick: onClick=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: cssModule=?,
    'a
  ) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );