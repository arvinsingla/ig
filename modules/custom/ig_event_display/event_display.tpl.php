<div data-ng-app="eventApp" class="_event-wrapper" data-ng-controller="eventController">
<!--    <h2 ng-if="title">{{ title }}</h2>-->
    <div class="item" ng-repeat="item in items">
      <img class="_photo" ng-src="{{ item.item }}" ng-if="currentItemIndex === $index" />
      <div class="_photo-details" ng-if="currentItemIndex === $index">
        <div class="_avatar" ><img ng-src="{{ item.profilePicture }}"</div>
        <div class="_caption">{{ item.caption }}</div>
      </div>
    </div>
</div>
