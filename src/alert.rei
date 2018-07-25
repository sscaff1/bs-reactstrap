type cssModule;
type toggle;
type tag;
type transition;
type props;

let make:
  (
    ~className: string=?,
    ~closeClassName: string=?,
    ~closeAriaLabel: string=?,
    ~cssModule: cssModule=?,
    ~color: string=?,
    ~isOpen: bool=?,
    ~toggle: toggle=?,
    ~tag: tag=?,
    ~transition: transition=?,
    'a
  ) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  );