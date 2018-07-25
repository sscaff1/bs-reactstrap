type tag;
type cssModule;

let make:
  (
    ~tag: tag=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: cssModule=?,
    ~role: string=?,
    ~size: string=?,
    ~vertical: bool=?,
    'a
  ) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );