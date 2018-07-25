type tag;
type cssModule;
type props;

let make:
  (
    ~color: string=?,
    ~pill: bool=?,
    ~tag: tag=?,
    ~className: string=?,
    ~cssModule: cssModule=?,
    'a
  ) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );