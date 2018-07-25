type tag;
type cssModule;

let make:
  (
    ~tag: tag=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: cssModule=?,
    'a
  ) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );